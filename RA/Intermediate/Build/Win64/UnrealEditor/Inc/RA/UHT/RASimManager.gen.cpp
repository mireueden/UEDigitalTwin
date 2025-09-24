// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manager/RASimManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRASimManager() {}

// ********** Begin Cross Module References ********************************************************
RA_API UClass* Z_Construct_UClass_ARAManagerBase();
RA_API UClass* Z_Construct_UClass_ARASimManager();
RA_API UClass* Z_Construct_UClass_ARASimManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_RA();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARASimManager ************************************************************
void ARASimManager::StaticRegisterNativesARASimManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARASimManager;
UClass* ARASimManager::GetPrivateStaticClass()
{
	using TClass = ARASimManager;
	if (!Z_Registration_Info_UClass_ARASimManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RASimManager"),
			Z_Registration_Info_UClass_ARASimManager.InnerSingleton,
			StaticRegisterNativesARASimManager,
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
	return Z_Registration_Info_UClass_ARASimManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ARASimManager_NoRegister()
{
	return ARASimManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARASimManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Manager/RASimManager.h" },
		{ "ModuleRelativePath", "Manager/RASimManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARASimManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARASimManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARAManagerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARASimManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARASimManager_Statics::ClassParams = {
	&ARASimManager::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARASimManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ARASimManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARASimManager()
{
	if (!Z_Registration_Info_UClass_ARASimManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARASimManager.OuterSingleton, Z_Construct_UClass_ARASimManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARASimManager.OuterSingleton;
}
ARASimManager::ARASimManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARASimManager);
ARASimManager::~ARASimManager() {}
// ********** End Class ARASimManager **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RASimManager_h__Script_RA_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARASimManager, ARASimManager::StaticClass, TEXT("ARASimManager"), &Z_Registration_Info_UClass_ARASimManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARASimManager), 1451465680U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RASimManager_h__Script_RA_3430431190(TEXT("/Script/RA"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RASimManager_h__Script_RA_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RASimManager_h__Script_RA_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
