// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/RAManageComponent.h"
#include "RAGameMode.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
URAManageComponent::URAManageComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void URAManageComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void URAManageComponent::OnRegister()
{
	Super::OnRegister();

	if (ARAGameMode* GameMode = Cast<ARAGameMode>(UGameplayStatics::GetGameMode(this)))
	{
		GameMode->RegisterManageComponent(this);
	}
}
void URAManageComponent::OnUnregister()
{
	Super::OnUnregister();

	if (ARAGameMode* GameMode = Cast<ARAGameMode>(UGameplayStatics::GetGameMode(this)))
	{
		GameMode->UnregisterManageComponent(this);
	}
}

// ***************************************
// URAManageComponent_Robot
// ***************************************

void URAManageComponent_Robot::SetRobotState(ERARobotState State, bool bNotify /*= true*/)
{
	if (RobotState == State)
	{
		return;
	}
	
	ERARobotState PrevState = RobotState;
	RobotState = State;

	if (bNotify)
	{
		OnRobotStateChanged.Broadcast(PrevState, RobotState);
	}
}


