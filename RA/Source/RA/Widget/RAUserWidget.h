// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RAUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class RA_API URAUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	URAUserWidget(const FObjectInitializer& ObjectInitializer);
	
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "RAUserWidget")
	void ShowWidget();
	virtual void ShowWidget_Implementation();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "RAUserWidget")
	void HideWidget();
	virtual void HideWidget_Implementation();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "RAUserWidget")
	void SetHighlight(bool bHighlight);
	virtual void SetHighlight_Implementation(bool bHighlight) {};
		
};
