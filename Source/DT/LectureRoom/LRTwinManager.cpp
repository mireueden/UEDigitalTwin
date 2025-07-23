#include "DT/LectureRoom/LRTwinManager.h"
#include "DT/LectureRoom/Components/LRInteractComponentBase.h"
#include "LectureRoom/Player/LRPawn.h"
#include "LectureRoom/LRInteractiveActor.h"
#include "LectureRoom/Interface/LRActorInterface.h"
#include "Kismet/GameplayStatics.h"

TMap<UWorld*, ALRTwinManager*> ALRTwinManager::WorldTwinManagerMap = TMap<UWorld*, ALRTwinManager*>();

ALRTwinManager* ALRTwinManager::GetWorldTwinManager(UObject* WorldContextObject, bool bCreate)
{
	UWorld* World = WorldContextObject->GetWorld();
	if (World == nullptr)
	{
		ensureMsgf(false, TEXT("Invalid World (WorldContext : %s)"), *(WorldContextObject->GetName()));
		return nullptr;
	}

	bool bInitializedWorld = World->IsInitialized();
	bool bCleanedUpWorld = World->IsCleanedUp();

	// 전역으로 사용한 로직으로 안정성 문제가 있을 수 있습니다.
	// World IsInitialized / IsCleanedUp 상태에 따른 예외 처리 등 필요
	if (!bInitializedWorld || bCleanedUpWorld)
	{
		ensureMsgf(bInitializedWorld, TEXT("World is not initialized."));
		ensureMsgf(!bCleanedUpWorld, TEXT("World is CleanedUp."));
		return nullptr;
	}

	// 이미 월드에 등록되어 있음
	if (WorldTwinManagerMap.Contains(World))
	{
		return WorldTwinManagerMap[World];
	}

	// 등록되어 있지 않은 경우, WorldCleanup 에서 레퍼런스 제거되도록 델리게이트 바인드
	FWorldDelegates::OnWorldCleanup.AddLambda(
		[TargetWorld = World, &TwinManagerMap = ALRTwinManager::WorldTwinManagerMap](UWorld* World, bool bSessionEnded, bool bCleanupResources)
		{
			if (TargetWorld == World)
			{
				// WorldCleanup 되면 World의 Actor들은 Destory됩니다.
				int32 RemoveCount = TwinManagerMap.Remove(TargetWorld);
				UE_LOG(LogTemp, Log, TEXT("OnWorldCleanup.Lambda World(%s), RemoveCount(%d)"), *(World->GetName()), RemoveCount);
			}
		}
	);

	FActorSpawnParameters SpawnParam;
	ALRTwinManager*& Manager = WorldTwinManagerMap.FindOrAdd(World);
	Manager = World->SpawnActor<ALRTwinManager>(ALRTwinManager::StaticClass(), SpawnParam);
	return Manager;
}

void ALRTwinManager::BeginPlay()
{
	Super::BeginPlay();

}
void ALRTwinManager::EndPlay(EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);
}

void ALRTwinManager::AddInteractComponent(ULRInteractComponentBase* Comp)
{
	if (Comp == nullptr || HasInteractComponent(Comp))
	{
		return;
	}

	int32 AddCount = InteractComponentList.Add(Comp);

	if (AddCount > 0)
	{
		OnInteractComponentAdded.Broadcast(Comp);
	
		OnInteractComponentListChanged.Broadcast();
	}
}

void ALRTwinManager::RemoveInteractComponent(ULRInteractComponentBase* Comp)
{
	int32 RemoveCount = InteractComponentList.Remove(Comp);

	if (RemoveCount)
	{
		OnInteractComponentRemoved.Broadcast(Comp);
		OnInteractComponentListChanged.Broadcast();
	}
}

bool ALRTwinManager::HasInteractComponent(ULRInteractComponentBase* Comp) const
{
	if (Comp == nullptr)
	{
		return false;
	}

	return InteractComponentList.Contains(Comp);
}

ALRInteractiveActor* ALRTwinManager::GetCurrentTargetActor()
{
	ALRPawn* LRPawn = Cast<ALRPawn>(UGameplayStatics::GetPlayerPawn(this, 0));
	return LRPawn ? Cast<ALRInteractiveActor>(LRPawn->GetTargetActor()) : nullptr;
}

void ALRTwinManager::NotifyChangeTargetActor(APawn* Pawn, ALRInteractiveActor* OldTargetActor, ALRInteractiveActor* NewTargetActor)
{
	if (OldTargetActor && OldTargetActor->Implements<ULRActorInterface>())
	{
		ILRActorInterface::Execute_EndFocus(OldTargetActor);
	}
	if (NewTargetActor && NewTargetActor->Implements<ULRActorInterface>())
	{
		ILRActorInterface::Execute_BeginFocus(NewTargetActor);
	}
	OnTargetActorChanged.Broadcast(Pawn, OldTargetActor, NewTargetActor);
}

void ALRTwinManager::BP_NotifyChangeTargetActor(APawn* Pawn, ALRInteractiveActor* OldTargetActor, ALRInteractiveActor* NewTargetActor)
{
	if (ALRTwinManager* TwinManager = GetWorldTwinManager(Pawn))
	{
		TwinManager->NotifyChangeTargetActor(Pawn, OldTargetActor, NewTargetActor);
	}
}