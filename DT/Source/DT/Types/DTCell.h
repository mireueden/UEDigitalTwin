// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "DTCell.generated.h"

UCLASS(BlueprintType, Blueprintable)
class DT_API UDTCell : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Categories="DT.Asset.Cell"))
	FGameplayTag Type;
	
};
