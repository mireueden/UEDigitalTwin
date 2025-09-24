// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RAGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRAGameMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
RA_API UClass* Z_Construct_UClass_ARAGameMode();
RA_API UClass* Z_Construct_UClass_ARAGameMode_NoRegister();
RA_API UClass* Z_Construct_UClass_ARAManagerBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_RA();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARAGameMode Function InitializeManagers **********************************
struct Z_Construct_UFunction_ARAGameMode_InitializeManagers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RAGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAGameMode_InitializeManagers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAGameMode, nullptr, "InitializeManagers", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAGameMode_InitializeManagers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAGameMode_InitializeManagers_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARAGameMode_InitializeManagers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAGameMode_InitializeManagers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAGameMode::execInitializeManagers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeManagers();
	P_NATIVE_END;
}
// ********** End Class ARAGameMode Function InitializeManagers ************************************

// ********** Begin Class ARAGameMode Function OnPostInitializeManager *****************************
struct Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager_Statics
{
	struct RAGameMode_eventOnPostInitializeManager_Parms
	{
		ARAManagerBase* Manager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RAGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAGameMode_eventOnPostInitializeManager_Parms, Manager), Z_Construct_UClass_ARAManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager_Statics::NewProp_Manager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAGameMode, nullptr, "OnPostInitializeManager", Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager_Statics::RAGameMode_eventOnPostInitializeManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager_Statics::RAGameMode_eventOnPostInitializeManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAGameMode::execOnPostInitializeManager)
{
	P_GET_OBJECT(ARAManagerBase,Z_Param_Manager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPostInitializeManager(Z_Param_Manager);
	P_NATIVE_END;
}
// ********** End Class ARAGameMode Function OnPostInitializeManager *******************************

// ********** Begin Class ARAGameMode **************************************************************
void ARAGameMode::StaticRegisterNativesARAGameMode()
{
	UClass* Class = ARAGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeManagers", &ARAGameMode::execInitializeManagers },
		{ "OnPostInitializeManager", &ARAGameMode::execOnPostInitializeManager },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARAGameMode;
UClass* ARAGameMode::GetPrivateStaticClass()
{
	using TClass = ARAGameMode;
	if (!Z_Registration_Info_UClass_ARAGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RAGameMode"),
			Z_Registration_Info_UClass_ARAGameMode.InnerSingleton,
			StaticRegisterNativesARAGameMode,
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
	return Z_Registration_Info_UClass_ARAGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ARAGameMode_NoRegister()
{
	return ARAGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARAGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RAGameMode.h" },
		{ "ModuleRelativePath", "RAGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagerList_MetaData[] = {
		{ "Category", "RAGameMode" },
		{ "ModuleRelativePath", "RAGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagerInstanceMap_MetaData[] = {
		{ "ModuleRelativePath", "RAGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagerInitializedMap_MetaData[] = {
		{ "ModuleRelativePath", "RAGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ManagerList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ManagerList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManagerInstanceMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ManagerInstanceMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ManagerInstanceMap;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ManagerInitializedMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ManagerInitializedMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ManagerInitializedMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARAGameMode_InitializeManagers, "InitializeManagers" }, // 2051892814
		{ &Z_Construct_UFunction_ARAGameMode_OnPostInitializeManager, "OnPostInitializeManager" }, // 3215396752
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARAGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerList_Inner = { "ManagerList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ARAManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerList = { "ManagerList", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAGameMode, ManagerList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagerList_MetaData), NewProp_ManagerList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerInstanceMap_ValueProp = { "ManagerInstanceMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ARAManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerInstanceMap_Key_KeyProp = { "ManagerInstanceMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ARAManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerInstanceMap = { "ManagerInstanceMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAGameMode, ManagerInstanceMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagerInstanceMap_MetaData), NewProp_ManagerInstanceMap_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerInitializedMap_ValueProp = { "ManagerInitializedMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerInitializedMap_Key_KeyProp = { "ManagerInitializedMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ARAManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerInitializedMap = { "ManagerInitializedMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAGameMode, ManagerInitializedMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagerInitializedMap_MetaData), NewProp_ManagerInitializedMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARAGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerInstanceMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerInstanceMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerInstanceMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerInitializedMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerInitializedMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAGameMode_Statics::NewProp_ManagerInitializedMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARAGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARAGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARAGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARAGameMode_Statics::ClassParams = {
	&ARAGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARAGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARAGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARAGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARAGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARAGameMode()
{
	if (!Z_Registration_Info_UClass_ARAGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARAGameMode.OuterSingleton, Z_Construct_UClass_ARAGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARAGameMode.OuterSingleton;
}
ARAGameMode::ARAGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARAGameMode);
ARAGameMode::~ARAGameMode() {}
// ********** End Class ARAGameMode ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_RAGameMode_h__Script_RA_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARAGameMode, ARAGameMode::StaticClass, TEXT("ARAGameMode"), &Z_Registration_Info_UClass_ARAGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARAGameMode), 3642553626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_RAGameMode_h__Script_RA_3514387559(TEXT("/Script/RA"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_RAGameMode_h__Script_RA_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_RAGameMode_h__Script_RA_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
