// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/GameplayAbility/DTGameplayAbility.h"

void UDTGameplayAbility::OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	if (ActorInfo)
	{
		BP_OnAvatarSet(*ActorInfo, Spec);
	}
}