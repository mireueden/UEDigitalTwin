// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Library/DTLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DT_API UClass* Z_Construct_UClass_ADTManagerBase_NoRegister();
DT_API UClass* Z_Construct_UClass_UDTLibrary();
DT_API UClass* Z_Construct_UClass_UDTLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDTLibrary Function GetManager *******************************************
struct Z_Construct_UFunction_UDTLibrary_GetManager_Statics
{
	struct DTLibrary_eventGetManager_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<ADTManagerBase> ManagerClass;
		ADTManagerBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "ManagerClass" },
		{ "ModuleRelativePath", "Library/DTLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ManagerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDTLibrary_GetManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTLibrary_eventGetManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDTLibrary_GetManager_Statics::NewProp_ManagerClass = { "ManagerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTLibrary_eventGetManager_Parms, ManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADTManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDTLibrary_GetManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTLibrary_eventGetManager_Parms, ReturnValue), Z_Construct_UClass_ADTManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTLibrary_GetManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTLibrary_GetManager_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTLibrary_GetManager_Statics::NewProp_ManagerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTLibrary_GetManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTLibrary_GetManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTLibrary_GetManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTLibrary, nullptr, "GetManager", Z_Construct_UFunction_UDTLibrary_GetManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTLibrary_GetManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTLibrary_GetManager_Statics::DTLibrary_eventGetManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTLibrary_GetManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTLibrary_GetManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTLibrary_GetManager_Statics::DTLibrary_eventGetManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTLibrary_GetManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTLibrary_GetManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTLibrary::execGetManager)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_ManagerClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADTManagerBase**)Z_Param__Result=UDTLibrary::GetManager(Z_Param_WorldContextObject,Z_Param_ManagerClass);
	P_NATIVE_END;
}
// ********** End Class UDTLibrary Function GetManager *********************************************

// ********** Begin Class UDTLibrary Function GetMatchTagInContainer *******************************
struct Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics
{
	struct DTLibrary_eventGetMatchTagInContainer_Parms
	{
		FGameplayTag Tag;
		FGameplayTagContainer TagContainer;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "ManagerClass" },
		{ "ModuleRelativePath", "Library/DTLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTLibrary_eventGetMatchTagInContainer_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTLibrary_eventGetMatchTagInContainer_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTLibrary_eventGetMatchTagInContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::NewProp_TagContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTLibrary, nullptr, "GetMatchTagInContainer", Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::DTLibrary_eventGetMatchTagInContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::DTLibrary_eventGetMatchTagInContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDTLibrary::execGetMatchTagInContainer)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_TagContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=UDTLibrary::GetMatchTagInContainer(Z_Param_Tag,Z_Param_TagContainer);
	P_NATIVE_END;
}
// ********** End Class UDTLibrary Function GetMatchTagInContainer *********************************

// ********** Begin Class UDTLibrary ***************************************************************
void UDTLibrary::StaticRegisterNativesUDTLibrary()
{
	UClass* Class = UDTLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetManager", &UDTLibrary::execGetManager },
		{ "GetMatchTagInContainer", &UDTLibrary::execGetMatchTagInContainer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTLibrary;
UClass* UDTLibrary::GetPrivateStaticClass()
{
	using TClass = UDTLibrary;
	if (!Z_Registration_Info_UClass_UDTLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTLibrary"),
			Z_Registration_Info_UClass_UDTLibrary.InnerSingleton,
			StaticRegisterNativesUDTLibrary,
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
	return Z_Registration_Info_UClass_UDTLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTLibrary_NoRegister()
{
	return UDTLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Library/DTLibrary.h" },
		{ "ModuleRelativePath", "Library/DTLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTLibrary_GetManager, "GetManager" }, // 4206460794
		{ &Z_Construct_UFunction_UDTLibrary_GetMatchTagInContainer, "GetMatchTagInContainer" }, // 452979936
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDTLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTLibrary_Statics::ClassParams = {
	&UDTLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTLibrary()
{
	if (!Z_Registration_Info_UClass_UDTLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTLibrary.OuterSingleton, Z_Construct_UClass_UDTLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTLibrary.OuterSingleton;
}
UDTLibrary::UDTLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTLibrary);
UDTLibrary::~UDTLibrary() {}
// ********** End Class UDTLibrary *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Library_DTLibrary_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTLibrary, UDTLibrary::StaticClass, TEXT("UDTLibrary"), &Z_Registration_Info_UClass_UDTLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTLibrary), 4084712296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Library_DTLibrary_h__Script_DT_4137709792(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Library_DTLibrary_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Library_DTLibrary_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
