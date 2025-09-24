// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/RALibrary.h"

#ifdef RA_RALibrary_generated_h
#error "RALibrary.generated.h already included, missing '#pragma once' in RALibrary.h"
#endif
#define RA_RALibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ARAManagerBase;
class UActorComponent;
class UObject;
struct FBaseComponentReference;
struct FComponentReference;
struct FSoftComponentReference;

// ********** Begin Class URALibrary ***************************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RALibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRAManager); \
	DECLARE_FUNCTION(execIsGameWorld); \
	DECLARE_FUNCTION(execResolveComponentReference); \
	DECLARE_FUNCTION(execResolveSoftComponentReference); \
	DECLARE_FUNCTION(execResolveBaseComponentReference);


RA_API UClass* Z_Construct_UClass_URALibrary_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RALibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURALibrary(); \
	friend struct Z_Construct_UClass_URALibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RA_API UClass* Z_Construct_UClass_URALibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URALibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RA"), Z_Construct_UClass_URALibrary_NoRegister) \
	DECLARE_SERIALIZER(URALibrary)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RALibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URALibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URALibrary(URALibrary&&) = delete; \
	URALibrary(const URALibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URALibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URALibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URALibrary) \
	NO_API virtual ~URALibrary();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RALibrary_h_15_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RALibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RALibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RALibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RALibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URALibrary;

// ********** End Class URALibrary *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_RA_Source_RA_Library_RALibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
