

#pragma once

#include "CoreMinimal.h"
#include "Manager/DTManagerBase.h"
#include "GameplayTagContainer.h"
#include "Interface/DTTargetPointInterface.h"
#include "DTFactoryManager.generated.h"

class UDTAbilitySystemComponent;
class ADTTargetPoint;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRegisterChangedDelegate, UDTAbilitySystemComponent*, ASC);

UCLASS()
class DT_API ADTFactoryManager : public ADTManagerBase, public IDTTargetPointInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADTFactoryManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly)
	TArray<UDTAbilitySystemComponent*> ASCList;

	UPROPERTY(BlueprintAssignable)
	FOnRegisterChangedDelegate OnASCRegistered;

	UPROPERTY(BlueprintAssignable)
	FOnRegisterChangedDelegate OnASCUnregistered;

	UFUNCTION()
	void RegisterAbilitySystemComp(UDTAbilitySystemComponent* ASC);

	UFUNCTION()
	void UnregisterAbilitySystemComp(UDTAbilitySystemComponent* ASC);
	
public:
	UFUNCTION()
	void InitializeTargetPointMap();

	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
	TMap<FGameplayTag, ADTTargetPoint*> TargetPointMap;

	virtual FTransform GetTargetTransform_Implementation(FGameplayTag TargetTag, bool& bFound) override;
	virtual void GetAllTargetTransform_Implementation(FGameplayTag FilterTargetTag, TMap<FGameplayTag, FTransform>& OutTargetTransform) override;

};
