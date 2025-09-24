// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manager/RAInventoryManager.h"
#include "Types/RADefine.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRAInventoryManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
RA_API UClass* Z_Construct_UClass_ARAInventoryManager();
RA_API UClass* Z_Construct_UClass_ARAInventoryManager_NoRegister();
RA_API UClass* Z_Construct_UClass_ARAManagerBase();
RA_API UFunction* Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature();
RA_API UFunction* Z_Construct_UDelegateFunction_RA_OnItemHistoryChangedDelegate__DelegateSignature();
RA_API UScriptStruct* Z_Construct_UScriptStruct_FRAItemHistory();
RA_API UScriptStruct* Z_Construct_UScriptStruct_FRAItemSpec();
UPackage* Z_Construct_UPackage__Script_RA();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnItemHistoryChangedDelegate *****************************************
struct Z_Construct_UDelegateFunction_RA_OnItemHistoryChangedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RA_OnItemHistoryChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RA, nullptr, "OnItemHistoryChangedDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_OnItemHistoryChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RA_OnItemHistoryChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_RA_OnItemHistoryChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RA_OnItemHistoryChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemHistoryChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnItemHistoryChangedDelegate)
{
	OnItemHistoryChangedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnItemHistoryChangedDelegate *******************************************

// ********** Begin Delegate FOnItemChangedDelegate ************************************************
struct Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics
{
	struct _Script_RA_eventOnItemChangedDelegate_Parms
	{
		FName ItemName;
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RA_eventOnItemChangedDelegate_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RA_eventOnItemChangedDelegate_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RA, nullptr, "OnItemChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics::_Script_RA_eventOnItemChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics::_Script_RA_eventOnItemChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnItemChangedDelegate, FName ItemName, int32 Count)
{
	struct _Script_RA_eventOnItemChangedDelegate_Parms
	{
		FName ItemName;
		int32 Count;
	};
	_Script_RA_eventOnItemChangedDelegate_Parms Parms;
	Parms.ItemName=ItemName;
	Parms.Count=Count;
	OnItemChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemChangedDelegate **************************************************

// ********** Begin Class ARAInventoryManager Function AddItemHistory ******************************
struct Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics
{
	struct RAInventoryManager_eventAddItemHistory_Parms
	{
		FName SpecName;
		int32 Count;
		bool bStockDirection;
		FDateTime Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInventoryManager" },
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpecName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_bStockDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStockDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::NewProp_SpecName = { "SpecName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventAddItemHistory_Parms, SpecName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventAddItemHistory_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::NewProp_bStockDirection_SetBit(void* Obj)
{
	((RAInventoryManager_eventAddItemHistory_Parms*)Obj)->bStockDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::NewProp_bStockDirection = { "bStockDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RAInventoryManager_eventAddItemHistory_Parms), &Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::NewProp_bStockDirection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventAddItemHistory_Parms, Time), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::NewProp_SpecName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::NewProp_bStockDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAInventoryManager, nullptr, "AddItemHistory", Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::RAInventoryManager_eventAddItemHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::RAInventoryManager_eventAddItemHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARAInventoryManager_AddItemHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAInventoryManager_AddItemHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAInventoryManager::execAddItemHistory)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SpecName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_GET_UBOOL(Z_Param_bStockDirection);
	P_GET_STRUCT(FDateTime,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemHistory(Z_Param_SpecName,Z_Param_Count,Z_Param_bStockDirection,Z_Param_Time);
	P_NATIVE_END;
}
// ********** End Class ARAInventoryManager Function AddItemHistory ********************************

// ********** Begin Class ARAInventoryManager Function AddItemHistoryEx ****************************
struct Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx_Statics
{
	struct RAInventoryManager_eventAddItemHistoryEx_Parms
	{
		FRAItemHistory NewHistory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInventoryManager" },
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewHistory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewHistory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx_Statics::NewProp_NewHistory = { "NewHistory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventAddItemHistoryEx_Parms, NewHistory), Z_Construct_UScriptStruct_FRAItemHistory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewHistory_MetaData), NewProp_NewHistory_MetaData) }; // 247344417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx_Statics::NewProp_NewHistory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAInventoryManager, nullptr, "AddItemHistoryEx", Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx_Statics::RAInventoryManager_eventAddItemHistoryEx_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx_Statics::RAInventoryManager_eventAddItemHistoryEx_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAInventoryManager::execAddItemHistoryEx)
{
	P_GET_STRUCT_REF(FRAItemHistory,Z_Param_Out_NewHistory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemHistoryEx(Z_Param_Out_NewHistory);
	P_NATIVE_END;
}
// ********** End Class ARAInventoryManager Function AddItemHistoryEx ******************************

// ********** Begin Class ARAInventoryManager Function GetItemCount ********************************
struct Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics
{
	struct RAInventoryManager_eventGetItemCount_Parms
	{
		FName ItemName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInventoryManager" },
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventGetItemCount_Parms, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventGetItemCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAInventoryManager, nullptr, "GetItemCount", Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics::RAInventoryManager_eventGetItemCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics::RAInventoryManager_eventGetItemCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARAInventoryManager_GetItemCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAInventoryManager_GetItemCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAInventoryManager::execGetItemCount)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ItemName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetItemCount(Z_Param_Out_ItemName);
	P_NATIVE_END;
}
// ********** End Class ARAInventoryManager Function GetItemCount **********************************

// ********** Begin Class ARAInventoryManager Function GetItemHistory ******************************
struct Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics
{
	struct RAInventoryManager_eventGetItemHistory_Parms
	{
		TArray<FRAItemHistory> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInventoryManager" },
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRAItemHistory, METADATA_PARAMS(0, nullptr) }; // 247344417
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventGetItemHistory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 247344417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAInventoryManager, nullptr, "GetItemHistory", Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics::RAInventoryManager_eventGetItemHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics::RAInventoryManager_eventGetItemHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARAInventoryManager_GetItemHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAInventoryManager_GetItemHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAInventoryManager::execGetItemHistory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRAItemHistory>*)Z_Param__Result=P_THIS->GetItemHistory();
	P_NATIVE_END;
}
// ********** End Class ARAInventoryManager Function GetItemHistory ********************************

// ********** Begin Class ARAInventoryManager Function GetItemSpec *********************************
struct Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics
{
	struct RAInventoryManager_eventGetItemSpec_Parms
	{
		FName Row;
		FRAItemSpec ItemSpec;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInventoryManager" },
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Row;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSpec;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventGetItemSpec_Parms, Row), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::NewProp_ItemSpec = { "ItemSpec", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventGetItemSpec_Parms, ItemSpec), Z_Construct_UScriptStruct_FRAItemSpec, METADATA_PARAMS(0, nullptr) }; // 2912931229
void Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RAInventoryManager_eventGetItemSpec_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RAInventoryManager_eventGetItemSpec_Parms), &Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::NewProp_ItemSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAInventoryManager, nullptr, "GetItemSpec", Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::RAInventoryManager_eventGetItemSpec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::RAInventoryManager_eventGetItemSpec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARAInventoryManager_GetItemSpec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAInventoryManager_GetItemSpec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAInventoryManager::execGetItemSpec)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Row);
	P_GET_STRUCT_REF(FRAItemSpec,Z_Param_Out_ItemSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetItemSpec(Z_Param_Out_Row,Z_Param_Out_ItemSpec);
	P_NATIVE_END;
}
// ********** End Class ARAInventoryManager Function GetItemSpec ***********************************

// ********** Begin Class ARAInventoryManager Function IncomingItem ********************************
struct Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics
{
	struct RAInventoryManager_eventIncomingItem_Parms
	{
		FName ItemName;
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInventoryManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9e\x85\xea\xb3\xa0\n" },
#endif
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9e\x85\xea\xb3\xa0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventIncomingItem_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventIncomingItem_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAInventoryManager, nullptr, "IncomingItem", Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics::RAInventoryManager_eventIncomingItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics::RAInventoryManager_eventIncomingItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARAInventoryManager_IncomingItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAInventoryManager_IncomingItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAInventoryManager::execIncomingItem)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncomingItem(Z_Param_ItemName,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class ARAInventoryManager Function IncomingItem **********************************

// ********** Begin Class ARAInventoryManager Function IsItemEnough ********************************
struct Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics
{
	struct RAInventoryManager_eventIsItemEnough_Parms
	{
		FName ItemName;
		int32 Count;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInventoryManager" },
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventIsItemEnough_Parms, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventIsItemEnough_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RAInventoryManager_eventIsItemEnough_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RAInventoryManager_eventIsItemEnough_Parms), &Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAInventoryManager, nullptr, "IsItemEnough", Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::RAInventoryManager_eventIsItemEnough_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::RAInventoryManager_eventIsItemEnough_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARAInventoryManager_IsItemEnough()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAInventoryManager_IsItemEnough_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAInventoryManager::execIsItemEnough)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ItemName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsItemEnough(Z_Param_Out_ItemName,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class ARAInventoryManager Function IsItemEnough **********************************

// ********** Begin Class ARAInventoryManager Function OutgoingItem ********************************
struct Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics
{
	struct RAInventoryManager_eventOutgoingItem_Parms
	{
		FName ItemName;
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAInventoryManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb6\x9c\xea\xb3\xa0\n" },
#endif
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb6\x9c\xea\xb3\xa0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventOutgoingItem_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAInventoryManager_eventOutgoingItem_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAInventoryManager, nullptr, "OutgoingItem", Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics::RAInventoryManager_eventOutgoingItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics::RAInventoryManager_eventOutgoingItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARAInventoryManager_OutgoingItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAInventoryManager_OutgoingItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAInventoryManager::execOutgoingItem)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OutgoingItem(Z_Param_ItemName,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class ARAInventoryManager Function OutgoingItem **********************************

// ********** Begin Class ARAInventoryManager ******************************************************
void ARAInventoryManager::StaticRegisterNativesARAInventoryManager()
{
	UClass* Class = ARAInventoryManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemHistory", &ARAInventoryManager::execAddItemHistory },
		{ "AddItemHistoryEx", &ARAInventoryManager::execAddItemHistoryEx },
		{ "GetItemCount", &ARAInventoryManager::execGetItemCount },
		{ "GetItemHistory", &ARAInventoryManager::execGetItemHistory },
		{ "GetItemSpec", &ARAInventoryManager::execGetItemSpec },
		{ "IncomingItem", &ARAInventoryManager::execIncomingItem },
		{ "IsItemEnough", &ARAInventoryManager::execIsItemEnough },
		{ "OutgoingItem", &ARAInventoryManager::execOutgoingItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARAInventoryManager;
UClass* ARAInventoryManager::GetPrivateStaticClass()
{
	using TClass = ARAInventoryManager;
	if (!Z_Registration_Info_UClass_ARAInventoryManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RAInventoryManager"),
			Z_Registration_Info_UClass_ARAInventoryManager.InnerSingleton,
			StaticRegisterNativesARAInventoryManager,
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
	return Z_Registration_Info_UClass_ARAInventoryManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ARAInventoryManager_NoRegister()
{
	return ARAInventoryManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARAInventoryManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Manager/RAInventoryManager.h" },
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTable_MetaData[] = {
		{ "Category", "RAInventoryManager" },
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemHistory_MetaData[] = {
		{ "Category", "RAInventoryManager" },
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemHistoryChanged_MetaData[] = {
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemStockMap_MetaData[] = {
		{ "Category", "RAInventoryManager" },
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnIncomingItem_MetaData[] = {
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOutgoingItem_MetaData[] = {
		{ "ModuleRelativePath", "Manager/RAInventoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemHistory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemHistory;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemHistoryChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemStockMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemStockMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ItemStockMap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIncomingItem;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOutgoingItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARAInventoryManager_AddItemHistory, "AddItemHistory" }, // 558625480
		{ &Z_Construct_UFunction_ARAInventoryManager_AddItemHistoryEx, "AddItemHistoryEx" }, // 4196810094
		{ &Z_Construct_UFunction_ARAInventoryManager_GetItemCount, "GetItemCount" }, // 1108127908
		{ &Z_Construct_UFunction_ARAInventoryManager_GetItemHistory, "GetItemHistory" }, // 2974975376
		{ &Z_Construct_UFunction_ARAInventoryManager_GetItemSpec, "GetItemSpec" }, // 2386022151
		{ &Z_Construct_UFunction_ARAInventoryManager_IncomingItem, "IncomingItem" }, // 2586746994
		{ &Z_Construct_UFunction_ARAInventoryManager_IsItemEnough, "IsItemEnough" }, // 2581696535
		{ &Z_Construct_UFunction_ARAInventoryManager_OutgoingItem, "OutgoingItem" }, // 3603079307
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARAInventoryManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_ItemTable = { "ItemTable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAInventoryManager, ItemTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTable_MetaData), NewProp_ItemTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_ItemHistory_Inner = { "ItemHistory", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRAItemHistory, METADATA_PARAMS(0, nullptr) }; // 247344417
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_ItemHistory = { "ItemHistory", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAInventoryManager, ItemHistory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemHistory_MetaData), NewProp_ItemHistory_MetaData) }; // 247344417
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_OnItemHistoryChanged = { "OnItemHistoryChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAInventoryManager, OnItemHistoryChanged), Z_Construct_UDelegateFunction_RA_OnItemHistoryChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemHistoryChanged_MetaData), NewProp_OnItemHistoryChanged_MetaData) }; // 2005600814
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_ItemStockMap_ValueProp = { "ItemStockMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_ItemStockMap_Key_KeyProp = { "ItemStockMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_ItemStockMap = { "ItemStockMap", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAInventoryManager, ItemStockMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemStockMap_MetaData), NewProp_ItemStockMap_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_OnIncomingItem = { "OnIncomingItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAInventoryManager, OnIncomingItem), Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnIncomingItem_MetaData), NewProp_OnIncomingItem_MetaData) }; // 697555459
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_OnOutgoingItem = { "OnOutgoingItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAInventoryManager, OnOutgoingItem), Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOutgoingItem_MetaData), NewProp_OnOutgoingItem_MetaData) }; // 697555459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARAInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_ItemTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_ItemHistory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_ItemHistory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_OnItemHistoryChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_ItemStockMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_ItemStockMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_ItemStockMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_OnIncomingItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAInventoryManager_Statics::NewProp_OnOutgoingItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARAInventoryManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARAInventoryManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARAManagerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARAInventoryManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARAInventoryManager_Statics::ClassParams = {
	&ARAInventoryManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARAInventoryManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARAInventoryManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARAInventoryManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ARAInventoryManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARAInventoryManager()
{
	if (!Z_Registration_Info_UClass_ARAInventoryManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARAInventoryManager.OuterSingleton, Z_Construct_UClass_ARAInventoryManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARAInventoryManager.OuterSingleton;
}
ARAInventoryManager::ARAInventoryManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARAInventoryManager);
ARAInventoryManager::~ARAInventoryManager() {}
// ********** End Class ARAInventoryManager ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h__Script_RA_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARAInventoryManager, ARAInventoryManager::StaticClass, TEXT("ARAInventoryManager"), &Z_Registration_Info_UClass_ARAInventoryManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARAInventoryManager), 3334941045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h__Script_RA_3069232834(TEXT("/Script/RA"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h__Script_RA_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAInventoryManager_h__Script_RA_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
