// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/General/NN_Cpp_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_PlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_ANN_Cpp_PlayerController();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_ANN_Cpp_PlayerController_NoRegister();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_IF_WidgetController_NoRegister();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_Category_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class ANN_Cpp_PlayerController
void ANN_Cpp_PlayerController::StaticRegisterNativesANN_Cpp_PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANN_Cpp_PlayerController);
UClass* Z_Construct_UClass_ANN_Cpp_PlayerController_NoRegister()
{
	return ANN_Cpp_PlayerController::StaticClass();
}
struct Z_Construct_UClass_ANN_Cpp_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "General/NN_Cpp_PlayerController.h" },
		{ "ModuleRelativePath", "Public/General/NN_Cpp_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryWidgetClass_MetaData[] = {
		{ "Category", "UI Category" },
		{ "ModuleRelativePath", "Public/General/NN_Cpp_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/General/NN_Cpp_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CategoryWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CategoryWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANN_Cpp_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::NewProp_CategoryWidgetClass = { "CategoryWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANN_Cpp_PlayerController, CategoryWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryWidgetClass_MetaData), NewProp_CategoryWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::NewProp_CategoryWidget = { "CategoryWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANN_Cpp_PlayerController, CategoryWidget), Z_Construct_UClass_UNN_Cpp_Widget_Category_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryWidget_MetaData), NewProp_CategoryWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::NewProp_CategoryWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::NewProp_CategoryWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNN_Cpp_IF_WidgetController_NoRegister, (int32)VTABLE_OFFSET(ANN_Cpp_PlayerController, INN_Cpp_IF_WidgetController), false },  // 4290226502
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::ClassParams = {
	&ANN_Cpp_PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANN_Cpp_PlayerController()
{
	if (!Z_Registration_Info_UClass_ANN_Cpp_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANN_Cpp_PlayerController.OuterSingleton, Z_Construct_UClass_ANN_Cpp_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANN_Cpp_PlayerController.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<ANN_Cpp_PlayerController>()
{
	return ANN_Cpp_PlayerController::StaticClass();
}
ANN_Cpp_PlayerController::ANN_Cpp_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANN_Cpp_PlayerController);
ANN_Cpp_PlayerController::~ANN_Cpp_PlayerController() {}
// End Class ANN_Cpp_PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANN_Cpp_PlayerController, ANN_Cpp_PlayerController::StaticClass, TEXT("ANN_Cpp_PlayerController"), &Z_Registration_Info_UClass_ANN_Cpp_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANN_Cpp_PlayerController), 4099423555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_PlayerController_h_733726864(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
