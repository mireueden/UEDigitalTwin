// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manager/DTManagerBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTManagerBase() {}

// ********** Begin Cross Module References ********************************************************
DT_API UClass* Z_Construct_UClass_ADTActor();
DT_API UClass* Z_Construct_UClass_ADTManagerBase();
DT_API UClass* Z_Construct_UClass_ADTManagerBase_NoRegister();
DT_API UEnum* Z_Construct_UEnum_DT_EDTManagerLoadState();
DT_API UFunction* Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnManagerLoadComplete ************************************************
struct Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature_Statics
{
	struct _Script_DT_eventOnManagerLoadComplete_Parms
	{
		ADTManagerBase* Manager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/DTManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DT_eventOnManagerLoadComplete_Parms, Manager), Z_Construct_UClass_ADTManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature_Statics::NewProp_Manager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DT, nullptr, "OnManagerLoadComplete__DelegateSignature", Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature_Statics::_Script_DT_eventOnManagerLoadComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature_Statics::_Script_DT_eventOnManagerLoadComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnManagerLoadComplete_DelegateWrapper(const FMulticastScriptDelegate& OnManagerLoadComplete, ADTManagerBase* Manager)
{
	struct _Script_DT_eventOnManagerLoadComplete_Parms
	{
		ADTManagerBase* Manager;
	};
	_Script_DT_eventOnManagerLoadComplete_Parms Parms;
	Parms.Manager=Manager;
	OnManagerLoadComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnManagerLoadComplete **************************************************

// ********** Begin Enum EDTManagerLoadState *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDTManagerLoadState;
static UEnum* EDTManagerLoadState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDTManagerLoadState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDTManagerLoadState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DT_EDTManagerLoadState, (UObject*)Z_Construct_UPackage__Script_DT(), TEXT("EDTManagerLoadState"));
	}
	return Z_Registration_Info_UEnum_EDTManagerLoadState.OuterSingleton;
}
template<> DT_API UEnum* StaticEnum<EDTManagerLoadState>()
{
	return EDTManagerLoadState_StaticEnum();
}
struct Z_Construct_UEnum_DT_EDTManagerLoadState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Loaded.Name", "EDTManagerLoadState::Loaded" },
		{ "Loading.Name", "EDTManagerLoadState::Loading" },
		{ "ModuleRelativePath", "Manager/DTManagerBase.h" },
		{ "Unloaded.Name", "EDTManagerLoadState::Unloaded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDTManagerLoadState::Unloaded", (int64)EDTManagerLoadState::Unloaded },
		{ "EDTManagerLoadState::Loading", (int64)EDTManagerLoadState::Loading },
		{ "EDTManagerLoadState::Loaded", (int64)EDTManagerLoadState::Loaded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DT_EDTManagerLoadState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DT,
	nullptr,
	"EDTManagerLoadState",
	"EDTManagerLoadState",
	Z_Construct_UEnum_DT_EDTManagerLoadState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DT_EDTManagerLoadState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DT_EDTManagerLoadState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DT_EDTManagerLoadState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DT_EDTManagerLoadState()
{
	if (!Z_Registration_Info_UEnum_EDTManagerLoadState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDTManagerLoadState.InnerSingleton, Z_Construct_UEnum_DT_EDTManagerLoadState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDTManagerLoadState.InnerSingleton;
}
// ********** End Enum EDTManagerLoadState *********************************************************

// ********** Begin Class ADTManagerBase Function IsLoaded *****************************************
struct Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics
{
	struct DTManagerBase_eventIsLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/DTManagerBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DTManagerBase_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DTManagerBase_eventIsLoaded_Parms), &Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTManagerBase, nullptr, "IsLoaded", Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics::DTManagerBase_eventIsLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics::DTManagerBase_eventIsLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTManagerBase_IsLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTManagerBase_IsLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTManagerBase::execIsLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLoaded();
	P_NATIVE_END;
}
// ********** End Class ADTManagerBase Function IsLoaded *******************************************

// ********** Begin Class ADTManagerBase Function LoadManager **************************************
static FName NAME_ADTManagerBase_LoadManager = FName(TEXT("LoadManager"));
void ADTManagerBase::LoadManager()
{
	UFunction* Func = FindFunctionChecked(NAME_ADTManagerBase_LoadManager);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		LoadManager_Implementation();
	}
}
struct Z_Construct_UFunction_ADTManagerBase_LoadManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/DTManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTManagerBase_LoadManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTManagerBase, nullptr, "LoadManager", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTManagerBase_LoadManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTManagerBase_LoadManager_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADTManagerBase_LoadManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTManagerBase_LoadManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTManagerBase::execLoadManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadManager_Implementation();
	P_NATIVE_END;
}
// ********** End Class ADTManagerBase Function LoadManager ****************************************

// ********** Begin Class ADTManagerBase Function TryNotifyLoadCompleted ***************************
struct Z_Construct_UFunction_ADTManagerBase_TryNotifyLoadCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/DTManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTManagerBase_TryNotifyLoadCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTManagerBase, nullptr, "TryNotifyLoadCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTManagerBase_TryNotifyLoadCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTManagerBase_TryNotifyLoadCompleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADTManagerBase_TryNotifyLoadCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTManagerBase_TryNotifyLoadCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTManagerBase::execTryNotifyLoadCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryNotifyLoadCompleted();
	P_NATIVE_END;
}
// ********** End Class ADTManagerBase Function TryNotifyLoadCompleted *****************************

// ********** Begin Class ADTManagerBase ***********************************************************
void ADTManagerBase::StaticRegisterNativesADTManagerBase()
{
	UClass* Class = ADTManagerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsLoaded", &ADTManagerBase::execIsLoaded },
		{ "LoadManager", &ADTManagerBase::execLoadManager },
		{ "TryNotifyLoadCompleted", &ADTManagerBase::execTryNotifyLoadCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADTManagerBase;
UClass* ADTManagerBase::GetPrivateStaticClass()
{
	using TClass = ADTManagerBase;
	if (!Z_Registration_Info_UClass_ADTManagerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTManagerBase"),
			Z_Registration_Info_UClass_ADTManagerBase.InnerSingleton,
			StaticRegisterNativesADTManagerBase,
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
	return Z_Registration_Info_UClass_ADTManagerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ADTManagerBase_NoRegister()
{
	return ADTManagerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADTManagerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Manager/DTManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Manager/DTManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Manager/DTManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadState_MetaData[] = {
		{ "Category", "DTManagerBase" },
		{ "ModuleRelativePath", "Manager/DTManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadCompleted;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoadState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADTManagerBase_IsLoaded, "IsLoaded" }, // 4016024336
		{ &Z_Construct_UFunction_ADTManagerBase_LoadManager, "LoadManager" }, // 3200102226
		{ &Z_Construct_UFunction_ADTManagerBase_TryNotifyLoadCompleted, "TryNotifyLoadCompleted" }, // 1706369195
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTManagerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADTManagerBase_Statics::NewProp_OnLoadCompleted = { "OnLoadCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTManagerBase, OnLoadCompleted), Z_Construct_UDelegateFunction_DT_OnManagerLoadComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoadCompleted_MetaData), NewProp_OnLoadCompleted_MetaData) }; // 3712594827
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADTManagerBase_Statics::NewProp_LoadState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADTManagerBase_Statics::NewProp_LoadState = { "LoadState", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTManagerBase, LoadState), Z_Construct_UEnum_DT_EDTManagerLoadState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadState_MetaData), NewProp_LoadState_MetaData) }; // 2555623614
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTManagerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTManagerBase_Statics::NewProp_OnLoadCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTManagerBase_Statics::NewProp_LoadState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTManagerBase_Statics::NewProp_LoadState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTManagerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTManagerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADTActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTManagerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTManagerBase_Statics::ClassParams = {
	&ADTManagerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADTManagerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTManagerBase_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTManagerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTManagerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTManagerBase()
{
	if (!Z_Registration_Info_UClass_ADTManagerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTManagerBase.OuterSingleton, Z_Construct_UClass_ADTManagerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTManagerBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTManagerBase);
ADTManagerBase::~ADTManagerBase() {}
// ********** End Class ADTManagerBase *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h__Script_DT_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDTManagerLoadState_StaticEnum, TEXT("EDTManagerLoadState"), &Z_Registration_Info_UEnum_EDTManagerLoadState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2555623614U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTManagerBase, ADTManagerBase::StaticClass, TEXT("ADTManagerBase"), &Z_Registration_Info_UClass_ADTManagerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTManagerBase), 3447535321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h__Script_DT_2833681493(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h__Script_DT_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTManagerBase_h__Script_DT_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
