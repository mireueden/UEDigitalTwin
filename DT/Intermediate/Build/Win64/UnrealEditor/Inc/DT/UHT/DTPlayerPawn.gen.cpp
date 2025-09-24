// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMode/DTPlayerPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTPlayerPawn() {}

// ********** Begin Cross Module References ********************************************************
DT_API UClass* Z_Construct_UClass_ADTPlayerPawn();
DT_API UClass* Z_Construct_UClass_ADTPlayerPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADTPlayerPawn ************************************************************
void ADTPlayerPawn::StaticRegisterNativesADTPlayerPawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADTPlayerPawn;
UClass* ADTPlayerPawn::GetPrivateStaticClass()
{
	using TClass = ADTPlayerPawn;
	if (!Z_Registration_Info_UClass_ADTPlayerPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTPlayerPawn"),
			Z_Registration_Info_UClass_ADTPlayerPawn.InnerSingleton,
			StaticRegisterNativesADTPlayerPawn,
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
	return Z_Registration_Info_UClass_ADTPlayerPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ADTPlayerPawn_NoRegister()
{
	return ADTPlayerPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADTPlayerPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameMode/DTPlayerPawn.h" },
		{ "ModuleRelativePath", "GameMode/DTPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTPlayerPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADTPlayerPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTPlayerPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTPlayerPawn_Statics::ClassParams = {
	&ADTPlayerPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTPlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTPlayerPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTPlayerPawn()
{
	if (!Z_Registration_Info_UClass_ADTPlayerPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTPlayerPawn.OuterSingleton, Z_Construct_UClass_ADTPlayerPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTPlayerPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTPlayerPawn);
ADTPlayerPawn::~ADTPlayerPawn() {}
// ********** End Class ADTPlayerPawn **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerPawn_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTPlayerPawn, ADTPlayerPawn::StaticClass, TEXT("ADTPlayerPawn"), &Z_Registration_Info_UClass_ADTPlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTPlayerPawn), 3937338768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerPawn_h__Script_DT_2334511430(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerPawn_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerPawn_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
