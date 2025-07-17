#pragma once
// Copyright Epic Games, Inc. All Rights Reserved.

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyBall.generated.h"

class AMyBall;

DECLARE_DELEGATE_TwoParams(FOnBallMoved, AMyBall*, FVector);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnMultiBallMoved, AMyBall*, FVector);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDynamicBallMoved, AMyBall*, Ball, FVector, Location);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDynamicMulticBallMoved, AMyBall*, Ball, FVector, Location);


UCLASS(BlueprintType, Blueprintable)
class AMyGround : public AActor
{
	GENERATED_BODY()
public:
	AMyGround();

	// 볼을 생성
	UFUNCTION(BlueprintCallable)
	void SpawnBall(FTransform T);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<AMyBall*> BallList;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AMyBall> BallClass;

public:
	// BindBall / UnbindBall
	void BindBall(AMyBall* TargetBall);

	UFUNCTION()
	void UnbindBall(AActor* TargetBall);

	// Delegate 바인드 함수 + Dynamic , Multi, Dynamic Multi
	void OnBallMoved(AMyBall* Ball, FVector Location);
	
	UFUNCTION()
	void OnBallMovedDynamic(AMyBall* Ball, FVector Location);
	
	void OnBallMovedMulti(AMyBall* Ball, FVector Location);
	
	UFUNCTION()
	void OnBallMovedDynamicMulti(AMyBall* Ball, FVector Location);
};

UCLASS(BlueprintType, Blueprintable)
class AMyBall : public AActor
{
	GENERATED_BODY()

public:
	AMyBall();

	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type Reason) override;

public:
	// UPROPERTY 사용할 수 없습니다.
	FOnBallMoved OnBallMoved;
	
	UPROPERTY()
	FOnDynamicBallMoved OnDynamicBallMoved;
	
	FOnMultiBallMoved OnMultiBallMoved;

	UPROPERTY(BlueprintCallable, BlueprintAssignable)
	FOnDynamicMulticBallMoved OnDynamicMulticBallMoved;

	UFUNCTION(BlueprintCallable)
	void SetBallLocation(FVector NewLocation);
};
 