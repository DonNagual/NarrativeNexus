// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Widgets/Creator/NN_Cpp_Widget_CreatorCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_Widget_CreatorCharacter() {}

// Begin Cross Module References
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_CreatorCharacter();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_CreatorCharacter_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_CreatorCharacter
void UNN_Cpp_Widget_CreatorCharacter::StaticRegisterNativesUNN_Cpp_Widget_CreatorCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_Widget_CreatorCharacter);
UClass* Z_Construct_UClass_UNN_Cpp_Widget_CreatorCharacter_NoRegister()
{
	return UNN_Cpp_Widget_CreatorCharacter::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_Widget_CreatorCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Creator/NN_Cpp_Widget_CreatorCharacter.h" },
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_CreatorCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_CreatorCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_Widget_CreatorCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_CreatorCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_Widget_CreatorCharacter_Statics::ClassParams = {
	&UNN_Cpp_Widget_CreatorCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_CreatorCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_Widget_CreatorCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_Widget_CreatorCharacter()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_Widget_CreatorCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_Widget_CreatorCharacter.OuterSingleton, Z_Construct_UClass_UNN_Cpp_Widget_CreatorCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_Widget_CreatorCharacter.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_Widget_CreatorCharacter>()
{
	return UNN_Cpp_Widget_CreatorCharacter::StaticClass();
}
UNN_Cpp_Widget_CreatorCharacter::UNN_Cpp_Widget_CreatorCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_Widget_CreatorCharacter);
UNN_Cpp_Widget_CreatorCharacter::~UNN_Cpp_Widget_CreatorCharacter() {}
// End Class UNN_Cpp_Widget_CreatorCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Creator_NN_Cpp_Widget_CreatorCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_Widget_CreatorCharacter, UNN_Cpp_Widget_CreatorCharacter::StaticClass, TEXT("UNN_Cpp_Widget_CreatorCharacter"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_CreatorCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_CreatorCharacter), 2109167438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Creator_NN_Cpp_Widget_CreatorCharacter_h_1389394907(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Creator_NN_Cpp_Widget_CreatorCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Creator_NN_Cpp_Widget_CreatorCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
