// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAsset/DTCellDataAsset.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTCellDataAsset() {}

// ********** Begin Cross Module References ********************************************************
DT_API UClass* Z_Construct_UClass_UDTCellDataAsset();
DT_API UClass* Z_Construct_UClass_UDTCellDataAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDTCellDataAsset *********************************************************
void UDTCellDataAsset::StaticRegisterNativesUDTCellDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTCellDataAsset;
UClass* UDTCellDataAsset::GetPrivateStaticClass()
{
	using TClass = UDTCellDataAsset;
	if (!Z_Registration_Info_UClass_UDTCellDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTCellDataAsset"),
			Z_Registration_Info_UClass_UDTCellDataAsset.InnerSingleton,
			StaticRegisterNativesUDTCellDataAsset,
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
	return Z_Registration_Info_UClass_UDTCellDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTCellDataAsset_NoRegister()
{
	return UDTCellDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTCellDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataAsset/DTCellDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DataAsset/DTCellDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "DTCellDataAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb3\xb5\xec\xa0\x95\xeb\xaa\x85\n" },
#endif
		{ "ModuleRelativePath", "DataAsset/DTCellDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xec\xa0\x95\xeb\xaa\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "DTCellDataAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb3\xb5\xec\xa0\x95 \xec\x84\xa4\xeb\xaa\x85\n" },
#endif
		{ "ModuleRelativePath", "DataAsset/DTCellDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xec\xa0\x95 \xec\x84\xa4\xeb\xaa\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Categories", "DT.Type.Cell" },
		{ "Category", "DTCellDataAsset" },
		{ "ModuleRelativePath", "DataAsset/DTCellDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Category;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTCellDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDTCellDataAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTCellDataAsset, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDTCellDataAsset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTCellDataAsset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDTCellDataAsset_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTCellDataAsset, Category), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTCellDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTCellDataAsset_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTCellDataAsset_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTCellDataAsset_Statics::NewProp_Category,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTCellDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDTCellDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTCellDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTCellDataAsset_Statics::ClassParams = {
	&UDTCellDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDTCellDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDTCellDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTCellDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTCellDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTCellDataAsset()
{
	if (!Z_Registration_Info_UClass_UDTCellDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTCellDataAsset.OuterSingleton, Z_Construct_UClass_UDTCellDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTCellDataAsset.OuterSingleton;
}
UDTCellDataAsset::UDTCellDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTCellDataAsset);
UDTCellDataAsset::~UDTCellDataAsset() {}
// ********** End Class UDTCellDataAsset ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTCellDataAsset_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTCellDataAsset, UDTCellDataAsset::StaticClass, TEXT("UDTCellDataAsset"), &Z_Registration_Info_UClass_UDTCellDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTCellDataAsset), 2381894945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTCellDataAsset_h__Script_DT_4189141462(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTCellDataAsset_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTCellDataAsset_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
