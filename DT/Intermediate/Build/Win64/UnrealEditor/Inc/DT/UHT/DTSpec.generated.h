// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/DTSpec.h"

#ifdef DT_DTSpec_generated_h
#error "DTSpec.generated.h already included, missing '#pragma once' in DTSpec.h"
#endif
#define DT_DTSpec_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDTSpec;
enum class EDTSpecState : uint8;

// ********** Begin Delegate FOnSpecStateChanged ***************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTSpec_h_16_DELEGATE \
DT_API void FOnSpecStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSpecStateChanged, UDTSpec* Spec, EDTSpecState PrevState, EDTSpecState CurrentState);


// ********** End Delegate FOnSpecStateChanged *****************************************************

// ********** Begin Class UDTSpec ******************************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTSpec_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execSetNextProcessCellIndex); \
	DECLARE_FUNCTION(execGetCurrentPrcessCellIndex); \
	DECLARE_FUNCTION(execGetNextProcessCellIndex); \
	DECLARE_FUNCTION(execIsProcessCellFinished); \
	DECLARE_FUNCTION(execInitSpec); \
	DECLARE_FUNCTION(execIsValidSpec);


DT_API UClass* Z_Construct_UClass_UDTSpec_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTSpec_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTSpec(); \
	friend struct Z_Construct_UClass_UDTSpec_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_UDTSpec_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTSpec, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_UDTSpec_NoRegister) \
	DECLARE_SERIALIZER(UDTSpec) \
	virtual UObject* _getUObject() const override { return const_cast<UDTSpec*>(this); }


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTSpec_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTSpec(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTSpec(UDTSpec&&) = delete; \
	UDTSpec(const UDTSpec&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTSpec); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTSpec); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTSpec) \
	NO_API virtual ~UDTSpec();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTSpec_h_18_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTSpec_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTSpec_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTSpec_h_21_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTSpec_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTSpec;

// ********** End Class UDTSpec ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTSpec_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
