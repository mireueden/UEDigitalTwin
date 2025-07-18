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
	/** Implement this for initialization of instances of the system */
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	/** Implement this for deinitialization of instances of the system */
	virtual void Deinitialize() override;

	UFUNCTION(BlueprintPure)
	ALRPawn* GetLectureRoomPawn();

	UPROPERTY()
	ALRPawn* CachedLRPawn;

	// TODO : TargetingActor Change Old, New

};
