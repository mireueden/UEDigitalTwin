// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/DTPlayerController.h"

#ifdef DT_DTPlayerController_generated_h
#error "DTPlayerController.generated.h already included, missing '#pragma once' in DTPlayerController.h"
#endif
#define DT_DTPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADTPlayerController ******************************************************
DT_API UClass* Z_Construct_UClass_ADTPlayerController_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADTPlayerController(); \
	friend struct Z_Construct_UClass_ADTPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_ADTPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ADTPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_ADTPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ADTPlayerController)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADTPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADTPlayerController(ADTPlayerController&&) = delete; \
	ADTPlayerController(const ADTPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADTPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADTPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADTPlayerController) \
	NO_API virtual ~ADTPlayerController();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerController_h_12_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADTPlayerController;

// ********** End Class ADTPlayerController ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_GameMode_DTPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
