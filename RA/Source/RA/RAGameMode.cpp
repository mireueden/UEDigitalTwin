// Fill out your copyright notice in the Description page of Project Settings.


#include "RAGameMode.h"
#include "GameFramework/PlayerController.h"
#include "Manager/RAManagerBase.h"
#include "Components/RAManageComponent.h"

void ARAGameMode::InitializeManagers()
{
	UWorld* World = GetWorld();
	if (World == nullptr)
	{
		// check, checkf, ensure, ensureMsgf
		checkf(false, TEXT("Invalid world (%s)"), *GetNameSafe(this))
		return;
	}

	for (const TSubclassOf<ARAManagerBase>& ManagerClass : ManagerList)
	{
		if (ManagerClass == nullptr)
		{
			continue;
		}

		ARAManagerBase* Manager = World->SpawnActor<ARAManagerBase>(ManagerClass);
		ManagerInstanceMap.FindOrAdd(GetParentNativeClass(ManagerClass)) = Manager;

		Manager->OnPostInitialized.AddDynamic(this, &ARAGameMode::OnPostInitializeManager);
		Manager->Initialize();
	}
}

void ARAGameMode::OnPostInitializeManager(ARAManagerBase* Manager)
{
	if (Manager)
	{
		ManagerInitializedMap.FindOrAdd(Manager->GetClass()) = true;
		Manager->OnPostInitialized.RemoveDynamic(this, &ARAGameMode::OnPostInitializeManager);
	}
}

void ARAGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	InitializeManagers();
}

void ARAGameMode::Logout(AController* Exiting)
{
	for (const auto& Tuple : ManagerInstanceMap)
	{
		if (Tuple.Value == nullptr)
		{
			continue;
		}

		if (Tuple.Value->OnPostInitialized.IsAlreadyBound(this, &ARAGameMode::OnPostInitializeManager))
		{
			Tuple.Value->OnPostInitialized.RemoveDynamic(this, &ARAGameMode::OnPostInitializeManager);
		}
	}

	Super::Logout(Exiting);
}


void ARAGameMode::RegisterManageComponent(URAManageComponent* Comp)
{
	if (!IsValid(Comp))
	{
		return;
	}

	for (const auto& Pair: ManagerInstanceMap)
	{
		Pair.Value->AddManageComponent(Comp);
	}
}

void ARAGameMode::UnregisterManageComponent(URAManageComponent* Comp)
{
	if (!IsValid(Comp))
	{
		return;
	}

	for (const auto& Pair : ManagerInstanceMap)
	{
		Pair.Value->RemoveManageComponent(Comp);
	}
}
