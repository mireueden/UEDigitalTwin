// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/DTDefine.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTDefine() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DT_API UClass* Z_Construct_UClass_UDTDefine();
DT_API UClass* Z_Construct_UClass_UDTDefine_NoRegister();
DT_API UEnum* Z_Construct_UEnum_DT_EDTSpecState();
DT_API UScriptStruct* Z_Construct_UScriptStruct_FDTActorList();
DT_API UScriptStruct* Z_Construct_UScriptStruct_FDTTagAssetData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDTTagAssetData ***************************************************
static_assert(std::is_polymorphic<FDTTagAssetData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDTTagAssetData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDTTagAssetData;
class UScriptStruct* FDTTagAssetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDTTagAssetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDTTagAssetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDTTagAssetData, (UObject*)Z_Construct_UPackage__Script_DT(), TEXT("DTTagAssetData"));
	}
	return Z_Registration_Info_UScriptStruct_FDTTagAssetData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDTTagAssetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x97\xac\xeb\x9f\xac \xec\xbd\x94\xeb\x93\x9c \xed\x8c\x8c\xec\x9d\xbc\xec\x97\x90\xec\x84\x9c \xea\xb3\xb5\xed\x86\xb5\xec\x9c\xbc\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xed\x83\x80\xec\x9e\x85\xeb\x93\xa4\xec\x9d\x84 \xec\xa0\x95\xec\x9d\x98\n" },
#endif
		{ "ModuleRelativePath", "Types/DTDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x97\xac\xeb\x9f\xac \xec\xbd\x94\xeb\x93\x9c \xed\x8c\x8c\xec\x9d\xbc\xec\x97\x90\xec\x84\x9c \xea\xb3\xb5\xed\x86\xb5\xec\x9c\xbc\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xed\x83\x80\xec\x9e\x85\xeb\x93\xa4\xec\x9d\x84 \xec\xa0\x95\xec\x9d\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetTag_MetaData[] = {
		{ "Categories", "DT.Asset" },
		{ "Category", "DTTagAssetData" },
		{ "ModuleRelativePath", "Types/DTDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[] = {
		{ "Category", "DTTagAssetData" },
		{ "ModuleRelativePath", "Types/DTDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTag;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDTTagAssetData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDTTagAssetData_Statics::NewProp_AssetTag = { "AssetTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDTTagAssetData, AssetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetTag_MetaData), NewProp_AssetTag_MetaData) }; // 133831994
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDTTagAssetData_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDTTagAssetData, DataAsset), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsset_MetaData), NewProp_DataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDTTagAssetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTTagAssetData_Statics::NewProp_AssetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTTagAssetData_Statics::NewProp_DataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTTagAssetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDTTagAssetData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DTTagAssetData",
	Z_Construct_UScriptStruct_FDTTagAssetData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTTagAssetData_Statics::PropPointers),
	sizeof(FDTTagAssetData),
	alignof(FDTTagAssetData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTTagAssetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDTTagAssetData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDTTagAssetData()
{
	if (!Z_Registration_Info_UScriptStruct_FDTTagAssetData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDTTagAssetData.InnerSingleton, Z_Construct_UScriptStruct_FDTTagAssetData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDTTagAssetData.InnerSingleton;
}
// ********** End ScriptStruct FDTTagAssetData *****************************************************

// ********** Begin ScriptStruct FDTActorList ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDTActorList;
class UScriptStruct* FDTActorList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDTActorList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDTActorList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDTActorList, (UObject*)Z_Construct_UPackage__Script_DT(), TEXT("DTActorList"));
	}
	return Z_Registration_Info_UScriptStruct_FDTActorList.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDTActorList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Types/DTDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorList_MetaData[] = {
		{ "Category", "DTActorList" },
		{ "ModuleRelativePath", "Types/DTDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDTActorList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDTActorList_Statics::NewProp_ActorList_Inner = { "ActorList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDTActorList_Statics::NewProp_ActorList = { "ActorList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDTActorList, ActorList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorList_MetaData), NewProp_ActorList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDTActorList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTActorList_Statics::NewProp_ActorList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDTActorList_Statics::NewProp_ActorList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTActorList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDTActorList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
	nullptr,
	&NewStructOps,
	"DTActorList",
	Z_Construct_UScriptStruct_FDTActorList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTActorList_Statics::PropPointers),
	sizeof(FDTActorList),
	alignof(FDTActorList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDTActorList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDTActorList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDTActorList()
{
	if (!Z_Registration_Info_UScriptStruct_FDTActorList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDTActorList.InnerSingleton, Z_Construct_UScriptStruct_FDTActorList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDTActorList.InnerSingleton;
}
// ********** End ScriptStruct FDTActorList ********************************************************

// ********** Begin Enum EDTSpecState **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDTSpecState;
static UEnum* EDTSpecState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDTSpecState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDTSpecState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DT_EDTSpecState, (UObject*)Z_Construct_UPackage__Script_DT(), TEXT("EDTSpecState"));
	}
	return Z_Registration_Info_UEnum_EDTSpecState.OuterSingleton;
}
template<> DT_API UEnum* StaticEnum<EDTSpecState>()
{
	return EDTSpecState_StaticEnum();
}
struct Z_Construct_UEnum_DT_EDTSpecState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Complete.Name", "EDTSpecState::Complete" },
		{ "Idle.Name", "EDTSpecState::Idle" },
		{ "ModuleRelativePath", "Types/DTDefine.h" },
		{ "MoveToTarget.Name", "EDTSpecState::MoveToTarget" },
		{ "TargetAssigned.Name", "EDTSpecState::TargetAssigned" },
		{ "WorkFinish.Name", "EDTSpecState::WorkFinish" },
		{ "WorkPause.Name", "EDTSpecState::WorkPause" },
		{ "WorkProgress.Name", "EDTSpecState::WorkProgress" },
		{ "WorkReady.Name", "EDTSpecState::WorkReady" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDTSpecState::Idle", (int64)EDTSpecState::Idle },
		{ "EDTSpecState::TargetAssigned", (int64)EDTSpecState::TargetAssigned },
		{ "EDTSpecState::MoveToTarget", (int64)EDTSpecState::MoveToTarget },
		{ "EDTSpecState::WorkReady", (int64)EDTSpecState::WorkReady },
		{ "EDTSpecState::WorkProgress", (int64)EDTSpecState::WorkProgress },
		{ "EDTSpecState::WorkPause", (int64)EDTSpecState::WorkPause },
		{ "EDTSpecState::WorkFinish", (int64)EDTSpecState::WorkFinish },
		{ "EDTSpecState::Complete", (int64)EDTSpecState::Complete },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DT_EDTSpecState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DT,
	nullptr,
	"EDTSpecState",
	"EDTSpecState",
	Z_Construct_UEnum_DT_EDTSpecState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DT_EDTSpecState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DT_EDTSpecState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DT_EDTSpecState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DT_EDTSpecState()
{
	if (!Z_Registration_Info_UEnum_EDTSpecState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDTSpecState.InnerSingleton, Z_Construct_UEnum_DT_EDTSpecState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDTSpecState.InnerSingleton;
}
// ********** End Enum EDTSpecState ****************************************************************

// ********** Begin Class UDTDefine ****************************************************************
void UDTDefine::StaticRegisterNativesUDTDefine()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTDefine;
UClass* UDTDefine::GetPrivateStaticClass()
{
	using TClass = UDTDefine;
	if (!Z_Registration_Info_UClass_UDTDefine.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTDefine"),
			Z_Registration_Info_UClass_UDTDefine.InnerSingleton,
			StaticRegisterNativesUDTDefine,
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
	return Z_Registration_Info_UClass_UDTDefine.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTDefine_NoRegister()
{
	return UDTDefine::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTDefine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Types/DTDefine.h" },
		{ "ModuleRelativePath", "Types/DTDefine.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDTDefine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDTDefine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTDefine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTDefine_Statics::ClassParams = {
	&UDTDefine::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTDefine_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTDefine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTDefine()
{
	if (!Z_Registration_Info_UClass_UDTDefine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTDefine.OuterSingleton, Z_Construct_UClass_UDTDefine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTDefine.OuterSingleton;
}
UDTDefine::UDTDefine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTDefine);
UDTDefine::~UDTDefine() {}
// ********** End Class UDTDefine ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h__Script_DT_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDTSpecState_StaticEnum, TEXT("EDTSpecState"), &Z_Registration_Info_UEnum_EDTSpecState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2728181736U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDTTagAssetData::StaticStruct, Z_Construct_UScriptStruct_FDTTagAssetData_Statics::NewStructOps, TEXT("DTTagAssetData"), &Z_Registration_Info_UScriptStruct_FDTTagAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDTTagAssetData), 32861603U) },
		{ FDTActorList::StaticStruct, Z_Construct_UScriptStruct_FDTActorList_Statics::NewStructOps, TEXT("DTActorList"), &Z_Registration_Info_UScriptStruct_FDTActorList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDTActorList), 3463436207U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTDefine, UDTDefine::StaticClass, TEXT("UDTDefine"), &Z_Registration_Info_UClass_UDTDefine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTDefine), 2187215756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h__Script_DT_3514012454(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h__Script_DT_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h__Script_DT_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h__Script_DT_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h__Script_DT_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTDefine_h__Script_DT_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
