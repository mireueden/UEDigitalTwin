// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTPawnBase.h"
#include "GameplayAbilitySpecHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTPawnBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DT_API UClass* Z_Construct_UClass_ADTPawnBase();
DT_API UClass* Z_Construct_UClass_ADTPawnBase_NoRegister();
DT_API UClass* Z_Construct_UClass_UDTAbilitySystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADTPawnBase Function InitializeAbilities *********************************
struct Z_Construct_UFunction_ADTPawnBase_InitializeAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DTPawnBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTPawnBase_InitializeAbilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTPawnBase, nullptr, "InitializeAbilities", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTPawnBase_InitializeAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTPawnBase_InitializeAbilities_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADTPawnBase_InitializeAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTPawnBase_InitializeAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTPawnBase::execInitializeAbilities)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAbilities();
	P_NATIVE_END;
}
// ********** End Class ADTPawnBase Function InitializeAbilities ***********************************

// ********** Begin Class ADTPawnBase **************************************************************
void ADTPawnBase::StaticRegisterNativesADTPawnBase()
{
	UClass* Class = ADTPawnBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeAbilities", &ADTPawnBase::execInitializeAbilities },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADTPawnBase;
UClass* ADTPawnBase::GetPrivateStaticClass()
{
	using TClass = ADTPawnBase;
	if (!Z_Registration_Info_UClass_ADTPawnBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTPawnBase"),
			Z_Registration_Info_UClass_ADTPawnBase.InnerSingleton,
			StaticRegisterNativesADTPawnBase,
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
	return Z_Registration_Info_UClass_ADTPawnBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ADTPawnBase_NoRegister()
{
	return ADTPawnBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADTPawnBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DTPawnBase.h" },
		{ "ModuleRelativePath", "DTPawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComp_MetaData[] = {
		{ "Category", "DTPawnBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DTPawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveAbilityList_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "DTPawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityList_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "DTPawnBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityHandleMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handle passive/ non passive\n" },
#endif
		{ "ModuleRelativePath", "DTPawnBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle passive/ non passive" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PassiveAbilityList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PassiveAbilityList;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityHandleMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityHandleMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AbilityHandleMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADTPawnBase_InitializeAbilities, "InitializeAbilities" }, // 3313020260
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTPawnBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTPawnBase_Statics::NewProp_AbilitySystemComp = { "AbilitySystemComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPawnBase, AbilitySystemComp), Z_Construct_UClass_UDTAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComp_MetaData), NewProp_AbilitySystemComp_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADTPawnBase_Statics::NewProp_PassiveAbilityList_Inner = { "PassiveAbilityList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADTPawnBase_Statics::NewProp_PassiveAbilityList = { "PassiveAbilityList", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPawnBase, PassiveAbilityList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveAbilityList_MetaData), NewProp_PassiveAbilityList_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADTPawnBase_Statics::NewProp_AbilityList_Inner = { "AbilityList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADTPawnBase_Statics::NewProp_AbilityList = { "AbilityList", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPawnBase, AbilityList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityList_MetaData), NewProp_AbilityList_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADTPawnBase_Statics::NewProp_AbilityHandleMap_ValueProp = { "AbilityHandleMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 417001783
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADTPawnBase_Statics::NewProp_AbilityHandleMap_Key_KeyProp = { "AbilityHandleMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADTPawnBase_Statics::NewProp_AbilityHandleMap = { "AbilityHandleMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTPawnBase, AbilityHandleMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityHandleMap_MetaData), NewProp_AbilityHandleMap_MetaData) }; // 417001783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTPawnBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPawnBase_Statics::NewProp_AbilitySystemComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPawnBase_Statics::NewProp_PassiveAbilityList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPawnBase_Statics::NewProp_PassiveAbilityList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPawnBase_Statics::NewProp_AbilityList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPawnBase_Statics::NewProp_AbilityList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPawnBase_Statics::NewProp_AbilityHandleMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPawnBase_Statics::NewProp_AbilityHandleMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTPawnBase_Statics::NewProp_AbilityHandleMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTPawnBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTPawnBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTPawnBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADTPawnBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ADTPawnBase, IAbilitySystemInterface), false },  // 1199015870
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTPawnBase_Statics::ClassParams = {
	&ADTPawnBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADTPawnBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTPawnBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTPawnBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTPawnBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTPawnBase()
{
	if (!Z_Registration_Info_UClass_ADTPawnBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTPawnBase.OuterSingleton, Z_Construct_UClass_ADTPawnBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTPawnBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTPawnBase);
ADTPawnBase::~ADTPawnBase() {}
// ********** End Class ADTPawnBase ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTPawnBase_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTPawnBase, ADTPawnBase::StaticClass, TEXT("ADTPawnBase"), &Z_Registration_Info_UClass_ADTPawnBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTPawnBase), 1326440370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTPawnBase_h__Script_DT_1588356448(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTPawnBase_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DTPawnBase_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
