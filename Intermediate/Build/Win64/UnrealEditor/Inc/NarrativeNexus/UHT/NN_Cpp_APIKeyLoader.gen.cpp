// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/GPT/NN_Cpp_APIKeyLoader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_APIKeyLoader() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_APIKeyLoader();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_APIKeyLoader_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_APIKeyLoader
void UNN_Cpp_APIKeyLoader::StaticRegisterNativesUNN_Cpp_APIKeyLoader()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_APIKeyLoader);
UClass* Z_Construct_UClass_UNN_Cpp_APIKeyLoader_NoRegister()
{
	return UNN_Cpp_APIKeyLoader::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_APIKeyLoader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GPT/NN_Cpp_APIKeyLoader.h" },
		{ "ModuleRelativePath", "Public/GPT/NN_Cpp_APIKeyLoader.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_APIKeyLoader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_APIKeyLoader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_APIKeyLoader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_APIKeyLoader_Statics::ClassParams = {
	&UNN_Cpp_APIKeyLoader::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_APIKeyLoader_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_APIKeyLoader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_APIKeyLoader()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_APIKeyLoader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_APIKeyLoader.OuterSingleton, Z_Construct_UClass_UNN_Cpp_APIKeyLoader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_APIKeyLoader.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_APIKeyLoader>()
{
	return UNN_Cpp_APIKeyLoader::StaticClass();
}
UNN_Cpp_APIKeyLoader::UNN_Cpp_APIKeyLoader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_APIKeyLoader);
UNN_Cpp_APIKeyLoader::~UNN_Cpp_APIKeyLoader() {}
// End Class UNN_Cpp_APIKeyLoader

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_APIKeyLoader_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_APIKeyLoader, UNN_Cpp_APIKeyLoader::StaticClass, TEXT("UNN_Cpp_APIKeyLoader"), &Z_Registration_Info_UClass_UNN_Cpp_APIKeyLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_APIKeyLoader), 1184082988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_APIKeyLoader_h_564835559(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_APIKeyLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_APIKeyLoader_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
