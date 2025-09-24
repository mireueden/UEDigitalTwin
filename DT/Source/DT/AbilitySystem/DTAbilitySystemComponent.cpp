// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/DTAbilitySystemComponent.h"
#include "Manager/DTFactoryManager.h"
#include "Library/DTLibrary.h"

void UDTAbilitySystemComponent::OnRegister()
{
	Super::OnRegister();

	SetRegisterToManager(true);
}

void UDTAbilitySystemComponent::OnUnregister()
{
	SetRegisterToManager(false);
	

	Super::OnUnregister();
}

void UDTAbilitySystemComponent::SetRegisterToManager(bool bRegister)
{
	if (bIgnoreRegisterToManager)
	{
		return;
	}

	if (!GetWorld()->IsGameWorld())
	{
		return;
	}

	ADTFactoryManager* Manager = Cast<ADTFactoryManager>(UDTLibrary::GetManager(this, ADTFactoryManager::StaticClass()));
	if (Manager)
	{
		if (bRegister)
		{
			Manager->RegisterAbilitySystemComp(this);
		}
		else
		{
			Manager->UnregisterAbilitySystemComp(this);
		}
	}
}

void UDTAbilitySystemComponent::OnTagUpdated(const FGameplayTag& Tag, bool TagExists)
{
	OnTagChangedDelegate.Broadcast(Tag, TagExists);
}
