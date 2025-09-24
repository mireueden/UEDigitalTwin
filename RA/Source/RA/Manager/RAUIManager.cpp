// Fill out your copyright notice in the Description page of Project Settings.


#include "Manager/RAUIManager.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Widget/RAUserWidget.h"

ARAUIManager::ARAUIManager()
{
	UIInputComponent = CreateDefaultSubobject<UEnhancedInputComponent>(TEXT("UIInputComp"));
}

void ARAUIManager::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
	{
		PC->PushInputComponent(UIInputComponent);
	}
}

void ARAUIManager::EndPlay(EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);

	if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
	{
		PC->PopInputComponent(UIInputComponent);
	}
}

void ARAUIManager::ShowHUD()
{
	if (!IsValid(this))
	{
		return;
	}

	if (HUDWidget == nullptr)
	{
		//HUDWidget = CreateWidget<URAUserWidget>(this, HUDWidgetClass, FName(TEXT("HUD")));
	}

	HUDWidget->ShowWidget();
}

void ARAUIManager::HideHUD()
{
	if (!IsValid(this) || !IsValid(HUDWidget))
	{
		return;
	}

	HUDWidget->HideWidget();
}