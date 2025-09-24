// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/RAInputableWidget.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/PlayerController.h"
#include "Library/RALibrary.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "InputTriggers.h"
#include "Manager/RAUIManager.h"


URAInputableWidget::URAInputableWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, SelectedIndex(INDEX_NONE)
	, SoftMoveTime(0.2f)
{

}

void URAInputableWidget::NativeConstruct()
{
	Super::NativeConstruct();

	BindInput();
}

void URAInputableWidget::NativeDestruct()
{
	Super::NativeDestruct();

	UnbindInput();
}

void URAInputableWidget::TrySetSelect(int32 NewIndex)
{
	if (SelectedIndex == NewIndex)
	{
		return;
	}

	SetSelect(NewIndex);
}

void URAInputableWidget::SetSelect(int32 NewIndex)
{
	int32 PrevIndex = SelectedIndex;
	SelectedIndex = NewIndex;
	
	if (GetWidgetItemList().IsValidIndex(PrevIndex))
	{
		GetWidgetItemList()[PrevIndex]->SetHighlight(false);
	}
	if (GetWidgetItemList().IsValidIndex(SelectedIndex))
	{
		GetWidgetItemList()[SelectedIndex]->SetHighlight(true);
	}
	
	OnSelectionChanged.Broadcast(this, PrevIndex, SelectedIndex);
}

TArray<URAUserWidget*> URAInputableWidget::GetWidgetItemList_Implementation()
{
	const TArray<URAUserWidget*> EmptyList;
	return EmptyList;
}


void URAInputableWidget::BindInput_Implementation()
{
	ULocalPlayer* LocalPlayer = GetOwningLocalPlayer();
	if (!IsValid(LocalPlayer))
	{
		return;
	}

	UEnhancedInputLocalPlayerSubsystem* InputSubsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	if (!IsValid(InputSubsystem) || IMC == nullptr)
	{
		return;
	}

	ARAManagerBase* Manager = nullptr;
	URALibrary::GetRAManager(this, ARAUIManager::StaticClass(), Manager);
	
	ARAUIManager* UIManager = Cast<ARAUIManager>(Manager);
	UEnhancedInputComponent* InputComp = UIManager ? UIManager->GetInputComponent() : nullptr;
	if (InputComp)
	{
		if (bUseMoveUp)
		{
			InputBindingList.Add(InputComp->BindAction(IA_MoveUp, ETriggerEvent::Triggered, this, &URAInputableWidget::MoveInputAction, ERAWidgetInputDirection::Up));
			InputBindingList.Add(InputComp->BindAction(IA_MoveUp, ETriggerEvent::Ongoing, this, &URAInputableWidget::MoveInputAction, ERAWidgetInputDirection::Up));
			InputBindingList.Add(InputComp->BindAction(IA_MoveUp, ETriggerEvent::Completed, this, &URAInputableWidget::MoveInputAction, ERAWidgetInputDirection::Up));
		}

		if (bUseMoveDown)
		{
			InputBindingList.Add(InputComp->BindAction(IA_MoveDown, ETriggerEvent::Triggered, this, &URAInputableWidget::MoveInputAction, ERAWidgetInputDirection::Down));
			InputBindingList.Add(InputComp->BindAction(IA_MoveDown, ETriggerEvent::Ongoing, this, &URAInputableWidget::MoveInputAction, ERAWidgetInputDirection::Down));
			InputBindingList.Add(InputComp->BindAction(IA_MoveDown, ETriggerEvent::Completed, this, &URAInputableWidget::MoveInputAction, ERAWidgetInputDirection::Down));
		}

		if (bUseMoveLeft)
		{
			InputBindingList.Add(InputComp->BindAction(IA_MoveLeft, ETriggerEvent::Triggered, this, &URAInputableWidget::MoveInputAction, ERAWidgetInputDirection::Left));
			InputBindingList.Add(InputComp->BindAction(IA_MoveLeft, ETriggerEvent::Ongoing, this, &URAInputableWidget::MoveInputAction, ERAWidgetInputDirection::Left));
			InputBindingList.Add(InputComp->BindAction(IA_MoveLeft, ETriggerEvent::Completed, this, &URAInputableWidget::MoveInputAction, ERAWidgetInputDirection::Left));
		}

		if (bUseMoveRight)
		{
			InputBindingList.Add(InputComp->BindAction(IA_MoveRight, ETriggerEvent::Triggered, this, &URAInputableWidget::MoveInputAction, ERAWidgetInputDirection::Right));
			InputBindingList.Add(InputComp->BindAction(IA_MoveRight, ETriggerEvent::Ongoing, this, &URAInputableWidget::MoveInputAction, ERAWidgetInputDirection::Right));
			InputBindingList.Add(InputComp->BindAction(IA_MoveRight, ETriggerEvent::Completed, this, &URAInputableWidget::MoveInputAction, ERAWidgetInputDirection::Right));
		}

		if (bUseConfirm)
		{
			InputBindingList.Add(InputComp->BindAction(IA_ConfirmUI, ETriggerEvent::Triggered, this, &URAInputableWidget::PerformConfirm));
		}

		if (bUseCancel)
		{
			InputBindingList.Add(InputComp->BindAction(IA_ConfirmUI, ETriggerEvent::Triggered, this, &URAInputableWidget::PerformCancel));
		}
	}

	int32 InputPriority = 0; // TODO : 활성화된 위젯에 따라 우선순위 부여
	FModifyContextOptions Options;
	InputSubsystem->AddMappingContext(IMC, InputPriority, Options);
}

void URAInputableWidget::UnbindInput_Implementation()
{
	ULocalPlayer* LocalPlayer = GetOwningLocalPlayer();
	if (!IsValid(LocalPlayer))
	{
		return;
	}

	UEnhancedInputLocalPlayerSubsystem* InputSubsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	if (!IsValid(InputSubsystem) || IMC == nullptr)
	{
		return;
	}

	ARAManagerBase* Manager = nullptr;
	URALibrary::GetRAManager(this, ARAUIManager::StaticClass(), Manager);

	ARAUIManager* UIManager = Cast<ARAUIManager>(Manager);
	if (UEnhancedInputComponent* InputComp = (UIManager ? UIManager->GetInputComponent() : nullptr))
	{
		for (FInputBindingHandle& InputBindingHandle : InputBindingList)
		{
			InputComp->RemoveBinding(InputBindingHandle);
		}

		InputBindingList.Empty();
	}

	FModifyContextOptions Options;
	InputSubsystem->RemoveMappingContext(IMC, Options);
}

void URAInputableWidget::MoveInputAction(const FInputActionInstance& InputActionInstance, ERAWidgetInputDirection Direction)
{
	if (Direction == ERAWidgetInputDirection::Undefined)
	{
		return;
	}

	ETriggerEvent TriggerEvent = InputActionInstance.GetTriggerEvent();
	bool bPressed = InputActionInstance.GetValue().Get<bool>();
	bool bSoftMove = InputActionInstance.GetElapsedTime() > SoftMoveTime;

	switch (TriggerEvent)
	{
	case ETriggerEvent::Triggered:
	{
		InputDirectionState |= (uint8)Direction;

		if (!bPressed && !bSoftMove)
		{
			HardMove(Direction);
		}
		break;
	}
	case ETriggerEvent::Ongoing:
	{
		if (bSoftMove)
		{
			SoftMove(Direction);
		}
		break;
	}
	case ETriggerEvent::Canceled:
	case ETriggerEvent::Completed:
	{
		InputDirectionState &= !(uint8)Direction;
		bSoftMove = false;
		break;
	}
	default:
		break;
	}
}

void URAInputableWidget::HardMove_Implementation(ERAWidgetInputDirection Direction)
{
	// Up, Left -, Down, Right +
	int32 MoveIndex = SelectedIndex;
	int32 LastItemIndex = GetWidgetItemList().Num() - 1;

	switch (Direction)
	{
		case ERAWidgetInputDirection::Up:
		case ERAWidgetInputDirection::Left:
		{
			MoveIndex -= 1;
			if (MoveIndex < 0)
			{
				MoveIndex = LastItemIndex;
			}
			break;
		}
		case ERAWidgetInputDirection::Down:
		case ERAWidgetInputDirection::Right:
		{
			MoveIndex += 1;
			if (MoveIndex >= GetWidgetItemList().Num())
			{
				MoveIndex = FMath::Min(0, LastItemIndex);
			}

			break;
		}
		default:
		break;
	}

	TrySetSelect(MoveIndex);
}

void URAInputableWidget::SoftMove_Implementation(ERAWidgetInputDirection Direction)
{
	// Up, Left -, Down, Right +
	int32 MoveIndex = SelectedIndex;
	int32 LastItemIndex = GetWidgetItemList().Num() - 1;

	switch (Direction)
	{
	case ERAWidgetInputDirection::Up:
	case ERAWidgetInputDirection::Left:
	{
		MoveIndex -= 1;
		MoveIndex = FMath::Max(MoveIndex, (GetWidgetItemList().IsEmpty() ? -1 : 0));
		break;
	}
	case ERAWidgetInputDirection::Down:
	case ERAWidgetInputDirection::Right:
	{
		MoveIndex += 1;
		MoveIndex = FMath::Min(MoveIndex, LastItemIndex);
		break;
	}
	default:
		break;
	}

	TrySetSelect(MoveIndex);
}

void URAInputableWidget::PerformConfirm_Implementation(const FInputActionValue& Value)
{

}

void URAInputableWidget::PerformCancel_Implementation(const FInputActionValue& Value)
{

}
