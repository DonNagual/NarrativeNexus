// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Widgets/Creator/NN_Cpp_Widget_CreatorMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_Widget_CreatorMenu() {}

// Begin Cross Module References
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_Creator_NoRegister();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_CreatorMenu
void UNN_Cpp_Widget_CreatorMenu::StaticRegisterNativesUNN_Cpp_Widget_CreatorMenu()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_Widget_CreatorMenu);
UClass* Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_NoRegister()
{
	return UNN_Cpp_Widget_CreatorMenu::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Creator/NN_Cpp_Widget_CreatorMenu.h" },
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_CreatorMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatorWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the CreatorWidget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_CreatorMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the CreatorWidget" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatorWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_CreatorMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_Statics::NewProp_CreatorWidget = { "CreatorWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_CreatorMenu, CreatorWidget), Z_Construct_UClass_UNN_Cpp_Widget_Creator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatorWidget_MetaData), NewProp_CreatorWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_Statics::NewProp_CreatorWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_Statics::ClassParams = {
	&UNN_Cpp_Widget_CreatorMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_Widget_CreatorMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_Widget_CreatorMenu.OuterSingleton, Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_Widget_CreatorMenu.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_Widget_CreatorMenu>()
{
	return UNN_Cpp_Widget_CreatorMenu::StaticClass();
}
UNN_Cpp_Widget_CreatorMenu::UNN_Cpp_Widget_CreatorMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_Widget_CreatorMenu);
UNN_Cpp_Widget_CreatorMenu::~UNN_Cpp_Widget_CreatorMenu() {}
// End Class UNN_Cpp_Widget_CreatorMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Creator_NN_Cpp_Widget_CreatorMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_Widget_CreatorMenu, UNN_Cpp_Widget_CreatorMenu::StaticClass, TEXT("UNN_Cpp_Widget_CreatorMenu"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_CreatorMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_CreatorMenu), 826294829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Creator_NN_Cpp_Widget_CreatorMenu_h_1766026692(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Creator_NN_Cpp_Widget_CreatorMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Creator_NN_Cpp_Widget_CreatorMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
