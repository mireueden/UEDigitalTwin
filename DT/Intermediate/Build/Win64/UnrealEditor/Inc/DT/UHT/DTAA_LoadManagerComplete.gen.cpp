// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncAction/DTAA_LoadManagerComplete.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTAA_LoadManagerComplete() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DT_API UClass* Z_Construct_UClass_ADTGameMode_NoRegister();
DT_API UClass* Z_Construct_UClass_UDTAA_LoadManagerComplete();
DT_API UClass* Z_Construct_UClass_UDTAA_LoadManagerComplete_NoRegister();
DT_API UFunction* Z_Construct_UDelegateFunction_DT_OnLoadManagerComplete__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnLoadManagerComplete ************************************************
struct Z_Construct_UDelegateFunction_DT_OnLoadManagerComplete__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncAction/DTAA_LoadManagerComplete.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DT_OnLoadManagerComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DT, nullptr, "OnLoadManagerComplete__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_OnLoadManagerComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DT_OnLoadManagerComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_DT_OnLoadManagerComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DT_OnLoadManagerComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLoadManagerComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLoadManagerComplete)
{
	OnLoadManagerComplete.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnLoadManagerComplete **************************************************

// ********** Begin Class UDTAA_LoadManagerComplete Function CreateListenLoadManagerCompleted ******
struct Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics
{
	struct DTAA_LoadManagerComplete_eventCreateListenLoadManagerCompleted_Parms
	{
		UObject* WorldContextObject;
		UDTAA_LoadManagerComplete* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "ListenLoadManagerCompleted" },
		{ "ModuleRelativePath", "AsyncAction/DTAA_LoadManagerComplete.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTAA_LoadManagerComplete_eventCreateListenLoadManagerCompleted_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTAA_LoadManagerComplete_eventCreateListenLoadManagerCompleted_Parms, ReturnValue), Z_Construct_UClass_UDTAA_LoadManagerComplete_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTAA_LoadManagerComplete, nullptr, "CreateListenLoadManagerCompleted", Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics::DTAA_LoadManagerComplete_eventCreateListenLoadManagerCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics::DTAA_LoadManagerComplete_eventCreateListenLoadManagerCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTAA_LoadManagerComplete::execCreateListenLoadManagerCompleted)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDTAA_LoadManagerComplete**)Z_Param__Result=UDTAA_LoadManagerComplete::CreateListenLoadManagerCompleted(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UDTAA_LoadManagerComplete Function CreateListenLoadManagerCompleted ********

// ********** Begin Class UDTAA_LoadManagerComplete Function NotifyLoadManagerComplete *************
struct Z_Construct_UFunction_UDTAA_LoadManagerComplete_NotifyLoadManagerComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncAction/DTAA_LoadManagerComplete.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTAA_LoadManagerComplete_NotifyLoadManagerComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTAA_LoadManagerComplete, nullptr, "NotifyLoadManagerComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAA_LoadManagerComplete_NotifyLoadManagerComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTAA_LoadManagerComplete_NotifyLoadManagerComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDTAA_LoadManagerComplete_NotifyLoadManagerComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTAA_LoadManagerComplete_NotifyLoadManagerComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTAA_LoadManagerComplete::execNotifyLoadManagerComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyLoadManagerComplete();
	P_NATIVE_END;
}
// ********** End Class UDTAA_LoadManagerComplete Function NotifyLoadManagerComplete ***************

// ********** Begin Class UDTAA_LoadManagerComplete ************************************************
void UDTAA_LoadManagerComplete::StaticRegisterNativesUDTAA_LoadManagerComplete()
{
	UClass* Class = UDTAA_LoadManagerComplete::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateListenLoadManagerCompleted", &UDTAA_LoadManagerComplete::execCreateListenLoadManagerCompleted },
		{ "NotifyLoadManagerComplete", &UDTAA_LoadManagerComplete::execNotifyLoadManagerComplete },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTAA_LoadManagerComplete;
UClass* UDTAA_LoadManagerComplete::GetPrivateStaticClass()
{
	using TClass = UDTAA_LoadManagerComplete;
	if (!Z_Registration_Info_UClass_UDTAA_LoadManagerComplete.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTAA_LoadManagerComplete"),
			Z_Registration_Info_UClass_UDTAA_LoadManagerComplete.InnerSingleton,
			StaticRegisterNativesUDTAA_LoadManagerComplete,
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
	return Z_Registration_Info_UClass_UDTAA_LoadManagerComplete.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTAA_LoadManagerComplete_NoRegister()
{
	return UDTAA_LoadManagerComplete::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AsyncAction/DTAA_LoadManagerComplete.h" },
		{ "ModuleRelativePath", "AsyncAction/DTAA_LoadManagerComplete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadManagerComplete_MetaData[] = {
		{ "ModuleRelativePath", "AsyncAction/DTAA_LoadManagerComplete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedGameMode_MetaData[] = {
		{ "ModuleRelativePath", "AsyncAction/DTAA_LoadManagerComplete.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadManagerComplete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedGameMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTAA_LoadManagerComplete_CreateListenLoadManagerCompleted, "CreateListenLoadManagerCompleted" }, // 3649758268
		{ &Z_Construct_UFunction_UDTAA_LoadManagerComplete_NotifyLoadManagerComplete, "NotifyLoadManagerComplete" }, // 3630259500
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTAA_LoadManagerComplete>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics::NewProp_OnLoadManagerComplete = { "OnLoadManagerComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTAA_LoadManagerComplete, OnLoadManagerComplete), Z_Construct_UDelegateFunction_DT_OnLoadManagerComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoadManagerComplete_MetaData), NewProp_OnLoadManagerComplete_MetaData) }; // 520534784
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics::NewProp_CachedGameMode = { "CachedGameMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTAA_LoadManagerComplete, CachedGameMode), Z_Construct_UClass_ADTGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedGameMode_MetaData), NewProp_CachedGameMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics::NewProp_OnLoadManagerComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics::NewProp_CachedGameMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics::ClassParams = {
	&UDTAA_LoadManagerComplete::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTAA_LoadManagerComplete()
{
	if (!Z_Registration_Info_UClass_UDTAA_LoadManagerComplete.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTAA_LoadManagerComplete.OuterSingleton, Z_Construct_UClass_UDTAA_LoadManagerComplete_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTAA_LoadManagerComplete.OuterSingleton;
}
UDTAA_LoadManagerComplete::UDTAA_LoadManagerComplete(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTAA_LoadManagerComplete);
UDTAA_LoadManagerComplete::~UDTAA_LoadManagerComplete() {}
// ********** End Class UDTAA_LoadManagerComplete **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AsyncAction_DTAA_LoadManagerComplete_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTAA_LoadManagerComplete, UDTAA_LoadManagerComplete::StaticClass, TEXT("UDTAA_LoadManagerComplete"), &Z_Registration_Info_UClass_UDTAA_LoadManagerComplete, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTAA_LoadManagerComplete), 3865051308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AsyncAction_DTAA_LoadManagerComplete_h__Script_DT_3714162181(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AsyncAction_DTAA_LoadManagerComplete_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AsyncAction_DTAA_LoadManagerComplete_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
