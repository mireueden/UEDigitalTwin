// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Types/RADefine.h"
#include "RAManageComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRobotStateChangedDelegate, ERARobotState, PrevState, ERARobotState, NewState);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RA_API URAManageComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URAManageComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void OnRegister() override;
	virtual void OnUnregister() override;

public:
	// Type 정보
		
};


UCLASS()
class RA_API URAManageComponent_Robot : public URAManageComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ManageComponent")
	ERARobotState RobotState;

	UFUNCTION(BlueprintCallable)
	void SetRobotState(ERARobotState State, bool bNotify = true);

	UFUNCTION(BlueprintPure)
	FORCEINLINE ERARobotState GetRobotState() const { return RobotState; }

	UPROPERTY(BlueprintAssignable)
	FOnRobotStateChangedDelegate OnRobotStateChanged;

	// robot 매니저 생성 및 추가
};

UCLASS()
class RA_API URAManageComponent_Item : public URAManageComponent
{
	GENERATED_BODY()

	// todo inventory manager 생성 및 추가
};