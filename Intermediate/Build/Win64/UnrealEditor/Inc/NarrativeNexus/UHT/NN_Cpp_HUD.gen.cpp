// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/General/NN_Cpp_HUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_HUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_ANN_Cpp_HUD();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_ANN_Cpp_HUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class ANN_Cpp_HUD
void ANN_Cpp_HUD::StaticRegisterNativesANN_Cpp_HUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANN_Cpp_HUD);
UClass* Z_Construct_UClass_ANN_Cpp_HUD_NoRegister()
{
	return ANN_Cpp_HUD::StaticClass();
}
struct Z_Construct_UClass_ANN_Cpp_HUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "General/NN_Cpp_HUD.h" },
		{ "ModuleRelativePath", "Public/General/NN_Cpp_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryWidget_MetaData[] = {
		{ "Category", "UI Category" },
		{ "ModuleRelativePath", "Public/General/NN_Cpp_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInstances_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/General/NN_Cpp_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CategoryWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetInstances_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetInstances_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WidgetInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANN_Cpp_HUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANN_Cpp_HUD_Statics::NewProp_CategoryWidget = { "CategoryWidget", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANN_Cpp_HUD, CategoryWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryWidget_MetaData), NewProp_CategoryWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANN_Cpp_HUD_Statics::NewProp_WidgetInstances_ValueProp = { "WidgetInstances", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANN_Cpp_HUD_Statics::NewProp_WidgetInstances_Key_KeyProp = { "WidgetInstances_Key", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANN_Cpp_HUD_Statics::NewProp_WidgetInstances = { "WidgetInstances", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANN_Cpp_HUD, WidgetInstances), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetInstances_MetaData), NewProp_WidgetInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANN_Cpp_HUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANN_Cpp_HUD_Statics::NewProp_CategoryWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANN_Cpp_HUD_Statics::NewProp_WidgetInstances_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANN_Cpp_HUD_Statics::NewProp_WidgetInstances_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANN_Cpp_HUD_Statics::NewProp_WidgetInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANN_Cpp_HUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANN_Cpp_HUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANN_Cpp_HUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANN_Cpp_HUD_Statics::ClassParams = {
	&ANN_Cpp_HUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANN_Cpp_HUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANN_Cpp_HUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANN_Cpp_HUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ANN_Cpp_HUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANN_Cpp_HUD()
{
	if (!Z_Registration_Info_UClass_ANN_Cpp_HUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANN_Cpp_HUD.OuterSingleton, Z_Construct_UClass_ANN_Cpp_HUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANN_Cpp_HUD.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<ANN_Cpp_HUD>()
{
	return ANN_Cpp_HUD::StaticClass();
}
ANN_Cpp_HUD::ANN_Cpp_HUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANN_Cpp_HUD);
ANN_Cpp_HUD::~ANN_Cpp_HUD() {}
// End Class ANN_Cpp_HUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_HUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANN_Cpp_HUD, ANN_Cpp_HUD::StaticClass, TEXT("ANN_Cpp_HUD"), &Z_Registration_Info_UClass_ANN_Cpp_HUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANN_Cpp_HUD), 1160202027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_HUD_h_3193121562(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_HUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_HUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
