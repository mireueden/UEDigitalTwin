// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/RAUserWidget.h"

URAUserWidget::URAUserWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void URAUserWidget::ShowWidget_Implementation()
{
	SetVisibility(ESlateVisibility::SelfHitTestInvisible);
}

void URAUserWidget::HideWidget_Implementation()
{
	SetVisibility(ESlateVisibility::Collapsed);
}