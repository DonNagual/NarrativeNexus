// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/GPT/NN_Cpp_GPT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_GPT() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_GPT();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_GPT_NoRegister();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_IF_GPT_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_GPT
void UNN_Cpp_GPT::StaticRegisterNativesUNN_Cpp_GPT()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_GPT);
UClass* Z_Construct_UClass_UNN_Cpp_GPT_NoRegister()
{
	return UNN_Cpp_GPT::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_GPT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GPT/NN_Cpp_GPT.h" },
		{ "ModuleRelativePath", "Public/GPT/NN_Cpp_GPT.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_GPT>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_GPT_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_GPT_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNN_Cpp_GPT_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNN_Cpp_IF_GPT_NoRegister, (int32)VTABLE_OFFSET(UNN_Cpp_GPT, INN_Cpp_IF_GPT), false },  // 1455895874
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_GPT_Statics::ClassParams = {
	&UNN_Cpp_GPT::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_GPT_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_GPT_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_GPT()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_GPT.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_GPT.OuterSingleton, Z_Construct_UClass_UNN_Cpp_GPT_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_GPT.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_GPT>()
{
	return UNN_Cpp_GPT::StaticClass();
}
UNN_Cpp_GPT::UNN_Cpp_GPT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_GPT);
UNN_Cpp_GPT::~UNN_Cpp_GPT() {}
// End Class UNN_Cpp_GPT

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_GPT, UNN_Cpp_GPT::StaticClass, TEXT("UNN_Cpp_GPT"), &Z_Registration_Info_UClass_UNN_Cpp_GPT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_GPT), 2625003916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_54748344(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
