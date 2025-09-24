// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RAGameMode.h"

#ifdef RA_RAGameMode_generated_h
#error "RAGameMode.generated.h already included, missing '#pragma once' in RAGameMode.h"
#endif
#define RA_RAGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ARAManagerBase;

// ********** Begin Class ARAGameMode **************************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_RAGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPostInitializeManager); \
	DECLARE_FUNCTION(execInitializeManagers);


RA_API UClass* Z_Construct_UClass_ARAGameMode_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_RAGameMode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARAGameMode(); \
	friend struct Z_Construct_UClass_ARAGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RA_API UClass* Z_Construct_UClass_ARAGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ARAGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RA"), Z_Construct_UClass_ARAGameMode_NoRegister) \
	DECLARE_SERIALIZER(ARAGameMode)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_RAGameMode_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARAGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARAGameMode(ARAGameMode&&) = delete; \
	ARAGameMode(const ARAGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARAGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARAGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARAGameMode) \
	NO_API virtual ~ARAGameMode();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_RAGameMode_h_18_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_RAGameMode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_RAGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_RAGameMode_h_21_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_RAGameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARAGameMode;

// ********** End Class ARAGameMode ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_RAGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
