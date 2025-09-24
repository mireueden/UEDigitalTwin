// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilitysystemInterface.h"
#include "Abilities/GameplayAbility.h"
#include "DTActor.generated.h"

class UAbilitySystemComponent;
class UDTAbilitySystemComponent;

UCLASS()
class DT_API ADTActor : public AActor, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADTActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(EEndPlayReason::Type Reason) override;

public:
	UPROPERTY(VisibleAnywhere)
	UDTAbilitySystemComponent* AbilitySystemComp;
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Ability")
	TArray<TSubclassOf<UGameplayAbility>> PassiveAbilityList;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability")
	TArray<TSubclassOf<UGameplayAbility>> AbilityList;

	// Handle passive/ non passive
	UPROPERTY()
	TMap<TSubclassOf<UGameplayAbility>, FGameplayAbilitySpecHandle> AbilityHandleMap;

	UFUNCTION()
	void InitializeAbilities();

};
