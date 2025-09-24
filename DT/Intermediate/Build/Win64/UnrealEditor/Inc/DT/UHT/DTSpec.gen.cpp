// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/DTSpec.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTSpec() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DT_API UClass* Z_Construct_UClass_UDTSpec();
DT_API UClass* Z_Construct_UClass_UDTSpec_NoRegister();
DT_API UClass* Z_Construct_UClass_UDTSpecDataAsset_NoRegister();
DT_API UEnum* Z_Construct_UEnum_DT_EDTSpecState();
DT_API UFunction* Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSpecStateChanged ***************************************************
struct Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics
{
	struct _Script_DT_eventOnSpecStateChanged_Parms
	{
		UDTSpec* Spec;
		EDTSpecState PrevState;
		EDTSpecState CurrentState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrevState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DT_eventOnSpecStateChanged_Parms, Spec), Z_Construct_UClass_UDTSpec_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::NewProp_PrevState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::NewProp_PrevState = { "PrevState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DT_eventOnSpecStateChanged_Parms, PrevState), Z_Construct_UEnum_DT_EDTSpecState, METADATA_PARAMS(0, nullptr) }; // 2728181736
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DT_eventOnSpecStateChanged_Parms, CurrentState), Z_Construct_UEnum_DT_EDTSpecState, METADATA_PARAMS(0, nullptr) }; // 2728181736
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::NewProp_PrevState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::NewProp_PrevState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DT, nullptr, "OnSpecStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::_Script_DT_eventOnSpecStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::_Script_DT_eventOnSpecStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSpecStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSpecStateChanged, UDTSpec* Spec, EDTSpecState PrevState, EDTSpecState CurrentState)
{
	struct _Script_DT_eventOnSpecStateChanged_Parms
	{
		UDTSpec* Spec;
		EDTSpecState PrevState;
		EDTSpecState CurrentState;
	};
	_Script_DT_eventOnSpecStateChanged_Parms Parms;
	Parms.Spec=Spec;
	Parms.PrevState=PrevState;
	Parms.CurrentState=CurrentState;
	OnSpecStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSpecStateChanged *****************************************************

// ********** Begin Class UDTSpec Function GetCurrentPrcessCellIndex *******************************
struct Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex_Statics
{
	struct DTSpec_eventGetCurrentPrcessCellIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTSpec_eventGetCurrentPrcessCellIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTSpec, nullptr, "GetCurrentPrcessCellIndex", Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex_Statics::DTSpec_eventGetCurrentPrcessCellIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex_Statics::DTSpec_eventGetCurrentPrcessCellIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTSpec::execGetCurrentPrcessCellIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentPrcessCellIndex();
	P_NATIVE_END;
}
// ********** End Class UDTSpec Function GetCurrentPrcessCellIndex *********************************

// ********** Begin Class UDTSpec Function GetNextProcessCellIndex *********************************
struct Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex_Statics
{
	struct DTSpec_eventGetNextProcessCellIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTSpec_eventGetNextProcessCellIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTSpec, nullptr, "GetNextProcessCellIndex", Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex_Statics::DTSpec_eventGetNextProcessCellIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex_Statics::DTSpec_eventGetNextProcessCellIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTSpec::execGetNextProcessCellIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNextProcessCellIndex();
	P_NATIVE_END;
}
// ********** End Class UDTSpec Function GetNextProcessCellIndex ***********************************

// ********** Begin Class UDTSpec Function GetState ************************************************
struct Z_Construct_UFunction_UDTSpec_GetState_Statics
{
	struct DTSpec_eventGetState_Parms
	{
		EDTSpecState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDTSpec_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDTSpec_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTSpec_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_DT_EDTSpecState, METADATA_PARAMS(0, nullptr) }; // 2728181736
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTSpec_GetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTSpec_GetState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTSpec_GetState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_GetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTSpec_GetState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTSpec, nullptr, "GetState", Z_Construct_UFunction_UDTSpec_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_GetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTSpec_GetState_Statics::DTSpec_eventGetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTSpec_GetState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTSpec_GetState_Statics::DTSpec_eventGetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTSpec_GetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTSpec_GetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTSpec::execGetState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDTSpecState*)Z_Param__Result=P_THIS->GetState();
	P_NATIVE_END;
}
// ********** End Class UDTSpec Function GetState **************************************************

// ********** Begin Class UDTSpec Function InitSpec ************************************************
struct Z_Construct_UFunction_UDTSpec_InitSpec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTSpec_InitSpec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTSpec, nullptr, "InitSpec", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_InitSpec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTSpec_InitSpec_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDTSpec_InitSpec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTSpec_InitSpec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTSpec::execInitSpec)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitSpec();
	P_NATIVE_END;
}
// ********** End Class UDTSpec Function InitSpec **************************************************

// ********** Begin Class UDTSpec Function IsProcessCellFinished ***********************************
struct Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics
{
	struct DTSpec_eventIsProcessCellFinished_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DTSpec_eventIsProcessCellFinished_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DTSpec_eventIsProcessCellFinished_Parms), &Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTSpec, nullptr, "IsProcessCellFinished", Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics::DTSpec_eventIsProcessCellFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics::DTSpec_eventIsProcessCellFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTSpec_IsProcessCellFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTSpec_IsProcessCellFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTSpec::execIsProcessCellFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsProcessCellFinished();
	P_NATIVE_END;
}
// ********** End Class UDTSpec Function IsProcessCellFinished *************************************

// ********** Begin Class UDTSpec Function IsValidSpec *********************************************
struct Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics
{
	struct DTSpec_eventIsValidSpec_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DTSpec_eventIsValidSpec_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DTSpec_eventIsValidSpec_Parms), &Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTSpec, nullptr, "IsValidSpec", Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics::DTSpec_eventIsValidSpec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics::DTSpec_eventIsValidSpec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTSpec_IsValidSpec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTSpec_IsValidSpec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTSpec::execIsValidSpec)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidSpec();
	P_NATIVE_END;
}
// ********** End Class UDTSpec Function IsValidSpec ***********************************************

// ********** Begin Class UDTSpec Function SetNextProcessCellIndex *********************************
struct Z_Construct_UFunction_UDTSpec_SetNextProcessCellIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTSpec_SetNextProcessCellIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTSpec, nullptr, "SetNextProcessCellIndex", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_SetNextProcessCellIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTSpec_SetNextProcessCellIndex_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDTSpec_SetNextProcessCellIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTSpec_SetNextProcessCellIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTSpec::execSetNextProcessCellIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNextProcessCellIndex();
	P_NATIVE_END;
}
// ********** End Class UDTSpec Function SetNextProcessCellIndex ***********************************

// ********** Begin Class UDTSpec Function SetState ************************************************
struct Z_Construct_UFunction_UDTSpec_SetState_Statics
{
	struct DTSpec_eventSetState_Parms
	{
		EDTSpecState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDTSpec_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDTSpec_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTSpec_eventSetState_Parms, NewState), Z_Construct_UEnum_DT_EDTSpecState, METADATA_PARAMS(0, nullptr) }; // 2728181736
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTSpec_SetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTSpec_SetState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTSpec_SetState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_SetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTSpec_SetState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTSpec, nullptr, "SetState", Z_Construct_UFunction_UDTSpec_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_SetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTSpec_SetState_Statics::DTSpec_eventSetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTSpec_SetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTSpec_SetState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTSpec_SetState_Statics::DTSpec_eventSetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTSpec_SetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTSpec_SetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTSpec::execSetState)
{
	P_GET_ENUM(EDTSpecState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetState(EDTSpecState(Z_Param_NewState));
	P_NATIVE_END;
}
// ********** End Class UDTSpec Function SetState **************************************************

// ********** Begin Class UDTSpec ******************************************************************
void UDTSpec::StaticRegisterNativesUDTSpec()
{
	UClass* Class = UDTSpec::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentPrcessCellIndex", &UDTSpec::execGetCurrentPrcessCellIndex },
		{ "GetNextProcessCellIndex", &UDTSpec::execGetNextProcessCellIndex },
		{ "GetState", &UDTSpec::execGetState },
		{ "InitSpec", &UDTSpec::execInitSpec },
		{ "IsProcessCellFinished", &UDTSpec::execIsProcessCellFinished },
		{ "IsValidSpec", &UDTSpec::execIsValidSpec },
		{ "SetNextProcessCellIndex", &UDTSpec::execSetNextProcessCellIndex },
		{ "SetState", &UDTSpec::execSetState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTSpec;
UClass* UDTSpec::GetPrivateStaticClass()
{
	using TClass = UDTSpec;
	if (!Z_Registration_Info_UClass_UDTSpec.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTSpec"),
			Z_Registration_Info_UClass_UDTSpec.InnerSingleton,
			StaticRegisterNativesUDTSpec,
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
	return Z_Registration_Info_UClass_UDTSpec.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTSpec_NoRegister()
{
	return UDTSpec::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTSpec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Types/DTSpec.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Categories", "DT.Asset.Spec" },
		{ "Category", "DTSpec" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecDataAsset_MetaData[] = {
		{ "Category", "DTSpec" },
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessCellIndex_MetaData[] = {
		{ "Category", "DTSpec" },
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastProcessCellIndex_MetaData[] = {
		{ "Category", "DTSpec" },
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "DTSpec" },
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSpecStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Types/DTSpec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecTags_MetaData[] = {
		{ "Category", "DTSpec" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spec\xec\x9d\x98 \xeb\x82\xb4\xeb\xb6\x80 \xec\x83\x81\xed\x83\x9c\xeb\xa5\xbc \xeb\x82\x98\xed\x83\x80\xeb\x82\xb4\xeb\x8a\x94 \xed\x83\x9c\xea\xb7\xb8\xeb\xa1\x9c \xed\x91\x9c\xed\x98\x84\n" },
#endif
		{ "ModuleRelativePath", "Types/DTSpec.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spec\xec\x9d\x98 \xeb\x82\xb4\xeb\xb6\x80 \xec\x83\x81\xed\x83\x9c\xeb\xa5\xbc \xeb\x82\x98\xed\x83\x80\xeb\x82\xb4\xeb\x8a\x94 \xed\x83\x9c\xea\xb7\xb8\xeb\xa1\x9c \xed\x91\x9c\xed\x98\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecDataAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProcessCellIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastProcessCellIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpecStateChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTSpec_GetCurrentPrcessCellIndex, "GetCurrentPrcessCellIndex" }, // 3395190612
		{ &Z_Construct_UFunction_UDTSpec_GetNextProcessCellIndex, "GetNextProcessCellIndex" }, // 2650574700
		{ &Z_Construct_UFunction_UDTSpec_GetState, "GetState" }, // 1614837011
		{ &Z_Construct_UFunction_UDTSpec_InitSpec, "InitSpec" }, // 2024910154
		{ &Z_Construct_UFunction_UDTSpec_IsProcessCellFinished, "IsProcessCellFinished" }, // 2197669025
		{ &Z_Construct_UFunction_UDTSpec_IsValidSpec, "IsValidSpec" }, // 3316438707
		{ &Z_Construct_UFunction_UDTSpec_SetNextProcessCellIndex, "SetNextProcessCellIndex" }, // 3893982654
		{ &Z_Construct_UFunction_UDTSpec_SetState, "SetState" }, // 761511458
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTSpec>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDTSpec_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTSpec, Type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDTSpec_Statics::NewProp_SpecDataAsset = { "SpecDataAsset", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTSpec, SpecDataAsset), Z_Construct_UClass_UDTSpecDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecDataAsset_MetaData), NewProp_SpecDataAsset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDTSpec_Statics::NewProp_ProcessCellIndex = { "ProcessCellIndex", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTSpec, ProcessCellIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessCellIndex_MetaData), NewProp_ProcessCellIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDTSpec_Statics::NewProp_LastProcessCellIndex = { "LastProcessCellIndex", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTSpec, LastProcessCellIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastProcessCellIndex_MetaData), NewProp_LastProcessCellIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDTSpec_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDTSpec_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTSpec, State), Z_Construct_UEnum_DT_EDTSpecState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2728181736
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDTSpec_Statics::NewProp_OnSpecStateChanged = { "OnSpecStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTSpec, OnSpecStateChanged), Z_Construct_UDelegateFunction_DT_OnSpecStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSpecStateChanged_MetaData), NewProp_OnSpecStateChanged_MetaData) }; // 3747286561
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDTSpec_Statics::NewProp_SpecTags = { "SpecTags", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTSpec, SpecTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecTags_MetaData), NewProp_SpecTags_MetaData) }; // 2104890724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSpec_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSpec_Statics::NewProp_SpecDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSpec_Statics::NewProp_ProcessCellIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSpec_Statics::NewProp_LastProcessCellIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSpec_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSpec_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSpec_Statics::NewProp_OnSpecStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSpec_Statics::NewProp_SpecTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTSpec_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDTSpec_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTSpec_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDTSpec_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UDTSpec, IGameplayTagAssetInterface), false },  // 3636975782
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTSpec_Statics::ClassParams = {
	&UDTSpec::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDTSpec_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDTSpec_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTSpec_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTSpec_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTSpec()
{
	if (!Z_Registration_Info_UClass_UDTSpec.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTSpec.OuterSingleton, Z_Construct_UClass_UDTSpec_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTSpec.OuterSingleton;
}
UDTSpec::UDTSpec(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTSpec);
UDTSpec::~UDTSpec() {}
// ********** End Class UDTSpec ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTSpec_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTSpec, UDTSpec::StaticClass, TEXT("UDTSpec"), &Z_Registration_Info_UClass_UDTSpec, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTSpec), 2358412389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTSpec_h__Script_DT_948002797(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTSpec_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTSpec_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
