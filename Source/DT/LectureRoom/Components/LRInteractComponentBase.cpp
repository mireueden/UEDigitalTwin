// Fill out your copyright notice in the Description page of Project Settings.


#include "LectureRoom/Components/LRInteractComponentBase.h"
#include "LectureRoom/LRTypes.h"

DEFINE_LOG_CATEGORY(LogLRInteractComponent);

// Sets default values for this component's properties
ULRInteractComponentBase::ULRInteractComponentBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

FString GetObjectTypeString(ELRObjectType Type)
{
	FString TypeString;
	switch (Type)
	{
		case ELRObjectType::Lamp:
		{
			TypeString = "Lamp";
			break;
		}
		case ELRObjectType::Computer:
		{
			TypeString = "Computer";
			break;
		}
		case ELRObjectType::AirConditioner:
		{
			TypeString = "AirConditioner";
			break;
		}
		default:
		{
			TypeString = "Unused";
			break;
		}
	}

	return FString::Printf(TEXT("%s"), *TypeString);
}

void ULRInteractComponentBase::TurnOn()
{
	if (IsWorking())
	{
		UE_LOG(LogLRInteractComponent, Warning, TEXT("Already Working...(%s)[%s]"), *GetNameSafe(this), *GetObjectTypeString(Type));
		return;
	}

	UE_LOG(LogLRInteractComponent, Log, TEXT("TurnOn (%s)[%s]"), *GetNameSafe(this), *GetObjectTypeString(Type));
	ReceiveTurnOn();
	bWorking = true;
}

void ULRInteractComponentBase::TurnOff()
{
	if (!IsWorking())
	{
		UE_LOG(LogLRInteractComponent, Warning, TEXT("Already Stopped...(%s)[%s]"), *GetNameSafe(this), *GetObjectTypeString(Type));
		return;
	}

	UE_LOG(LogLRInteractComponent, Log, TEXT("TurnOff (%s)[%s]"), *GetNameSafe(this), *GetObjectTypeString(Type));
	ReceiveTurnOff();
	bWorking = false;
}
