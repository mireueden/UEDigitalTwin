// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LRTwinDataAsset.generated.h"

class ULRTwinDataFragment;
class UTexture2D;
enum class ELRObjectType : uint8;
enum class ELRValueType : uint8;

/**
 * 
 */
UCLASS(BlueprintType)
class DT_API ULRTwinDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	ELRObjectType Type;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UTexture2D* Icon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TMap<ELRValueType, float> DefaultValueMap;	
};
