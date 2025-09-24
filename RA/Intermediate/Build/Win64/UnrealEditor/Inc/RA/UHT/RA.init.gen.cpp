// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRA_init() {}
	RA_API UFunction* Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature();
	RA_API UFunction* Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature();
	RA_API UFunction* Z_Construct_UDelegateFunction_RA_OnItemHistoryChangedDelegate__DelegateSignature();
	RA_API UFunction* Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature();
	RA_API UFunction* Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature();
	RA_API UFunction* Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RA;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RA()
	{
		if (!Z_Registration_Info_UPackage__Script_RA.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RA_ManagerPhaseDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RA_OnItemChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RA_OnItemHistoryChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RA_OnManageComponentDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RA_OnRobotStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RA_OnSelectionChangedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RA",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7B29B2B6,
				0xF7022936,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RA.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RA.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RA(Z_Construct_UPackage__Script_RA, TEXT("/Script/RA"), Z_Registration_Info_UPackage__Script_RA, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7B29B2B6, 0xF7022936));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
