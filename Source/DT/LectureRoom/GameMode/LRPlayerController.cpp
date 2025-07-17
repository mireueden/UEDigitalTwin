// Fill out your copyright notice in the Description page of Project Settings.


#include "LectureRoom/GameMode/LRPlayerController.h"

DEFINE_LOG_CATEGORY_STATIC(LogLRPlayerController, Log, All);

void ALRPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogLRPlayerController, Log, TEXT("[LifeCycle] ALRPlayerController::StartPlay"));
}
void ALRPlayerController::EndPlay(EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);
	UE_LOG(LogLRPlayerController, Log, TEXT("[LifeCycle] ALRPlayerController::EndPlay"));
}
void ALRPlayerController::BeginPlayingState()
{
	Super::BeginPlayingState();
	UE_LOG(LogLRPlayerController, Log, TEXT("[LifeCycle] ALRPlayerController::BeginPlayingState"));
}
void ALRPlayerController::EndPlayingState()
{
	Super::EndPlayingState();
	UE_LOG(LogLRPlayerController, Log, TEXT("[LifeCycle] ALRPlayerController::EndPlayingState"));
}
void ALRPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
	UE_LOG(LogLRPlayerController, Log, TEXT("[LifeCycle] ALRPlayerController::OnPossess"));
}
void ALRPlayerController::OnUnPossess()
{
	Super::OnUnPossess();
	UE_LOG(LogLRPlayerController, Log, TEXT("[LifeCycle] ALRPlayerController::OnUnPossess"));
}
void ALRPlayerController::CleanupPlayerState()
{
	Super::CleanupPlayerState();
	UE_LOG(LogLRPlayerController, Log, TEXT("[LifeCycle] ALRPlayerController::CleanupPlayerState"));
}
void ALRPlayerController::GameHasEnded(AActor* EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);
	UE_LOG(LogLRPlayerController, Log, TEXT("[LifeCycle] ALRPlayerController::GameHasEnded"));
}
void ALRPlayerController::InitInputSystem()
{
	Super::InitInputSystem();
	UE_LOG(LogLRPlayerController, Log, TEXT("[LifeCycle] ALRPlayerController::InitInputSystem"));
}
void ALRPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	UE_LOG(LogLRPlayerController, Log, TEXT("[LifeCycle] ALRPlayerController::SetupInputComponent"));
}
void ALRPlayerController::CleanupGameViewport()
{
	Super::CleanupGameViewport();
	UE_LOG(LogLRPlayerController, Log, TEXT("[LifeCycle] ALRPlayerController::CleanupGameViewport"));
}
void ALRPlayerController::PawnLeavingGame()
{
	Super::PawnLeavingGame();
	UE_LOG(LogLRPlayerController, Log, TEXT("[LifeCycle] ALRPlayerController::PawnLeavingGame"));
}