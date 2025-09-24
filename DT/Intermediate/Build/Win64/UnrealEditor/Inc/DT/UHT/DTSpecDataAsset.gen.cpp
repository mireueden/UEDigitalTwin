// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAsset/DTSpecDataAsset.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTSpecDataAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DT_API UClass* Z_Construct_UClass_ADTActor_NoRegister();
DT_API UClass* Z_Construct_UClass_UDTSpecDataAsset();
DT_API UClass* Z_Construct_UClass_UDTSpecDataAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDTSpecDataAsset *********************************************************
void UDTSpecDataAsset::StaticRegisterNativesUDTSpecDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTSpecDataAsset;
UClass* UDTSpecDataAsset::GetPrivateStaticClass()
{
	using TClass = UDTSpecDataAsset;
	if (!Z_Registration_Info_UClass_UDTSpecDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTSpecDataAsset"),
			Z_Registration_Info_UClass_UDTSpecDataAsset.InnerSingleton,
			StaticRegisterNativesUDTSpecDataAsset,
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
	return Z_Registration_Info_UClass_UDTSpecDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTSpecDataAsset_NoRegister()
{
	return UDTSpecDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTSpecDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataAsset/DTSpecDataAsset.h" },
		{ "ModuleRelativePath", "DataAsset/DTSpecDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "DTSpecDataAsset" },
		{ "ModuleRelativePath", "DataAsset/DTSpecDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "DTSpecDataAsset" },
		{ "ModuleRelativePath", "DataAsset/DTSpecDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessCellList_MetaData[] = {
		{ "Categoreis", "DT.Asset.Cell" },
		{ "Category", "DTSpecDataAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9e\x91\xec\x97\x85\xed\x95\xa0 \xea\xb3\xb5\xec\xa0\x95 \xeb\xaa\xa9\xeb\xa1\x9d (\xec\x88\x9c\xec\x84\x9c)\n" },
#endif
		{ "ModuleRelativePath", "DataAsset/DTSpecDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9e\x91\xec\x97\x85\xed\x95\xa0 \xea\xb3\xb5\xec\xa0\x95 \xeb\xaa\xa9\xeb\xa1\x9d (\xec\x88\x9c\xec\x84\x9c)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "DTSpecDataAsset" },
		{ "ModuleRelativePath", "DataAsset/DTSpecDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProcessCellList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcessCellList;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTSpecDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDTSpecDataAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTSpecDataAsset, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDTSpecDataAsset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTSpecDataAsset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDTSpecDataAsset_Statics::NewProp_ProcessCellList_Inner = { "ProcessCellList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDTSpecDataAsset_Statics::NewProp_ProcessCellList = { "ProcessCellList", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTSpecDataAsset, ProcessCellList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessCellList_MetaData), NewProp_ProcessCellList_MetaData) }; // 133831994
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDTSpecDataAsset_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTSpecDataAsset, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADTActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTSpecDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSpecDataAsset_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSpecDataAsset_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSpecDataAsset_Statics::NewProp_ProcessCellList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSpecDataAsset_Statics::NewProp_ProcessCellList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTSpecDataAsset_Statics::NewProp_ActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTSpecDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDTSpecDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTSpecDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTSpecDataAsset_Statics::ClassParams = {
	&UDTSpecDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDTSpecDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDTSpecDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTSpecDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTSpecDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTSpecDataAsset()
{
	if (!Z_Registration_Info_UClass_UDTSpecDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTSpecDataAsset.OuterSingleton, Z_Construct_UClass_UDTSpecDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTSpecDataAsset.OuterSingleton;
}
UDTSpecDataAsset::UDTSpecDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTSpecDataAsset);
UDTSpecDataAsset::~UDTSpecDataAsset() {}
// ********** End Class UDTSpecDataAsset ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTSpecDataAsset_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTSpecDataAsset, UDTSpecDataAsset::StaticClass, TEXT("UDTSpecDataAsset"), &Z_Registration_Info_UClass_UDTSpecDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTSpecDataAsset), 978433891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTSpecDataAsset_h__Script_DT_573842012(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTSpecDataAsset_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTSpecDataAsset_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
