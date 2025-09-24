// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/RADefine.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRADefine() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
RA_API UEnum* Z_Construct_UEnum_RA_ERARobotState();
RA_API UScriptStruct* Z_Construct_UScriptStruct_FRAItemHistory();
RA_API UScriptStruct* Z_Construct_UScriptStruct_FRAItemOrder();
RA_API UScriptStruct* Z_Construct_UScriptStruct_FRAItemSpec();
UPackage* Z_Construct_UPackage__Script_RA();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERARobotState *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERARobotState;
static UEnum* ERARobotState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERARobotState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERARobotState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RA_ERARobotState, (UObject*)Z_Construct_UPackage__Script_RA(), TEXT("ERARobotState"));
	}
	return Z_Registration_Info_UEnum_ERARobotState.OuterSingleton;
}
template<> RA_API UEnum* StaticEnum<ERARobotState>()
{
	return ERARobotState_StaticEnum();
}
struct Z_Construct_UEnum_RA_ERARobotState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xa1\x9c\xeb\xb4\x87\xec\x9d\x98 \xec\x83\x81\xed\x83\x9c */" },
#endif
		{ "Error.Comment", "// \xea\xb3\xa0\xec\x9e\xa5\n" },
		{ "Error.Name", "ERARobotState::Error" },
		{ "Error.ToolTip", "\xea\xb3\xa0\xec\x9e\xa5" },
		{ "Idle.Comment", "// \xeb\x8c\x80\xea\xb8\xb0\n" },
		{ "Idle.Name", "ERARobotState::Idle" },
		{ "Idle.ToolTip", "\xeb\x8c\x80\xea\xb8\xb0" },
		{ "ModuleRelativePath", "Types/RADefine.h" },
		{ "Stopped.Comment", "// \xec\xa0\x95\xec\xa7\x80\n" },
		{ "Stopped.DisplayName", "Robot Stopped" },
		{ "Stopped.Name", "ERARobotState::Stopped" },
		{ "Stopped.ToolTip", "\xec\xa0\x95\xec\xa7\x80" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa1\x9c\xeb\xb4\x87\xec\x9d\x98 \xec\x83\x81\xed\x83\x9c" },
#endif
		{ "Working.Comment", "// \xec\x9e\x91\xec\x97\x85\xec\xa4\x91\n" },
		{ "Working.Name", "ERARobotState::Working" },
		{ "Working.ToolTip", "\xec\x9e\x91\xec\x97\x85\xec\xa4\x91" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERARobotState::Stopped", (int64)ERARobotState::Stopped },
		{ "ERARobotState::Idle", (int64)ERARobotState::Idle },
		{ "ERARobotState::Working", (int64)ERARobotState::Working },
		{ "ERARobotState::Error", (int64)ERARobotState::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RA_ERARobotState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RA,
	nullptr,
	"ERARobotState",
	"ERARobotState",
	Z_Construct_UEnum_RA_ERARobotState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RA_ERARobotState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RA_ERARobotState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RA_ERARobotState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RA_ERARobotState()
{
	if (!Z_Registration_Info_UEnum_ERARobotState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERARobotState.InnerSingleton, Z_Construct_UEnum_RA_ERARobotState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERARobotState.InnerSingleton;
}
// ********** End Enum ERARobotState ***************************************************************

// ********** Begin ScriptStruct FRAItemSpec *******************************************************
static_assert(std::is_polymorphic<FRAItemSpec>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FRAItemSpec cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRAItemSpec;
class UScriptStruct* FRAItemSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRAItemSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRAItemSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRAItemSpec, (UObject*)Z_Construct_UPackage__Script_RA(), TEXT("RAItemSpec"));
	}
	return Z_Registration_Info_UScriptStruct_FRAItemSpec.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRAItemSpec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xa0\x95\xeb\xb3\xb4 */" },
#endif
		{ "ModuleRelativePath", "Types/RADefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xa0\x95\xeb\xb3\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ItemSpec" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c\xeb\xaa\x85\n" },
#endif
		{ "ModuleRelativePath", "Types/RADefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c\xeb\xaa\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "ItemSpec" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x84\xa4\xeb\xaa\x85\n" },
#endif
		{ "ModuleRelativePath", "Types/RADefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x84\xa4\xeb\xaa\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "ItemSpec" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x95\x84\xec\x9d\xb4\xec\xbd\x98\n" },
#endif
		{ "ModuleRelativePath", "Types/RADefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x95\x84\xec\x9d\xb4\xec\xbd\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRAItemSpec>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRAItemSpec_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRAItemSpec, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRAItemSpec_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRAItemSpec, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRAItemSpec_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRAItemSpec, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRAItemSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRAItemSpec_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRAItemSpec_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRAItemSpec_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRAItemSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRAItemSpec_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"RAItemSpec",
	Z_Construct_UScriptStruct_FRAItemSpec_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRAItemSpec_Statics::PropPointers),
	sizeof(FRAItemSpec),
	alignof(FRAItemSpec),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRAItemSpec_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRAItemSpec_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRAItemSpec()
{
	if (!Z_Registration_Info_UScriptStruct_FRAItemSpec.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRAItemSpec.InnerSingleton, Z_Construct_UScriptStruct_FRAItemSpec_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRAItemSpec.InnerSingleton;
}
// ********** End ScriptStruct FRAItemSpec *********************************************************

// ********** Begin ScriptStruct FRAItemOrder ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRAItemOrder;
class UScriptStruct* FRAItemOrder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRAItemOrder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRAItemOrder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRAItemOrder, (UObject*)Z_Construct_UPackage__Script_RA(), TEXT("RAItemOrder"));
	}
	return Z_Registration_Info_UScriptStruct_FRAItemOrder.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRAItemOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xa3\xbc\xeb\xac\xb8 \xec\xa0\x95\xeb\xb3\xb4 */" },
#endif
		{ "ModuleRelativePath", "Types/RADefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xa3\xbc\xeb\xac\xb8 \xec\xa0\x95\xeb\xb3\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "ItemOrder" },
		{ "ModuleRelativePath", "Types/RADefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecName_MetaData[] = {
		{ "Category", "ItemOrder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xa0\x95\xeb\xb3\xb4\n" },
#endif
		{ "ModuleRelativePath", "Types/RADefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xa0\x95\xeb\xb3\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "ItemOrder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa3\xbc\xeb\xac\xb8 \xec\x88\x98\xeb\x9f\x89\n" },
#endif
		{ "ModuleRelativePath", "Types/RADefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa3\xbc\xeb\xac\xb8 \xec\x88\x98\xeb\x9f\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpecName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRAItemOrder>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRAItemOrder_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRAItemOrder, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRAItemOrder_Statics::NewProp_SpecName = { "SpecName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRAItemOrder, SpecName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecName_MetaData), NewProp_SpecName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRAItemOrder_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRAItemOrder, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRAItemOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRAItemOrder_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRAItemOrder_Statics::NewProp_SpecName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRAItemOrder_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRAItemOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRAItemOrder_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
	nullptr,
	&NewStructOps,
	"RAItemOrder",
	Z_Construct_UScriptStruct_FRAItemOrder_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRAItemOrder_Statics::PropPointers),
	sizeof(FRAItemOrder),
	alignof(FRAItemOrder),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRAItemOrder_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRAItemOrder_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRAItemOrder()
{
	if (!Z_Registration_Info_UScriptStruct_FRAItemOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRAItemOrder.InnerSingleton, Z_Construct_UScriptStruct_FRAItemOrder_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRAItemOrder.InnerSingleton;
}
// ********** End ScriptStruct FRAItemOrder ********************************************************

// ********** Begin ScriptStruct FRAItemHistory ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRAItemHistory;
class UScriptStruct* FRAItemHistory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRAItemHistory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRAItemHistory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRAItemHistory, (UObject*)Z_Construct_UPackage__Script_RA(), TEXT("RAItemHistory"));
	}
	return Z_Registration_Info_UScriptStruct_FRAItemHistory.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRAItemHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Types/RADefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecName_MetaData[] = {
		{ "Category", "ItemOrder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xa0\x95\xeb\xb3\xb4 (DataTable Key; RowName)\n" },
#endif
		{ "ModuleRelativePath", "Types/RADefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xa0\x95\xeb\xb3\xb4 (DataTable Key; RowName)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "ItemOrder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa3\xbc\xeb\xac\xb8 \xec\x88\x98\xeb\x9f\x89\n" },
#endif
		{ "ModuleRelativePath", "Types/RADefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa3\xbc\xeb\xac\xb8 \xec\x88\x98\xeb\x9f\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStockDirection_MetaData[] = {
		{ "Category", "ItemOrder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9e\x85\xea\xb3\xa0, \xec\xb6\x9c\xea\xb3\xa0 \xea\xb5\xac\xeb\xb6\x84 (true\xec\x9d\xb8 \xea\xb2\xbd\xec\x9a\xb0 \xec\x9e\x85\xea\xb3\xa0, false\xec\x9d\xb8 \xea\xb2\xbd\xec\x9a\xb0 \xec\xb6\x9c\xea\xb3\xa0)\n" },
#endif
		{ "ModuleRelativePath", "Types/RADefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9e\x85\xea\xb3\xa0, \xec\xb6\x9c\xea\xb3\xa0 \xea\xb5\xac\xeb\xb6\x84 (true\xec\x9d\xb8 \xea\xb2\xbd\xec\x9a\xb0 \xec\x9e\x85\xea\xb3\xa0, false\xec\x9d\xb8 \xea\xb2\xbd\xec\x9a\xb0 \xec\xb6\x9c\xea\xb3\xa0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "ItemOrder" },
		{ "ModuleRelativePath", "Types/RADefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpecName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_bStockDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStockDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRAItemHistory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRAItemHistory_Statics::NewProp_SpecName = { "SpecName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRAItemHistory, SpecName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecName_MetaData), NewProp_SpecName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRAItemHistory_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRAItemHistory, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
void Z_Construct_UScriptStruct_FRAItemHistory_Statics::NewProp_bStockDirection_SetBit(void* Obj)
{
	((FRAItemHistory*)Obj)->bStockDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRAItemHistory_Statics::NewProp_bStockDirection = { "bStockDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRAItemHistory), &Z_Construct_UScriptStruct_FRAItemHistory_Statics::NewProp_bStockDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStockDirection_MetaData), NewProp_bStockDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRAItemHistory_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRAItemHistory, Time), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRAItemHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRAItemHistory_Statics::NewProp_SpecName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRAItemHistory_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRAItemHistory_Statics::NewProp_bStockDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRAItemHistory_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRAItemHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRAItemHistory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
	nullptr,
	&NewStructOps,
	"RAItemHistory",
	Z_Construct_UScriptStruct_FRAItemHistory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRAItemHistory_Statics::PropPointers),
	sizeof(FRAItemHistory),
	alignof(FRAItemHistory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRAItemHistory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRAItemHistory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRAItemHistory()
{
	if (!Z_Registration_Info_UScriptStruct_FRAItemHistory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRAItemHistory.InnerSingleton, Z_Construct_UScriptStruct_FRAItemHistory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRAItemHistory.InnerSingleton;
}
// ********** End ScriptStruct FRAItemHistory ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Types_RADefine_h__Script_RA_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERARobotState_StaticEnum, TEXT("ERARobotState"), &Z_Registration_Info_UEnum_ERARobotState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1587113106U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRAItemSpec::StaticStruct, Z_Construct_UScriptStruct_FRAItemSpec_Statics::NewStructOps, TEXT("RAItemSpec"), &Z_Registration_Info_UScriptStruct_FRAItemSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRAItemSpec), 2912931229U) },
		{ FRAItemOrder::StaticStruct, Z_Construct_UScriptStruct_FRAItemOrder_Statics::NewStructOps, TEXT("RAItemOrder"), &Z_Registration_Info_UScriptStruct_FRAItemOrder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRAItemOrder), 1807772985U) },
		{ FRAItemHistory::StaticStruct, Z_Construct_UScriptStruct_FRAItemHistory_Statics::NewStructOps, TEXT("RAItemHistory"), &Z_Registration_Info_UScriptStruct_FRAItemHistory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRAItemHistory), 247344417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Types_RADefine_h__Script_RA_3716841440(TEXT("/Script/RA"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Types_RADefine_h__Script_RA_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Types_RADefine_h__Script_RA_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Types_RADefine_h__Script_RA_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Types_RADefine_h__Script_RA_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
