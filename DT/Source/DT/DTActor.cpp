// Fill out your copyright notice in the Description page of Project Settings.


#include "DTActor.h"
#include "AbilitySystem/DTAbilitySystemComponent.h"

// Sets default values
ADTActor::ADTActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComp = CreateDefaultSubobject<UDTAbilitySystemComponent>(TEXT("ASC"));
}

// Called when the game starts or when spawned
void ADTActor::BeginPlay()
{
	Super::BeginPlay();

	InitializeAbilities();
}

void ADTActor::EndPlay(EEndPlayReason::Type Reason)
{
	if (IsValid(AbilitySystemComp))
	{
		for (auto Pair : AbilityHandleMap)
		{
			AbilitySystemComp->ClearAbility(Pair.Value);
		}
		
		AbilityHandleMap.Empty();
	}

	Super::EndPlay(Reason);
}

UAbilitySystemComponent* ADTActor::GetAbilitySystemComponent() const
{
	return AbilitySystemComp;
}

void ADTActor::InitializeAbilities()
{
	auto GiveAbility = [&](TArray<TSubclassOf<UGameplayAbility>>& AbilityList, bool bPassive)
	{
		for (auto AbilityClass : AbilityList)
		{
			FGameplayAbilitySpec Spec(AbilityClass);
			FGameplayAbilitySpecHandle Handle;
			if (bPassive)
			{
				Handle = AbilitySystemComp->GiveAbilityAndActivateOnce(Spec);
			}
			else
			{
				Handle = AbilitySystemComp->GiveAbility(Spec);
			}
			AbilityHandleMap.FindOrAdd(AbilityClass) = Handle;
		}
	};

	GiveAbility(AbilityList, false);
	GiveAbility(PassiveAbilityList, true);
#if 0
	for (auto AbilityClass : PassiveAbilityList)
	{
		FGameplayAbilitySpec Spec(AbilityClass);
		AbilityHandleMap.FindOrAdd(AbilityClass) = AbilitySystemComp->GiveAbilityAndActivateOnce(Spec);
	}

	for (auto AbilityClass : AbilityList)
	{
		FGameplayAbilitySpec Spec(AbilityClass);
		AbilityHandleMap.FindOrAdd(AbilityClass) = AbilitySystemComp->GiveAbility(Spec);
	}
#endif
}

