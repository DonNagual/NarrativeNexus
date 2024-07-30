// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Widgets/NN_Cpp_Widget_Quit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_Widget_Quit() {}

// Begin Cross Module References
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_Quit();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_Quit_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_Quit
void UNN_Cpp_Widget_Quit::StaticRegisterNativesUNN_Cpp_Widget_Quit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_Widget_Quit);
UClass* Z_Construct_UClass_UNN_Cpp_Widget_Quit_NoRegister()
{
	return UNN_Cpp_Widget_Quit::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_Widget_Quit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/NN_Cpp_Widget_Quit.h" },
		{ "ModuleRelativePath", "Public/Widgets/NN_Cpp_Widget_Quit.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_Quit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_Widget_Quit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Quit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_Widget_Quit_Statics::ClassParams = {
	&UNN_Cpp_Widget_Quit::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Quit_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_Widget_Quit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_Widget_Quit()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_Widget_Quit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_Widget_Quit.OuterSingleton, Z_Construct_UClass_UNN_Cpp_Widget_Quit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_Widget_Quit.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_Widget_Quit>()
{
	return UNN_Cpp_Widget_Quit::StaticClass();
}
UNN_Cpp_Widget_Quit::UNN_Cpp_Widget_Quit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_Widget_Quit);
UNN_Cpp_Widget_Quit::~UNN_Cpp_Widget_Quit() {}
// End Class UNN_Cpp_Widget_Quit

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Quit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_Widget_Quit, UNN_Cpp_Widget_Quit::StaticClass, TEXT("UNN_Cpp_Widget_Quit"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_Quit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_Quit), 3176602469U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Quit_h_2806474217(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Quit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Quit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
