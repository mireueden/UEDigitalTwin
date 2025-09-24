// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manager/RARobotManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRARobotManager() {}

// ********** Begin Cross Module References ********************************************************
RA_API UClass* Z_Construct_UClass_ARAManagerBase();
RA_API UClass* Z_Construct_UClass_ARARobotManager();
RA_API UClass* Z_Construct_UClass_ARARobotManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_RA();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARARobotManager **********************************************************
void ARARobotManager::StaticRegisterNativesARARobotManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARARobotManager;
UClass* ARARobotManager::GetPrivateStaticClass()
{
	using TClass = ARARobotManager;
	if (!Z_Registration_Info_UClass_ARARobotManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RARobotManager"),
			Z_Registration_Info_UClass_ARARobotManager.InnerSingleton,
			StaticRegisterNativesARARobotManager,
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
	return Z_Registration_Info_UClass_ARARobotManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ARARobotManager_NoRegister()
{
	return ARARobotManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARARobotManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Manager/RARobotManager.h" },
		{ "ModuleRelativePath", "Manager/RARobotManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARARobotManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARARobotManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARAManagerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARARobotManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARARobotManager_Statics::ClassParams = {
	&ARARobotManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARARobotManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ARARobotManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARARobotManager()
{
	if (!Z_Registration_Info_UClass_ARARobotManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARARobotManager.OuterSingleton, Z_Construct_UClass_ARARobotManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARARobotManager.OuterSingleton;
}
ARARobotManager::ARARobotManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARARobotManager);
ARARobotManager::~ARARobotManager() {}
// ********** End Class ARARobotManager ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RARobotManager_h__Script_RA_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARARobotManager, ARARobotManager::StaticClass, TEXT("ARARobotManager"), &Z_Registration_Info_UClass_ARARobotManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARARobotManager), 831837893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RARobotManager_h__Script_RA_2667826778(TEXT("/Script/RA"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RARobotManager_h__Script_RA_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RARobotManager_h__Script_RA_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
