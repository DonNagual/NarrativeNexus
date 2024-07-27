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

// Begin Class ANN_Cpp_HUD Function CreateAndAddBaseWidget
struct Z_Construct_UFunction_ANN_Cpp_HUD_CreateAndAddBaseWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/General/NN_Cpp_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANN_Cpp_HUD_CreateAndAddBaseWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANN_Cpp_HUD, nullptr, "CreateAndAddBaseWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANN_Cpp_HUD_CreateAndAddBaseWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANN_Cpp_HUD_CreateAndAddBaseWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANN_Cpp_HUD_CreateAndAddBaseWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANN_Cpp_HUD_CreateAndAddBaseWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANN_Cpp_HUD::execCreateAndAddBaseWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateAndAddBaseWidget();
	P_NATIVE_END;
}
// End Class ANN_Cpp_HUD Function CreateAndAddBaseWidget

// Begin Class ANN_Cpp_HUD
void ANN_Cpp_HUD::StaticRegisterNativesANN_Cpp_HUD()
{
	UClass* Class = ANN_Cpp_HUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAndAddBaseWidget", &ANN_Cpp_HUD::execCreateAndAddBaseWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "General/NN_Cpp_HUD.h" },
		{ "ModuleRelativePath", "Public/General/NN_Cpp_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryWidgetClass_MetaData[] = {
		{ "Category", "UI Category" },
		{ "ModuleRelativePath", "Public/General/NN_Cpp_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CategoryWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANN_Cpp_HUD_CreateAndAddBaseWidget, "CreateAndAddBaseWidget" }, // 1328495190
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANN_Cpp_HUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANN_Cpp_HUD_Statics::NewProp_CategoryWidgetClass = { "CategoryWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANN_Cpp_HUD, CategoryWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryWidgetClass_MetaData), NewProp_CategoryWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANN_Cpp_HUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANN_Cpp_HUD_Statics::NewProp_CategoryWidgetClass,
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
	FuncInfo,
	Z_Construct_UClass_ANN_Cpp_HUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ANN_Cpp_HUD, ANN_Cpp_HUD::StaticClass, TEXT("ANN_Cpp_HUD"), &Z_Registration_Info_UClass_ANN_Cpp_HUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANN_Cpp_HUD), 2098275983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_HUD_h_2324688460(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_HUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_HUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
