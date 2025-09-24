// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Library/RAAnimationLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRAAnimationLibrary() {}

// ********** Begin Cross Module References ********************************************************
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigComponentSpace();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
RA_API UClass* Z_Construct_UClass_URAAnimationLibrary();
RA_API UClass* Z_Construct_UClass_URAAnimationLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_RA();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URAAnimationLibrary Function ConvertTransformFromRigSpace ****************
struct Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics
{
	struct RAAnimationLibrary_eventConvertTransformFromRigSpace_Parms
	{
		USceneComponent* SceneComponent;
		FTransform InOutTransform;
		EControlRigComponentSpace ToSpace;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAAnimationLibrary" },
		{ "ModuleRelativePath", "Library/RAAnimationLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOutTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAAnimationLibrary_eventConvertTransformFromRigSpace_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::NewProp_InOutTransform = { "InOutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAAnimationLibrary_eventConvertTransformFromRigSpace_Parms, InOutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::NewProp_ToSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::NewProp_ToSpace = { "ToSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAAnimationLibrary_eventConvertTransformFromRigSpace_Parms, ToSpace), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::NewProp_InOutTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::NewProp_ToSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::NewProp_ToSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAAnimationLibrary, nullptr, "ConvertTransformFromRigSpace", Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::RAAnimationLibrary_eventConvertTransformFromRigSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::RAAnimationLibrary_eventConvertTransformFromRigSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAAnimationLibrary::execConvertTransformFromRigSpace)
{
	P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InOutTransform);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_ToSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	URAAnimationLibrary::ConvertTransformFromRigSpace(Z_Param_SceneComponent,Z_Param_Out_InOutTransform,EControlRigComponentSpace(Z_Param_ToSpace));
	P_NATIVE_END;
}
// ********** End Class URAAnimationLibrary Function ConvertTransformFromRigSpace ******************

// ********** Begin Class URAAnimationLibrary Function GetControlTransform *************************
struct Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics
{
	struct RAAnimationLibrary_eventGetControlTransform_Parms
	{
		UControlRig* ControlRig;
		USceneComponent* Component;
		FName Name;
		EControlRigComponentSpace Space;
		bool bInitial;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAAnimationLibrary" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Library/RAAnimationLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static void NewProp_bInitial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAAnimationLibrary_eventGetControlTransform_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAAnimationLibrary_eventGetControlTransform_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAAnimationLibrary_eventGetControlTransform_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAAnimationLibrary_eventGetControlTransform_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
void Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_bInitial_SetBit(void* Obj)
{
	((RAAnimationLibrary_eventGetControlTransform_Parms*)Obj)->bInitial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RAAnimationLibrary_eventGetControlTransform_Parms), &Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RAAnimationLibrary_eventGetControlTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_ControlRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_bInitial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAAnimationLibrary, nullptr, "GetControlTransform", Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::RAAnimationLibrary_eventGetControlTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::RAAnimationLibrary_eventGetControlTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAAnimationLibrary::execGetControlTransform)
{
	P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
	P_GET_OBJECT(USceneComponent,Z_Param_Component);
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_GET_UBOOL(Z_Param_bInitial);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=URAAnimationLibrary::GetControlTransform(Z_Param_ControlRig,Z_Param_Component,Z_Param_Name,EControlRigComponentSpace(Z_Param_Space),Z_Param_bInitial);
	P_NATIVE_END;
}
// ********** End Class URAAnimationLibrary Function GetControlTransform ***************************

// ********** Begin Class URAAnimationLibrary ******************************************************
void URAAnimationLibrary::StaticRegisterNativesURAAnimationLibrary()
{
	UClass* Class = URAAnimationLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertTransformFromRigSpace", &URAAnimationLibrary::execConvertTransformFromRigSpace },
		{ "GetControlTransform", &URAAnimationLibrary::execGetControlTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URAAnimationLibrary;
UClass* URAAnimationLibrary::GetPrivateStaticClass()
{
	using TClass = URAAnimationLibrary;
	if (!Z_Registration_Info_UClass_URAAnimationLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RAAnimationLibrary"),
			Z_Registration_Info_UClass_URAAnimationLibrary.InnerSingleton,
			StaticRegisterNativesURAAnimationLibrary,
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
	return Z_Registration_Info_UClass_URAAnimationLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_URAAnimationLibrary_NoRegister()
{
	return URAAnimationLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URAAnimationLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Library/RAAnimationLibrary.h" },
		{ "ModuleRelativePath", "Library/RAAnimationLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URAAnimationLibrary_ConvertTransformFromRigSpace, "ConvertTransformFromRigSpace" }, // 2181412912
		{ &Z_Construct_UFunction_URAAnimationLibrary_GetControlTransform, "GetControlTransform" }, // 1504302276
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URAAnimationLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URAAnimationLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URAAnimationLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URAAnimationLibrary_Statics::ClassParams = {
	&URAAnimationLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URAAnimationLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URAAnimationLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URAAnimationLibrary()
{
	if (!Z_Registration_Info_UClass_URAAnimationLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URAAnimationLibrary.OuterSingleton, Z_Construct_UClass_URAAnimationLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URAAnimationLibrary.OuterSingleton;
}
URAAnimationLibrary::URAAnimationLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URAAnimationLibrary);
URAAnimationLibrary::~URAAnimationLibrary() {}
// ********** End Class URAAnimationLibrary ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RAAnimationLibrary_h__Script_RA_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URAAnimationLibrary, URAAnimationLibrary::StaticClass, TEXT("URAAnimationLibrary"), &Z_Registration_Info_UClass_URAAnimationLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URAAnimationLibrary), 1994346670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RAAnimationLibrary_h__Script_RA_3058266653(TEXT("/Script/RA"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RAAnimationLibrary_h__Script_RA_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RAAnimationLibrary_h__Script_RA_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
