#include "DT/LectureRoom/LRTwinManager.h"
#include "DT/LectureRoom/Components/LRInteractComponentBase.h"

TMap<UWorld*, ALRTwinManager*> ALRTwinManager::WorldTwinManagerMap = TMap<UWorld*, ALRTwinManager*>();

ALRTwinManager* ALRTwinManager::GetWorldTwinManager(UObject* WorldContextObject, bool bCreate)
{
	UWorld* World = WorldContextObject->GetWorld();
	if(World == nullptr)
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

	InteractComponentList.Add(Comp);
}

void ALRTwinManager::RemoveInteractComponent(ULRInteractComponentBase* Comp)
{
	InteractComponentList.Remove(Comp);
}

bool ALRTwinManager::HasInteractComponent(ULRInteractComponentBase* Comp) const
{
	if (Comp == nullptr)
	{
		return false;
	}

	return InteractComponentList.Contains(Comp);
}