// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Widgets/Creator/NN_Cpp_Widget_Creator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_Widget_Creator() {}

// Begin Cross Module References
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_Creator();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_Creator_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_Creator Function HideAllWidgets
struct Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideAllWidgets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_Creator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideAllWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_Creator, nullptr, "HideAllWidgets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideAllWidgets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideAllWidgets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideAllWidgets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideAllWidgets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_Creator::execHideAllWidgets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideAllWidgets();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_Creator Function HideAllWidgets

// Begin Class UNN_Cpp_Widget_Creator Function HideCreatorSubWidget
struct Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget_Statics
{
	struct NN_Cpp_Widget_Creator_eventHideCreatorSubWidget_Parms
	{
		UUserWidget* SubWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Functions ###############\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_Creator.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget_Statics::NewProp_SubWidget = { "SubWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NN_Cpp_Widget_Creator_eventHideCreatorSubWidget_Parms, SubWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubWidget_MetaData), NewProp_SubWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget_Statics::NewProp_SubWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_Creator, nullptr, "HideCreatorSubWidget", nullptr, nullptr, Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget_Statics::NN_Cpp_Widget_Creator_eventHideCreatorSubWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget_Statics::NN_Cpp_Widget_Creator_eventHideCreatorSubWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_Creator::execHideCreatorSubWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_SubWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideCreatorSubWidget(Z_Param_SubWidget);
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_Creator Function HideCreatorSubWidget

// Begin Class UNN_Cpp_Widget_Creator Function ShowCreatorCharacterWidget
struct Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorCharacterWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_Creator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorCharacterWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_Creator, nullptr, "ShowCreatorCharacterWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorCharacterWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorCharacterWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorCharacterWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorCharacterWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_Creator::execShowCreatorCharacterWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowCreatorCharacterWidget();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_Creator Function ShowCreatorCharacterWidget

// Begin Class UNN_Cpp_Widget_Creator Function ShowCreatorMenuWidget
struct Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Functions ###############\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_Creator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Functions ###############" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_Creator, nullptr, "ShowCreatorMenuWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorMenuWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorMenuWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorMenuWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorMenuWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_Creator::execShowCreatorMenuWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowCreatorMenuWidget();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_Creator Function ShowCreatorMenuWidget

// Begin Class UNN_Cpp_Widget_Creator Function ShowCreatorStoryWidget
struct Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorStoryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_Creator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorStoryWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_Creator, nullptr, "ShowCreatorStoryWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorStoryWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorStoryWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorStoryWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorStoryWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_Creator::execShowCreatorStoryWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowCreatorStoryWidget();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_Creator Function ShowCreatorStoryWidget

// Begin Class UNN_Cpp_Widget_Creator Function ShowCreatorWorlWidget
struct Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorWorlWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_Creator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorWorlWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_Creator, nullptr, "ShowCreatorWorlWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorWorlWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorWorlWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorWorlWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorWorlWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_Creator::execShowCreatorWorlWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowCreatorWorlWidget();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_Creator Function ShowCreatorWorlWidget

// Begin Class UNN_Cpp_Widget_Creator
void UNN_Cpp_Widget_Creator::StaticRegisterNativesUNN_Cpp_Widget_Creator()
{
	UClass* Class = UNN_Cpp_Widget_Creator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HideAllWidgets", &UNN_Cpp_Widget_Creator::execHideAllWidgets },
		{ "HideCreatorSubWidget", &UNN_Cpp_Widget_Creator::execHideCreatorSubWidget },
		{ "ShowCreatorCharacterWidget", &UNN_Cpp_Widget_Creator::execShowCreatorCharacterWidget },
		{ "ShowCreatorMenuWidget", &UNN_Cpp_Widget_Creator::execShowCreatorMenuWidget },
		{ "ShowCreatorStoryWidget", &UNN_Cpp_Widget_Creator::execShowCreatorStoryWidget },
		{ "ShowCreatorWorlWidget", &UNN_Cpp_Widget_Creator::execShowCreatorWorlWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_Widget_Creator);
UClass* Z_Construct_UClass_UNN_Cpp_Widget_Creator_NoRegister()
{
	return UNN_Cpp_Widget_Creator::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Creator/NN_Cpp_Widget_Creator.h" },
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_Creator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatorMenuWidget_MetaData[] = {
		{ "BindwIDGET", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Widgets ###############\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_Creator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Widgets ###############" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatorWorldWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_Creator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatorCharacterWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_Creator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatorStoryWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_Creator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatorContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Creator/NN_Cpp_Widget_Creator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatorMenuWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatorWorldWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatorCharacterWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatorStoryWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatorContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideAllWidgets, "HideAllWidgets" }, // 2986916329
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_Creator_HideCreatorSubWidget, "HideCreatorSubWidget" }, // 861888986
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorCharacterWidget, "ShowCreatorCharacterWidget" }, // 3916647035
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorMenuWidget, "ShowCreatorMenuWidget" }, // 863736913
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorStoryWidget, "ShowCreatorStoryWidget" }, // 4187131081
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_Creator_ShowCreatorWorlWidget, "ShowCreatorWorlWidget" }, // 1346776498
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_Creator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::NewProp_CreatorMenuWidget = { "CreatorMenuWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Creator, CreatorMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatorMenuWidget_MetaData), NewProp_CreatorMenuWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::NewProp_CreatorWorldWidget = { "CreatorWorldWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Creator, CreatorWorldWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatorWorldWidget_MetaData), NewProp_CreatorWorldWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::NewProp_CreatorCharacterWidget = { "CreatorCharacterWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Creator, CreatorCharacterWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatorCharacterWidget_MetaData), NewProp_CreatorCharacterWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::NewProp_CreatorStoryWidget = { "CreatorStoryWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Creator, CreatorStoryWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatorStoryWidget_MetaData), NewProp_CreatorStoryWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::NewProp_CreatorContainer = { "CreatorContainer", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_Creator, CreatorContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatorContainer_MetaData), NewProp_CreatorContainer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::NewProp_CreatorMenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::NewProp_CreatorWorldWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::NewProp_CreatorCharacterWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::NewProp_CreatorStoryWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::NewProp_CreatorContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::ClassParams = {
	&UNN_Cpp_Widget_Creator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_Widget_Creator()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_Widget_Creator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_Widget_Creator.OuterSingleton, Z_Construct_UClass_UNN_Cpp_Widget_Creator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_Widget_Creator.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_Widget_Creator>()
{
	return UNN_Cpp_Widget_Creator::StaticClass();
}
UNN_Cpp_Widget_Creator::UNN_Cpp_Widget_Creator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_Widget_Creator);
UNN_Cpp_Widget_Creator::~UNN_Cpp_Widget_Creator() {}
// End Class UNN_Cpp_Widget_Creator

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Creator_NN_Cpp_Widget_Creator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_Widget_Creator, UNN_Cpp_Widget_Creator::StaticClass, TEXT("UNN_Cpp_Widget_Creator"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_Creator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_Creator), 2075012854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Creator_NN_Cpp_Widget_Creator_h_2895936145(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Creator_NN_Cpp_Widget_Creator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Creator_NN_Cpp_Widget_Creator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
