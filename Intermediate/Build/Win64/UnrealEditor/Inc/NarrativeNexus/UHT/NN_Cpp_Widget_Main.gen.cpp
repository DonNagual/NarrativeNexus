// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Widgets/Main/NN_Cpp_Widget_Main.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_Widget_Main() {}

// Begin Cross Module References
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_Main();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_Main_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_Main Function HideMainSubWidget
struct Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget_Statics
{
	struct NN_Cpp_Widget_Main_eventHideMainSubWidget_Parms
	{
		UUserWidget* SubWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Functions ###############\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_Main.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Functions ###############" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget_Statics::NewProp_SubWidget = { "SubWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NN_Cpp_Widget_Main_eventHideMainSubWidget_Parms, SubWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubWidget_MetaData), NewProp_SubWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget_Statics::NewProp_SubWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_Main, nullptr, "HideMainSubWidget", nullptr, nullptr, Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget_Statics::NN_Cpp_Widget_Main_eventHideMainSubWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget_Statics::NN_Cpp_Widget_Main_eventHideMainSubWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_Main::execHideMainSubWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_SubWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideMainSubWidget(Z_Param_SubWidget);
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_Main Function HideMainSubWidget

// Begin Class UNN_Cpp_Widget_Main Function ShowMainGuideWidget
struct Z_Construct_UFunction_UNN_Cpp_Widget_Main_ShowMainGuideWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_Main_ShowMainGuideWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_Main, nullptr, "ShowMainGuideWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Main_ShowMainGuideWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_Main_ShowMainGuideWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_Main_ShowMainGuideWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_Main_ShowMainGuideWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_Main::execShowMainGuideWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMainGuideWidget();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_Main Function ShowMainGuideWidget

// Begin Class UNN_Cpp_Widget_Main Function ShowMainMenuWidget
struct Z_Construct_UFunction_UNN_Cpp_Widget_Main_ShowMainMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_Main_ShowMainMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_Main, nullptr, "ShowMainMenuWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Main_ShowMainMenuWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_Main_ShowMainMenuWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_Main_ShowMainMenuWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_Main_ShowMainMenuWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_Main::execShowMainMenuWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMainMenuWidget();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_Main Function ShowMainMenuWidget

// Begin Class UNN_Cpp_Widget_Main
void UNN_Cpp_Widget_Main::StaticRegisterNativesUNN_Cpp_Widget_Main()
{
	UClass* Class = UNN_Cpp_Widget_Main::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HideMainSubWidget", &UNN_Cpp_Widget_Main::execHideMainSubWidget },
		{ "ShowMainGuideWidget", &UNN_Cpp_Widget_Main::execShowMainGuideWidget },
		{ "ShowMainMenuWidget", &UNN_Cpp_Widget_Main::execShowMainMenuWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_Widget_Main);
UClass* Z_Construct_UClass_UNN_Cpp_Widget_Main_NoRegister()
{
	return UNN_Cpp_Widget_Main::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Main/NN_Cpp_Widget_Main.h" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainGuideWidget_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Widgets ###############\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_Main.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Widgets ###############" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainOptionsWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainTutorialWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainCreditsWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainGuideWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainOptionsWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainTutorialWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCreditsWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_Main_HideMainSubWidget, "HideMainSubWidget" }, // 1853209780
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_Main_ShowMainGuideWidget, "ShowMainGuideWidget" }, // 2568759037
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_Main_ShowMainMenuWidget, "ShowMainMenuWidget" }, // 752322184
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::NewProp_MainMenuWidget = { "MainMenuWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Main, MainMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidget_MetaData), NewProp_MainMenuWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::NewProp_MainContainer = { "MainContainer", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Main, MainContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainContainer_MetaData), NewProp_MainContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::NewProp_MainGuideWidget = { "MainGuideWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Main, MainGuideWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainGuideWidget_MetaData), NewProp_MainGuideWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::NewProp_MainOptionsWidget = { "MainOptionsWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Main, MainOptionsWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainOptionsWidget_MetaData), NewProp_MainOptionsWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::NewProp_MainTutorialWidget = { "MainTutorialWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Main, MainTutorialWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainTutorialWidget_MetaData), NewProp_MainTutorialWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::NewProp_MainCreditsWidget = { "MainCreditsWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Main, MainCreditsWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainCreditsWidget_MetaData), NewProp_MainCreditsWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::NewProp_MainMenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::NewProp_MainContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::NewProp_MainGuideWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::NewProp_MainOptionsWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::NewProp_MainTutorialWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::NewProp_MainCreditsWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::ClassParams = {
	&UNN_Cpp_Widget_Main::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_Widget_Main()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_Widget_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_Widget_Main.OuterSingleton, Z_Construct_UClass_UNN_Cpp_Widget_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_Widget_Main.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_Widget_Main>()
{
	return UNN_Cpp_Widget_Main::StaticClass();
}
UNN_Cpp_Widget_Main::UNN_Cpp_Widget_Main(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_Widget_Main);
UNN_Cpp_Widget_Main::~UNN_Cpp_Widget_Main() {}
// End Class UNN_Cpp_Widget_Main

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_Main_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_Widget_Main, UNN_Cpp_Widget_Main::StaticClass, TEXT("UNN_Cpp_Widget_Main"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_Main), 1235527847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_Main_h_4079030272(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_Main_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_Main_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
