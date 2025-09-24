// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manager/RASimManager.h"

#ifdef RA_RASimManager_generated_h
#error "RASimManager.generated.h already included, missing '#pragma once' in RASimManager.h"
#endif
#define RA_RASimManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARASimManager ************************************************************
RA_API UClass* Z_Construct_UClass_ARASimManager_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RASimManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARASimManager(); \
	friend struct Z_Construct_UClass_ARASimManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RA_API UClass* Z_Construct_UClass_ARASimManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ARASimManager, ARAManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RA"), Z_Construct_UClass_ARASimManager_NoRegister) \
	DECLARE_SERIALIZER(ARASimManager)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RASimManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARASimManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARASimManager(ARASimManager&&) = delete; \
	ARASimManager(const ARASimManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARASimManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARASimManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARASimManager) \
	NO_API virtual ~ARASimManager();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RASimManager_h_12_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RASimManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RASimManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RASimManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARASimManager;

// ********** End Class ARASimManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Manager_RASimManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
