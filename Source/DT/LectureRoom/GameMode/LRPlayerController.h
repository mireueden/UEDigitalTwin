// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LRPlayerController.generated.h"

/**
 *
 */
UCLASS()
class DT_API ALRPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type Reason) override;

	virtual void BeginPlayingState() override;
	virtual void EndPlayingState() override;

	virtual void OnPossess(APawn* aPawn) override;
	virtual void OnUnPossess() override;

	virtual void CleanupPlayerState() override;
	virtual void GameHasEnded(class AActor* EndGameFocus = nullptr, bool bIsWinner = false) override;

	virtual void InitInputSystem() override;
	virtual void SetupInputComponent() override;

	virtual void CleanupGameViewport() override;
	virtual void PawnLeavingGame() override;
};
