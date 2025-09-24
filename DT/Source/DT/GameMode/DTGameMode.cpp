


#include "GameMode/DTGameMode.h"
#include "Manager/DTManagerBase.h"

DEFINE_LOG_CATEGORY_STATIC(LogDTGameMode, Log, All)

void ADTGameMode::BeginPlay()
{
	Super::BeginPlay();

	InitializeManagers();
}

void ADTGameMode::InitializeManagers()
{
	for (auto ManagerClass : ManagerClassList)
	{
		UClass* NativeClass = GetParentNativeClass(ManagerClass);
		ManagerMap.FindOrAdd(NativeClass) = GetWorld()->SpawnActor<ADTManagerBase>(ManagerClass);
		
		UE_LOG(LogDTGameMode, Log, TEXT("SpawnManager (%s - NativeParentClass[%s]).") , *GetNameSafe(ManagerClass), *GetNameSafe(NativeClass));
	}

	TArray<ADTManagerBase*> ManagerList;
	ManagerMap.GenerateValueArray(ManagerList);

	for (ADTManagerBase* Manager : ManagerList)
	{
		if (!Manager->IsLoaded())
		{
			LoadingManagerList.Add(Manager);
			Manager->OnLoadCompleted.AddDynamic(this, &ADTGameMode::OnManagerLoaded);

			Manager->LoadManager();
		}
	}

	bInitializeManager = true;
	NotifyInitializeManagerComplete();
}

ADTManagerBase* ADTGameMode::GetManager(TSubclassOf<ADTManagerBase> ManagerClass)
{
	if (ManagerClass == nullptr)
	{
		ensure(false);
		return nullptr;
	}

	if (!IsValid(this))
	{
		ensure(false);
		return nullptr;
	}

	UClass* NativeClass = GetParentNativeClass(ManagerClass);
	if (!ManagerMap.Contains(NativeClass))
	{
		ensure(false);
		return nullptr;
	}

	return ManagerMap[NativeClass];
}

void ADTGameMode::NotifyInitializeManagerComplete()
{
	if (IsInitializeManagersComplete())
	{
		OnInitializeManagersComplete.Broadcast();
	}
}

void ADTGameMode::OnManagerLoaded(ADTManagerBase* Manager)
{
	if (Manager && Manager->OnLoadCompleted.IsAlreadyBound(this, &ADTGameMode::OnManagerLoaded))
	{
		Manager->OnLoadCompleted.RemoveDynamic(this, &ADTGameMode::OnManagerLoaded);
	}

	LoadingManagerList.Remove(Manager);
	NotifyInitializeManagerComplete();
}
