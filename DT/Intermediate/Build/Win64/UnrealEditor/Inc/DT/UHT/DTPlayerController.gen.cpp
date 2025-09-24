// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMode/DTPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTPlayerController() {}

// ********** Begin Cross Module References ********************************************************
DT_API UClass* Z_Construct_UClass_ADTPlayerController();
DT_API UClass* Z_Construct_UClass_ADTPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADTPlayerController ******************************************************
void ADTPlayerController::StaticRegisterNativesADTPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADTPlayerController;
UClass* ADTPlayerController::GetPrivateStaticClass()
{
	using TClass = ADTPlayerController;
	if (!Z_Registration_Info_UClass_ADTPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTPlayerController"),
			Z_Registration_Info_UClass_ADTPlayerController.InnerSingleton,
			StaticRegisterNativesADTPlayerController,
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
	return Z_Registration_Info_UClass_ADTPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ADTPlayerController_NoRegister()
{
	return ADTPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADTPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GameMode/DTPlayerController.h" },
		{ "ModuleRelativePath", "GameMode/DTPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADTPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTPlayerController_Statics::ClassParams = {
	&ADTPlayerController::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTPlayerController()
{
	if (!Z_Registration_Info_UClass_ADTPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTPlayerController.OuterSingleton, Z_Construct_UClass_ADTPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTPlayerController.OuterSingleton;
}
ADTPlayerController::ADTPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTPlayerController);
ADTPlayerController::~ADTPlayerController() {}
// ********** End Class ADTPlayerController ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerController_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTPlayerController, ADTPlayerController::StaticClass, TEXT("ADTPlayerController"), &Z_Registration_Info_UClass_ADTPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTPlayerController), 754017952U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerController_h__Script_DT_1610246120(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerController_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerController_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
