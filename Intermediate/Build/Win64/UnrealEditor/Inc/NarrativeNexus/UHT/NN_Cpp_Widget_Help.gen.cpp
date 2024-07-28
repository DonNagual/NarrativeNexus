// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Widgets/NN_Cpp_Widget_Help.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_Widget_Help() {}

// Begin Cross Module References
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_Help();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_Help_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_Help
void UNN_Cpp_Widget_Help::StaticRegisterNativesUNN_Cpp_Widget_Help()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_Widget_Help);
UClass* Z_Construct_UClass_UNN_Cpp_Widget_Help_NoRegister()
{
	return UNN_Cpp_Widget_Help::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_Widget_Help_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/NN_Cpp_Widget_Help.h" },
		{ "ModuleRelativePath", "Public/Widgets/NN_Cpp_Widget_Help.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_Help>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_Widget_Help_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Help_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_Widget_Help_Statics::ClassParams = {
	&UNN_Cpp_Widget_Help::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Help_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_Widget_Help_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_Widget_Help()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_Widget_Help.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_Widget_Help.OuterSingleton, Z_Construct_UClass_UNN_Cpp_Widget_Help_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_Widget_Help.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_Widget_Help>()
{
	return UNN_Cpp_Widget_Help::StaticClass();
}
UNN_Cpp_Widget_Help::UNN_Cpp_Widget_Help(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_Widget_Help);
UNN_Cpp_Widget_Help::~UNN_Cpp_Widget_Help() {}
// End Class UNN_Cpp_Widget_Help

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Help_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_Widget_Help, UNN_Cpp_Widget_Help::StaticClass, TEXT("UNN_Cpp_Widget_Help"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_Help, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_Help), 4080595517U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Help_h_4057166555(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Help_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Help_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
