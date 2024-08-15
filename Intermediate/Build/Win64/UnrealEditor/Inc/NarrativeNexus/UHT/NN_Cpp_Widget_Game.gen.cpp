// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Widgets/Game/NN_Cpp_Widget_Game.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_Widget_Game() {}

// Begin Cross Module References
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_Game();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_Game_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_Game Function HideAllWidgets
struct Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideAllWidgets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_Game.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideAllWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_Game, nullptr, "HideAllWidgets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideAllWidgets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideAllWidgets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideAllWidgets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideAllWidgets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_Game::execHideAllWidgets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideAllWidgets();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_Game Function HideAllWidgets

// Begin Class UNN_Cpp_Widget_Game Function HideGameSubWidget
struct Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget_Statics
{
	struct NN_Cpp_Widget_Game_eventHideGameSubWidget_Parms
	{
		UUserWidget* SubWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Functions ###############\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_Game.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget_Statics::NewProp_SubWidget = { "SubWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NN_Cpp_Widget_Game_eventHideGameSubWidget_Parms, SubWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubWidget_MetaData), NewProp_SubWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget_Statics::NewProp_SubWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_Game, nullptr, "HideGameSubWidget", nullptr, nullptr, Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget_Statics::NN_Cpp_Widget_Game_eventHideGameSubWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget_Statics::NN_Cpp_Widget_Game_eventHideGameSubWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_Game::execHideGameSubWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_SubWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideGameSubWidget(Z_Param_SubWidget);
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_Game Function HideGameSubWidget

// Begin Class UNN_Cpp_Widget_Game Function ShowGameInventoryWidget
struct Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameInventoryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_Game.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameInventoryWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_Game, nullptr, "ShowGameInventoryWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameInventoryWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameInventoryWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameInventoryWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameInventoryWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_Game::execShowGameInventoryWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowGameInventoryWidget();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_Game Function ShowGameInventoryWidget

// Begin Class UNN_Cpp_Widget_Game Function ShowGameMenuWidget
struct Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Functions ###############\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_Game.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Functions ###############" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_Game, nullptr, "ShowGameMenuWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameMenuWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameMenuWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameMenuWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameMenuWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_Game::execShowGameMenuWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowGameMenuWidget();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_Game Function ShowGameMenuWidget

// Begin Class UNN_Cpp_Widget_Game Function ShowGameNavigatorWidget
struct Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameNavigatorWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_Game.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameNavigatorWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_Game, nullptr, "ShowGameNavigatorWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameNavigatorWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameNavigatorWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameNavigatorWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameNavigatorWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_Game::execShowGameNavigatorWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowGameNavigatorWidget();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_Game Function ShowGameNavigatorWidget

// Begin Class UNN_Cpp_Widget_Game
void UNN_Cpp_Widget_Game::StaticRegisterNativesUNN_Cpp_Widget_Game()
{
	UClass* Class = UNN_Cpp_Widget_Game::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HideAllWidgets", &UNN_Cpp_Widget_Game::execHideAllWidgets },
		{ "HideGameSubWidget", &UNN_Cpp_Widget_Game::execHideGameSubWidget },
		{ "ShowGameInventoryWidget", &UNN_Cpp_Widget_Game::execShowGameInventoryWidget },
		{ "ShowGameMenuWidget", &UNN_Cpp_Widget_Game::execShowGameMenuWidget },
		{ "ShowGameNavigatorWidget", &UNN_Cpp_Widget_Game::execShowGameNavigatorWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_Widget_Game);
UClass* Z_Construct_UClass_UNN_Cpp_Widget_Game_NoRegister()
{
	return UNN_Cpp_Widget_Game::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Game/NN_Cpp_Widget_Game.h" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_Game.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMenuWidget_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Widgets ###############\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_Game.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Widgets ###############" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameNavigatorWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_Game.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameInventoryWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_Game.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameChatWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_Game.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_Game.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMenuWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameNavigatorWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameInventoryWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameChatWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideAllWidgets, "HideAllWidgets" }, // 2192055593
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_Game_HideGameSubWidget, "HideGameSubWidget" }, // 2157879058
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameInventoryWidget, "ShowGameInventoryWidget" }, // 1992615076
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameMenuWidget, "ShowGameMenuWidget" }, // 2210748241
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_Game_ShowGameNavigatorWidget, "ShowGameNavigatorWidget" }, // 1805902375
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_Game>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::NewProp_GameMenuWidget = { "GameMenuWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Game, GameMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMenuWidget_MetaData), NewProp_GameMenuWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::NewProp_GameNavigatorWidget = { "GameNavigatorWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Game, GameNavigatorWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameNavigatorWidget_MetaData), NewProp_GameNavigatorWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::NewProp_GameInventoryWidget = { "GameInventoryWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Game, GameInventoryWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameInventoryWidget_MetaData), NewProp_GameInventoryWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::NewProp_GameChatWidget = { "GameChatWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Game, GameChatWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameChatWidget_MetaData), NewProp_GameChatWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::NewProp_GameContainer = { "GameContainer", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Game, GameContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameContainer_MetaData), NewProp_GameContainer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::NewProp_GameMenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::NewProp_GameNavigatorWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::NewProp_GameInventoryWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::NewProp_GameChatWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::NewProp_GameContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::ClassParams = {
	&UNN_Cpp_Widget_Game::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_Widget_Game()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_Widget_Game.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_Widget_Game.OuterSingleton, Z_Construct_UClass_UNN_Cpp_Widget_Game_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_Widget_Game.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_Widget_Game>()
{
	return UNN_Cpp_Widget_Game::StaticClass();
}
UNN_Cpp_Widget_Game::UNN_Cpp_Widget_Game(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_Widget_Game);
UNN_Cpp_Widget_Game::~UNN_Cpp_Widget_Game() {}
// End Class UNN_Cpp_Widget_Game

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_Game_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_Widget_Game, UNN_Cpp_Widget_Game::StaticClass, TEXT("UNN_Cpp_Widget_Game"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_Game, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_Game), 2632346882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_Game_h_3728501694(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_Game_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_Game_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
