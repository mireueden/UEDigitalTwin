// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "DTAbilitySystemComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTagChangedDelegate, const FGameplayTag&, Tag, bool, TagExists);

/**
 * 
 */
UCLASS()
class DT_API UDTAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	virtual void OnRegister() override;
	virtual void OnUnregister() override;

	void SetRegisterToManager(bool bRegister);

public:
	virtual void OnTagUpdated(const FGameplayTag& Tag, bool TagExists) override;

	UPROPERTY(BlueprintAssignable)
	FOnTagChangedDelegate OnTagChangedDelegate;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(Categories="DT.Type"))
	FGameplayTag OwnerType;

	UPROPERTY(EditDefaultsOnly)
	bool bIgnoreRegisterToManager;
	
};
