// Fill out your copyright notice in the Description page of Project Settings.


#include "LectureRoom/Components/LRInteractComponentBase.h"
#include "LectureRoom/Interface/LRActorInterface.h"
#include "LectureRoom/LRTypes.h"
#include "LectureRoom/LRTwinManager.h"

DEFINE_LOG_CATEGORY(LogLRInteractComponent);

// Sets default values for this component's properties
ULRInteractComponentBase::ULRInteractComponentBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void ULRInteractComponentBase::BeginPlay()
{
	Super::BeginPlay();

	if (ALRTwinManager* TwinManager = ALRTwinManager::GetWorldTwinManager(this))
	{
		TwinManager->AddInteractComponent(this);
	}
}
void ULRInteractComponentBase::EndPlay(EEndPlayReason::Type Reason)
{
	if (ALRTwinManager* TwinManager = ALRTwinManager::GetWorldTwinManager(this))
	{
		TwinManager->RemoveInteractComponent(this);
	}

	Super::EndPlay(Reason);
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
	// 내부동작은 GetClass()->ImplementsInteface<T>
	if (GetOwner() && GetOwner()->Implements<ULRActorInterface>())
	{
		ILRActorInterface::Execute_TurnOn(GetOwner());
		ReceiveTurnOn();
		bWorking = true;
	}
}

void ULRInteractComponentBase::TurnOff()
{
	if (!IsWorking())
	{
		UE_LOG(LogLRInteractComponent, Warning, TEXT("Already Stopped...(%s)[%s]"), *GetNameSafe(this), *GetObjectTypeString(Type));
		return;
	}
	UE_LOG(LogLRInteractComponent, Log, TEXT("TurnOff (%s)[%s]"), *GetNameSafe(this), *GetObjectTypeString(Type));
	// Class 정보에서 인터페이스 구현이 되었는지 확인
	if (GetOwner() && GetOwner()->GetClass()->ImplementsInterface(ULRActorInterface::StaticClass()))
	{
		ILRActorInterface::Execute_TurnOff(GetOwner());
		ReceiveTurnOff();
		bWorking = false;
	}
}

void ULRInteractComponentBase::BeginFocus_Implementation()
{
	// 상속받은 Interface 타입으로 캐스팅
	if (ILRActorInterface* Interface = Cast<ILRActorInterface>(GetOwner()))
	{
		//Interface->BeginFocus(); // Interface 함수를 직접 호출하면 asset error 발생
		ILRActorInterface::Execute_BeginFocus(GetOwner());
	}
}

void ULRInteractComponentBase::EndFocus_Implementation()
{
	// 블루프린트에서 변수로 InterfaceType을 사용할 때, TScriptInterface<T> 사용
	if (TScriptInterface<ILRActorInterface> Interface = TScriptInterface<ILRActorInterface>(GetOwner()))
	{
		//Interface->BeginFocus(); // Interface 함수를 직접 호출하면 asset error 발생
		ILRActorInterface::Execute_EndFocus(GetOwner());

		//UObject* InterfaceOwner = Interface.GetObject();
		//ILRActorInterface* Interface = Interface.GetInterface();
	}
}

FString ULRInteractComponentBase::GetComponentInfo_Implementation()
{
	return FString::Printf(TEXT("%s"), *GetNameSafe(this));
}