// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manager/RAUIManager.h"

#ifdef RA_RAUIManager_generated_h
#error "RAUIManager.generated.h already included, missing '#pragma once' in RAUIManager.h"
#endif
#define RA_RAUIManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARAUIManager *************************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAUIManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHideHUD); \
	DECLARE_FUNCTION(execShowHUD);


RA_API UClass* Z_Construct_UClass_ARAUIManager_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAUIManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARAUIManager(); \
	friend struct Z_Construct_UClass_ARAUIManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RA_API UClass* Z_Construct_UClass_ARAUIManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ARAUIManager, ARAManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RA"), Z_Construct_UClass_ARAUIManager_NoRegister) \
	DECLARE_SERIALIZER(ARAUIManager)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAUIManager_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARAUIManager(ARAUIManager&&) = delete; \
	ARAUIManager(const ARAUIManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARAUIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARAUIManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARAUIManager) \
	NO_API virtual ~ARAUIManager();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAUIManager_h_15_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAUIManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAUIManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAUIManager_h_18_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAUIManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARAUIManager;

// ********** End Class ARAUIManager ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RAUIManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
