// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Interface/NN_Cpp_IF_GPT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_IF_GPT() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_IF_GPT();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_IF_GPT_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Interface UNN_Cpp_IF_GPT
void UNN_Cpp_IF_GPT::StaticRegisterNativesUNN_Cpp_IF_GPT()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_IF_GPT);
UClass* Z_Construct_UClass_UNN_Cpp_IF_GPT_NoRegister()
{
	return UNN_Cpp_IF_GPT::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_IF_GPT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/NN_Cpp_IF_GPT.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INN_Cpp_IF_GPT>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_IF_GPT_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_IF_GPT_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_IF_GPT_Statics::ClassParams = {
	&UNN_Cpp_IF_GPT::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_IF_GPT_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_IF_GPT_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_IF_GPT()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_IF_GPT.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_IF_GPT.OuterSingleton, Z_Construct_UClass_UNN_Cpp_IF_GPT_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_IF_GPT.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_IF_GPT>()
{
	return UNN_Cpp_IF_GPT::StaticClass();
}
UNN_Cpp_IF_GPT::UNN_Cpp_IF_GPT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_IF_GPT);
UNN_Cpp_IF_GPT::~UNN_Cpp_IF_GPT() {}
// End Interface UNN_Cpp_IF_GPT

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_GPT_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_IF_GPT, UNN_Cpp_IF_GPT::StaticClass, TEXT("UNN_Cpp_IF_GPT"), &Z_Registration_Info_UClass_UNN_Cpp_IF_GPT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_IF_GPT), 1455895874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_GPT_h_424601405(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_GPT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_GPT_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
