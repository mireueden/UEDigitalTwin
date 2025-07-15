#include "DT/LectureRoom/LRTwinManager.h"
#include "DT/LectureRoom/Components/LRObjectComponent.h"

TMap<UWorld*, ALRTwinManager*> ALRTwinManager::WorldTwinManagerMap = TMap<UWorld*, ALRTwinManager*>();

ALRTwinManager* ALRTwinManager::GetWorldTwinManager(UObject* WorldContextObject, bool bCreate)
{
	if (UWorld* World = WorldContextObject->GetWorld())
	{
		// 전역으로 사용한 로직으로 안정성 문제가 있을 수 있습니다.
		// World IsInitialized / IsCleanedUp 상태에 따른 예외 처리 등 필요
		// FWorldDelegates::OnWorldCleanup
		if (WorldTwinManagerMap.Contains(World))
		{
			return WorldTwinManagerMap[World];
		}

		FActorSpawnParameters SpawnParam;
		ALRTwinManager*& Manager = WorldTwinManagerMap.FindOrAdd(World);
		Manager = World->SpawnActor<ALRTwinManager>(ALRTwinManager::StaticClass(), SpawnParam);
		return Manager;
	}

	return nullptr;
}

void ALRTwinManager::BeginPlay()
{
	Super::BeginPlay();

}
void ALRTwinManager::EndPlay(EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);
}

void ALRTwinManager::AddLRObjectComponent(ULRObjectComponent* Comp)
{
	if (Comp == nullptr || HasContainsLRObjectComponent(Comp))
	{
		return;
	}

	LRObjectComplist.Add(Comp);
}

void ALRTwinManager::RemoveLRObjectComponent(ULRObjectComponent* Comp)
{
	LRObjectComplist.Remove(Comp);
}

bool ALRTwinManager::HasContainsLRObjectComponent(ULRObjectComponent* Comp) const
{
	if (Comp == nullptr)
	{
		return false;
	}

	return LRObjectComplist.Contains(Comp);
}