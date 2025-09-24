// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Library/RALibrary.h"
#include "Engine/EngineTypes.h"
#include "Manager/RAManagerBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRALibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseComponentReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftComponentReference();
RA_API UClass* Z_Construct_UClass_ARAManagerBase_NoRegister();
RA_API UClass* Z_Construct_UClass_URALibrary();
RA_API UClass* Z_Construct_UClass_URALibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_RA();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URALibrary Function GetRAManager *****************************************
struct Z_Construct_UFunction_URALibrary_GetRAManager_Statics
{
	struct RALibrary_eventGetRAManager_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<ARAManagerBase> ManagerClass;
		ARAManagerBase* Manager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RALibrary" },
		{ "DeterminesOutputType", "ManagerClass" },
		{ "DynamicOutputParam", "Manager" },
		{ "ModuleRelativePath", "Library/RALibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ManagerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URALibrary_GetRAManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RALibrary_eventGetRAManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URALibrary_GetRAManager_Statics::NewProp_ManagerClass = { "ManagerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RALibrary_eventGetRAManager_Parms, ManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARAManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URALibrary_GetRAManager_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RALibrary_eventGetRAManager_Parms, Manager), Z_Construct_UClass_ARAManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URALibrary_GetRAManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URALibrary_GetRAManager_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URALibrary_GetRAManager_Statics::NewProp_ManagerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URALibrary_GetRAManager_Statics::NewProp_Manager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_GetRAManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URALibrary_GetRAManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URALibrary, nullptr, "GetRAManager", Z_Construct_UFunction_URALibrary_GetRAManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_GetRAManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_URALibrary_GetRAManager_Statics::RALibrary_eventGetRAManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_GetRAManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_URALibrary_GetRAManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URALibrary_GetRAManager_Statics::RALibrary_eventGetRAManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URALibrary_GetRAManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URALibrary_GetRAManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URALibrary::execGetRAManager)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_ManagerClass);
	P_GET_OBJECT_REF(ARAManagerBase,Z_Param_Out_Manager);
	P_FINISH;
	P_NATIVE_BEGIN;
	URALibrary::GetRAManager(Z_Param_WorldContextObject,Z_Param_ManagerClass,P_ARG_GC_BARRIER(Z_Param_Out_Manager));
	P_NATIVE_END;
}
// ********** End Class URALibrary Function GetRAManager *******************************************

// ********** Begin Class URALibrary Function IsGameWorld ******************************************
struct Z_Construct_UFunction_URALibrary_IsGameWorld_Statics
{
	struct RALibrary_eventIsGameWorld_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RALibrary" },
		{ "ModuleRelativePath", "Library/RALibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RALibrary_eventIsGameWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RALibrary_eventIsGameWorld_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RALibrary_eventIsGameWorld_Parms), &Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URALibrary, nullptr, "IsGameWorld", Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::RALibrary_eventIsGameWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::RALibrary_eventIsGameWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URALibrary_IsGameWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URALibrary_IsGameWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URALibrary::execIsGameWorld)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URALibrary::IsGameWorld(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class URALibrary Function IsGameWorld ********************************************

// ********** Begin Class URALibrary Function ResolveBaseComponentReference ************************
struct Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics
{
	struct RALibrary_eventResolveBaseComponentReference_Parms
	{
		FBaseComponentReference ComponentReference;
		AActor* OwningActor;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RALibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint\xec\x97\x90\xec\x84\x9c \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4 \xed\x8f\xac\xec\x9d\xb8\xed\x8a\xb8 \xed\x97\x88\xec\x9a\xa9 \xec\x95\x88\xeb\x90\xa8\n//UFUNCTION(BlueprintPure, Category = \"RALibrary\")\n//static UActorComponent* ResolveComponentReference(FBaseComponentReference ComponentReference, AActor* OwningActor = nullptr);\n" },
#endif
		{ "CPP_Default_OwningActor", "None" },
		{ "ModuleRelativePath", "Library/RALibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint\xec\x97\x90\xec\x84\x9c \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4 \xed\x8f\xac\xec\x9d\xb8\xed\x8a\xb8 \xed\x97\x88\xec\x9a\xa9 \xec\x95\x88\xeb\x90\xa8\nUFUNCTION(BlueprintPure, Category = \"RALibrary\")\nstatic UActorComponent* ResolveComponentReference(FBaseComponentReference ComponentReference, AActor* OwningActor = nullptr);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::NewProp_ComponentReference = { "ComponentReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RALibrary_eventResolveBaseComponentReference_Parms, ComponentReference), Z_Construct_UScriptStruct_FBaseComponentReference, METADATA_PARAMS(0, nullptr) }; // 2908672070
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RALibrary_eventResolveBaseComponentReference_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RALibrary_eventResolveBaseComponentReference_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::NewProp_ComponentReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::NewProp_OwningActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URALibrary, nullptr, "ResolveBaseComponentReference", Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::RALibrary_eventResolveBaseComponentReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::RALibrary_eventResolveBaseComponentReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URALibrary::execResolveBaseComponentReference)
{
	P_GET_STRUCT(FBaseComponentReference,Z_Param_ComponentReference);
	P_GET_OBJECT(AActor,Z_Param_OwningActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=URALibrary::ResolveBaseComponentReference(Z_Param_ComponentReference,Z_Param_OwningActor);
	P_NATIVE_END;
}
// ********** End Class URALibrary Function ResolveBaseComponentReference **************************

// ********** Begin Class URALibrary Function ResolveComponentReference ****************************
struct Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics
{
	struct RALibrary_eventResolveComponentReference_Parms
	{
		FComponentReference ComponentReference;
		AActor* OwningActor;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RALibrary" },
		{ "CPP_Default_OwningActor", "None" },
		{ "ModuleRelativePath", "Library/RALibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::NewProp_ComponentReference = { "ComponentReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RALibrary_eventResolveComponentReference_Parms, ComponentReference), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(0, nullptr) }; // 2130483024
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RALibrary_eventResolveComponentReference_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RALibrary_eventResolveComponentReference_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::NewProp_ComponentReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::NewProp_OwningActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URALibrary, nullptr, "ResolveComponentReference", Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::RALibrary_eventResolveComponentReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::RALibrary_eventResolveComponentReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URALibrary_ResolveComponentReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URALibrary_ResolveComponentReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URALibrary::execResolveComponentReference)
{
	P_GET_STRUCT(FComponentReference,Z_Param_ComponentReference);
	P_GET_OBJECT(AActor,Z_Param_OwningActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=URALibrary::ResolveComponentReference(Z_Param_ComponentReference,Z_Param_OwningActor);
	P_NATIVE_END;
}
// ********** End Class URALibrary Function ResolveComponentReference ******************************

// ********** Begin Class URALibrary Function ResolveSoftComponentReference ************************
struct Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics
{
	struct RALibrary_eventResolveSoftComponentReference_Parms
	{
		FSoftComponentReference ComponentReference;
		AActor* OwningActor;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RALibrary" },
		{ "CPP_Default_OwningActor", "None" },
		{ "ModuleRelativePath", "Library/RALibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::NewProp_ComponentReference = { "ComponentReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RALibrary_eventResolveSoftComponentReference_Parms, ComponentReference), Z_Construct_UScriptStruct_FSoftComponentReference, METADATA_PARAMS(0, nullptr) }; // 3101759311
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RALibrary_eventResolveSoftComponentReference_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RALibrary_eventResolveSoftComponentReference_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::NewProp_ComponentReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::NewProp_OwningActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URALibrary, nullptr, "ResolveSoftComponentReference", Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::RALibrary_eventResolveSoftComponentReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::RALibrary_eventResolveSoftComponentReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URALibrary::execResolveSoftComponentReference)
{
	P_GET_STRUCT(FSoftComponentReference,Z_Param_ComponentReference);
	P_GET_OBJECT(AActor,Z_Param_OwningActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=URALibrary::ResolveSoftComponentReference(Z_Param_ComponentReference,Z_Param_OwningActor);
	P_NATIVE_END;
}
// ********** End Class URALibrary Function ResolveSoftComponentReference **************************

// ********** Begin Class URALibrary ***************************************************************
void URALibrary::StaticRegisterNativesURALibrary()
{
	UClass* Class = URALibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRAManager", &URALibrary::execGetRAManager },
		{ "IsGameWorld", &URALibrary::execIsGameWorld },
		{ "ResolveBaseComponentReference", &URALibrary::execResolveBaseComponentReference },
		{ "ResolveComponentReference", &URALibrary::execResolveComponentReference },
		{ "ResolveSoftComponentReference", &URALibrary::execResolveSoftComponentReference },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URALibrary;
UClass* URALibrary::GetPrivateStaticClass()
{
	using TClass = URALibrary;
	if (!Z_Registration_Info_UClass_URALibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RALibrary"),
			Z_Registration_Info_UClass_URALibrary.InnerSingleton,
			StaticRegisterNativesURALibrary,
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
	return Z_Registration_Info_UClass_URALibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_URALibrary_NoRegister()
{
	return URALibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URALibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Library/RALibrary.h" },
		{ "ModuleRelativePath", "Library/RALibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URALibrary_GetRAManager, "GetRAManager" }, // 3547849247
		{ &Z_Construct_UFunction_URALibrary_IsGameWorld, "IsGameWorld" }, // 576285553
		{ &Z_Construct_UFunction_URALibrary_ResolveBaseComponentReference, "ResolveBaseComponentReference" }, // 1546040124
		{ &Z_Construct_UFunction_URALibrary_ResolveComponentReference, "ResolveComponentReference" }, // 3980024297
		{ &Z_Construct_UFunction_URALibrary_ResolveSoftComponentReference, "ResolveSoftComponentReference" }, // 71595798
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URALibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URALibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URALibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URALibrary_Statics::ClassParams = {
	&URALibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URALibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URALibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URALibrary()
{
	if (!Z_Registration_Info_UClass_URALibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URALibrary.OuterSingleton, Z_Construct_UClass_URALibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URALibrary.OuterSingleton;
}
URALibrary::URALibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URALibrary);
URALibrary::~URALibrary() {}
// ********** End Class URALibrary *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RALibrary_h__Script_RA_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URALibrary, URALibrary::StaticClass, TEXT("URALibrary"), &Z_Registration_Info_UClass_URALibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URALibrary), 3193689872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RALibrary_h__Script_RA_3894130187(TEXT("/Script/RA"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RALibrary_h__Script_RA_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RALibrary_h__Script_RA_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
