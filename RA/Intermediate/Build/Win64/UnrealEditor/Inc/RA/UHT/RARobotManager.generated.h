// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manager/RARobotManager.h"

#ifdef RA_RARobotManager_generated_h
#error "RARobotManager.generated.h already included, missing '#pragma once' in RARobotManager.h"
#endif
#define RA_RARobotManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARARobotManager **********************************************************
RA_API UClass* Z_Construct_UClass_ARARobotManager_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RARobotManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARARobotManager(); \
	friend struct Z_Construct_UClass_ARARobotManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RA_API UClass* Z_Construct_UClass_ARARobotManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ARARobotManager, ARAManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RA"), Z_Construct_UClass_ARARobotManager_NoRegister) \
	DECLARE_SERIALIZER(ARARobotManager)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RARobotManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARARobotManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARARobotManager(ARARobotManager&&) = delete; \
	ARARobotManager(const ARARobotManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARARobotManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARARobotManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARARobotManager) \
	NO_API virtual ~ARARobotManager();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RARobotManager_h_12_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RARobotManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RARobotManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RARobotManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARARobotManager;

// ********** End Class ARARobotManager ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RARobotManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
