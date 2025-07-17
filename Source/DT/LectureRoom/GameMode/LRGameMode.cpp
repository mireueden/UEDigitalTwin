// Fill out your copyright notice in the Description page of Project Settings.


#include "LectureRoom/GameMode/LRGameMode.h"
#include "LectureRoom/GameMode/LRPlayerController.h"

DEFINE_LOG_CATEGORY_STATIC(LogLRGameMode, Log, All);

ALRGameMode::ALRGameMode()
{
	PlayerControllerClass = ALRPlayerController::StaticClass();
}

void ALRGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	UE_LOG(LogLRGameMode, Log, TEXT("[LifeCycle] ALRGameMode::InitGame"));
}
void ALRGameMode::StartPlay()
{
	Super::StartPlay();
	UE_LOG(LogLRGameMode, Log, TEXT("[LifeCycle] ALRGameMode::StartPlay"));
}
void ALRGameMode::StartToLeaveMap()
{
	Super::StartPlay();
	UE_LOG(LogLRGameMode, Log, TEXT("[LifeCycle] ALRGameMode::StartToLeaveMap"));
}

void ALRGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	UE_LOG(LogLRGameMode, Log, TEXT("[LifeCycle] ALRGameMode::PostLogin"));
}
void ALRGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
	UE_LOG(LogLRGameMode, Log, TEXT("[LifeCycle] ALRGameMode::Logout"));
}