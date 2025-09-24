// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RAAnimationLibrary.generated.h"

class UControlRig;
class USceneComponent;
class USkinnedAsset;
enum class EControlRigComponentSpace : uint8;

/**
 * 
 */
UCLASS()
class RA_API URAAnimationLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "RAAnimationLibrary")
	static FTransform GetControlTransform(UControlRig* ControlRig, USceneComponent* Component, FName Name, EControlRigComponentSpace Space, bool bInitial = false);

	UFUNCTION(BlueprintCallable, Category = "RAAnimationLibrary")
	static void ConvertTransformFromRigSpace(USceneComponent* SceneComponent, FTransform& InOutTransform, EControlRigComponentSpace ToSpace);

};
