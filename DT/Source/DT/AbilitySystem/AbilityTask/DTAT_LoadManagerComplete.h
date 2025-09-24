// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "DTAT_LoadManagerComplete.generated.h"

class UGameplayAbility;
class ADTGameMode;


/**
 * 
 */
UCLASS()
class DT_API UDTAT_LoadManagerComplete : public UAbilityTask
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "WaitLoadManagerCompleted", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UDTAT_LoadManagerComplete* CreateWaitLoadManagerCompleted(UGameplayAbility* OwningAbility);

	virtual void Activate() override;
	virtual void OnDestroy(bool bInOwnerFinished) override;

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadManagerComplete);

	UPROPERTY(BlueprintAssignable)
	FOnLoadManagerComplete OnLoadManagerComplete;

	UFUNCTION()
	void NotifyLoadManagerComplete();

private:
	UPROPERTY()
	ADTGameMode* CachedGameMode;
};
