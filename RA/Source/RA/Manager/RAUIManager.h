// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Manager/RAManagerBase.h"
#include "RAUIManager.generated.h"

class UEnhancedInputComponent;
class URAUserWidget;

/**
 * 
 */
UCLASS()
class RA_API ARAUIManager : public ARAManagerBase
{
	GENERATED_BODY()

public:
	ARAUIManager();

	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type Reason) override;

public:
	UPROPERTY(VisibleInstanceOnly, Category = "RAUIManager")
	UEnhancedInputComponent* UIInputComponent;
	
	FORCEINLINE UEnhancedInputComponent* GetInputComponent() const { return UIInputComponent; }

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "RAUIManager")
	TSubclassOf<URAUserWidget> HUDWidgetClass;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "RAUIManager")
	URAUserWidget* HUDWidget;

	UFUNCTION(BlueprintCallable, Category = "RAUIManager")
	void ShowHUD();

	UFUNCTION(BlueprintCallable, Category = "RAUIManager")
	void HideHUD();
};
