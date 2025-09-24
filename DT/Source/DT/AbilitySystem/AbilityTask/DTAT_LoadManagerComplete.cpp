// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AbilityTask/DTAT_LoadManagerComplete.h"
#include "GameMode/DTGameMode.h"
#include "Abilities/GameplayAbility.h"
#include "Kismet/GameplayStatics.h"

UDTAT_LoadManagerComplete* UDTAT_LoadManagerComplete::CreateWaitLoadManagerCompleted(UGameplayAbility* OwningAbility)
{
	UDTAT_LoadManagerComplete* Task = NewAbilityTask<UDTAT_LoadManagerComplete>(OwningAbility);
	Task->CachedGameMode = Cast<ADTGameMode>(UGameplayStatics::GetGameMode(OwningAbility));
	return Task;
}

void UDTAT_LoadManagerComplete::Activate()
{
	if (!IsValid(CachedGameMode))
	{
		// Cancel()
		EndTask();
		return;
	}

	if (CachedGameMode->IsInitializeManagersComplete())
	{
		NotifyLoadManagerComplete();
		return;
	}

	CachedGameMode->OnInitializeManagersComplete.AddDynamic(this, &UDTAT_LoadManagerComplete::NotifyLoadManagerComplete);
}

void UDTAT_LoadManagerComplete::OnDestroy(bool bInOwnerFinished)
{
	if (CachedGameMode->OnInitializeManagersComplete.IsAlreadyBound(this, &UDTAT_LoadManagerComplete::NotifyLoadManagerComplete))
	{
		CachedGameMode->OnInitializeManagersComplete.RemoveDynamic(this, &UDTAT_LoadManagerComplete::NotifyLoadManagerComplete);
	}

	Super::OnDestroy(bInOwnerFinished);
}

void UDTAT_LoadManagerComplete::NotifyLoadManagerComplete()
{
	//if (!ShouldBroadcastDelegates())
	if(!ShouldBroadcastAbilityTaskDelegates())
	{
		return;
	}

	OnLoadManagerComplete.Broadcast();

	//SetReadyToDestroy();
	EndTask();
}
