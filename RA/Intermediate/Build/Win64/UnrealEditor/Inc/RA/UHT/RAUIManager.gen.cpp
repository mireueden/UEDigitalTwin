// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manager/RAUIManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRAUIManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
RA_API UClass* Z_Construct_UClass_ARAManagerBase();
RA_API UClass* Z_Construct_UClass_ARAUIManager();
RA_API UClass* Z_Construct_UClass_ARAUIManager_NoRegister();
RA_API UClass* Z_Construct_UClass_URAUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_RA();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARAUIManager Function HideHUD ********************************************
struct Z_Construct_UFunction_ARAUIManager_HideHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAUIManager" },
		{ "ModuleRelativePath", "Manager/RAUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAUIManager_HideHUD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAUIManager, nullptr, "HideHUD", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAUIManager_HideHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAUIManager_HideHUD_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARAUIManager_HideHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAUIManager_HideHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAUIManager::execHideHUD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideHUD();
	P_NATIVE_END;
}
// ********** End Class ARAUIManager Function HideHUD **********************************************

// ********** Begin Class ARAUIManager Function ShowHUD ********************************************
struct Z_Construct_UFunction_ARAUIManager_ShowHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAUIManager" },
		{ "ModuleRelativePath", "Manager/RAUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAUIManager_ShowHUD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAUIManager, nullptr, "ShowHUD", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAUIManager_ShowHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAUIManager_ShowHUD_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARAUIManager_ShowHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAUIManager_ShowHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAUIManager::execShowHUD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowHUD();
	P_NATIVE_END;
}
// ********** End Class ARAUIManager Function ShowHUD **********************************************

// ********** Begin Class ARAUIManager *************************************************************
void ARAUIManager::StaticRegisterNativesARAUIManager()
{
	UClass* Class = ARAUIManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HideHUD", &ARAUIManager::execHideHUD },
		{ "ShowHUD", &ARAUIManager::execShowHUD },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARAUIManager;
UClass* ARAUIManager::GetPrivateStaticClass()
{
	using TClass = ARAUIManager;
	if (!Z_Registration_Info_UClass_ARAUIManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RAUIManager"),
			Z_Registration_Info_UClass_ARAUIManager.InnerSingleton,
			StaticRegisterNativesARAUIManager,
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
	return Z_Registration_Info_UClass_ARAUIManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ARAUIManager_NoRegister()
{
	return ARAUIManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARAUIManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Manager/RAUIManager.h" },
		{ "ModuleRelativePath", "Manager/RAUIManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIInputComponent_MetaData[] = {
		{ "Category", "RAUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Manager/RAUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "RAUIManager" },
		{ "ModuleRelativePath", "Manager/RAUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[] = {
		{ "Category", "RAUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Manager/RAUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIInputComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARAUIManager_HideHUD, "HideHUD" }, // 1382510875
		{ &Z_Construct_UFunction_ARAUIManager_ShowHUD, "ShowHUD" }, // 727506873
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARAUIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARAUIManager_Statics::NewProp_UIInputComponent = { "UIInputComponent", nullptr, (EPropertyFlags)0x00100000000a0809, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAUIManager, UIInputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIInputComponent_MetaData), NewProp_UIInputComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARAUIManager_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAUIManager, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URAUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARAUIManager_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x00100000000a081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAUIManager, HUDWidget), Z_Construct_UClass_URAUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidget_MetaData), NewProp_HUDWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARAUIManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAUIManager_Statics::NewProp_UIInputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAUIManager_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAUIManager_Statics::NewProp_HUDWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARAUIManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARAUIManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARAManagerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARAUIManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARAUIManager_Statics::ClassParams = {
	&ARAUIManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARAUIManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARAUIManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARAUIManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ARAUIManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARAUIManager()
{
	if (!Z_Registration_Info_UClass_ARAUIManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARAUIManager.OuterSingleton, Z_Construct_UClass_ARAUIManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARAUIManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARAUIManager);
ARAUIManager::~ARAUIManager() {}
// ********** End Class ARAUIManager ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAUIManager_h__Script_RA_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARAUIManager, ARAUIManager::StaticClass, TEXT("ARAUIManager"), &Z_Registration_Info_UClass_ARAUIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARAUIManager), 196934338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAUIManager_h__Script_RA_1906249835(TEXT("/Script/RA"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAUIManager_h__Script_RA_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAUIManager_h__Script_RA_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
