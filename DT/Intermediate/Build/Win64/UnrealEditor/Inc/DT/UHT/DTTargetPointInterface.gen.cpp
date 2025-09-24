// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/DTTargetPointInterface.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDTTargetPointInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DT_API UClass* Z_Construct_UClass_UDTTargetPointInterface();
DT_API UClass* Z_Construct_UClass_UDTTargetPointInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DT();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UDTTargetPointInterface Function GetAllTargetTransform ***************
struct DTTargetPointInterface_eventGetAllTargetTransform_Parms
{
	FGameplayTag FilterTargetTag;
	TMap<FGameplayTag,FTransform> OutTargetTransform;
};
void IDTTargetPointInterface::GetAllTargetTransform(FGameplayTag FilterTargetTag, TMap<FGameplayTag,FTransform>& OutTargetTransform)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAllTargetTransform instead.");
}
static FName NAME_UDTTargetPointInterface_GetAllTargetTransform = FName(TEXT("GetAllTargetTransform"));
void IDTTargetPointInterface::Execute_GetAllTargetTransform(UObject* O, FGameplayTag FilterTargetTag, TMap<FGameplayTag,FTransform>& OutTargetTransform)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDTTargetPointInterface::StaticClass()));
	DTTargetPointInterface_eventGetAllTargetTransform_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDTTargetPointInterface_GetAllTargetTransform);
	if (Func)
	{
		Parms.FilterTargetTag=FilterTargetTag;
		Parms.OutTargetTransform=OutTargetTransform;
		O->ProcessEvent(Func, &Parms);
		OutTargetTransform=Parms.OutTargetTransform;
	}
	else if (auto I = (IDTTargetPointInterface*)(O->GetNativeInterfaceAddress(UDTTargetPointInterface::StaticClass())))
	{
		I->GetAllTargetTransform_Implementation(FilterTargetTag,OutTargetTransform);
	}
}
struct Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/DTTargetPointInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilterTargetTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTargetTransform_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTargetTransform_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutTargetTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::NewProp_FilterTargetTag = { "FilterTargetTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTTargetPointInterface_eventGetAllTargetTransform_Parms, FilterTargetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::NewProp_OutTargetTransform_ValueProp = { "OutTargetTransform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::NewProp_OutTargetTransform_Key_KeyProp = { "OutTargetTransform_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::NewProp_OutTargetTransform = { "OutTargetTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTTargetPointInterface_eventGetAllTargetTransform_Parms, OutTargetTransform), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::NewProp_FilterTargetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::NewProp_OutTargetTransform_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::NewProp_OutTargetTransform_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::NewProp_OutTargetTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTTargetPointInterface, nullptr, "GetAllTargetTransform", Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::PropPointers), sizeof(DTTargetPointInterface_eventGetAllTargetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DTTargetPointInterface_eventGetAllTargetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDTTargetPointInterface::execGetAllTargetTransform)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_FilterTargetTag);
	P_GET_TMAP_REF(FGameplayTag,FTransform,Z_Param_Out_OutTargetTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllTargetTransform_Implementation(Z_Param_FilterTargetTag,Z_Param_Out_OutTargetTransform);
	P_NATIVE_END;
}
// ********** End Interface UDTTargetPointInterface Function GetAllTargetTransform *****************

// ********** Begin Interface UDTTargetPointInterface Function GetTargetTransform ******************
struct DTTargetPointInterface_eventGetTargetTransform_Parms
{
	FGameplayTag TargetTag;
	bool bFound;
	FTransform ReturnValue;
};
FTransform IDTTargetPointInterface::GetTargetTransform(FGameplayTag TargetTag, bool& bFound)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTargetTransform instead.");
	DTTargetPointInterface_eventGetTargetTransform_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDTTargetPointInterface_GetTargetTransform = FName(TEXT("GetTargetTransform"));
FTransform IDTTargetPointInterface::Execute_GetTargetTransform(UObject* O, FGameplayTag TargetTag, bool& bFound)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDTTargetPointInterface::StaticClass()));
	DTTargetPointInterface_eventGetTargetTransform_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDTTargetPointInterface_GetTargetTransform);
	if (Func)
	{
		Parms.TargetTag=TargetTag;
		Parms.bFound=bFound;
		O->ProcessEvent(Func, &Parms);
		bFound=Parms.bFound;
	}
	else if (auto I = (IDTTargetPointInterface*)(O->GetNativeInterfaceAddress(UDTTargetPointInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetTargetTransform_Implementation(TargetTag,bFound);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/DTTargetPointInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTag;
	static void NewProp_bFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::NewProp_TargetTag = { "TargetTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTTargetPointInterface_eventGetTargetTransform_Parms, TargetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
void Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::NewProp_bFound_SetBit(void* Obj)
{
	((DTTargetPointInterface_eventGetTargetTransform_Parms*)Obj)->bFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DTTargetPointInterface_eventGetTargetTransform_Parms), &Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DTTargetPointInterface_eventGetTargetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::NewProp_TargetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::NewProp_bFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDTTargetPointInterface, nullptr, "GetTargetTransform", Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::PropPointers), sizeof(DTTargetPointInterface_eventGetTargetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DTTargetPointInterface_eventGetTargetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDTTargetPointInterface::execGetTargetTransform)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TargetTag);
	P_GET_UBOOL_REF(Z_Param_Out_bFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetTargetTransform_Implementation(Z_Param_TargetTag,Z_Param_Out_bFound);
	P_NATIVE_END;
}
// ********** End Interface UDTTargetPointInterface Function GetTargetTransform ********************

// ********** Begin Interface UDTTargetPointInterface **********************************************
void UDTTargetPointInterface::StaticRegisterNativesUDTTargetPointInterface()
{
	UClass* Class = UDTTargetPointInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllTargetTransform", &IDTTargetPointInterface::execGetAllTargetTransform },
		{ "GetTargetTransform", &IDTTargetPointInterface::execGetTargetTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDTTargetPointInterface;
UClass* UDTTargetPointInterface::GetPrivateStaticClass()
{
	using TClass = UDTTargetPointInterface;
	if (!Z_Registration_Info_UClass_UDTTargetPointInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DTTargetPointInterface"),
			Z_Registration_Info_UClass_UDTTargetPointInterface.InnerSingleton,
			StaticRegisterNativesUDTTargetPointInterface,
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
	return Z_Registration_Info_UClass_UDTTargetPointInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UDTTargetPointInterface_NoRegister()
{
	return UDTTargetPointInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDTTargetPointInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Interface/DTTargetPointInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDTTargetPointInterface_GetAllTargetTransform, "GetAllTargetTransform" }, // 1782704474
		{ &Z_Construct_UFunction_UDTTargetPointInterface_GetTargetTransform, "GetTargetTransform" }, // 3331595085
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDTTargetPointInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDTTargetPointInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDTTargetPointInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDTTargetPointInterface_Statics::ClassParams = {
	&UDTTargetPointInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDTTargetPointInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDTTargetPointInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDTTargetPointInterface()
{
	if (!Z_Registration_Info_UClass_UDTTargetPointInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDTTargetPointInterface.OuterSingleton, Z_Construct_UClass_UDTTargetPointInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDTTargetPointInterface.OuterSingleton;
}
UDTTargetPointInterface::UDTTargetPointInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDTTargetPointInterface);
// ********** End Interface UDTTargetPointInterface ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h__Script_DT_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDTTargetPointInterface, UDTTargetPointInterface::StaticClass, TEXT("UDTTargetPointInterface"), &Z_Registration_Info_UClass_UDTTargetPointInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDTTargetPointInterface), 1719710742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h__Script_DT_1370807196(TEXT("/Script/DT"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h__Script_DT_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h__Script_DT_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
