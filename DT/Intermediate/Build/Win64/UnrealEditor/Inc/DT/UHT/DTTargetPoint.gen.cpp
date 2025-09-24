// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actor/DTTargetPoint.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTTargetPoint() {}

// ********** Begin Cross Module References ********************************************************
DT_API UClass* Z_Construct_UClass_ADTTargetPoint();
DT_API UClass* Z_Construct_UClass_ADTTargetPoint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADTTargetPoint ***********************************************************
void ADTTargetPoint::StaticRegisterNativesADTTargetPoint()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADTTargetPoint;
UClass* ADTTargetPoint::GetPrivateStaticClass()
{
	using TClass = ADTTargetPoint;
	if (!Z_Registration_Info_UClass_ADTTargetPoint.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTTargetPoint"),
			Z_Registration_Info_UClass_ADTTargetPoint.InnerSingleton,
			StaticRegisterNativesADTTargetPoint,
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
	return Z_Registration_Info_UClass_ADTTargetPoint.InnerSingleton;
}
UClass* Z_Construct_UClass_ADTTargetPoint_NoRegister()
{
	return ADTTargetPoint::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADTTargetPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/DTTargetPoint.h" },
		{ "ModuleRelativePath", "Actor/DTTargetPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTag_MetaData[] = {
		{ "Categories", "DT.TargetPoint" },
		{ "Category", "DTTargetPoint" },
		{ "ModuleRelativePath", "Actor/DTTargetPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTTargetPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADTTargetPoint_Statics::NewProp_TargetTag = { "TargetTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTTargetPoint, TargetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTag_MetaData), NewProp_TargetTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTTargetPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTTargetPoint_Statics::NewProp_TargetTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTTargetPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTTargetPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATargetPoint,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTTargetPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTTargetPoint_Statics::ClassParams = {
	&ADTTargetPoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADTTargetPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTTargetPoint_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTTargetPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTTargetPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTTargetPoint()
{
	if (!Z_Registration_Info_UClass_ADTTargetPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTTargetPoint.OuterSingleton, Z_Construct_UClass_ADTTargetPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTTargetPoint.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTTargetPoint);
ADTTargetPoint::~ADTTargetPoint() {}
// ********** End Class ADTTargetPoint *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Actor_DTTargetPoint_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTTargetPoint, ADTTargetPoint::StaticClass, TEXT("ADTTargetPoint"), &Z_Registration_Info_UClass_ADTTargetPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTTargetPoint), 2810129161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Actor_DTTargetPoint_h__Script_DT_1605120642(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Actor_DTTargetPoint_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Actor_DTTargetPoint_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
