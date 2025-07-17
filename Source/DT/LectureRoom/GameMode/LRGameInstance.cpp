// Fill out your copyright notice in the Description page of Project Settings.


#include "LectureRoom/GameMode/LRGameInstance.h"

DEFINE_LOG_CATEGORY_STATIC(LogLRGameInstance, Log, All);

void ULRGameInstance::Init()
{
	Super::Init();

	UE_LOG(LogLRGameInstance, Log, TEXT("[LifeCycle] LRGameInstacne::Init"));
}

void ULRGameInstance::Shutdown()
{
	Super::Shutdown();

	UE_LOG(LogLRGameInstance, Log, TEXT("[LifeCycle] LRGameInstacne::Shutdown"));
}