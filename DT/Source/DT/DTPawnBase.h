

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystemInterface.h"
#include "GameplayAbilitySpecHandle.h"
#include "DTPawnBase.generated.h"

class UDTAbilitySystemComponent;
class UGameplayAbility;
class AController;

UCLASS()
class DT_API ADTPawnBase : public APawn, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADTPawnBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	virtual void PossessedBy(AController* NewController) override;
	virtual void UnPossessed() override;
	

public:
	UPROPERTY(VisibleAnywhere)
	UDTAbilitySystemComponent* AbilitySystemComp;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability")
	TArray<TSubclassOf<UGameplayAbility>> PassiveAbilityList;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability")
	TArray<TSubclassOf<UGameplayAbility>> AbilityList;

	// Handle passive/ non passive
	UPROPERTY()
	TMap<TSubclassOf<UGameplayAbility>, FGameplayAbilitySpecHandle> AbilityHandleMap;

	UFUNCTION()
	void InitializeAbilities();
	
	
};
