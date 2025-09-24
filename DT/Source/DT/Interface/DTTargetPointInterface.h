

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "DTTargetPointInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType, MinimalAPI)
class UDTTargetPointInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DT_API IDTTargetPointInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	FTransform GetTargetTransform(FGameplayTag TargetTag, bool& bFound);
	virtual FTransform GetTargetTransform_Implementation(FGameplayTag TargetTag, bool& bFound);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void GetAllTargetTransform(FGameplayTag FilterTargetTag, TMap<FGameplayTag, FTransform>& OutTargetTransform);
	virtual void GetAllTargetTransform_Implementation(FGameplayTag FilterTargetTag, TMap<FGameplayTag, FTransform>& OutTargetTransform);
	
};
