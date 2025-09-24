// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/AbilityTask/DTAT_LoadManagerComplete.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTAT_LoadManagerComplete() {}

// ********** Begin Cross Module References ********************************************************
DT_API UClass* Z_Construct_UClass_ADTGameMode_NoRegister();
DT_API UClass* Z_Construct_UClass_UDTAT_LoadManagerComplete();
DT_API UClass* Z_Construct_UClass_UDTAT_LoadManagerComplete_NoRegister();
DT_API UFunction* Z_Construct_UDelegateFunction_UDTAT_LoadManagerComplete_OnLoadManagerComplete__DelegateSignature();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnLoadManagerComplete ************************************************
struct Z_Construct_UDelegateFunction_UDTAT_LoadManagerComplete_OnLoadManagerComplete__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTask/DTAT_LoadManagerComplete.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UDTAT_LoadManagerComplete_OnLoadManagerComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTAT_LoadManagerComplete, nullptr, "OnLoadManagerComplete__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDTAT_LoadManagerComplete_OnLoadManagerComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDTAT_LoadManagerComplete_OnLoadManagerComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UDTAT_LoadManagerComplete_OnLoadManagerComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDTAT_LoadManagerComplete_OnLoadManagerComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDTAT_LoadManagerComplete::FOnLoadManagerComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLoadManagerComplete)
{
	OnLoadManagerComplete.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnLoadManagerComplete **************************************************

// ********** Begin Class UDTAT_LoadManagerComplete Function CreateWaitLoadManagerCompleted ********
struct Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics
{
	struct DTAT_LoadManagerComplete_eventCreateWaitLoadManagerCompleted_Parms
	{
		UGameplayAbility* OwningAbility;
		UDTAT_LoadManagerComplete* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "WaitLoadManagerCompleted" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTask/DTAT_LoadManagerComplete.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTAT_LoadManagerComplete_eventCreateWaitLoadManagerCompleted_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTAT_LoadManagerComplete_eventCreateWaitLoadManagerCompleted_Parms, ReturnValue), Z_Construct_UClass_UDTAT_LoadManagerComplete_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTAT_LoadManagerComplete, nullptr, "CreateWaitLoadManagerCompleted", Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics::DTAT_LoadManagerComplete_eventCreateWaitLoadManagerCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics::DTAT_LoadManagerComplete_eventCreateWaitLoadManagerCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTAT_LoadManagerComplete::execCreateWaitLoadManagerCompleted)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDTAT_LoadManagerComplete**)Z_Param__Result=UDTAT_LoadManagerComplete::CreateWaitLoadManagerCompleted(Z_Param_OwningAbility);
	P_NATIVE_END;
}
// ********** End Class UDTAT_LoadManagerComplete Function CreateWaitLoadManagerCompleted **********

// ********** Begin Class UDTAT_LoadManagerComplete Function NotifyLoadManagerComplete *************
struct Z_Construct_UFunction_UDTAT_LoadManagerComplete_NotifyLoadManagerComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTask/DTAT_LoadManagerComplete.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTAT_LoadManagerComplete_NotifyLoadManagerComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTAT_LoadManagerComplete, nullptr, "NotifyLoadManagerComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTAT_LoadManagerComplete_NotifyLoadManagerComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTAT_LoadManagerComplete_NotifyLoadManagerComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDTAT_LoadManagerComplete_NotifyLoadManagerComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTAT_LoadManagerComplete_NotifyLoadManagerComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTAT_LoadManagerComplete::execNotifyLoadManagerComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyLoadManagerComplete();
	P_NATIVE_END;
}
// ********** End Class UDTAT_LoadManagerComplete Function NotifyLoadManagerComplete ***************

// ********** Begin Class UDTAT_LoadManagerComplete ************************************************
void UDTAT_LoadManagerComplete::StaticRegisterNativesUDTAT_LoadManagerComplete()
{
	UClass* Class = UDTAT_LoadManagerComplete::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateWaitLoadManagerCompleted", &UDTAT_LoadManagerComplete::execCreateWaitLoadManagerCompleted },
		{ "NotifyLoadManagerComplete", &UDTAT_LoadManagerComplete::execNotifyLoadManagerComplete },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTAT_LoadManagerComplete;
UClass* UDTAT_LoadManagerComplete::GetPrivateStaticClass()
{
	using TClass = UDTAT_LoadManagerComplete;
	if (!Z_Registration_Info_UClass_UDTAT_LoadManagerComplete.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTAT_LoadManagerComplete"),
			Z_Registration_Info_UClass_UDTAT_LoadManagerComplete.InnerSingleton,
			StaticRegisterNativesUDTAT_LoadManagerComplete,
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
	return Z_Registration_Info_UClass_UDTAT_LoadManagerComplete.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTAT_LoadManagerComplete_NoRegister()
{
	return UDTAT_LoadManagerComplete::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AbilityTask/DTAT_LoadManagerComplete.h" },
		{ "ModuleRelativePath", "AbilitySystem/AbilityTask/DTAT_LoadManagerComplete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadManagerComplete_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTask/DTAT_LoadManagerComplete.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedGameMode_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/AbilityTask/DTAT_LoadManagerComplete.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadManagerComplete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedGameMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTAT_LoadManagerComplete_CreateWaitLoadManagerCompleted, "CreateWaitLoadManagerCompleted" }, // 2122897154
		{ &Z_Construct_UFunction_UDTAT_LoadManagerComplete_NotifyLoadManagerComplete, "NotifyLoadManagerComplete" }, // 488063976
		{ &Z_Construct_UDelegateFunction_UDTAT_LoadManagerComplete_OnLoadManagerComplete__DelegateSignature, "OnLoadManagerComplete__DelegateSignature" }, // 1769382993
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTAT_LoadManagerComplete>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics::NewProp_OnLoadManagerComplete = { "OnLoadManagerComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTAT_LoadManagerComplete, OnLoadManagerComplete), Z_Construct_UDelegateFunction_UDTAT_LoadManagerComplete_OnLoadManagerComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoadManagerComplete_MetaData), NewProp_OnLoadManagerComplete_MetaData) }; // 1769382993
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics::NewProp_CachedGameMode = { "CachedGameMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTAT_LoadManagerComplete, CachedGameMode), Z_Construct_UClass_ADTGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedGameMode_MetaData), NewProp_CachedGameMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics::NewProp_OnLoadManagerComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics::NewProp_CachedGameMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics::ClassParams = {
	&UDTAT_LoadManagerComplete::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTAT_LoadManagerComplete()
{
	if (!Z_Registration_Info_UClass_UDTAT_LoadManagerComplete.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTAT_LoadManagerComplete.OuterSingleton, Z_Construct_UClass_UDTAT_LoadManagerComplete_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTAT_LoadManagerComplete.OuterSingleton;
}
UDTAT_LoadManagerComplete::UDTAT_LoadManagerComplete(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTAT_LoadManagerComplete);
UDTAT_LoadManagerComplete::~UDTAT_LoadManagerComplete() {}
// ********** End Class UDTAT_LoadManagerComplete **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_AbilityTask_DTAT_LoadManagerComplete_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTAT_LoadManagerComplete, UDTAT_LoadManagerComplete::StaticClass, TEXT("UDTAT_LoadManagerComplete"), &Z_Registration_Info_UClass_UDTAT_LoadManagerComplete, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTAT_LoadManagerComplete), 352759395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_AbilityTask_DTAT_LoadManagerComplete_h__Script_DT_3936109412(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_AbilityTask_DTAT_LoadManagerComplete_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_AbilityTask_DTAT_LoadManagerComplete_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
