// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAsset/DTCellDataAsset.h"

#ifdef DT_DTCellDataAsset_generated_h
#error "DTCellDataAsset.generated.h already included, missing '#pragma once' in DTCellDataAsset.h"
#endif
#define DT_DTCellDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDTCellDataAsset *********************************************************
DT_API UClass* Z_Construct_UClass_UDTCellDataAsset_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTCellDataAsset_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTCellDataAsset(); \
	friend struct Z_Construct_UClass_UDTCellDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_UDTCellDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTCellDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_UDTCellDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UDTCellDataAsset)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTCellDataAsset_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTCellDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTCellDataAsset(UDTCellDataAsset&&) = delete; \
	UDTCellDataAsset(const UDTCellDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTCellDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTCellDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTCellDataAsset) \
	NO_API virtual ~UDTCellDataAsset();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTCellDataAsset_h_10_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTCellDataAsset_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTCellDataAsset_h_13_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTCellDataAsset_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTCellDataAsset;

// ********** End Class UDTCellDataAsset ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_DataAsset_DTCellDataAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
