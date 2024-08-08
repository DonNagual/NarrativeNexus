// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/ChatGPT/NN_Cpp_ChatGPT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_ChatGPT() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_ChatGPT();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_ChatGPT_NoRegister();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_IF_ChatGPT_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_ChatGPT
void UNN_Cpp_ChatGPT::StaticRegisterNativesUNN_Cpp_ChatGPT()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_ChatGPT);
UClass* Z_Construct_UClass_UNN_Cpp_ChatGPT_NoRegister()
{
	return UNN_Cpp_ChatGPT::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ChatGPT/NN_Cpp_ChatGPT.h" },
		{ "ModuleRelativePath", "Public/ChatGPT/NN_Cpp_ChatGPT.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_ChatGPT>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNN_Cpp_IF_ChatGPT_NoRegister, (int32)VTABLE_OFFSET(UNN_Cpp_ChatGPT, INN_Cpp_IF_ChatGPT), false },  // 3545708827
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::ClassParams = {
	&UNN_Cpp_ChatGPT::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_ChatGPT()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_ChatGPT.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_ChatGPT.OuterSingleton, Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_ChatGPT.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_ChatGPT>()
{
	return UNN_Cpp_ChatGPT::StaticClass();
}
UNN_Cpp_ChatGPT::UNN_Cpp_ChatGPT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_ChatGPT);
UNN_Cpp_ChatGPT::~UNN_Cpp_ChatGPT() {}
// End Class UNN_Cpp_ChatGPT

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_ChatGPT_NN_Cpp_ChatGPT_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_ChatGPT, UNN_Cpp_ChatGPT::StaticClass, TEXT("UNN_Cpp_ChatGPT"), &Z_Registration_Info_UClass_UNN_Cpp_ChatGPT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_ChatGPT), 3815792446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_ChatGPT_NN_Cpp_ChatGPT_h_1911508361(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_ChatGPT_NN_Cpp_ChatGPT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_ChatGPT_NN_Cpp_ChatGPT_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
