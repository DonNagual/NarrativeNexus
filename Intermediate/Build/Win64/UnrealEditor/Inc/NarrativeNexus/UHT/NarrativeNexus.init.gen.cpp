// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeNexus_init() {}
	NARRATIVENEXUS_API UFunction* Z_Construct_UDelegateFunction_NarrativeNexus_OnGPTResponseReceived__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NarrativeNexus;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NarrativeNexus()
	{
		if (!Z_Registration_Info_UPackage__Script_NarrativeNexus.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NarrativeNexus_OnGPTResponseReceived__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NarrativeNexus",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x18323E16,
				0xA3685C03,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NarrativeNexus.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NarrativeNexus.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NarrativeNexus(Z_Construct_UPackage__Script_NarrativeNexus, TEXT("/Script/NarrativeNexus"), Z_Registration_Info_UPackage__Script_NarrativeNexus, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x18323E16, 0xA3685C03));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
