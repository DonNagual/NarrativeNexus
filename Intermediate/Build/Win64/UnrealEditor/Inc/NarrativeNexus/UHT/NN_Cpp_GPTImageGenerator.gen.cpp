// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/GPT/NN_Cpp_GPTImageGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_GPTImageGenerator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_GPTImageGenerator();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_GPTImageGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_GPTImageGenerator
void UNN_Cpp_GPTImageGenerator::StaticRegisterNativesUNN_Cpp_GPTImageGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_GPTImageGenerator);
UClass* Z_Construct_UClass_UNN_Cpp_GPTImageGenerator_NoRegister()
{
	return UNN_Cpp_GPTImageGenerator::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_GPTImageGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GPT/NN_Cpp_GPTImageGenerator.h" },
		{ "ModuleRelativePath", "Public/GPT/NN_Cpp_GPTImageGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_GPTImageGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_GPTImageGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_GPTImageGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_GPTImageGenerator_Statics::ClassParams = {
	&UNN_Cpp_GPTImageGenerator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_GPTImageGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_GPTImageGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_GPTImageGenerator()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_GPTImageGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_GPTImageGenerator.OuterSingleton, Z_Construct_UClass_UNN_Cpp_GPTImageGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_GPTImageGenerator.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_GPTImageGenerator>()
{
	return UNN_Cpp_GPTImageGenerator::StaticClass();
}
UNN_Cpp_GPTImageGenerator::UNN_Cpp_GPTImageGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_GPTImageGenerator);
UNN_Cpp_GPTImageGenerator::~UNN_Cpp_GPTImageGenerator() {}
// End Class UNN_Cpp_GPTImageGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPTImageGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_GPTImageGenerator, UNN_Cpp_GPTImageGenerator::StaticClass, TEXT("UNN_Cpp_GPTImageGenerator"), &Z_Registration_Info_UClass_UNN_Cpp_GPTImageGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_GPTImageGenerator), 2543889520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPTImageGenerator_h_69025550(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPTImageGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPTImageGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
