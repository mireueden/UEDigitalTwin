// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manager/DTFactoryManager.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTFactoryManager() {}

// ********** Begin Cross Module References ********************************************************
DT_API UClass* Z_Construct_UClass_ADTFactoryManager();
DT_API UClass* Z_Construct_UClass_ADTFactoryManager_NoRegister();
DT_API UClass* Z_Construct_UClass_ADTManagerBase();
DT_API UClass* Z_Construct_UClass_ADTTargetPoint_NoRegister();
DT_API UClass* Z_Construct_UClass_UDTAbilitySystemComponent_NoRegister();
DT_API UClass* Z_Construct_UClass_UDTTargetPointInterface_NoRegister();
DT_API UFunction* Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRegisterChangedDelegate ********************************************
struct Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature_Statics
{
	struct _Script_DT_eventOnRegisterChangedDelegate_Parms
	{
		UDTAbilitySystemComponent* ASC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/DTFactoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DT_eventOnRegisterChangedDelegate_Parms, ASC), Z_Construct_UClass_UDTAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature_Statics::NewProp_ASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DT, nullptr, "OnRegisterChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature_Statics::_Script_DT_eventOnRegisterChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature_Statics::_Script_DT_eventOnRegisterChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRegisterChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRegisterChangedDelegate, UDTAbilitySystemComponent* ASC)
{
	struct _Script_DT_eventOnRegisterChangedDelegate_Parms
	{
		UDTAbilitySystemComponent* ASC;
	};
	_Script_DT_eventOnRegisterChangedDelegate_Parms Parms;
	Parms.ASC=ASC;
	OnRegisterChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRegisterChangedDelegate **********************************************

// ********** Begin Class ADTFactoryManager Function InitializeTargetPointMap **********************
struct Z_Construct_UFunction_ADTFactoryManager_InitializeTargetPointMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/DTFactoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTFactoryManager_InitializeTargetPointMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTFactoryManager, nullptr, "InitializeTargetPointMap", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFactoryManager_InitializeTargetPointMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTFactoryManager_InitializeTargetPointMap_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADTFactoryManager_InitializeTargetPointMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTFactoryManager_InitializeTargetPointMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTFactoryManager::execInitializeTargetPointMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeTargetPointMap();
	P_NATIVE_END;
}
// ********** End Class ADTFactoryManager Function InitializeTargetPointMap ************************

// ********** Begin Class ADTFactoryManager Function RegisterAbilitySystemComp *********************
struct Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp_Statics
{
	struct DTFactoryManager_eventRegisterAbilitySystemComp_Parms
	{
		UDTAbilitySystemComponent* ASC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/DTFactoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTFactoryManager_eventRegisterAbilitySystemComp_Parms, ASC), Z_Construct_UClass_UDTAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp_Statics::NewProp_ASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTFactoryManager, nullptr, "RegisterAbilitySystemComp", Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp_Statics::DTFactoryManager_eventRegisterAbilitySystemComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp_Statics::DTFactoryManager_eventRegisterAbilitySystemComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTFactoryManager::execRegisterAbilitySystemComp)
{
	P_GET_OBJECT(UDTAbilitySystemComponent,Z_Param_ASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterAbilitySystemComp(Z_Param_ASC);
	P_NATIVE_END;
}
// ********** End Class ADTFactoryManager Function RegisterAbilitySystemComp ***********************

// ********** Begin Class ADTFactoryManager Function UnregisterAbilitySystemComp *******************
struct Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp_Statics
{
	struct DTFactoryManager_eventUnregisterAbilitySystemComp_Parms
	{
		UDTAbilitySystemComponent* ASC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/DTFactoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTFactoryManager_eventUnregisterAbilitySystemComp_Parms, ASC), Z_Construct_UClass_UDTAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp_Statics::NewProp_ASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTFactoryManager, nullptr, "UnregisterAbilitySystemComp", Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp_Statics::DTFactoryManager_eventUnregisterAbilitySystemComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp_Statics::DTFactoryManager_eventUnregisterAbilitySystemComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTFactoryManager::execUnregisterAbilitySystemComp)
{
	P_GET_OBJECT(UDTAbilitySystemComponent,Z_Param_ASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterAbilitySystemComp(Z_Param_ASC);
	P_NATIVE_END;
}
// ********** End Class ADTFactoryManager Function UnregisterAbilitySystemComp *********************

// ********** Begin Class ADTFactoryManager ********************************************************
void ADTFactoryManager::StaticRegisterNativesADTFactoryManager()
{
	UClass* Class = ADTFactoryManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeTargetPointMap", &ADTFactoryManager::execInitializeTargetPointMap },
		{ "RegisterAbilitySystemComp", &ADTFactoryManager::execRegisterAbilitySystemComp },
		{ "UnregisterAbilitySystemComp", &ADTFactoryManager::execUnregisterAbilitySystemComp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADTFactoryManager;
UClass* ADTFactoryManager::GetPrivateStaticClass()
{
	using TClass = ADTFactoryManager;
	if (!Z_Registration_Info_UClass_ADTFactoryManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTFactoryManager"),
			Z_Registration_Info_UClass_ADTFactoryManager.InnerSingleton,
			StaticRegisterNativesADTFactoryManager,
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
	return Z_Registration_Info_UClass_ADTFactoryManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ADTFactoryManager_NoRegister()
{
	return ADTFactoryManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADTFactoryManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Manager/DTFactoryManager.h" },
		{ "ModuleRelativePath", "Manager/DTFactoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASCList_MetaData[] = {
		{ "Category", "DTFactoryManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Manager/DTFactoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnASCRegistered_MetaData[] = {
		{ "ModuleRelativePath", "Manager/DTFactoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnASCUnregistered_MetaData[] = {
		{ "ModuleRelativePath", "Manager/DTFactoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointMap_MetaData[] = {
		{ "Category", "DTFactoryManager" },
		{ "ModuleRelativePath", "Manager/DTFactoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASCList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ASCList;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnASCRegistered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnASCUnregistered;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPointMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPointMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetPointMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADTFactoryManager_InitializeTargetPointMap, "InitializeTargetPointMap" }, // 1547231740
		{ &Z_Construct_UFunction_ADTFactoryManager_RegisterAbilitySystemComp, "RegisterAbilitySystemComp" }, // 1015342515
		{ &Z_Construct_UFunction_ADTFactoryManager_UnregisterAbilitySystemComp, "UnregisterAbilitySystemComp" }, // 1776092205
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTFactoryManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFactoryManager_Statics::NewProp_ASCList_Inner = { "ASCList", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDTAbilitySystemComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADTFactoryManager_Statics::NewProp_ASCList = { "ASCList", nullptr, (EPropertyFlags)0x001000800002081d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFactoryManager, ASCList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASCList_MetaData), NewProp_ASCList_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADTFactoryManager_Statics::NewProp_OnASCRegistered = { "OnASCRegistered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFactoryManager, OnASCRegistered), Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnASCRegistered_MetaData), NewProp_OnASCRegistered_MetaData) }; // 2719614640
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADTFactoryManager_Statics::NewProp_OnASCUnregistered = { "OnASCUnregistered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFactoryManager, OnASCUnregistered), Z_Construct_UDelegateFunction_DT_OnRegisterChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnASCUnregistered_MetaData), NewProp_OnASCUnregistered_MetaData) }; // 2719614640
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTFactoryManager_Statics::NewProp_TargetPointMap_ValueProp = { "TargetPointMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ADTTargetPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADTFactoryManager_Statics::NewProp_TargetPointMap_Key_KeyProp = { "TargetPointMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADTFactoryManager_Statics::NewProp_TargetPointMap = { "TargetPointMap", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTFactoryManager, TargetPointMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPointMap_MetaData), NewProp_TargetPointMap_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTFactoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFactoryManager_Statics::NewProp_ASCList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFactoryManager_Statics::NewProp_ASCList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFactoryManager_Statics::NewProp_OnASCRegistered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFactoryManager_Statics::NewProp_OnASCUnregistered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFactoryManager_Statics::NewProp_TargetPointMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFactoryManager_Statics::NewProp_TargetPointMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTFactoryManager_Statics::NewProp_TargetPointMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFactoryManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTFactoryManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADTManagerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFactoryManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADTFactoryManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDTTargetPointInterface_NoRegister, (int32)VTABLE_OFFSET(ADTFactoryManager, IDTTargetPointInterface), false },  // 1719710742
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTFactoryManager_Statics::ClassParams = {
	&ADTFactoryManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADTFactoryManager_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTFactoryManager_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTFactoryManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTFactoryManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTFactoryManager()
{
	if (!Z_Registration_Info_UClass_ADTFactoryManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTFactoryManager.OuterSingleton, Z_Construct_UClass_ADTFactoryManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTFactoryManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTFactoryManager);
ADTFactoryManager::~ADTFactoryManager() {}
// ********** End Class ADTFactoryManager **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTFactoryManager_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTFactoryManager, ADTFactoryManager::StaticClass, TEXT("ADTFactoryManager"), &Z_Registration_Info_UClass_ADTFactoryManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTFactoryManager), 1484045195U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTFactoryManager_h__Script_DT_1468144594(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTFactoryManager_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTFactoryManager_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
