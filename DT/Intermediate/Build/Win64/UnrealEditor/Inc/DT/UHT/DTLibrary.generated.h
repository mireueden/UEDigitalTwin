// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/DTLibrary.h"

#ifdef DT_DTLibrary_generated_h
#error "DTLibrary.generated.h already included, missing '#pragma once' in DTLibrary.h"
#endif
#define DT_DTLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ADTManagerBase;
class UObject;
struct FGameplayTag;
struct FGameplayTagContainer;

// ********** Begin Class UDTLibrary ***************************************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Library_DTLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMatchTagInContainer); \
	DECLARE_FUNCTION(execGetManager);


DT_API UClass* Z_Construct_UClass_UDTLibrary_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Library_DTLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTLibrary(); \
	friend struct Z_Construct_UClass_UDTLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_UDTLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_UDTLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDTLibrary)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Library_DTLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTLibrary(UDTLibrary&&) = delete; \
	UDTLibrary(const UDTLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTLibrary) \
	NO_API virtual ~UDTLibrary();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Library_DTLibrary_h_14_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Library_DTLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Library_DTLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Library_DTLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Library_DTLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTLibrary;

// ********** End Class UDTLibrary *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Library_DTLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
