// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMode/DTGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTGameMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DT_API UClass* Z_Construct_UClass_ADTGameMode();
DT_API UClass* Z_Construct_UClass_ADTGameMode_NoRegister();
DT_API UClass* Z_Construct_UClass_ADTManagerBase_NoRegister();
DT_API UFunction* Z_Construct_UDelegateFunction_DT_OnInitializeManagersComplete__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnInitializeManagersComplete *****************************************
struct Z_Construct_UDelegateFunction_DT_OnInitializeManagersComplete__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameMode/DTGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DT_OnInitializeManagersComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DT, nullptr, "OnInitializeManagersComplete__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DT_OnInitializeManagersComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DT_OnInitializeManagersComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_DT_OnInitializeManagersComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DT_OnInitializeManagersComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInitializeManagersComplete_DelegateWrapper(const FMulticastScriptDelegate& OnInitializeManagersComplete)
{
	OnInitializeManagersComplete.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnInitializeManagersComplete *******************************************

// ********** Begin Class ADTGameMode Function GetManager ******************************************
struct Z_Construct_UFunction_ADTGameMode_GetManager_Statics
{
	struct DTGameMode_eventGetManager_Parms
	{
		TSubclassOf<ADTManagerBase> ManagerClass;
		ADTManagerBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "ManagerClass" },
		{ "ModuleRelativePath", "GameMode/DTGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ManagerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADTGameMode_GetManager_Statics::NewProp_ManagerClass = { "ManagerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTGameMode_eventGetManager_Parms, ManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADTManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTGameMode_GetManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTGameMode_eventGetManager_Parms, ReturnValue), Z_Construct_UClass_ADTManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTGameMode_GetManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTGameMode_GetManager_Statics::NewProp_ManagerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTGameMode_GetManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTGameMode_GetManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTGameMode_GetManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTGameMode, nullptr, "GetManager", Z_Construct_UFunction_ADTGameMode_GetManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTGameMode_GetManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTGameMode_GetManager_Statics::DTGameMode_eventGetManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTGameMode_GetManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTGameMode_GetManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADTGameMode_GetManager_Statics::DTGameMode_eventGetManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTGameMode_GetManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTGameMode_GetManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTGameMode::execGetManager)
{
	P_GET_OBJECT(UClass,Z_Param_ManagerClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADTManagerBase**)Z_Param__Result=P_THIS->GetManager(Z_Param_ManagerClass);
	P_NATIVE_END;
}
// ********** End Class ADTGameMode Function GetManager ********************************************

// ********** Begin Class ADTGameMode Function InitializeManagers **********************************
struct Z_Construct_UFunction_ADTGameMode_InitializeManagers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameMode/DTGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTGameMode_InitializeManagers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTGameMode, nullptr, "InitializeManagers", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTGameMode_InitializeManagers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTGameMode_InitializeManagers_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADTGameMode_InitializeManagers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTGameMode_InitializeManagers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTGameMode::execInitializeManagers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeManagers();
	P_NATIVE_END;
}
// ********** End Class ADTGameMode Function InitializeManagers ************************************

// ********** Begin Class ADTGameMode Function IsInitializeManagersComplete ************************
struct Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics
{
	struct DTGameMode_eventIsInitializeManagersComplete_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameMode/DTGameMode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DTGameMode_eventIsInitializeManagersComplete_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DTGameMode_eventIsInitializeManagersComplete_Parms), &Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTGameMode, nullptr, "IsInitializeManagersComplete", Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics::DTGameMode_eventIsInitializeManagersComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics::DTGameMode_eventIsInitializeManagersComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTGameMode::execIsInitializeManagersComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInitializeManagersComplete();
	P_NATIVE_END;
}
// ********** End Class ADTGameMode Function IsInitializeManagersComplete **************************

// ********** Begin Class ADTGameMode Function NotifyInitializeManagerComplete *********************
struct Z_Construct_UFunction_ADTGameMode_NotifyInitializeManagerComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameMode/DTGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTGameMode_NotifyInitializeManagerComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTGameMode, nullptr, "NotifyInitializeManagerComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTGameMode_NotifyInitializeManagerComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTGameMode_NotifyInitializeManagerComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADTGameMode_NotifyInitializeManagerComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTGameMode_NotifyInitializeManagerComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTGameMode::execNotifyInitializeManagerComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyInitializeManagerComplete();
	P_NATIVE_END;
}
// ********** End Class ADTGameMode Function NotifyInitializeManagerComplete ***********************

// ********** Begin Class ADTGameMode Function OnManagerLoaded *************************************
struct Z_Construct_UFunction_ADTGameMode_OnManagerLoaded_Statics
{
	struct DTGameMode_eventOnManagerLoaded_Parms
	{
		ADTManagerBase* Manager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameMode/DTGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADTGameMode_OnManagerLoaded_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTGameMode_eventOnManagerLoaded_Parms, Manager), Z_Construct_UClass_ADTManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADTGameMode_OnManagerLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADTGameMode_OnManagerLoaded_Statics::NewProp_Manager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTGameMode_OnManagerLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADTGameMode_OnManagerLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADTGameMode, nullptr, "OnManagerLoaded", Z_Construct_UFunction_ADTGameMode_OnManagerLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADTGameMode_OnManagerLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADTGameMode_OnManagerLoaded_Statics::DTGameMode_eventOnManagerLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADTGameMode_OnManagerLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADTGameMode_OnManagerLoaded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADTGameMode_OnManagerLoaded_Statics::DTGameMode_eventOnManagerLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADTGameMode_OnManagerLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADTGameMode_OnManagerLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADTGameMode::execOnManagerLoaded)
{
	P_GET_OBJECT(ADTManagerBase,Z_Param_Manager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnManagerLoaded(Z_Param_Manager);
	P_NATIVE_END;
}
// ********** End Class ADTGameMode Function OnManagerLoaded ***************************************

// ********** Begin Class ADTGameMode **************************************************************
void ADTGameMode::StaticRegisterNativesADTGameMode()
{
	UClass* Class = ADTGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetManager", &ADTGameMode::execGetManager },
		{ "InitializeManagers", &ADTGameMode::execInitializeManagers },
		{ "IsInitializeManagersComplete", &ADTGameMode::execIsInitializeManagersComplete },
		{ "NotifyInitializeManagerComplete", &ADTGameMode::execNotifyInitializeManagerComplete },
		{ "OnManagerLoaded", &ADTGameMode::execOnManagerLoaded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADTGameMode;
UClass* ADTGameMode::GetPrivateStaticClass()
{
	using TClass = ADTGameMode;
	if (!Z_Registration_Info_UClass_ADTGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTGameMode"),
			Z_Registration_Info_UClass_ADTGameMode.InnerSingleton,
			StaticRegisterNativesADTGameMode,
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
	return Z_Registration_Info_UClass_ADTGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ADTGameMode_NoRegister()
{
	return ADTGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADTGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/DTGameMode.h" },
		{ "ModuleRelativePath", "GameMode/DTGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagerClassList_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "GameMode/DTGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagerMap_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "GameMode/DTGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitializeManager_MetaData[] = {
		{ "ModuleRelativePath", "GameMode/DTGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingManagerList_MetaData[] = {
		{ "ModuleRelativePath", "GameMode/DTGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInitializeManagersComplete_MetaData[] = {
		{ "ModuleRelativePath", "GameMode/DTGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ManagerClassList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ManagerClassList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManagerMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ManagerMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ManagerMap;
	static void NewProp_bInitializeManager_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadingManagerList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadingManagerList;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInitializeManagersComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADTGameMode_GetManager, "GetManager" }, // 242971553
		{ &Z_Construct_UFunction_ADTGameMode_InitializeManagers, "InitializeManagers" }, // 444629630
		{ &Z_Construct_UFunction_ADTGameMode_IsInitializeManagersComplete, "IsInitializeManagersComplete" }, // 534940848
		{ &Z_Construct_UFunction_ADTGameMode_NotifyInitializeManagerComplete, "NotifyInitializeManagerComplete" }, // 1065200011
		{ &Z_Construct_UFunction_ADTGameMode_OnManagerLoaded, "OnManagerLoaded" }, // 4199700335
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADTGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADTGameMode_Statics::NewProp_ManagerClassList_Inner = { "ManagerClassList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ADTManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADTGameMode_Statics::NewProp_ManagerClassList = { "ManagerClassList", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTGameMode, ManagerClassList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagerClassList_MetaData), NewProp_ManagerClassList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTGameMode_Statics::NewProp_ManagerMap_ValueProp = { "ManagerMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ADTManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADTGameMode_Statics::NewProp_ManagerMap_Key_KeyProp = { "ManagerMap_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ADTManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADTGameMode_Statics::NewProp_ManagerMap = { "ManagerMap", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTGameMode, ManagerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagerMap_MetaData), NewProp_ManagerMap_MetaData) };
void Z_Construct_UClass_ADTGameMode_Statics::NewProp_bInitializeManager_SetBit(void* Obj)
{
	((ADTGameMode*)Obj)->bInitializeManager = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADTGameMode_Statics::NewProp_bInitializeManager = { "bInitializeManager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADTGameMode), &Z_Construct_UClass_ADTGameMode_Statics::NewProp_bInitializeManager_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitializeManager_MetaData), NewProp_bInitializeManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADTGameMode_Statics::NewProp_LoadingManagerList_Inner = { "LoadingManagerList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADTManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADTGameMode_Statics::NewProp_LoadingManagerList = { "LoadingManagerList", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTGameMode, LoadingManagerList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingManagerList_MetaData), NewProp_LoadingManagerList_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADTGameMode_Statics::NewProp_OnInitializeManagersComplete = { "OnInitializeManagersComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADTGameMode, OnInitializeManagersComplete), Z_Construct_UDelegateFunction_DT_OnInitializeManagersComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInitializeManagersComplete_MetaData), NewProp_OnInitializeManagersComplete_MetaData) }; // 722989914
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADTGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTGameMode_Statics::NewProp_ManagerClassList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTGameMode_Statics::NewProp_ManagerClassList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTGameMode_Statics::NewProp_ManagerMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTGameMode_Statics::NewProp_ManagerMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTGameMode_Statics::NewProp_ManagerMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTGameMode_Statics::NewProp_bInitializeManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTGameMode_Statics::NewProp_LoadingManagerList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTGameMode_Statics::NewProp_LoadingManagerList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADTGameMode_Statics::NewProp_OnInitializeManagersComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADTGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADTGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADTGameMode_Statics::ClassParams = {
	&ADTGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADTGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADTGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADTGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADTGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADTGameMode()
{
	if (!Z_Registration_Info_UClass_ADTGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADTGameMode.OuterSingleton, Z_Construct_UClass_ADTGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADTGameMode.OuterSingleton;
}
ADTGameMode::ADTGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADTGameMode);
ADTGameMode::~ADTGameMode() {}
// ********** End Class ADTGameMode ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTGameMode_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADTGameMode, ADTGameMode::StaticClass, TEXT("ADTGameMode"), &Z_Registration_Info_UClass_ADTGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADTGameMode), 4013804679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTGameMode_h__Script_DT_3045610202(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTGameMode_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTGameMode_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
