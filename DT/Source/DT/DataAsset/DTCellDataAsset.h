

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DTCellDataAsset.generated.h"

UCLASS(BlueprintType, Blueprintable)
class DT_API UDTCellDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	// 공정명
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FText Name;

	// 공정 설명
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FText Description;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(Categories= "DT.Type.Cell"))
	FGameplayTag Category;

	// 공정에서 사용하는 것들 (로봇, 액션)
};

