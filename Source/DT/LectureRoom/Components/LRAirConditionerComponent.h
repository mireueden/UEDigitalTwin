// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LectureRoom/Components/LRInteractComponentBase.h"
#include "LRAirConditionerComponent.generated.h"

UCLASS(Blueprintable, BlueprintType)
class DT_API ULRAirConditionerComponent : public ULRInteractComponentBase
{
	GENERATED_BODY()
	
public:
	ULRAirConditionerComponent();
};
