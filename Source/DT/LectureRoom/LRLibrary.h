#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LRLibrary.generated.h"

UCLASS()
class ULRLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool IsWithEditor()
	{
		return !!WITH_EDITOR;
	}
};