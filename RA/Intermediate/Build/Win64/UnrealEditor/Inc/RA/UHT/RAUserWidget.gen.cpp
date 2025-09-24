// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widget/RAUserWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRAUserWidget() {}

// ********** Begin Cross Module References ********************************************************
RA_API UClass* Z_Construct_UClass_URAUserWidget();
RA_API UClass* Z_Construct_UClass_URAUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_RA();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URAUserWidget Function HideWidget ****************************************
static FName NAME_URAUserWidget_HideWidget = FName(TEXT("HideWidget"));
void URAUserWidget::HideWidget()
{
	UFunction* Func = FindFunctionChecked(NAME_URAUserWidget_HideWidget);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HideWidget_Implementation();
	}
}
struct Z_Construct_UFunction_URAUserWidget_HideWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAUserWidget" },
		{ "ModuleRelativePath", "Widget/RAUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAUserWidget_HideWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAUserWidget, nullptr, "HideWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAUserWidget_HideWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAUserWidget_HideWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URAUserWidget_HideWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAUserWidget_HideWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAUserWidget::execHideWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideWidget_Implementation();
	P_NATIVE_END;
}
// ********** End Class URAUserWidget Function HideWidget ******************************************

// ********** Begin Class URAUserWidget Function SetHighlight **************************************
struct RAUserWidget_eventSetHighlight_Parms
{
	bool bHighlight;
};
static FName NAME_URAUserWidget_SetHighlight = FName(TEXT("SetHighlight"));
void URAUserWidget::SetHighlight(bool bHighlight)
{
	UFunction* Func = FindFunctionChecked(NAME_URAUserWidget_SetHighlight);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		RAUserWidget_eventSetHighlight_Parms Parms;
		Parms.bHighlight=bHighlight ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetHighlight_Implementation(bHighlight);
	}
}
struct Z_Construct_UFunction_URAUserWidget_SetHighlight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAUserWidget" },
		{ "ModuleRelativePath", "Widget/RAUserWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHighlight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URAUserWidget_SetHighlight_Statics::NewProp_bHighlight_SetBit(void* Obj)
{
	((RAUserWidget_eventSetHighlight_Parms*)Obj)->bHighlight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URAUserWidget_SetHighlight_Statics::NewProp_bHighlight = { "bHighlight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RAUserWidget_eventSetHighlight_Parms), &Z_Construct_UFunction_URAUserWidget_SetHighlight_Statics::NewProp_bHighlight_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URAUserWidget_SetHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URAUserWidget_SetHighlight_Statics::NewProp_bHighlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URAUserWidget_SetHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAUserWidget_SetHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAUserWidget, nullptr, "SetHighlight", Z_Construct_UFunction_URAUserWidget_SetHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URAUserWidget_SetHighlight_Statics::PropPointers), sizeof(RAUserWidget_eventSetHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAUserWidget_SetHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAUserWidget_SetHighlight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RAUserWidget_eventSetHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URAUserWidget_SetHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAUserWidget_SetHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAUserWidget::execSetHighlight)
{
	P_GET_UBOOL(Z_Param_bHighlight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHighlight_Implementation(Z_Param_bHighlight);
	P_NATIVE_END;
}
// ********** End Class URAUserWidget Function SetHighlight ****************************************

// ********** Begin Class URAUserWidget Function ShowWidget ****************************************
static FName NAME_URAUserWidget_ShowWidget = FName(TEXT("ShowWidget"));
void URAUserWidget::ShowWidget()
{
	UFunction* Func = FindFunctionChecked(NAME_URAUserWidget_ShowWidget);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ShowWidget_Implementation();
	}
}
struct Z_Construct_UFunction_URAUserWidget_ShowWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RAUserWidget" },
		{ "ModuleRelativePath", "Widget/RAUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URAUserWidget_ShowWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URAUserWidget, nullptr, "ShowWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URAUserWidget_ShowWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_URAUserWidget_ShowWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URAUserWidget_ShowWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URAUserWidget_ShowWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URAUserWidget::execShowWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowWidget_Implementation();
	P_NATIVE_END;
}
// ********** End Class URAUserWidget Function ShowWidget ******************************************

// ********** Begin Class URAUserWidget ************************************************************
void URAUserWidget::StaticRegisterNativesURAUserWidget()
{
	UClass* Class = URAUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HideWidget", &URAUserWidget::execHideWidget },
		{ "SetHighlight", &URAUserWidget::execSetHighlight },
		{ "ShowWidget", &URAUserWidget::execShowWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URAUserWidget;
UClass* URAUserWidget::GetPrivateStaticClass()
{
	using TClass = URAUserWidget;
	if (!Z_Registration_Info_UClass_URAUserWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RAUserWidget"),
			Z_Registration_Info_UClass_URAUserWidget.InnerSingleton,
			StaticRegisterNativesURAUserWidget,
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
	return Z_Registration_Info_UClass_URAUserWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_URAUserWidget_NoRegister()
{
	return URAUserWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URAUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/RAUserWidget.h" },
		{ "ModuleRelativePath", "Widget/RAUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URAUserWidget_HideWidget, "HideWidget" }, // 961980070
		{ &Z_Construct_UFunction_URAUserWidget_SetHighlight, "SetHighlight" }, // 97063203
		{ &Z_Construct_UFunction_URAUserWidget_ShowWidget, "ShowWidget" }, // 1577228807
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URAUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URAUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URAUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URAUserWidget_Statics::ClassParams = {
	&URAUserWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URAUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_URAUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URAUserWidget()
{
	if (!Z_Registration_Info_UClass_URAUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URAUserWidget.OuterSingleton, Z_Construct_UClass_URAUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URAUserWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URAUserWidget);
URAUserWidget::~URAUserWidget() {}
// ********** End Class URAUserWidget **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h__Script_RA_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URAUserWidget, URAUserWidget::StaticClass, TEXT("URAUserWidget"), &Z_Registration_Info_UClass_URAUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URAUserWidget), 500231662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h__Script_RA_3018871249(TEXT("/Script/RA"),
	Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h__Script_RA_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h__Script_RA_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
