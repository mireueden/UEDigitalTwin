

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "DTLibrary.generated.h"

class ADTManagerBase;
/**
 * 
 */
UCLASS()
class DT_API UDTLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext="WorldContextObject", DeterminesOutputType = "ManagerClass"))
	static ADTManagerBase* GetManager(UObject* WorldContextObject, TSubclassOf<ADTManagerBase> ManagerClass);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "ManagerClass"))
	static FGameplayTag GetMatchTagInContainer(FGameplayTag Tag, FGameplayTagContainer TagContainer);
};
