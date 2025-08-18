#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LRLibrary.generated.h"

class ULRInteractComponentBase;
enum class ELRInteractionType : uint8;

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

	// 상호작용 가능한 유형 확인
	UFUNCTION(BlueprintPure)
	static ELRInteractionType GetInteractionType(ULRInteractComponentBase* Target);

	UFUNCTION(BlueprintPure)
	static float GetSRand();

	UFUNCTION(BlueprintPure)
	static FLinearColor GetRandomLinearColor(bool bRandomAlpha = false, float Alpha = 1.0f);


};