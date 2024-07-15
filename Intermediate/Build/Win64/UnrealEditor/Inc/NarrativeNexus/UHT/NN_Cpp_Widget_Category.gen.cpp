// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Widgets/NN_Cpp_Widget_Category.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_Widget_Category() {}

// Begin Cross Module References
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_Category();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_Category_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_Category
void UNN_Cpp_Widget_Category::StaticRegisterNativesUNN_Cpp_Widget_Category()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_Widget_Category);
UClass* Z_Construct_UClass_UNN_Cpp_Widget_Category_NoRegister()
{
	return UNN_Cpp_Widget_Category::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/NN_Cpp_Widget_Category.h" },
		{ "ModuleRelativePath", "Public/Widgets/NN_Cpp_Widget_Category.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/NN_Cpp_Widget_Category.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainWidget_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(meta = (BindWidget))\n//TObjectPtr<UButton> MainButton;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/NN_Cpp_Widget_Category.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(meta = (BindWidget))\nTObjectPtr<UButton> MainButton;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatorWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/NN_Cpp_Widget_Category.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/NN_Cpp_Widget_Category.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CategoryContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatorWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_Category>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::NewProp_CategoryContainer = { "CategoryContainer", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Category, CategoryContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryContainer_MetaData), NewProp_CategoryContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::NewProp_MainWidget = { "MainWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Category, MainWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainWidget_MetaData), NewProp_MainWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::NewProp_CreatorWidget = { "CreatorWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Category, CreatorWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatorWidget_MetaData), NewProp_CreatorWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::NewProp_GameWidget = { "GameWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Category, GameWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameWidget_MetaData), NewProp_GameWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::NewProp_CategoryContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::NewProp_MainWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::NewProp_CreatorWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::NewProp_GameWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::ClassParams = {
	&UNN_Cpp_Widget_Category::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_Widget_Category()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_Widget_Category.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_Widget_Category.OuterSingleton, Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_Widget_Category.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_Widget_Category>()
{
	return UNN_Cpp_Widget_Category::StaticClass();
}
UNN_Cpp_Widget_Category::UNN_Cpp_Widget_Category(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_Widget_Category);
UNN_Cpp_Widget_Category::~UNN_Cpp_Widget_Category() {}
// End Class UNN_Cpp_Widget_Category

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Category_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_Widget_Category, UNN_Cpp_Widget_Category::StaticClass, TEXT("UNN_Cpp_Widget_Category"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_Category, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_Category), 3664077027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Category_h_4294888951(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Category_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Category_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
