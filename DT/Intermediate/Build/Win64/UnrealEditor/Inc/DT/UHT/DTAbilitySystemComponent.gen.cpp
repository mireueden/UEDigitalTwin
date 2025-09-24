// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/DTAbilitySystemComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
DT_API UClass* Z_Construct_UClass_UDTAbilitySystemComponent();
DT_API UClass* Z_Construct_UClass_UDTAbilitySystemComponent_NoRegister();
DT_API UFunction* Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnTagChangedDelegate *************************************************
struct Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics
{
	struct _Script_DT_eventOnTagChangedDelegate_Parms
	{
		FGameplayTag Tag;
		bool TagExists;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/DTAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_TagExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TagExists;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DT_eventOnTagChangedDelegate_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
void Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::NewProp_TagExists_SetBit(void* Obj)
{
	((_Script_DT_eventOnTagChangedDelegate_Parms*)Obj)->TagExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::NewProp_TagExists = { "TagExists", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_DT_eventOnTagChangedDelegate_Parms), &Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::NewProp_TagExists_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::NewProp_TagExists,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DT, nullptr, "OnTagChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::_Script_DT_eventOnTagChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::_Script_DT_eventOnTagChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTagChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTagChangedDelegate, FGameplayTag const& Tag, bool TagExists)
{
	struct _Script_DT_eventOnTagChangedDelegate_Parms
	{
		FGameplayTag Tag;
		bool TagExists;
	};
	_Script_DT_eventOnTagChangedDelegate_Parms Parms;
	Parms.Tag=Tag;
	Parms.TagExists=TagExists ? true : false;
	OnTagChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTagChangedDelegate ***************************************************

// ********** Begin Class UDTAbilitySystemComponent ************************************************
void UDTAbilitySystemComponent::StaticRegisterNativesUDTAbilitySystemComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTAbilitySystemComponent;
UClass* UDTAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = UDTAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_UDTAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTAbilitySystemComponent"),
			Z_Registration_Info_UClass_UDTAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUDTAbilitySystemComponent,
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
	return Z_Registration_Info_UClass_UDTAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTAbilitySystemComponent_NoRegister()
{
	return UDTAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/DTAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "AbilitySystem/DTAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTagChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/DTAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerType_MetaData[] = {
		{ "Categories", "DT.Type" },
		{ "Category", "DTAbilitySystemComponent" },
		{ "ModuleRelativePath", "AbilitySystem/DTAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRegisterToManager_MetaData[] = {
		{ "Category", "DTAbilitySystemComponent" },
		{ "ModuleRelativePath", "AbilitySystem/DTAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTagChangedDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerType;
	static void NewProp_bIgnoreRegisterToManager_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRegisterToManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDTAbilitySystemComponent_Statics::NewProp_OnTagChangedDelegate = { "OnTagChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTAbilitySystemComponent, OnTagChangedDelegate), Z_Construct_UDelegateFunction_DT_OnTagChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTagChangedDelegate_MetaData), NewProp_OnTagChangedDelegate_MetaData) }; // 576309455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDTAbilitySystemComponent_Statics::NewProp_OwnerType = { "OwnerType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTAbilitySystemComponent, OwnerType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerType_MetaData), NewProp_OwnerType_MetaData) }; // 133831994
void Z_Construct_UClass_UDTAbilitySystemComponent_Statics::NewProp_bIgnoreRegisterToManager_SetBit(void* Obj)
{
	((UDTAbilitySystemComponent*)Obj)->bIgnoreRegisterToManager = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDTAbilitySystemComponent_Statics::NewProp_bIgnoreRegisterToManager = { "bIgnoreRegisterToManager", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDTAbilitySystemComponent), &Z_Construct_UClass_UDTAbilitySystemComponent_Statics::NewProp_bIgnoreRegisterToManager_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreRegisterToManager_MetaData), NewProp_bIgnoreRegisterToManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTAbilitySystemComponent_Statics::NewProp_OnTagChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTAbilitySystemComponent_Statics::NewProp_OwnerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTAbilitySystemComponent_Statics::NewProp_bIgnoreRegisterToManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDTAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTAbilitySystemComponent_Statics::ClassParams = {
	&UDTAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDTAbilitySystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDTAbilitySystemComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UDTAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UDTAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTAbilitySystemComponent.OuterSingleton;
}
UDTAbilitySystemComponent::UDTAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTAbilitySystemComponent);
UDTAbilitySystemComponent::~UDTAbilitySystemComponent() {}
// ********** End Class UDTAbilitySystemComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_DTAbilitySystemComponent_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTAbilitySystemComponent, UDTAbilitySystemComponent::StaticClass, TEXT("UDTAbilitySystemComponent"), &Z_Registration_Info_UClass_UDTAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTAbilitySystemComponent), 3786445951U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_DTAbilitySystemComponent_h__Script_DT_3861483917(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_DTAbilitySystemComponent_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_AbilitySystem_DTAbilitySystemComponent_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
