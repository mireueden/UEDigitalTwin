// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widget/RAUserWidget.h"

#ifdef RA_RAUserWidget_generated_h
#error "RAUserWidget.generated.h already included, missing '#pragma once' in RAUserWidget.h"
#endif
#define RA_RAUserWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URAUserWidget ************************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHighlight); \
	DECLARE_FUNCTION(execHideWidget); \
	DECLARE_FUNCTION(execShowWidget);


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h_15_CALLBACK_WRAPPERS
RA_API UClass* Z_Construct_UClass_URAUserWidget_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURAUserWidget(); \
	friend struct Z_Construct_UClass_URAUserWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RA_API UClass* Z_Construct_UClass_URAUserWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(URAUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RA"), Z_Construct_UClass_URAUserWidget_NoRegister) \
	DECLARE_SERIALIZER(URAUserWidget)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URAUserWidget(URAUserWidget&&) = delete; \
	URAUserWidget(const URAUserWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URAUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URAUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URAUserWidget) \
	NO_API virtual ~URAUserWidget();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h_12_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h_15_CALLBACK_WRAPPERS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URAUserWidget;

// ********** End Class URAUserWidget **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAUserWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
