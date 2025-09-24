// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manager/DTAssetManager.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTAssetManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
DT_API UClass* Z_Construct_UClass_ADTAssetManager();
DT_API UClass* Z_Construct_UClass_ADTAssetManager_NoRegister();
DT_API UClass* Z_Construct_UClass_ADTManagerBase();
DT_API UClass* Z_Construct_UClass_UDTCellDataAsset_NoRegister();
DT_API UClass* Z_Construct_UClass_UDTProjectSettings();
DT_API UClass* Z_Construct_UClass_UDTProjectSettings_NoRegister();
DT_API UClass* Z_Construct_UClass_UDTSpecDataAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDTProjectSettings *******************************************************
void UDTProjectSettings::StaticRegisterNativesUDTProjectSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTProjectSettings;
UClass* UDTProjectSettings::GetPrivateStaticClass()
{
	using TClass = UDTProjectSettings;
	if (!Z_Registration_Info_UClass_UDTProjectSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTProjectSettings"),
			Z_Registration_Info_UClass_UDTProjectSettings.InnerSingleton,
			StaticRegisterNativesUDTProjectSettings,
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
	return Z_Registration_Info_UClass_UDTProjectSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTProjectSettings_NoRegister()
{
	return UDTProjectSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "DTProject" },
		{ "IncludePath", "Manager/DTAssetManager.h" },
		{ "ModuleRelativePath", "Manager/DTAssetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DTAssetManagerClassName_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Manager/DTAssetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DTAssetManagerClassName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDTProjectSettings_Statics::NewProp_DTAssetManagerClassName = { "DTAssetManagerClassName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDTProjectSettings, DTAssetManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DTAssetManagerClassName_MetaData), NewProp_DTAssetManagerClassName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDTProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDTProjectSettings_Statics::NewProp_DTAssetManagerClassName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTProjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDTProjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTProjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTProjectSettings_Statics::ClassParams = {
	&UDTProjectSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDTProjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDTProjectSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTProjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTProjectSettings()
{
	if (!Z_Registration_Info_UClass_UDTProjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTProjectSettings.OuterSingleton, Z_Construct_UClass_UDTProjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTProjectSettings.OuterSingleton;
}
UDTProjectSettings::UDTProjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTProjectSettings);
UDTProjectSettings::~UDTProjectSettings() {}
// ********** End Class UDTProjectSettings *********************************************************

// ********** Begin Class ADTAssetManager Function GetCellDataAssetByName **************************
struct Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics
{
	struct DTAssetManager_eventGetCellDataAssetByName_Parms
	{
		FName TagName;
		UDTCellDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/DTAssetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTAssetManager_eventGetCellDataAssetByName_Parms, TagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagName_MetaData), NewProp_TagName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTAssetManager_eventGetCellDataAssetByName_Parms, ReturnValue), Z_Construct_UClass_UDTCellDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTAssetManager, nullptr, "GetCellDataAssetByName", Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics::DTAssetManager_eventGetCellDataAssetByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics::DTAssetManager_eventGetCellDataAssetByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTAssetManager::execGetCellDataAssetByName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDTCellDataAsset**)Z_Param__Result=P_THIS->GetCellDataAssetByName(Z_Param_Out_TagName);
	P_NATIVE_END;
}
// ********** End Class ADTAssetManager Function GetCellDataAssetByName ****************************

// ********** Begin Class ADTAssetManager Function GetCellDataAssetByTag ***************************
struct Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics
{
	struct DTAssetManager_eventGetCellDataAssetByTag_Parms
	{
		FGameplayTag Tag;
		UDTCellDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/DTAssetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTAssetManager_eventGetCellDataAssetByTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTAssetManager_eventGetCellDataAssetByTag_Parms, ReturnValue), Z_Construct_UClass_UDTCellDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTAssetManager, nullptr, "GetCellDataAssetByTag", Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics::DTAssetManager_eventGetCellDataAssetByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics::DTAssetManager_eventGetCellDataAssetByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTAssetManager::execGetCellDataAssetByTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDTCellDataAsset**)Z_Param__Result=P_THIS->GetCellDataAssetByTag(Z_Param_Out_Tag);
	P_NATIVE_END;
}
// ********** End Class ADTAssetManager Function GetCellDataAssetByTag *****************************

// ********** Begin Class ADTAssetManager Function GetDTAssetManager *******************************
struct Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics
{
	struct DTAssetManager_eventGetDTAssetManager_Parms
	{
		UObject* WorldContextObject;
		ADTAssetManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use ADTGameMode::GetManager" },
		{ "ModuleRelativePath", "Manager/DTAssetManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTAssetManager_eventGetDTAssetManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTAssetManager_eventGetDTAssetManager_Parms, ReturnValue), Z_Construct_UClass_ADTAssetManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTAssetManager, nullptr, "GetDTAssetManager", Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics::DTAssetManager_eventGetDTAssetManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics::DTAssetManager_eventGetDTAssetManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTAssetManager::execGetDTAssetManager)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADTAssetManager**)Z_Param__Result=ADTAssetManager::GetDTAssetManager(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class ADTAssetManager Function GetDTAssetManager *********************************

// ********** Begin Class ADTAssetManager Function GetSpecDataAssetByName **************************
struct Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics
{
	struct DTAssetManager_eventGetSpecDataAssetByName_Parms
	{
		FName TagName;
		UDTSpecDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/DTAssetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTAssetManager_eventGetSpecDataAssetByName_Parms, TagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagName_MetaData), NewProp_TagName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTAssetManager_eventGetSpecDataAssetByName_Parms, ReturnValue), Z_Construct_UClass_UDTSpecDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTAssetManager, nullptr, "GetSpecDataAssetByName", Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics::DTAssetManager_eventGetSpecDataAssetByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics::DTAssetManager_eventGetSpecDataAssetByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTAssetManager::execGetSpecDataAssetByName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDTSpecDataAsset**)Z_Param__Result=P_THIS->GetSpecDataAssetByName(Z_Param_Out_TagName);
	P_NATIVE_END;
}
// ********** End Class ADTAssetManager Function GetSpecDataAssetByName ****************************

// ********** Begin Class ADTAssetManager Function GetSpecDataAssetByTag ***************************
struct Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics
{
	struct DTAssetManager_eventGetSpecDataAssetByTag_Parms
	{
		FGameplayTag Tag;
		UDTSpecDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/DTAssetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTAssetManager_eventGetSpecDataAssetByTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTAssetManager_eventGetSpecDataAssetByTag_Parms, ReturnValue), Z_Construct_UClass_UDTSpecDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTAssetManager, nullptr, "GetSpecDataAssetByTag", Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics::DTAssetManager_eventGetSpecDataAssetByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics::DTAssetManager_eventGetSpecDataAssetByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTAssetManager::execGetSpecDataAssetByTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDTSpecDataAsset**)Z_Param__Result=P_THIS->GetSpecDataAssetByTag(Z_Param_Out_Tag);
	P_NATIVE_END;
}
// ********** End Class ADTAssetManager Function GetSpecDataAssetByTag *****************************

// ********** Begin Class ADTAssetManager Function InitializeDataAssetMap **************************
struct Z_Construct_UFunction_ADTAssetManager_InitializeDataAssetMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/DTAssetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTAssetManager_InitializeDataAssetMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTAssetManager, nullptr, "InitializeDataAssetMap", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTAssetManager_InitializeDataAssetMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTAssetManager_InitializeDataAssetMap_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADTAssetManager_InitializeDataAssetMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTAssetManager_InitializeDataAssetMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTAssetManager::execInitializeDataAssetMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeDataAssetMap();
	P_NATIVE_END;
}
// ********** End Class ADTAssetManager Function InitializeDataAssetMap ****************************

// ********** Begin Class ADTAssetManager **********************************************************
void ADTAssetManager::StaticRegisterNativesADTAssetManager()
{
	UClass* Class = ADTAssetManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCellDataAssetByName", &ADTAssetManager::execGetCellDataAssetByName },
		{ "GetCellDataAssetByTag", &ADTAssetManager::execGetCellDataAssetByTag },
		{ "GetDTAssetManager", &ADTAssetManager::execGetDTAssetManager },
		{ "GetSpecDataAssetByName", &ADTAssetManager::execGetSpecDataAssetByName },
		{ "GetSpecDataAssetByTag", &ADTAssetManager::execGetSpecDataAssetByTag },
		{ "InitializeDataAssetMap", &ADTAssetManager::execInitializeDataAssetMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADTAssetManager;
UClass* ADTAssetManager::GetPrivateStaticClass()
{
	using TClass = ADTAssetManager;
	if (!Z_Registration_Info_UClass_ADTAssetManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTAssetManager"),
			Z_Registration_Info_UClass_ADTAssetManager.InnerSingleton,
			StaticRegisterNativesADTAssetManager,
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
	return Z_Registration_Info_UClass_ADTAssetManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ADTAssetManager_NoRegister()
{
	return ADTAssetManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADTAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Manager/DTAssetManager.h" },
		{ "ModuleRelativePath", "Manager/DTAssetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagAssetIdList_MetaData[] = {
		{ "Categories", "DT.Asset" },
		{ "Category", "DTAssetManager" },
		{ "ModuleRelativePath", "Manager/DTAssetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagAssetTable_MetaData[] = {
		{ "Category", "DTAssetManager" },
		{ "ModuleRelativePath", "Manager/DTAssetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecDataAssetMap_MetaData[] = {
		{ "Category", "DTAssetManager" },
		{ "ModuleRelativePath", "Manager/DTAssetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellDataAssetMap_MetaData[] = {
		{ "Category", "DTAssetManager" },
		{ "ModuleRelativePath", "Manager/DTAssetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagAssetIdList_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagAssetIdList_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TagAssetIdList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagAssetTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecDataAssetMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecDataAssetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpecDataAssetMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CellDataAssetMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CellDataAssetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CellDataAssetMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByName, "GetCellDataAssetByName" }, // 766523923
		{ &Z_Construct_UFunction_ADTAssetManager_GetCellDataAssetByTag, "GetCellDataAssetByTag" }, // 2727047757
		{ &Z_Construct_UFunction_ADTAssetManager_GetDTAssetManager, "GetDTAssetManager" }, // 1907396123
		{ &Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByName, "GetSpecDataAssetByName" }, // 537701308
		{ &Z_Construct_UFunction_ADTAssetManager_GetSpecDataAssetByTag, "GetSpecDataAssetByTag" }, // 9567526
		{ &Z_Construct_UFunction_ADTAssetManager_InitializeDataAssetMap, "InitializeDataAssetMap" }, // 18100081
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADTAssetManager_Statics::NewProp_TagAssetIdList_ValueProp = { "TagAssetIdList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADTAssetManager_Statics::NewProp_TagAssetIdList_Key_KeyProp = { "TagAssetIdList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADTAssetManager_Statics::NewProp_TagAssetIdList = { "TagAssetIdList", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTAssetManager, TagAssetIdList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagAssetIdList_MetaData), NewProp_TagAssetIdList_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTAssetManager_Statics::NewProp_TagAssetTable = { "TagAssetTable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTAssetManager, TagAssetTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagAssetTable_MetaData), NewProp_TagAssetTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTAssetManager_Statics::NewProp_SpecDataAssetMap_ValueProp = { "SpecDataAssetMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDTSpecDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADTAssetManager_Statics::NewProp_SpecDataAssetMap_Key_KeyProp = { "SpecDataAssetMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADTAssetManager_Statics::NewProp_SpecDataAssetMap = { "SpecDataAssetMap", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTAssetManager, SpecDataAssetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecDataAssetMap_MetaData), NewProp_SpecDataAssetMap_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTAssetManager_Statics::NewProp_CellDataAssetMap_ValueProp = { "CellDataAssetMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDTCellDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADTAssetManager_Statics::NewProp_CellDataAssetMap_Key_KeyProp = { "CellDataAssetMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADTAssetManager_Statics::NewProp_CellDataAssetMap = { "CellDataAssetMap", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTAssetManager, CellDataAssetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellDataAssetMap_MetaData), NewProp_CellDataAssetMap_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTAssetManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTAssetManager_Statics::NewProp_TagAssetIdList_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTAssetManager_Statics::NewProp_TagAssetIdList_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTAssetManager_Statics::NewProp_TagAssetIdList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTAssetManager_Statics::NewProp_TagAssetTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTAssetManager_Statics::NewProp_SpecDataAssetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTAssetManager_Statics::NewProp_SpecDataAssetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTAssetManager_Statics::NewProp_SpecDataAssetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTAssetManager_Statics::NewProp_CellDataAssetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTAssetManager_Statics::NewProp_CellDataAssetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTAssetManager_Statics::NewProp_CellDataAssetMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTAssetManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADTManagerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTAssetManager_Statics::ClassParams = {
	&ADTAssetManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADTAssetManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTAssetManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTAssetManager()
{
	if (!Z_Registration_Info_UClass_ADTAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTAssetManager.OuterSingleton, Z_Construct_UClass_ADTAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTAssetManager.OuterSingleton;
}
ADTAssetManager::ADTAssetManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTAssetManager);
ADTAssetManager::~ADTAssetManager() {}
// ********** End Class ADTAssetManager ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTProjectSettings, UDTProjectSettings::StaticClass, TEXT("UDTProjectSettings"), &Z_Registration_Info_UClass_UDTProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTProjectSettings), 3911324127U) },
		{ Z_Construct_UClass_ADTAssetManager, ADTAssetManager::StaticClass, TEXT("ADTAssetManager"), &Z_Registration_Info_UClass_ADTAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTAssetManager), 2227288550U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h__Script_DT_3806854622(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Manager_DTAssetManager_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
