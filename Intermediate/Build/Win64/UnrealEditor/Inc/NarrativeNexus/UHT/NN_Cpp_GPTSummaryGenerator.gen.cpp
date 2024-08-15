// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/GPT/NN_Cpp_GPTSummaryGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_GPTSummaryGenerator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_GPTSummaryGenerator();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_GPTSummaryGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_GPTSummaryGenerator
void UNN_Cpp_GPTSummaryGenerator::StaticRegisterNativesUNN_Cpp_GPTSummaryGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_GPTSummaryGenerator);
UClass* Z_Construct_UClass_UNN_Cpp_GPTSummaryGenerator_NoRegister()
{
	return UNN_Cpp_GPTSummaryGenerator::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_GPTSummaryGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GPT/NN_Cpp_GPTSummaryGenerator.h" },
		{ "ModuleRelativePath", "Public/GPT/NN_Cpp_GPTSummaryGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_GPTSummaryGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_GPTSummaryGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_GPTSummaryGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_GPTSummaryGenerator_Statics::ClassParams = {
	&UNN_Cpp_GPTSummaryGenerator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_GPTSummaryGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_GPTSummaryGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_GPTSummaryGenerator()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_GPTSummaryGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_GPTSummaryGenerator.OuterSingleton, Z_Construct_UClass_UNN_Cpp_GPTSummaryGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_GPTSummaryGenerator.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_GPTSummaryGenerator>()
{
	return UNN_Cpp_GPTSummaryGenerator::StaticClass();
}
UNN_Cpp_GPTSummaryGenerator::UNN_Cpp_GPTSummaryGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_GPTSummaryGenerator);
UNN_Cpp_GPTSummaryGenerator::~UNN_Cpp_GPTSummaryGenerator() {}
// End Class UNN_Cpp_GPTSummaryGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPTSummaryGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_GPTSummaryGenerator, UNN_Cpp_GPTSummaryGenerator::StaticClass, TEXT("UNN_Cpp_GPTSummaryGenerator"), &Z_Registration_Info_UClass_UNN_Cpp_GPTSummaryGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_GPTSummaryGenerator), 459389244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPTSummaryGenerator_h_3131722572(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPTSummaryGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPTSummaryGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
