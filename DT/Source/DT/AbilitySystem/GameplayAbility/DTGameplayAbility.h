// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "DTGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class DT_API UDTGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="OnAvatarSet"))
	void BP_OnAvatarSet(const FGameplayAbilityActorInfo& ActorInfo, const FGameplayAbilitySpec& Spec);

	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	
};
