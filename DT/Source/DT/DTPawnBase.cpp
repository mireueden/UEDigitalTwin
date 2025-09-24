


#pragma once

#include "DTPawnBase.h"
#include "AbilitySystem/DTAbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"


// Sets default values
ADTPawnBase::ADTPawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComp = CreateDefaultSubobject<UDTAbilitySystemComponent>(TEXT("ASC"));
}

// Called when the game starts or when spawned
void ADTPawnBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADTPawnBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	InitializeAbilities();
}

void ADTPawnBase::UnPossessed()
{
	if (IsValid(AbilitySystemComp))
	{
		for (auto Pair : AbilityHandleMap)
		{
			AbilitySystemComp->ClearAbility(Pair.Value);
		}

		AbilityHandleMap.Empty();
	}

	Super::UnPossessed();
}

UAbilitySystemComponent* ADTPawnBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComp;
}

void ADTPawnBase::InitializeAbilities()
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
}


