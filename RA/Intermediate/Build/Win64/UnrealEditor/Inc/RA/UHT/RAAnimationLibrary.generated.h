// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/RAAnimationLibrary.h"

#ifdef RA_RAAnimationLibrary_generated_h
#error "RAAnimationLibrary.generated.h already included, missing '#pragma once' in RAAnimationLibrary.h"
#endif
#define RA_RAAnimationLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UControlRig;
class USceneComponent;
enum class EControlRigComponentSpace : uint8;

// ********** Begin Class URAAnimationLibrary ******************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RAAnimationLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConvertTransformFromRigSpace); \
	DECLARE_FUNCTION(execGetControlTransform);


RA_API UClass* Z_Construct_UClass_URAAnimationLibrary_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RAAnimationLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURAAnimationLibrary(); \
	friend struct Z_Construct_UClass_URAAnimationLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RA_API UClass* Z_Construct_UClass_URAAnimationLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URAAnimationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RA"), Z_Construct_UClass_URAAnimationLibrary_NoRegister) \
	DECLARE_SERIALIZER(URAAnimationLibrary)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RAAnimationLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URAAnimationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URAAnimationLibrary(URAAnimationLibrary&&) = delete; \
	URAAnimationLibrary(const URAAnimationLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URAAnimationLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URAAnimationLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URAAnimationLibrary) \
	NO_API virtual ~URAAnimationLibrary();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RAAnimationLibrary_h_17_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RAAnimationLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RAAnimationLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RAAnimationLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RAAnimationLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URAAnimationLibrary;

// ********** End Class URAAnimationLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RAAnimationLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
