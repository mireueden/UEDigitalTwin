// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widget/RAInputableWidget.h"
#include "InputAction.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRAInputableWidget() {}

// ********** Begin Cross Module References ********************************************************
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
RA_API UClass* Z_Construct_UClass_URAInputableWidget();
RA_API UClass* Z_Construct_UClass_URAInputableWidget_NoRegister();
RA_API UClass* Z_Construct_UClass_URAUserWidget();
RA_API UClass* Z_Construct_UClass_URAUserWidget_NoRegister();
RA_API UEnum* Z_Construct_UEnum_RA_ERAWidgetInputDirection();
RA_API UFunction* Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_RA();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSelectionChangedDelegate *******************************************
struct Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics
{
	struct _Script_RA_eventOnSelectionChangedDelegate_Parms
	{
		URAUserWidget* Widget;
		int32 PrevIndex;
		int32 NewIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrevIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RA_eventOnSelectionChangedDelegate_Parms, Widget), Z_Construct_UClass_URAUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::NewProp_PrevIndex = { "PrevIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RA_eventOnSelectionChangedDelegate_Parms, PrevIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RA_eventOnSelectionChangedDelegate_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::NewProp_PrevIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::NewProp_NewIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RA, nullptr, "OnSelectionChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::_Script_RA_eventOnSelectionChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::_Script_RA_eventOnSelectionChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSelectionChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSelectionChangedDelegate, URAUserWidget* Widget, int32 PrevIndex, int32 NewIndex)
{
	struct _Script_RA_eventOnSelectionChangedDelegate_Parms
	{
		URAUserWidget* Widget;
		int32 PrevIndex;
		int32 NewIndex;
	};
	_Script_RA_eventOnSelectionChangedDelegate_Parms Parms;
	Parms.Widget=Widget;
	Parms.PrevIndex=PrevIndex;
	Parms.NewIndex=NewIndex;
	OnSelectionChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSelectionChangedDelegate *********************************************

// ********** Begin Enum ERAWidgetInputDirection ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERAWidgetInputDirection;
static UEnum* ERAWidgetInputDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERAWidgetInputDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERAWidgetInputDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RA_ERAWidgetInputDirection, (UObject*)Z_Construct_UPackage__Script_RA(), TEXT("ERAWidgetInputDirection"));
	}
	return Z_Registration_Info_UEnum_ERAWidgetInputDirection.OuterSingleton;
}
template<> RA_API UEnum* StaticEnum<ERAWidgetInputDirection>()
{
	return ERAWidgetInputDirection_StaticEnum();
}
struct Z_Construct_UEnum_RA_ERAWidgetInputDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Down.Name", "ERAWidgetInputDirection::Down" },
		{ "Left.Name", "ERAWidgetInputDirection::Left" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
		{ "Right.Name", "ERAWidgetInputDirection::Right" },
		{ "Undefined.Name", "ERAWidgetInputDirection::Undefined" },
		{ "Up.Name", "ERAWidgetInputDirection::Up" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERAWidgetInputDirection::Undefined", (int64)ERAWidgetInputDirection::Undefined },
		{ "ERAWidgetInputDirection::Up", (int64)ERAWidgetInputDirection::Up },
		{ "ERAWidgetInputDirection::Down", (int64)ERAWidgetInputDirection::Down },
		{ "ERAWidgetInputDirection::Left", (int64)ERAWidgetInputDirection::Left },
		{ "ERAWidgetInputDirection::Right", (int64)ERAWidgetInputDirection::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RA_ERAWidgetInputDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RA,
	nullptr,
	"ERAWidgetInputDirection",
	"ERAWidgetInputDirection",
	Z_Construct_UEnum_RA_ERAWidgetInputDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RA_ERAWidgetInputDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RA_ERAWidgetInputDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RA_ERAWidgetInputDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RA_ERAWidgetInputDirection()
{
	if (!Z_Registration_Info_UEnum_ERAWidgetInputDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERAWidgetInputDirection.InnerSingleton, Z_Construct_UEnum_RA_ERAWidgetInputDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERAWidgetInputDirection.InnerSingleton;
}
// ********** End Enum ERAWidgetInputDirection *****************************************************

// ********** Begin Class URAInputableWidget Function BindInput ************************************
static FName NAME_URAInputableWidget_BindInput = FName(TEXT("BindInput"));
void URAInputableWidget::BindInput()
{
	UFunction* Func = FindFunctionChecked(NAME_URAInputableWidget_BindInput);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		BindInput_Implementation();
	}
}
struct Z_Construct_UFunction_URAInputableWidget_BindInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAInputableWidget_BindInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAInputableWidget, nullptr, "BindInput", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_BindInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAInputableWidget_BindInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URAInputableWidget_BindInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAInputableWidget_BindInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAInputableWidget::execBindInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindInput_Implementation();
	P_NATIVE_END;
}
// ********** End Class URAInputableWidget Function BindInput **************************************

// ********** Begin Class URAInputableWidget Function GetWidgetItemList ****************************
struct RAInputableWidget_eventGetWidgetItemList_Parms
{
	TArray<URAUserWidget*> ReturnValue;
};
static FName NAME_URAInputableWidget_GetWidgetItemList = FName(TEXT("GetWidgetItemList"));
TArray<URAUserWidget*> URAInputableWidget::GetWidgetItemList()
{
	UFunction* Func = FindFunctionChecked(NAME_URAInputableWidget_GetWidgetItemList);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		RAInputableWidget_eventGetWidgetItemList_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetWidgetItemList_Implementation();
	}
}
struct Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URAUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInputableWidget_eventGetWidgetItemList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAInputableWidget, nullptr, "GetWidgetItemList", Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList_Statics::PropPointers), sizeof(RAInputableWidget_eventGetWidgetItemList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RAInputableWidget_eventGetWidgetItemList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAInputableWidget::execGetWidgetItemList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<URAUserWidget*>*)Z_Param__Result=P_THIS->GetWidgetItemList_Implementation();
	P_NATIVE_END;
}
// ********** End Class URAInputableWidget Function GetWidgetItemList ******************************

// ********** Begin Class URAInputableWidget Function HardMove *************************************
struct RAInputableWidget_eventHardMove_Parms
{
	ERAWidgetInputDirection Direction;
};
static FName NAME_URAInputableWidget_HardMove = FName(TEXT("HardMove"));
void URAInputableWidget::HardMove(ERAWidgetInputDirection Direction)
{
	UFunction* Func = FindFunctionChecked(NAME_URAInputableWidget_HardMove);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		RAInputableWidget_eventHardMove_Parms Parms;
		Parms.Direction=Direction;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HardMove_Implementation(Direction);
	}
}
struct Z_Construct_UFunction_URAInputableWidget_HardMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URAInputableWidget_HardMove_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URAInputableWidget_HardMove_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInputableWidget_eventHardMove_Parms, Direction), Z_Construct_UEnum_RA_ERAWidgetInputDirection, METADATA_PARAMS(0, nullptr) }; // 169799142
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URAInputableWidget_HardMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAInputableWidget_HardMove_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAInputableWidget_HardMove_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_HardMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAInputableWidget_HardMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAInputableWidget, nullptr, "HardMove", Z_Construct_UFunction_URAInputableWidget_HardMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_HardMove_Statics::PropPointers), sizeof(RAInputableWidget_eventHardMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_HardMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAInputableWidget_HardMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RAInputableWidget_eventHardMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URAInputableWidget_HardMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAInputableWidget_HardMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAInputableWidget::execHardMove)
{
	P_GET_ENUM(ERAWidgetInputDirection,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HardMove_Implementation(ERAWidgetInputDirection(Z_Param_Direction));
	P_NATIVE_END;
}
// ********** End Class URAInputableWidget Function HardMove ***************************************

// ********** Begin Class URAInputableWidget Function MoveInputAction ******************************
struct Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics
{
	struct RAInputableWidget_eventMoveInputAction_Parms
	{
		FInputActionInstance InputActionInstance;
		ERAWidgetInputDirection Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::NewProp_InputActionInstance = { "InputActionInstance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInputableWidget_eventMoveInputAction_Parms, InputActionInstance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionInstance_MetaData), NewProp_InputActionInstance_MetaData) }; // 1358775819
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInputableWidget_eventMoveInputAction_Parms, Direction), Z_Construct_UEnum_RA_ERAWidgetInputDirection, METADATA_PARAMS(0, nullptr) }; // 169799142
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::NewProp_InputActionInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAInputableWidget, nullptr, "MoveInputAction", Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::RAInputableWidget_eventMoveInputAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::RAInputableWidget_eventMoveInputAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URAInputableWidget_MoveInputAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAInputableWidget_MoveInputAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAInputableWidget::execMoveInputAction)
{
	P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_InputActionInstance);
	P_GET_ENUM(ERAWidgetInputDirection,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveInputAction(Z_Param_Out_InputActionInstance,ERAWidgetInputDirection(Z_Param_Direction));
	P_NATIVE_END;
}
// ********** End Class URAInputableWidget Function MoveInputAction ********************************

// ********** Begin Class URAInputableWidget Function PerformCancel ********************************
struct RAInputableWidget_eventPerformCancel_Parms
{
	FInputActionValue Value;
};
static FName NAME_URAInputableWidget_PerformCancel = FName(TEXT("PerformCancel"));
void URAInputableWidget::PerformCancel(FInputActionValue const& Value)
{
	UFunction* Func = FindFunctionChecked(NAME_URAInputableWidget_PerformCancel);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		RAInputableWidget_eventPerformCancel_Parms Parms;
		Parms.Value=Value;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		PerformCancel_Implementation(Value);
	}
}
struct Z_Construct_UFunction_URAInputableWidget_PerformCancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URAInputableWidget_PerformCancel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInputableWidget_eventPerformCancel_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URAInputableWidget_PerformCancel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAInputableWidget_PerformCancel_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_PerformCancel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAInputableWidget_PerformCancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAInputableWidget, nullptr, "PerformCancel", Z_Construct_UFunction_URAInputableWidget_PerformCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_PerformCancel_Statics::PropPointers), sizeof(RAInputableWidget_eventPerformCancel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_PerformCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAInputableWidget_PerformCancel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RAInputableWidget_eventPerformCancel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URAInputableWidget_PerformCancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAInputableWidget_PerformCancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAInputableWidget::execPerformCancel)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformCancel_Implementation(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class URAInputableWidget Function PerformCancel **********************************

// ********** Begin Class URAInputableWidget Function PerformConfirm *******************************
struct RAInputableWidget_eventPerformConfirm_Parms
{
	FInputActionValue Value;
};
static FName NAME_URAInputableWidget_PerformConfirm = FName(TEXT("PerformConfirm"));
void URAInputableWidget::PerformConfirm(FInputActionValue const& Value)
{
	UFunction* Func = FindFunctionChecked(NAME_URAInputableWidget_PerformConfirm);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		RAInputableWidget_eventPerformConfirm_Parms Parms;
		Parms.Value=Value;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		PerformConfirm_Implementation(Value);
	}
}
struct Z_Construct_UFunction_URAInputableWidget_PerformConfirm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URAInputableWidget_PerformConfirm_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInputableWidget_eventPerformConfirm_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URAInputableWidget_PerformConfirm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAInputableWidget_PerformConfirm_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_PerformConfirm_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAInputableWidget_PerformConfirm_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAInputableWidget, nullptr, "PerformConfirm", Z_Construct_UFunction_URAInputableWidget_PerformConfirm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_PerformConfirm_Statics::PropPointers), sizeof(RAInputableWidget_eventPerformConfirm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_PerformConfirm_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAInputableWidget_PerformConfirm_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RAInputableWidget_eventPerformConfirm_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URAInputableWidget_PerformConfirm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAInputableWidget_PerformConfirm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAInputableWidget::execPerformConfirm)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformConfirm_Implementation(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class URAInputableWidget Function PerformConfirm *********************************

// ********** Begin Class URAInputableWidget Function SetSelect ************************************
struct Z_Construct_UFunction_URAInputableWidget_SetSelect_Statics
{
	struct RAInputableWidget_eventSetSelect_Parms
	{
		int32 NewIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URAInputableWidget_SetSelect_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInputableWidget_eventSetSelect_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URAInputableWidget_SetSelect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAInputableWidget_SetSelect_Statics::NewProp_NewIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_SetSelect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAInputableWidget_SetSelect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAInputableWidget, nullptr, "SetSelect", Z_Construct_UFunction_URAInputableWidget_SetSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_SetSelect_Statics::PropPointers), sizeof(Z_Construct_UFunction_URAInputableWidget_SetSelect_Statics::RAInputableWidget_eventSetSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_SetSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAInputableWidget_SetSelect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URAInputableWidget_SetSelect_Statics::RAInputableWidget_eventSetSelect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URAInputableWidget_SetSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAInputableWidget_SetSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAInputableWidget::execSetSelect)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelect(Z_Param_NewIndex);
	P_NATIVE_END;
}
// ********** End Class URAInputableWidget Function SetSelect **************************************

// ********** Begin Class URAInputableWidget Function SoftMove *************************************
struct RAInputableWidget_eventSoftMove_Parms
{
	ERAWidgetInputDirection Direction;
};
static FName NAME_URAInputableWidget_SoftMove = FName(TEXT("SoftMove"));
void URAInputableWidget::SoftMove(ERAWidgetInputDirection Direction)
{
	UFunction* Func = FindFunctionChecked(NAME_URAInputableWidget_SoftMove);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		RAInputableWidget_eventSoftMove_Parms Parms;
		Parms.Direction=Direction;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SoftMove_Implementation(Direction);
	}
}
struct Z_Construct_UFunction_URAInputableWidget_SoftMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URAInputableWidget_SoftMove_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URAInputableWidget_SoftMove_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInputableWidget_eventSoftMove_Parms, Direction), Z_Construct_UEnum_RA_ERAWidgetInputDirection, METADATA_PARAMS(0, nullptr) }; // 169799142
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URAInputableWidget_SoftMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAInputableWidget_SoftMove_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAInputableWidget_SoftMove_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_SoftMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAInputableWidget_SoftMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAInputableWidget, nullptr, "SoftMove", Z_Construct_UFunction_URAInputableWidget_SoftMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_SoftMove_Statics::PropPointers), sizeof(RAInputableWidget_eventSoftMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_SoftMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAInputableWidget_SoftMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RAInputableWidget_eventSoftMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URAInputableWidget_SoftMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAInputableWidget_SoftMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAInputableWidget::execSoftMove)
{
	P_GET_ENUM(ERAWidgetInputDirection,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SoftMove_Implementation(ERAWidgetInputDirection(Z_Param_Direction));
	P_NATIVE_END;
}
// ********** End Class URAInputableWidget Function SoftMove ***************************************

// ********** Begin Class URAInputableWidget Function TrySetSelect *********************************
struct Z_Construct_UFunction_URAInputableWidget_TrySetSelect_Statics
{
	struct RAInputableWidget_eventTrySetSelect_Parms
	{
		int32 NewIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URAInputableWidget_TrySetSelect_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInputableWidget_eventTrySetSelect_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URAInputableWidget_TrySetSelect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAInputableWidget_TrySetSelect_Statics::NewProp_NewIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_TrySetSelect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAInputableWidget_TrySetSelect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAInputableWidget, nullptr, "TrySetSelect", Z_Construct_UFunction_URAInputableWidget_TrySetSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_TrySetSelect_Statics::PropPointers), sizeof(Z_Construct_UFunction_URAInputableWidget_TrySetSelect_Statics::RAInputableWidget_eventTrySetSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_TrySetSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAInputableWidget_TrySetSelect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URAInputableWidget_TrySetSelect_Statics::RAInputableWidget_eventTrySetSelect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URAInputableWidget_TrySetSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAInputableWidget_TrySetSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAInputableWidget::execTrySetSelect)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TrySetSelect(Z_Param_NewIndex);
	P_NATIVE_END;
}
// ********** End Class URAInputableWidget Function TrySetSelect ***********************************

// ********** Begin Class URAInputableWidget Function UnbindInput **********************************
static FName NAME_URAInputableWidget_UnbindInput = FName(TEXT("UnbindInput"));
void URAInputableWidget::UnbindInput()
{
	UFunction* Func = FindFunctionChecked(NAME_URAInputableWidget_UnbindInput);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UnbindInput_Implementation();
	}
}
struct Z_Construct_UFunction_URAInputableWidget_UnbindInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAInputableWidget_UnbindInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAInputableWidget, nullptr, "UnbindInput", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAInputableWidget_UnbindInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAInputableWidget_UnbindInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URAInputableWidget_UnbindInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAInputableWidget_UnbindInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAInputableWidget::execUnbindInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindInput_Implementation();
	P_NATIVE_END;
}
// ********** End Class URAInputableWidget Function UnbindInput ************************************

// ********** Begin Class URAInputableWidget *******************************************************
void URAInputableWidget::StaticRegisterNativesURAInputableWidget()
{
	UClass* Class = URAInputableWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindInput", &URAInputableWidget::execBindInput },
		{ "GetWidgetItemList", &URAInputableWidget::execGetWidgetItemList },
		{ "HardMove", &URAInputableWidget::execHardMove },
		{ "MoveInputAction", &URAInputableWidget::execMoveInputAction },
		{ "PerformCancel", &URAInputableWidget::execPerformCancel },
		{ "PerformConfirm", &URAInputableWidget::execPerformConfirm },
		{ "SetSelect", &URAInputableWidget::execSetSelect },
		{ "SoftMove", &URAInputableWidget::execSoftMove },
		{ "TrySetSelect", &URAInputableWidget::execTrySetSelect },
		{ "UnbindInput", &URAInputableWidget::execUnbindInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URAInputableWidget;
UClass* URAInputableWidget::GetPrivateStaticClass()
{
	using TClass = URAInputableWidget;
	if (!Z_Registration_Info_UClass_URAInputableWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RAInputableWidget"),
			Z_Registration_Info_UClass_URAInputableWidget.InnerSingleton,
			StaticRegisterNativesURAInputableWidget,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_URAInputableWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_URAInputableWidget_NoRegister()
{
	return URAInputableWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URAInputableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/RAInputableWidget.h" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedIndex_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMoveTime_MetaData[] = {
		{ "Category", "RAInputableWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hard Move\xec\x97\x90\xec\x84\x9c Soft Move\xeb\xa1\x9c \xec\xa0\x84\xed\x99\x98\xec\x9d\xb4 \xec\x8b\x9c\xec\x9e\x91\xeb\x90\x98\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84\n" },
#endif
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hard Move\xec\x97\x90\xec\x84\x9c Soft Move\xeb\xa1\x9c \xec\xa0\x84\xed\x99\x98\xec\x9d\xb4 \xec\x8b\x9c\xec\x9e\x91\xeb\x90\x98\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMoveUp_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_MoveUp_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "EditCondition", "bUseMoveUp" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMoveDown_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_MoveDown_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "EditCondition", "bUseMoveDown" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMoveLeft_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_MoveLeft_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "EditCondition", "bUseMoveLeft" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMoveRight_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_MoveRight_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "EditCondition", "bUseMoveRight" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseConfirm_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_ConfirmUI_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "EditCondition", "bUseMoveRight" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCancel_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_CancelUI_MetaData[] = {
		{ "Category", "RAInputableWidget" },
		{ "EditCondition", "bUseMoveRight" },
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDirectionState_MetaData[] = {
		{ "ModuleRelativePath", "Widget/RAInputableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedIndex;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftMoveTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC;
	static void NewProp_bUseMoveUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMoveUp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_MoveUp;
	static void NewProp_bUseMoveDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMoveDown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_MoveDown;
	static void NewProp_bUseMoveLeft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMoveLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_MoveLeft;
	static void NewProp_bUseMoveRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMoveRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_MoveRight;
	static void NewProp_bUseConfirm_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConfirm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_ConfirmUI;
	static void NewProp_bUseCancel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCancel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_CancelUI;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputDirectionState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URAInputableWidget_BindInput, "BindInput" }, // 4259889999
		{ &Z_Construct_UFunction_URAInputableWidget_GetWidgetItemList, "GetWidgetItemList" }, // 3608861680
		{ &Z_Construct_UFunction_URAInputableWidget_HardMove, "HardMove" }, // 3737943087
		{ &Z_Construct_UFunction_URAInputableWidget_MoveInputAction, "MoveInputAction" }, // 3016092829
		{ &Z_Construct_UFunction_URAInputableWidget_PerformCancel, "PerformCancel" }, // 3936961486
		{ &Z_Construct_UFunction_URAInputableWidget_PerformConfirm, "PerformConfirm" }, // 242879027
		{ &Z_Construct_UFunction_URAInputableWidget_SetSelect, "SetSelect" }, // 3825945256
		{ &Z_Construct_UFunction_URAInputableWidget_SoftMove, "SoftMove" }, // 4039360871
		{ &Z_Construct_UFunction_URAInputableWidget_TrySetSelect, "TrySetSelect" }, // 2210370785
		{ &Z_Construct_UFunction_URAInputableWidget_UnbindInput, "UnbindInput" }, // 757267710
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URAInputableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_SelectedIndex = { "SelectedIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URAInputableWidget, SelectedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedIndex_MetaData), NewProp_SelectedIndex_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_OnSelectionChanged = { "OnSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URAInputableWidget, OnSelectionChanged), Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelectionChanged_MetaData), NewProp_OnSelectionChanged_MetaData) }; // 476456995
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_SoftMoveTime = { "SoftMoveTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URAInputableWidget, SoftMoveTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMoveTime_MetaData), NewProp_SoftMoveTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_IMC = { "IMC", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URAInputableWidget, IMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_MetaData), NewProp_IMC_MetaData) };
void Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveUp_SetBit(void* Obj)
{
	((URAInputableWidget*)Obj)->bUseMoveUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveUp = { "bUseMoveUp", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URAInputableWidget), &Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMoveUp_MetaData), NewProp_bUseMoveUp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_IA_MoveUp = { "IA_MoveUp", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URAInputableWidget, IA_MoveUp), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_MoveUp_MetaData), NewProp_IA_MoveUp_MetaData) };
void Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveDown_SetBit(void* Obj)
{
	((URAInputableWidget*)Obj)->bUseMoveDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveDown = { "bUseMoveDown", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URAInputableWidget), &Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMoveDown_MetaData), NewProp_bUseMoveDown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_IA_MoveDown = { "IA_MoveDown", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URAInputableWidget, IA_MoveDown), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_MoveDown_MetaData), NewProp_IA_MoveDown_MetaData) };
void Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveLeft_SetBit(void* Obj)
{
	((URAInputableWidget*)Obj)->bUseMoveLeft = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveLeft = { "bUseMoveLeft", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URAInputableWidget), &Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveLeft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMoveLeft_MetaData), NewProp_bUseMoveLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_IA_MoveLeft = { "IA_MoveLeft", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URAInputableWidget, IA_MoveLeft), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_MoveLeft_MetaData), NewProp_IA_MoveLeft_MetaData) };
void Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveRight_SetBit(void* Obj)
{
	((URAInputableWidget*)Obj)->bUseMoveRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveRight = { "bUseMoveRight", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URAInputableWidget), &Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMoveRight_MetaData), NewProp_bUseMoveRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_IA_MoveRight = { "IA_MoveRight", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URAInputableWidget, IA_MoveRight), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_MoveRight_MetaData), NewProp_IA_MoveRight_MetaData) };
void Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseConfirm_SetBit(void* Obj)
{
	((URAInputableWidget*)Obj)->bUseConfirm = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseConfirm = { "bUseConfirm", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URAInputableWidget), &Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseConfirm_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseConfirm_MetaData), NewProp_bUseConfirm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_IA_ConfirmUI = { "IA_ConfirmUI", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URAInputableWidget, IA_ConfirmUI), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_ConfirmUI_MetaData), NewProp_IA_ConfirmUI_MetaData) };
void Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseCancel_SetBit(void* Obj)
{
	((URAInputableWidget*)Obj)->bUseCancel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseCancel = { "bUseCancel", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URAInputableWidget), &Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseCancel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCancel_MetaData), NewProp_bUseCancel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_IA_CancelUI = { "IA_CancelUI", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URAInputableWidget, IA_CancelUI), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_CancelUI_MetaData), NewProp_IA_CancelUI_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URAInputableWidget_Statics::NewProp_InputDirectionState = { "InputDirectionState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URAInputableWidget, InputDirectionState), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDirectionState_MetaData), NewProp_InputDirectionState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URAInputableWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_SelectedIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_OnSelectionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_SoftMoveTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_IMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_IA_MoveUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_IA_MoveDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_IA_MoveLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseMoveRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_IA_MoveRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseConfirm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_IA_ConfirmUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_bUseCancel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_IA_CancelUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAInputableWidget_Statics::NewProp_InputDirectionState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URAInputableWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URAInputableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URAUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URAInputableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URAInputableWidget_Statics::ClassParams = {
	&URAInputableWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URAInputableWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URAInputableWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URAInputableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_URAInputableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URAInputableWidget()
{
	if (!Z_Registration_Info_UClass_URAInputableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URAInputableWidget.OuterSingleton, Z_Construct_UClass_URAInputableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URAInputableWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URAInputableWidget);
URAInputableWidget::~URAInputableWidget() {}
// ********** End Class URAInputableWidget *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h__Script_RA_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERAWidgetInputDirection_StaticEnum, TEXT("ERAWidgetInputDirection"), &Z_Registration_Info_UEnum_ERAWidgetInputDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 169799142U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URAInputableWidget, URAInputableWidget::StaticClass, TEXT("URAInputableWidget"), &Z_Registration_Info_UClass_URAInputableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URAInputableWidget), 473242660U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h__Script_RA_698233342(TEXT("/Script/RA"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h__Script_RA_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h__Script_RA_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h__Script_RA_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h__Script_RA_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
