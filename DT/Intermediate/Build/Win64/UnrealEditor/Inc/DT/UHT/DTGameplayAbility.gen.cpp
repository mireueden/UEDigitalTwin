// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/GameplayAbility/DTGameplayAbility.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilitySpec.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTGameplayAbility() {}

// ********** Begin Cross Module References ********************************************************
DT_API UClass* Z_Construct_UClass_UDTGameplayAbility();
DT_API UClass* Z_Construct_UClass_UDTGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpec();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDTGameplayAbility Function BP_OnAvatarSet *******************************
struct DTGameplayAbility_eventBP_OnAvatarSet_Parms
{
	FGameplayAbilityActorInfo ActorInfo;
	FGameplayAbilitySpec Spec;
};
static FName NAME_UDTGameplayAbility_BP_OnAvatarSet = FName(TEXT("BP_OnAvatarSet"));
void UDTGameplayAbility::BP_OnAvatarSet(FGameplayAbilityActorInfo const& ActorInfo, FGameplayAbilitySpec const& Spec)
{
	DTGameplayAbility_eventBP_OnAvatarSet_Parms Parms;
	Parms.ActorInfo=ActorInfo;
	Parms.Spec=Spec;
	UFunction* Func = FindFunctionChecked(NAME_UDTGameplayAbility_BP_OnAvatarSet);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnAvatarSet" },
		{ "ModuleRelativePath", "AbilitySystem/GameplayAbility/DTGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet_Statics::NewProp_ActorInfo = { "ActorInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTGameplayAbility_eventBP_OnAvatarSet_Parms, ActorInfo), Z_Construct_UScriptStruct_FGameplayAbilityActorInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorInfo_MetaData), NewProp_ActorInfo_MetaData) }; // 2631261177
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTGameplayAbility_eventBP_OnAvatarSet_Parms, Spec), Z_Construct_UScriptStruct_FGameplayAbilitySpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 3703354567
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet_Statics::NewProp_ActorInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet_Statics::NewProp_Spec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTGameplayAbility, nullptr, "BP_OnAvatarSet", Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet_Statics::PropPointers), sizeof(DTGameplayAbility_eventBP_OnAvatarSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DTGameplayAbility_eventBP_OnAvatarSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UDTGameplayAbility Function BP_OnAvatarSet *********************************

// ********** Begin Class UDTGameplayAbility *******************************************************
void UDTGameplayAbility::StaticRegisterNativesUDTGameplayAbility()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTGameplayAbility;
UClass* UDTGameplayAbility::GetPrivateStaticClass()
{
	using TClass = UDTGameplayAbility;
	if (!Z_Registration_Info_UClass_UDTGameplayAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTGameplayAbility"),
			Z_Registration_Info_UClass_UDTGameplayAbility.InnerSingleton,
			StaticRegisterNativesUDTGameplayAbility,
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
	return Z_Registration_Info_UClass_UDTGameplayAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTGameplayAbility_NoRegister()
{
	return UDTGameplayAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/GameplayAbility/DTGameplayAbility.h" },
		{ "ModuleRelativePath", "AbilitySystem/GameplayAbility/DTGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTGameplayAbility_BP_OnAvatarSet, "BP_OnAvatarSet" }, // 3403121832
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDTGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTGameplayAbility_Statics::ClassParams = {
	&UDTGameplayAbility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UDTGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTGameplayAbility.OuterSingleton, Z_Construct_UClass_UDTGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTGameplayAbility.OuterSingleton;
}
UDTGameplayAbility::UDTGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTGameplayAbility);
UDTGameplayAbility::~UDTGameplayAbility() {}
// ********** End Class UDTGameplayAbility *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_GameplayAbility_DTGameplayAbility_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTGameplayAbility, UDTGameplayAbility::StaticClass, TEXT("UDTGameplayAbility"), &Z_Registration_Info_UClass_UDTGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTGameplayAbility), 2622921794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_GameplayAbility_DTGameplayAbility_h__Script_DT_1434249336(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_GameplayAbility_DTGameplayAbility_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_GameplayAbility_DTGameplayAbility_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
