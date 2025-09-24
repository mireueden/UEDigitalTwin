// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAsset/DTSpecDataAsset.h"

#ifdef DT_DTSpecDataAsset_generated_h
#error "DTSpecDataAsset.generated.h already included, missing '#pragma once' in DTSpecDataAsset.h"
#endif
#define DT_DTSpecDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDTSpecDataAsset *********************************************************
DT_API UClass* Z_Construct_UClass_UDTSpecDataAsset_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTSpecDataAsset_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTSpecDataAsset(); \
	friend struct Z_Construct_UClass_UDTSpecDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_UDTSpecDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTSpecDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_UDTSpecDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UDTSpecDataAsset)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTSpecDataAsset_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTSpecDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTSpecDataAsset(UDTSpecDataAsset&&) = delete; \
	UDTSpecDataAsset(const UDTSpecDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTSpecDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTSpecDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTSpecDataAsset) \
	NO_API virtual ~UDTSpecDataAsset();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTSpecDataAsset_h_12_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTSpecDataAsset_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTSpecDataAsset_h_15_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTSpecDataAsset_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTSpecDataAsset;

// ********** End Class UDTSpecDataAsset ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTSpecDataAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
