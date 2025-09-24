// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/DTCell.h"

#ifdef DT_DTCell_generated_h
#error "DTCell.generated.h already included, missing '#pragma once' in DTCell.h"
#endif
#define DT_DTCell_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDTCell ******************************************************************
DT_API UClass* Z_Construct_UClass_UDTCell_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTCell_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDTCell(); \
	friend struct Z_Construct_UClass_UDTCell_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_UDTCell_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTCell, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_UDTCell_NoRegister) \
	DECLARE_SERIALIZER(UDTCell)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTCell_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDTCell(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTCell(UDTCell&&) = delete; \
	UDTCell(const UDTCell&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDTCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTCell); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTCell) \
	NO_API virtual ~UDTCell();


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTCell_h_11_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTCell_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTCell_h_14_INCLASS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTCell_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTCell;

// ********** End Class UDTCell ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Types_DTCell_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
