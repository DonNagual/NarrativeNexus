// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Widgets/Main/NN_Cpp_Widget_MainTutorial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_Widget_MainTutorial() {}

// Begin Cross Module References
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_MainTutorial();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_MainTutorial_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_MainTutorial
void UNN_Cpp_Widget_MainTutorial::StaticRegisterNativesUNN_Cpp_Widget_MainTutorial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_Widget_MainTutorial);
UClass* Z_Construct_UClass_UNN_Cpp_Widget_MainTutorial_NoRegister()
{
	return UNN_Cpp_Widget_MainTutorial::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_Widget_MainTutorial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Main/NN_Cpp_Widget_MainTutorial.h" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_MainTutorial.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_MainTutorial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_Widget_MainTutorial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_MainTutorial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_Widget_MainTutorial_Statics::ClassParams = {
	&UNN_Cpp_Widget_MainTutorial::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_MainTutorial_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_Widget_MainTutorial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_Widget_MainTutorial()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_Widget_MainTutorial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_Widget_MainTutorial.OuterSingleton, Z_Construct_UClass_UNN_Cpp_Widget_MainTutorial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_Widget_MainTutorial.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_Widget_MainTutorial>()
{
	return UNN_Cpp_Widget_MainTutorial::StaticClass();
}
UNN_Cpp_Widget_MainTutorial::UNN_Cpp_Widget_MainTutorial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_Widget_MainTutorial);
UNN_Cpp_Widget_MainTutorial::~UNN_Cpp_Widget_MainTutorial() {}
// End Class UNN_Cpp_Widget_MainTutorial

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_MainTutorial_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_Widget_MainTutorial, UNN_Cpp_Widget_MainTutorial::StaticClass, TEXT("UNN_Cpp_Widget_MainTutorial"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_MainTutorial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_MainTutorial), 2031763772U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_MainTutorial_h_4215813788(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_MainTutorial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_MainTutorial_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
