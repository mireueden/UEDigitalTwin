// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/DTPlayerPawn.h"

#ifdef DT_DTPlayerPawn_generated_h
#error "DTPlayerPawn.generated.h already included, missing '#pragma once' in DTPlayerPawn.h"
#endif
#define DT_DTPlayerPawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADTPlayerPawn ************************************************************
DT_API UClass* Z_Construct_UClass_ADTPlayerPawn_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTPlayerPawn(); \
	friend struct Z_Construct_UClass_ADTPlayerPawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_ADTPlayerPawn_NoRegister(); \
public: \
	DECLARE_CLASS2(ADTPlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_ADTPlayerPawn_NoRegister) \
	DECLARE_SERIALIZER(ADTPlayerPawn)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerPawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADTPlayerPawn(ADTPlayerPawn&&) = delete; \
	ADTPlayerPawn(const ADTPlayerPawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTPlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADTPlayerPawn) \
	NO_API virtual ~ADTPlayerPawn();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerPawn_h_9_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADTPlayerPawn;

// ********** End Class ADTPlayerPawn **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerPawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
