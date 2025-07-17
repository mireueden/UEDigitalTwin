// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "LRWorldSubsystem.generated.h"

class ALRPawn;

/**
 * 
 */
UCLASS()
class DT_API ULRWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UFUNCTION(BlueprintPure)
	ALRPawn* GetLectureRoomPawn();

	UPROPERTY()
	ALRPawn* CachedLRPawn;
};
