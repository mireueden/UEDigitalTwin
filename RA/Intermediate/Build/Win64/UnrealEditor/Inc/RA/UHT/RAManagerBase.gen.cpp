// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manager/RAManagerBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRAManagerBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AInfo();
RA_API UClass* Z_Construct_UClass_ARAManagerBase();
RA_API UClass* Z_Construct_UClass_ARAManagerBase_NoRegister();
RA_API UClass* Z_Construct_UClass_URAManageComponent_NoRegister();
RA_API UEnum* Z_Construct_UEnum_RA_ERAManagerInitializeState();
RA_API UFunction* Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature();
RA_API UFunction* Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_RA();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FManagerPhaseDelegate *************************************************
struct Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature_Statics
{
	struct _Script_RA_eventManagerPhaseDelegate_Parms
	{
		ARAManagerBase* Manager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RA_eventManagerPhaseDelegate_Parms, Manager), Z_Construct_UClass_ARAManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature_Statics::NewProp_Manager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RA, nullptr, "ManagerPhaseDelegate__DelegateSignature", Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature_Statics::_Script_RA_eventManagerPhaseDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature_Statics::_Script_RA_eventManagerPhaseDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FManagerPhaseDelegate_DelegateWrapper(const FMulticastScriptDelegate& ManagerPhaseDelegate, ARAManagerBase* Manager)
{
	struct _Script_RA_eventManagerPhaseDelegate_Parms
	{
		ARAManagerBase* Manager;
	};
	_Script_RA_eventManagerPhaseDelegate_Parms Parms;
	Parms.Manager=Manager;
	ManagerPhaseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FManagerPhaseDelegate ***************************************************

// ********** Begin Delegate FOnManageComponentDelegate ********************************************
struct Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature_Statics
{
	struct _Script_RA_eventOnManageComponentDelegate_Parms
	{
		URAManageComponent* Comp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Comp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RA_eventOnManageComponentDelegate_Parms, Comp), Z_Construct_UClass_URAManageComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comp_MetaData), NewProp_Comp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature_Statics::NewProp_Comp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RA, nullptr, "OnManageComponentDelegate__DelegateSignature", Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature_Statics::_Script_RA_eventOnManageComponentDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature_Statics::_Script_RA_eventOnManageComponentDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnManageComponentDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnManageComponentDelegate, URAManageComponent* Comp)
{
	struct _Script_RA_eventOnManageComponentDelegate_Parms
	{
		URAManageComponent* Comp;
	};
	_Script_RA_eventOnManageComponentDelegate_Parms Parms;
	Parms.Comp=Comp;
	OnManageComponentDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnManageComponentDelegate **********************************************

// ********** Begin Enum ERAManagerInitializeState *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERAManagerInitializeState;
static UEnum* ERAManagerInitializeState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERAManagerInitializeState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERAManagerInitializeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RA_ERAManagerInitializeState, (UObject*)Z_Construct_UPackage__Script_RA(), TEXT("ERAManagerInitializeState"));
	}
	return Z_Registration_Info_UEnum_ERAManagerInitializeState.OuterSingleton;
}
template<> RA_API UEnum* StaticEnum<ERAManagerInitializeState>()
{
	return ERAManagerInitializeState_StaticEnum();
}
struct Z_Construct_UEnum_RA_ERAManagerInitializeState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Initialized.Name", "ERAManagerInitializeState::Initialized" },
		{ "Initializing.Name", "ERAManagerInitializeState::Initializing" },
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
		{ "Uninitialized.Name", "ERAManagerInitializeState::Uninitialized" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERAManagerInitializeState::Uninitialized", (int64)ERAManagerInitializeState::Uninitialized },
		{ "ERAManagerInitializeState::Initializing", (int64)ERAManagerInitializeState::Initializing },
		{ "ERAManagerInitializeState::Initialized", (int64)ERAManagerInitializeState::Initialized },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RA_ERAManagerInitializeState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RA,
	nullptr,
	"ERAManagerInitializeState",
	"ERAManagerInitializeState",
	Z_Construct_UEnum_RA_ERAManagerInitializeState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RA_ERAManagerInitializeState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RA_ERAManagerInitializeState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RA_ERAManagerInitializeState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RA_ERAManagerInitializeState()
{
	if (!Z_Registration_Info_UEnum_ERAManagerInitializeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERAManagerInitializeState.InnerSingleton, Z_Construct_UEnum_RA_ERAManagerInitializeState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERAManagerInitializeState.InnerSingleton;
}
// ********** End Enum ERAManagerInitializeState ***************************************************

// ********** Begin Class ARAManagerBase Function AddManageComponent *******************************
struct Z_Construct_UFunction_ARAManagerBase_AddManageComponent_Statics
{
	struct RAManagerBase_eventAddManageComponent_Parms
	{
		URAManageComponent* Comp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// *********************************\n// Begin RAManagerBase Interface\n// *********************************\n" },
#endif
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin RAManagerBase Interface" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Comp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARAManagerBase_AddManageComponent_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAManagerBase_eventAddManageComponent_Parms, Comp), Z_Construct_UClass_URAManageComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comp_MetaData), NewProp_Comp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARAManagerBase_AddManageComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAManagerBase_AddManageComponent_Statics::NewProp_Comp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_AddManageComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAManagerBase_AddManageComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAManagerBase, nullptr, "AddManageComponent", Z_Construct_UFunction_ARAManagerBase_AddManageComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_AddManageComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARAManagerBase_AddManageComponent_Statics::RAManagerBase_eventAddManageComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_AddManageComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAManagerBase_AddManageComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARAManagerBase_AddManageComponent_Statics::RAManagerBase_eventAddManageComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARAManagerBase_AddManageComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAManagerBase_AddManageComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAManagerBase::execAddManageComponent)
{
	P_GET_OBJECT(URAManageComponent,Z_Param_Comp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddManageComponent(Z_Param_Comp);
	P_NATIVE_END;
}
// ********** End Class ARAManagerBase Function AddManageComponent *********************************

// ********** Begin Class ARAManagerBase Function BP_Initialize ************************************
static FName NAME_ARAManagerBase_BP_Initialize = FName(TEXT("BP_Initialize"));
void ARAManagerBase::BP_Initialize()
{
	UFunction* Func = FindFunctionChecked(NAME_ARAManagerBase_BP_Initialize);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ARAManagerBase_BP_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAManager" },
		{ "DisplayName", "Initialize" },
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAManagerBase_BP_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAManagerBase, nullptr, "BP_Initialize", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_BP_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAManagerBase_BP_Initialize_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARAManagerBase_BP_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAManagerBase_BP_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ARAManagerBase Function BP_Initialize **************************************

// ********** Begin Class ARAManagerBase Function GetManageComponents ******************************
struct Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics
{
	struct RAManagerBase_eventGetManageComponents_Parms
	{
		TArray<URAManageComponent*> ComponentList;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAManager" },
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentList_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics::NewProp_ComponentList_Inner = { "ComponentList", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URAManageComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics::NewProp_ComponentList = { "ComponentList", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAManagerBase_eventGetManageComponents_Parms, ComponentList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentList_MetaData), NewProp_ComponentList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics::NewProp_ComponentList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics::NewProp_ComponentList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAManagerBase, nullptr, "GetManageComponents", Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics::RAManagerBase_eventGetManageComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics::RAManagerBase_eventGetManageComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARAManagerBase_GetManageComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAManagerBase_GetManageComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAManagerBase::execGetManageComponents)
{
	P_GET_TARRAY_REF(URAManageComponent*,Z_Param_Out_ComponentList);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetManageComponents(Z_Param_Out_ComponentList);
	P_NATIVE_END;
}
// ********** End Class ARAManagerBase Function GetManageComponents ********************************

// ********** Begin Class ARAManagerBase Function Initialize ***************************************
struct Z_Construct_UFunction_ARAManagerBase_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAManagerBase_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAManagerBase, nullptr, "Initialize", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAManagerBase_Initialize_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARAManagerBase_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAManagerBase_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAManagerBase::execInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize();
	P_NATIVE_END;
}
// ********** End Class ARAManagerBase Function Initialize *****************************************

// ********** Begin Class ARAManagerBase Function InitializeNative *********************************
struct Z_Construct_UFunction_ARAManagerBase_InitializeNative_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAManagerBase_InitializeNative_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAManagerBase, nullptr, "InitializeNative", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_InitializeNative_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAManagerBase_InitializeNative_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARAManagerBase_InitializeNative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAManagerBase_InitializeNative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAManagerBase::execInitializeNative)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeNative();
	P_NATIVE_END;
}
// ********** End Class ARAManagerBase Function InitializeNative ***********************************

// ********** Begin Class ARAManagerBase Function IsAllowClass *************************************
struct Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics
{
	struct RAManagerBase_eventIsAllowClass_Parms
	{
		URAManageComponent* Comp;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Comp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAManagerBase_eventIsAllowClass_Parms, Comp), Z_Construct_UClass_URAManageComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comp_MetaData), NewProp_Comp_MetaData) };
void Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RAManagerBase_eventIsAllowClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RAManagerBase_eventIsAllowClass_Parms), &Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::NewProp_Comp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAManagerBase, nullptr, "IsAllowClass", Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::RAManagerBase_eventIsAllowClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::RAManagerBase_eventIsAllowClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARAManagerBase_IsAllowClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAManagerBase_IsAllowClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAManagerBase::execIsAllowClass)
{
	P_GET_OBJECT(URAManageComponent,Z_Param_Comp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAllowClass(Z_Param_Comp);
	P_NATIVE_END;
}
// ********** End Class ARAManagerBase Function IsAllowClass ***************************************

// ********** Begin Class ARAManagerBase Function IsInitialized ************************************
struct Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics
{
	struct RAManagerBase_eventIsInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RAManagerBase_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RAManagerBase_eventIsInitialized_Parms), &Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAManagerBase, nullptr, "IsInitialized", Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics::RAManagerBase_eventIsInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics::RAManagerBase_eventIsInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARAManagerBase_IsInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAManagerBase_IsInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAManagerBase::execIsInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInitialized();
	P_NATIVE_END;
}
// ********** End Class ARAManagerBase Function IsInitialized **************************************

// ********** Begin Class ARAManagerBase Function RemoveManageComponent ****************************
struct Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent_Statics
{
	struct RAManagerBase_eventRemoveManageComponent_Parms
	{
		URAManageComponent* Comp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Comp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAManagerBase_eventRemoveManageComponent_Parms, Comp), Z_Construct_UClass_URAManageComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comp_MetaData), NewProp_Comp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent_Statics::NewProp_Comp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARAManagerBase, nullptr, "RemoveManageComponent", Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent_Statics::RAManagerBase_eventRemoveManageComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent_Statics::RAManagerBase_eventRemoveManageComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARAManagerBase::execRemoveManageComponent)
{
	P_GET_OBJECT(URAManageComponent,Z_Param_Comp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveManageComponent(Z_Param_Comp);
	P_NATIVE_END;
}
// ********** End Class ARAManagerBase Function RemoveManageComponent ******************************

// ********** Begin Class ARAManagerBase ***********************************************************
void ARAManagerBase::StaticRegisterNativesARAManagerBase()
{
	UClass* Class = ARAManagerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddManageComponent", &ARAManagerBase::execAddManageComponent },
		{ "GetManageComponents", &ARAManagerBase::execGetManageComponents },
		{ "Initialize", &ARAManagerBase::execInitialize },
		{ "InitializeNative", &ARAManagerBase::execInitializeNative },
		{ "IsAllowClass", &ARAManagerBase::execIsAllowClass },
		{ "IsInitialized", &ARAManagerBase::execIsInitialized },
		{ "RemoveManageComponent", &ARAManagerBase::execRemoveManageComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARAManagerBase;
UClass* ARAManagerBase::GetPrivateStaticClass()
{
	using TClass = ARAManagerBase;
	if (!Z_Registration_Info_UClass_ARAManagerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RAManagerBase"),
			Z_Registration_Info_UClass_ARAManagerBase.InnerSingleton,
			StaticRegisterNativesARAManagerBase,
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
	return Z_Registration_Info_UClass_ARAManagerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ARAManagerBase_NoRegister()
{
	return ARAManagerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARAManagerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Manager/RAManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitializeState_MetaData[] = {
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPreInitialized_MetaData[] = {
		{ "Category", "RAManager" },
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPostInitialized_MetaData[] = {
		{ "Category", "RAManager" },
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManageComponentList_MetaData[] = {
		{ "Category", "RAManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnManageComponentAdded_MetaData[] = {
		{ "Category", "RAManager" },
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnManageComponentRemoved_MetaData[] = {
		{ "Category", "RAManager" },
		{ "ModuleRelativePath", "Manager/RAManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitializeState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitializeState;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreInitialized;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostInitialized;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManageComponentList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ManageComponentList;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManageComponentAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManageComponentRemoved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARAManagerBase_AddManageComponent, "AddManageComponent" }, // 3706525396
		{ &Z_Construct_UFunction_ARAManagerBase_BP_Initialize, "BP_Initialize" }, // 2634419762
		{ &Z_Construct_UFunction_ARAManagerBase_GetManageComponents, "GetManageComponents" }, // 2748728886
		{ &Z_Construct_UFunction_ARAManagerBase_Initialize, "Initialize" }, // 4120412952
		{ &Z_Construct_UFunction_ARAManagerBase_InitializeNative, "InitializeNative" }, // 1816760200
		{ &Z_Construct_UFunction_ARAManagerBase_IsAllowClass, "IsAllowClass" }, // 1623169158
		{ &Z_Construct_UFunction_ARAManagerBase_IsInitialized, "IsInitialized" }, // 1113732867
		{ &Z_Construct_UFunction_ARAManagerBase_RemoveManageComponent, "RemoveManageComponent" }, // 3405304163
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARAManagerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARAManagerBase_Statics::NewProp_InitializeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARAManagerBase_Statics::NewProp_InitializeState = { "InitializeState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAManagerBase, InitializeState), Z_Construct_UEnum_RA_ERAManagerInitializeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitializeState_MetaData), NewProp_InitializeState_MetaData) }; // 146867433
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARAManagerBase_Statics::NewProp_OnPreInitialized = { "OnPreInitialized", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAManagerBase, OnPreInitialized), Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPreInitialized_MetaData), NewProp_OnPreInitialized_MetaData) }; // 545539046
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARAManagerBase_Statics::NewProp_OnPostInitialized = { "OnPostInitialized", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAManagerBase, OnPostInitialized), Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPostInitialized_MetaData), NewProp_OnPostInitialized_MetaData) }; // 545539046
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARAManagerBase_Statics::NewProp_ManageComponentList_Inner = { "ManageComponentList", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URAManageComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARAManagerBase_Statics::NewProp_ManageComponentList = { "ManageComponentList", nullptr, (EPropertyFlags)0x001000800002081d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAManagerBase, ManageComponentList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManageComponentList_MetaData), NewProp_ManageComponentList_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARAManagerBase_Statics::NewProp_OnManageComponentAdded = { "OnManageComponentAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAManagerBase, OnManageComponentAdded), Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnManageComponentAdded_MetaData), NewProp_OnManageComponentAdded_MetaData) }; // 2776553817
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARAManagerBase_Statics::NewProp_OnManageComponentRemoved = { "OnManageComponentRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARAManagerBase, OnManageComponentRemoved), Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnManageComponentRemoved_MetaData), NewProp_OnManageComponentRemoved_MetaData) }; // 2776553817
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARAManagerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAManagerBase_Statics::NewProp_InitializeState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAManagerBase_Statics::NewProp_InitializeState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAManagerBase_Statics::NewProp_OnPreInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAManagerBase_Statics::NewProp_OnPostInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAManagerBase_Statics::NewProp_ManageComponentList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAManagerBase_Statics::NewProp_ManageComponentList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAManagerBase_Statics::NewProp_OnManageComponentAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARAManagerBase_Statics::NewProp_OnManageComponentRemoved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARAManagerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARAManagerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARAManagerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARAManagerBase_Statics::ClassParams = {
	&ARAManagerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARAManagerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARAManagerBase_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARAManagerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARAManagerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARAManagerBase()
{
	if (!Z_Registration_Info_UClass_ARAManagerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARAManagerBase.OuterSingleton, Z_Construct_UClass_ARAManagerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARAManagerBase.OuterSingleton;
}
ARAManagerBase::ARAManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARAManagerBase);
ARAManagerBase::~ARAManagerBase() {}
// ********** End Class ARAManagerBase *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h__Script_RA_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERAManagerInitializeState_StaticEnum, TEXT("ERAManagerInitializeState"), &Z_Registration_Info_UEnum_ERAManagerInitializeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 146867433U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARAManagerBase, ARAManagerBase::StaticClass, TEXT("ARAManagerBase"), &Z_Registration_Info_UClass_ARAManagerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARAManagerBase), 4291297384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h__Script_RA_3932522312(TEXT("/Script/RA"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h__Script_RA_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h__Script_RA_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h__Script_RA_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAManagerBase_h__Script_RA_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
