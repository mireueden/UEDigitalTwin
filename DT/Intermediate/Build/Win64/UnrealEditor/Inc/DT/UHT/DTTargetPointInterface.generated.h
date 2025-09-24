// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/DTTargetPointInterface.h"

#ifdef DT_DTTargetPointInterface_generated_h
#error "DTTargetPointInterface.generated.h already included, missing '#pragma once' in DTTargetPointInterface.h"
#endif
#define DT_DTTargetPointInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayTag;
struct FGameplayTag; 

// ********** Begin Interface UDTTargetPointInterface **********************************************
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllTargetTransform); \
	DECLARE_FUNCTION(execGetTargetTransform);


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h_14_CALLBACK_WRAPPERS
DT_API UClass* Z_Construct_UClass_UDTTargetPointInterface_NoRegister();

#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DT_API UDTTargetPointInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDTTargetPointInterface(UDTTargetPointInterface&&) = delete; \
	UDTTargetPointInterface(const UDTTargetPointInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DT_API, UDTTargetPointInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDTTargetPointInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDTTargetPointInterface) \
	virtual ~UDTTargetPointInterface() = default;


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDTTargetPointInterface(); \
	friend struct Z_Construct_UClass_UDTTargetPointInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DT_API UClass* Z_Construct_UClass_UDTTargetPointInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDTTargetPointInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DT"), Z_Construct_UClass_UDTTargetPointInterface_NoRegister) \
	DECLARE_SERIALIZER(UDTTargetPointInterface)


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDTTargetPointInterface() {} \
public: \
	typedef UDTTargetPointInterface UClassType; \
	typedef IDTTargetPointInterface ThisClass; \
	static void Execute_GetAllTargetTransform(UObject* O, FGameplayTag FilterTargetTag, TMap<FGameplayTag,FTransform>& OutTargetTransform); \
	static FTransform Execute_GetTargetTransform(UObject* O, FGameplayTag TargetTag, bool& bFound); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h_11_PROLOG
#define FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h_14_CALLBACK_WRAPPERS \
	FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDTTargetPointInterface;

// ********** End Interface UDTTargetPointInterface ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_UEDigitalTwin_UEDigitalTwin_DT_Source_DT_Interface_DTTargetPointInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
