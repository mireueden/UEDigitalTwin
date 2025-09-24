// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widget/RAUserWidget.h"
#include "InputActionValue.h"
#include "EnhancedInputComponent.h"
#include "RAInputableWidget.generated.h"

class UInputMappingContext;
class UInputAction;
class URAUserWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSelectionChangedDelegate, URAUserWidget*, Widget, int32, PrevIndex, int32, NewIndex);

UENUM(BlueprintType, meta = (bitflags))
enum class ERAWidgetInputDirection : uint8
{
	Undefined =  0,
	Up		= 1<<0,
	Down	= 1<<1,
	Left	= 1<<2,
	Right	= 1<<3
};
ENUM_CLASS_FLAGS(ERAWidgetInputDirection)

UCLASS()
class RA_API URAInputableWidget : public URAUserWidget
{
	GENERATED_BODY()

public:
	URAInputableWidget(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

public:

	UFUNCTION(BlueprintCallable, Category = "RAInputableWidget")
	void TrySetSelect(int32 NewIndex);

	UFUNCTION(BlueprintCallable, Category = "RAInputableWidget")
	void SetSelect(int32 NewIndex);

	UFUNCTION(BlueprintPure, BlueprintNativeEvent, Category = "RAInputableWidget")
	TArray<URAUserWidget*> GetWidgetItemList();
	TArray<URAUserWidget*> GetWidgetItemList_Implementation();

	UPROPERTY(BlueprintReadOnly, Category = "RAInputableWidget")
	int32 SelectedIndex;

	UPROPERTY(BlueprintAssignable, Category = "RAInputableWidget")
	FOnSelectionChangedDelegate OnSelectionChanged;

public:
	TArray<FInputBindingHandle> InputBindingList;

	// Hard Move에서 Soft Move로 전환이 시작되는 시간
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "RAInputableWidget")
	float SoftMoveTime;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RAInputableWidget")
	UInputMappingContext* IMC;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RAInputableWidget")
	bool bUseMoveUp;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RAInputableWidget", meta = (EditCondition = "bUseMoveUp"))
	UInputAction* IA_MoveUp;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RAInputableWidget")
	bool bUseMoveDown;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RAInputableWidget", meta = (EditCondition = "bUseMoveDown"))
	UInputAction* IA_MoveDown;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RAInputableWidget")
	bool bUseMoveLeft;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RAInputableWidget", meta = (EditCondition = "bUseMoveLeft"))
	UInputAction* IA_MoveLeft;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RAInputableWidget")
	bool bUseMoveRight;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RAInputableWidget", meta = (EditCondition = "bUseMoveRight"))
	UInputAction* IA_MoveRight;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RAInputableWidget")
	bool bUseConfirm;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RAInputableWidget", meta = (EditCondition = "bUseMoveRight"))
	UInputAction* IA_ConfirmUI;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RAInputableWidget")
	bool bUseCancel;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RAInputableWidget", meta = (EditCondition = "bUseMoveRight"))
	UInputAction* IA_CancelUI;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RAInputableWidget")
	void BindInput();
	void BindInput_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RAInputableWidget")
	void UnbindInput();
	void UnbindInput_Implementation();

public:
	UPROPERTY()
	uint8 InputDirectionState;

	UFUNCTION()
	void MoveInputAction(const FInputActionInstance& InputActionInstance, ERAWidgetInputDirection Direction);

	UFUNCTION(BlueprintNativeEvent, Category = "RAInputableWidget")
	void HardMove(ERAWidgetInputDirection Direction);
	void HardMove_Implementation(ERAWidgetInputDirection Direction);

	UFUNCTION(BlueprintNativeEvent, Category = "RAInputableWidget")
	void SoftMove(ERAWidgetInputDirection Direction);
	void SoftMove_Implementation(ERAWidgetInputDirection Direction);

	UFUNCTION(BlueprintNativeEvent, Category = "RAInputableWidget")
	void PerformConfirm(const FInputActionValue& Value);
	void PerformConfirm_Implementation(const FInputActionValue& Value);

	UFUNCTION(BlueprintNativeEvent, Category = "RAInputableWidget")
	void PerformCancel(const FInputActionValue& Value);
	void PerformCancel_Implementation(const FInputActionValue& Value);

};

