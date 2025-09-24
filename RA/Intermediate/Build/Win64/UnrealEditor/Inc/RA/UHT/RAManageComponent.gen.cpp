// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RAManageComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRAManageComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RA_API UClass* Z_Construct_UClass_URAManageComponent();
RA_API UClass* Z_Construct_UClass_URAManageComponent_Item();
RA_API UClass* Z_Construct_UClass_URAManageComponent_Item_NoRegister();
RA_API UClass* Z_Construct_UClass_URAManageComponent_NoRegister();
RA_API UClass* Z_Construct_UClass_URAManageComponent_Robot();
RA_API UClass* Z_Construct_UClass_URAManageComponent_Robot_NoRegister();
RA_API UEnum* Z_Construct_UEnum_RA_ERARobotState();
RA_API UFunction* Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_RA();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRobotStateChangedDelegate ******************************************
struct Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics
{
	struct _Script_RA_eventOnRobotStateChangedDelegate_Parms
	{
		ERARobotState PrevState;
		ERARobotState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/RAManageComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrevState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::NewProp_PrevState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::NewProp_PrevState = { "PrevState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RA_eventOnRobotStateChangedDelegate_Parms, PrevState), Z_Construct_UEnum_RA_ERARobotState, METADATA_PARAMS(0, nullptr) }; // 1587113106
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RA_eventOnRobotStateChangedDelegate_Parms, NewState), Z_Construct_UEnum_RA_ERARobotState, METADATA_PARAMS(0, nullptr) }; // 1587113106
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::NewProp_PrevState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::NewProp_PrevState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RA, nullptr, "OnRobotStateChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::_Script_RA_eventOnRobotStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::_Script_RA_eventOnRobotStateChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRobotStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRobotStateChangedDelegate, ERARobotState PrevState, ERARobotState NewState)
{
	struct _Script_RA_eventOnRobotStateChangedDelegate_Parms
	{
		ERARobotState PrevState;
		ERARobotState NewState;
	};
	_Script_RA_eventOnRobotStateChangedDelegate_Parms Parms;
	Parms.PrevState=PrevState;
	Parms.NewState=NewState;
	OnRobotStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRobotStateChangedDelegate ********************************************

// ********** Begin Class URAManageComponent *******************************************************
void URAManageComponent::StaticRegisterNativesURAManageComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URAManageComponent;
UClass* URAManageComponent::GetPrivateStaticClass()
{
	using TClass = URAManageComponent;
	if (!Z_Registration_Info_UClass_URAManageComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RAManageComponent"),
			Z_Registration_Info_UClass_URAManageComponent.InnerSingleton,
			StaticRegisterNativesURAManageComponent,
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
	return Z_Registration_Info_UClass_URAManageComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URAManageComponent_NoRegister()
{
	return URAManageComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URAManageComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/RAManageComponent.h" },
		{ "ModuleRelativePath", "Components/RAManageComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URAManageComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URAManageComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URAManageComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URAManageComponent_Statics::ClassParams = {
	&URAManageComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URAManageComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URAManageComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URAManageComponent()
{
	if (!Z_Registration_Info_UClass_URAManageComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URAManageComponent.OuterSingleton, Z_Construct_UClass_URAManageComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URAManageComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URAManageComponent);
URAManageComponent::~URAManageComponent() {}
// ********** End Class URAManageComponent *********************************************************

// ********** Begin Class URAManageComponent_Robot Function GetRobotState **************************
struct Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics
{
	struct RAManageComponent_Robot_eventGetRobotState_Parms
	{
		ERARobotState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/RAManageComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAManageComponent_Robot_eventGetRobotState_Parms, ReturnValue), Z_Construct_UEnum_RA_ERARobotState, METADATA_PARAMS(0, nullptr) }; // 1587113106
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAManageComponent_Robot, nullptr, "GetRobotState", Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics::PropPointers), sizeof(Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics::RAManageComponent_Robot_eventGetRobotState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics::RAManageComponent_Robot_eventGetRobotState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAManageComponent_Robot::execGetRobotState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERARobotState*)Z_Param__Result=P_THIS->GetRobotState();
	P_NATIVE_END;
}
// ********** End Class URAManageComponent_Robot Function GetRobotState ****************************

// ********** Begin Class URAManageComponent_Robot Function SetRobotState **************************
struct Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics
{
	struct RAManageComponent_Robot_eventSetRobotState_Parms
	{
		ERARobotState State;
		bool bNotify;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bNotify", "true" },
		{ "ModuleRelativePath", "Components/RAManageComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static void NewProp_bNotify_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotify;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAManageComponent_Robot_eventSetRobotState_Parms, State), Z_Construct_UEnum_RA_ERARobotState, METADATA_PARAMS(0, nullptr) }; // 1587113106
void Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::NewProp_bNotify_SetBit(void* Obj)
{
	((RAManageComponent_Robot_eventSetRobotState_Parms*)Obj)->bNotify = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RAManageComponent_Robot_eventSetRobotState_Parms), &Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::NewProp_bNotify,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAManageComponent_Robot, nullptr, "SetRobotState", Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::PropPointers), sizeof(Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::RAManageComponent_Robot_eventSetRobotState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::RAManageComponent_Robot_eventSetRobotState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAManageComponent_Robot::execSetRobotState)
{
	P_GET_ENUM(ERARobotState,Z_Param_State);
	P_GET_UBOOL(Z_Param_bNotify);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRobotState(ERARobotState(Z_Param_State),Z_Param_bNotify);
	P_NATIVE_END;
}
// ********** End Class URAManageComponent_Robot Function SetRobotState ****************************

// ********** Begin Class URAManageComponent_Robot *************************************************
void URAManageComponent_Robot::StaticRegisterNativesURAManageComponent_Robot()
{
	UClass* Class = URAManageComponent_Robot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRobotState", &URAManageComponent_Robot::execGetRobotState },
		{ "SetRobotState", &URAManageComponent_Robot::execSetRobotState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URAManageComponent_Robot;
UClass* URAManageComponent_Robot::GetPrivateStaticClass()
{
	using TClass = URAManageComponent_Robot;
	if (!Z_Registration_Info_UClass_URAManageComponent_Robot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RAManageComponent_Robot"),
			Z_Registration_Info_UClass_URAManageComponent_Robot.InnerSingleton,
			StaticRegisterNativesURAManageComponent_Robot,
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
	return Z_Registration_Info_UClass_URAManageComponent_Robot.InnerSingleton;
}
UClass* Z_Construct_UClass_URAManageComponent_Robot_NoRegister()
{
	return URAManageComponent_Robot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URAManageComponent_Robot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Components/RAManageComponent.h" },
		{ "ModuleRelativePath", "Components/RAManageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RobotState_MetaData[] = {
		{ "Category", "ManageComponent" },
		{ "ModuleRelativePath", "Components/RAManageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRobotStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Components/RAManageComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RobotState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RobotState;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRobotStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URAManageComponent_Robot_GetRobotState, "GetRobotState" }, // 4130180156
		{ &Z_Construct_UFunction_URAManageComponent_Robot_SetRobotState, "SetRobotState" }, // 1603373646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URAManageComponent_Robot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URAManageComponent_Robot_Statics::NewProp_RobotState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URAManageComponent_Robot_Statics::NewProp_RobotState = { "RobotState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URAManageComponent_Robot, RobotState), Z_Construct_UEnum_RA_ERARobotState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RobotState_MetaData), NewProp_RobotState_MetaData) }; // 1587113106
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URAManageComponent_Robot_Statics::NewProp_OnRobotStateChanged = { "OnRobotStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URAManageComponent_Robot, OnRobotStateChanged), Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRobotStateChanged_MetaData), NewProp_OnRobotStateChanged_MetaData) }; // 4000335704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URAManageComponent_Robot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAManageComponent_Robot_Statics::NewProp_RobotState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAManageComponent_Robot_Statics::NewProp_RobotState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URAManageComponent_Robot_Statics::NewProp_OnRobotStateChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URAManageComponent_Robot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URAManageComponent_Robot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URAManageComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URAManageComponent_Robot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URAManageComponent_Robot_Statics::ClassParams = {
	&URAManageComponent_Robot::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URAManageComponent_Robot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URAManageComponent_Robot_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URAManageComponent_Robot_Statics::Class_MetaDataParams), Z_Construct_UClass_URAManageComponent_Robot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URAManageComponent_Robot()
{
	if (!Z_Registration_Info_UClass_URAManageComponent_Robot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URAManageComponent_Robot.OuterSingleton, Z_Construct_UClass_URAManageComponent_Robot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URAManageComponent_Robot.OuterSingleton;
}
URAManageComponent_Robot::URAManageComponent_Robot() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URAManageComponent_Robot);
URAManageComponent_Robot::~URAManageComponent_Robot() {}
// ********** End Class URAManageComponent_Robot ***************************************************

// ********** Begin Class URAManageComponent_Item **************************************************
void URAManageComponent_Item::StaticRegisterNativesURAManageComponent_Item()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URAManageComponent_Item;
UClass* URAManageComponent_Item::GetPrivateStaticClass()
{
	using TClass = URAManageComponent_Item;
	if (!Z_Registration_Info_UClass_URAManageComponent_Item.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RAManageComponent_Item"),
			Z_Registration_Info_UClass_URAManageComponent_Item.InnerSingleton,
			StaticRegisterNativesURAManageComponent_Item,
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
	return Z_Registration_Info_UClass_URAManageComponent_Item.InnerSingleton;
}
UClass* Z_Construct_UClass_URAManageComponent_Item_NoRegister()
{
	return URAManageComponent_Item::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URAManageComponent_Item_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Components/RAManageComponent.h" },
		{ "ModuleRelativePath", "Components/RAManageComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URAManageComponent_Item>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URAManageComponent_Item_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URAManageComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URAManageComponent_Item_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URAManageComponent_Item_Statics::ClassParams = {
	&URAManageComponent_Item::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URAManageComponent_Item_Statics::Class_MetaDataParams), Z_Construct_UClass_URAManageComponent_Item_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URAManageComponent_Item()
{
	if (!Z_Registration_Info_UClass_URAManageComponent_Item.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URAManageComponent_Item.OuterSingleton, Z_Construct_UClass_URAManageComponent_Item_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URAManageComponent_Item.OuterSingleton;
}
URAManageComponent_Item::URAManageComponent_Item() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URAManageComponent_Item);
URAManageComponent_Item::~URAManageComponent_Item() {}
// ********** End Class URAManageComponent_Item ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h__Script_RA_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URAManageComponent, URAManageComponent::StaticClass, TEXT("URAManageComponent"), &Z_Registration_Info_UClass_URAManageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URAManageComponent), 3289054748U) },
		{ Z_Construct_UClass_URAManageComponent_Robot, URAManageComponent_Robot::StaticClass, TEXT("URAManageComponent_Robot"), &Z_Registration_Info_UClass_URAManageComponent_Robot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URAManageComponent_Robot), 1249180966U) },
		{ Z_Construct_UClass_URAManageComponent_Item, URAManageComponent_Item::StaticClass, TEXT("URAManageComponent_Item"), &Z_Registration_Info_UClass_URAManageComponent_Item, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URAManageComponent_Item), 4052783366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h__Script_RA_3299085451(TEXT("/Script/RA"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h__Script_RA_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Components_RAManageComponent_h__Script_RA_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
