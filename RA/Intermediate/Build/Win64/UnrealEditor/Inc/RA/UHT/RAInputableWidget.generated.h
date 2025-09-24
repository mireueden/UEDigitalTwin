// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widget/RAInputableWidget.h"

#ifdef RA_RAInputableWidget_generated_h
#error "RAInputableWidget.generated.h already included, missing '#pragma once' in RAInputableWidget.h"
#endif
#define RA_RAInputableWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class URAUserWidget;
enum class ERAWidgetInputDirection : uint8;
struct FInputActionInstance;
struct FInputActionValue;

// ********** Begin Delegate FOnSelectionChangedDelegate *******************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h_15_DELEGATE \
RA_API void FOnSelectionChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSelectionChangedDelegate, URAUserWidget* Widget, int32 PrevIndex, int32 NewIndex);


// ********** End Delegate FOnSelectionChangedDelegate *********************************************

// ********** Begin Class URAInputableWidget *******************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPerformCancel); \
	DECLARE_FUNCTION(execPerformConfirm); \
	DECLARE_FUNCTION(execSoftMove); \
	DECLARE_FUNCTION(execHardMove); \
	DECLARE_FUNCTION(execMoveInputAction); \
	DECLARE_FUNCTION(execUnbindInput); \
	DECLARE_FUNCTION(execBindInput); \
	DECLARE_FUNCTION(execGetWidgetItemList); \
	DECLARE_FUNCTION(execSetSelect); \
	DECLARE_FUNCTION(execTrySetSelect);


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h_31_CALLBACK_WRAPPERS
RA_API UClass* Z_Construct_UClass_URAInputableWidget_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURAInputableWidget(); \
	friend struct Z_Construct_UClass_URAInputableWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RA_API UClass* Z_Construct_UClass_URAInputableWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(URAInputableWidget, URAUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RA"), Z_Construct_UClass_URAInputableWidget_NoRegister) \
	DECLARE_SERIALIZER(URAInputableWidget)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URAInputableWidget(URAInputableWidget&&) = delete; \
	URAInputableWidget(const URAInputableWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URAInputableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URAInputableWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URAInputableWidget) \
	NO_API virtual ~URAInputableWidget();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h_28_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h_31_CALLBACK_WRAPPERS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h_31_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URAInputableWidget;

// ********** End Class URAInputableWidget *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Widget_RAInputableWidget_h

// ********** Begin Enum ERAWidgetInputDirection ***************************************************
#define FOREACH_ENUM_ERAWIDGETINPUTDIRECTION(op) \
	op(ERAWidgetInputDirection::Undefined) \
	op(ERAWidgetInputDirection::Up) \
	op(ERAWidgetInputDirection::Down) \
	op(ERAWidgetInputDirection::Left) \
	op(ERAWidgetInputDirection::Right) 

enum class ERAWidgetInputDirection : uint8;
template<> struct TIsUEnumClass<ERAWidgetInputDirection> { enum { Value = true }; };
template<> RA_API UEnum* StaticEnum<ERAWidgetInputDirection>();
// ********** End Enum ERAWidgetInputDirection *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
