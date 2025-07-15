// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "LRPawn.generated.h"

class USceneComponent;
class USpringArmComponent;
class UCameraComponent;
class USphereComponent;
class UStaticMeshComponent;
class UFloatingPawnMovement;


UCLASS()
class DT_API ALRPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ALRPawn();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* SceneComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USpringArmComponent* SpringArmComp;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UCameraComponent* CameraComp;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USphereComponent* CollisionComp;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UFloatingPawnMovement* MovementComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


public:
	UPROPERTY()
	FVector MovementVector;

	// C++에서는 구현하지 않는 함수, BP에서만 Override하여서 사용 가능
	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	FVector BP_GetMovementVector() const;

	// C++에서 기본 구현이 필요한 함수, BP에서도 Override하여서 사용 가능
	UFUNCTION(BlueprintNativeEvent, BlueprintPure)
	FVector GetMovementVector() const;
	virtual const FVector& GetMovementVector_Implementation() const;

};
