// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/GPT/NN_Cpp_GPTResponseProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_GPTResponseProcessor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_GPTResponseProcessor();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_GPTResponseProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_GPTResponseProcessor
void UNN_Cpp_GPTResponseProcessor::StaticRegisterNativesUNN_Cpp_GPTResponseProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_GPTResponseProcessor);
UClass* Z_Construct_UClass_UNN_Cpp_GPTResponseProcessor_NoRegister()
{
	return UNN_Cpp_GPTResponseProcessor::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_GPTResponseProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGPTResponseReceived, const FString&, Response);\n" },
#endif
		{ "IncludePath", "GPT/NN_Cpp_GPTResponseProcessor.h" },
		{ "ModuleRelativePath", "Public/GPT/NN_Cpp_GPTResponseProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGPTResponseReceived, const FString&, Response);" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_GPTResponseProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_GPTResponseProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_GPTResponseProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_GPTResponseProcessor_Statics::ClassParams = {
	&UNN_Cpp_GPTResponseProcessor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_GPTResponseProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_GPTResponseProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_GPTResponseProcessor()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_GPTResponseProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_GPTResponseProcessor.OuterSingleton, Z_Construct_UClass_UNN_Cpp_GPTResponseProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_GPTResponseProcessor.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_GPTResponseProcessor>()
{
	return UNN_Cpp_GPTResponseProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_GPTResponseProcessor);
UNN_Cpp_GPTResponseProcessor::~UNN_Cpp_GPTResponseProcessor() {}
// End Class UNN_Cpp_GPTResponseProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPTResponseProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_GPTResponseProcessor, UNN_Cpp_GPTResponseProcessor::StaticClass, TEXT("UNN_Cpp_GPTResponseProcessor"), &Z_Registration_Info_UClass_UNN_Cpp_GPTResponseProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_GPTResponseProcessor), 2142011086U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPTResponseProcessor_h_3877472142(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPTResponseProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPTResponseProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
