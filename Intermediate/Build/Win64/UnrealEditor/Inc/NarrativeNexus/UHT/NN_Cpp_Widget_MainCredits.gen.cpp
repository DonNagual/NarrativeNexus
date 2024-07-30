// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Widgets/Main/NN_Cpp_Widget_MainCredits.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_Widget_MainCredits() {}

// Begin Cross Module References
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_MainCredits();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_MainCredits_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_MainCredits
void UNN_Cpp_Widget_MainCredits::StaticRegisterNativesUNN_Cpp_Widget_MainCredits()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_Widget_MainCredits);
UClass* Z_Construct_UClass_UNN_Cpp_Widget_MainCredits_NoRegister()
{
	return UNN_Cpp_Widget_MainCredits::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_Widget_MainCredits_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Main/NN_Cpp_Widget_MainCredits.h" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_MainCredits.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_MainCredits>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_Widget_MainCredits_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_MainCredits_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_Widget_MainCredits_Statics::ClassParams = {
	&UNN_Cpp_Widget_MainCredits::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_MainCredits_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_Widget_MainCredits_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_Widget_MainCredits()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_Widget_MainCredits.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_Widget_MainCredits.OuterSingleton, Z_Construct_UClass_UNN_Cpp_Widget_MainCredits_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_Widget_MainCredits.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_Widget_MainCredits>()
{
	return UNN_Cpp_Widget_MainCredits::StaticClass();
}
UNN_Cpp_Widget_MainCredits::UNN_Cpp_Widget_MainCredits(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_Widget_MainCredits);
UNN_Cpp_Widget_MainCredits::~UNN_Cpp_Widget_MainCredits() {}
// End Class UNN_Cpp_Widget_MainCredits

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_MainCredits_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_Widget_MainCredits, UNN_Cpp_Widget_MainCredits::StaticClass, TEXT("UNN_Cpp_Widget_MainCredits"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_MainCredits, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_MainCredits), 441637376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_MainCredits_h_2398573864(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_MainCredits_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_MainCredits_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
