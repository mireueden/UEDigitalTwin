// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "DTGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class NSDT_API UDTGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override
	{
		if (ActorInfo)
		{
			BP_OnAvatarSet(*ActorInfo, Spec);
		}
	}

	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="OnAvatarSet"))
	void BP_OnAvatarSet(const FGameplayAbilityActorInfo& ActorInfo, const FGameplayAbilitySpec& Spec);

	
};
