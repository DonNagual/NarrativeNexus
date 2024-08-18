// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Widgets/Main/NN_Cpp_Widget_MainOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_Widget_MainOptions() {}

// Begin Cross Module References
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_MainOptions();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_MainOptions Function OnBackButtonClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnBackButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Functions ###############\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_MainOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Functions ###############" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnBackButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_MainOptions, nullptr, "OnBackButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnBackButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnBackButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnBackButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnBackButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_MainOptions::execOnBackButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBackButtonClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_MainOptions Function OnBackButtonClicked

// Begin Class UNN_Cpp_Widget_MainOptions Function OnDownButtonClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnDownButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_MainOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnDownButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_MainOptions, nullptr, "OnDownButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnDownButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnDownButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnDownButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnDownButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_MainOptions::execOnDownButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDownButtonClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_MainOptions Function OnDownButtonClicked

// Begin Class UNN_Cpp_Widget_MainOptions Function OnGenerateImageCheckBoxChanged
struct Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics
{
	struct NN_Cpp_Widget_MainOptions_eventOnGenerateImageCheckBoxChanged_Parms
	{
		bool bIsChecked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_MainOptions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics::NewProp_bIsChecked_SetBit(void* Obj)
{
	((NN_Cpp_Widget_MainOptions_eventOnGenerateImageCheckBoxChanged_Parms*)Obj)->bIsChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NN_Cpp_Widget_MainOptions_eventOnGenerateImageCheckBoxChanged_Parms), &Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics::NewProp_bIsChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_MainOptions, nullptr, "OnGenerateImageCheckBoxChanged", nullptr, nullptr, Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics::NN_Cpp_Widget_MainOptions_eventOnGenerateImageCheckBoxChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics::NN_Cpp_Widget_MainOptions_eventOnGenerateImageCheckBoxChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_MainOptions::execOnGenerateImageCheckBoxChanged)
{
	P_GET_UBOOL(Z_Param_bIsChecked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGenerateImageCheckBoxChanged(Z_Param_bIsChecked);
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_MainOptions Function OnGenerateImageCheckBoxChanged

// Begin Class UNN_Cpp_Widget_MainOptions Function OnGenerateSummaryCheckBoxChanged
struct Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics
{
	struct NN_Cpp_Widget_MainOptions_eventOnGenerateSummaryCheckBoxChanged_Parms
	{
		bool bIsChecked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_MainOptions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics::NewProp_bIsChecked_SetBit(void* Obj)
{
	((NN_Cpp_Widget_MainOptions_eventOnGenerateSummaryCheckBoxChanged_Parms*)Obj)->bIsChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NN_Cpp_Widget_MainOptions_eventOnGenerateSummaryCheckBoxChanged_Parms), &Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics::NewProp_bIsChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_MainOptions, nullptr, "OnGenerateSummaryCheckBoxChanged", nullptr, nullptr, Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics::NN_Cpp_Widget_MainOptions_eventOnGenerateSummaryCheckBoxChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics::NN_Cpp_Widget_MainOptions_eventOnGenerateSummaryCheckBoxChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_MainOptions::execOnGenerateSummaryCheckBoxChanged)
{
	P_GET_UBOOL(Z_Param_bIsChecked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGenerateSummaryCheckBoxChanged(Z_Param_bIsChecked);
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_MainOptions Function OnGenerateSummaryCheckBoxChanged

// Begin Class UNN_Cpp_Widget_MainOptions Function OnUpButtonClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnUpButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_MainOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnUpButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_MainOptions, nullptr, "OnUpButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnUpButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnUpButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnUpButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnUpButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_MainOptions::execOnUpButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUpButtonClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_MainOptions Function OnUpButtonClicked

// Begin Class UNN_Cpp_Widget_MainOptions
void UNN_Cpp_Widget_MainOptions::StaticRegisterNativesUNN_Cpp_Widget_MainOptions()
{
	UClass* Class = UNN_Cpp_Widget_MainOptions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBackButtonClicked", &UNN_Cpp_Widget_MainOptions::execOnBackButtonClicked },
		{ "OnDownButtonClicked", &UNN_Cpp_Widget_MainOptions::execOnDownButtonClicked },
		{ "OnGenerateImageCheckBoxChanged", &UNN_Cpp_Widget_MainOptions::execOnGenerateImageCheckBoxChanged },
		{ "OnGenerateSummaryCheckBoxChanged", &UNN_Cpp_Widget_MainOptions::execOnGenerateSummaryCheckBoxChanged },
		{ "OnUpButtonClicked", &UNN_Cpp_Widget_MainOptions::execOnUpButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_Widget_MainOptions);
UClass* Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_NoRegister()
{
	return UNN_Cpp_Widget_MainOptions::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Main/NN_Cpp_Widget_MainOptions.h" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_MainOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Buttons ###############\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_MainOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Buttons ###############" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Message Counter ###############\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_MainOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Message Counter ###############" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_MainOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageNumberText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_MainOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateImageCheckBox_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### CheckBox ###############\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_MainOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### CheckBox ###############" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateSummaryCheckBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Main/NN_Cpp_Widget_MainOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageNumberText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerateImageCheckBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerateSummaryCheckBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnBackButtonClicked, "OnBackButtonClicked" }, // 3251357571
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnDownButtonClicked, "OnDownButtonClicked" }, // 1499127356
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateImageCheckBoxChanged, "OnGenerateImageCheckBoxChanged" }, // 530832059
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnGenerateSummaryCheckBoxChanged, "OnGenerateSummaryCheckBoxChanged" }, // 2334905884
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_MainOptions_OnUpButtonClicked, "OnUpButtonClicked" }, // 1906912497
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_MainOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_MainOptions, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackButton_MetaData), NewProp_BackButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::NewProp_UpButton = { "UpButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_MainOptions, UpButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpButton_MetaData), NewProp_UpButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::NewProp_DownButton = { "DownButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_MainOptions, DownButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownButton_MetaData), NewProp_DownButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::NewProp_MessageNumberText = { "MessageNumberText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_MainOptions, MessageNumberText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageNumberText_MetaData), NewProp_MessageNumberText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::NewProp_GenerateImageCheckBox = { "GenerateImageCheckBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_MainOptions, GenerateImageCheckBox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateImageCheckBox_MetaData), NewProp_GenerateImageCheckBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::NewProp_GenerateSummaryCheckBox = { "GenerateSummaryCheckBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_MainOptions, GenerateSummaryCheckBox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateSummaryCheckBox_MetaData), NewProp_GenerateSummaryCheckBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::NewProp_BackButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::NewProp_UpButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::NewProp_DownButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::NewProp_MessageNumberText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::NewProp_GenerateImageCheckBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::NewProp_GenerateSummaryCheckBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::ClassParams = {
	&UNN_Cpp_Widget_MainOptions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_Widget_MainOptions()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_Widget_MainOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_Widget_MainOptions.OuterSingleton, Z_Construct_UClass_UNN_Cpp_Widget_MainOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_Widget_MainOptions.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_Widget_MainOptions>()
{
	return UNN_Cpp_Widget_MainOptions::StaticClass();
}
UNN_Cpp_Widget_MainOptions::UNN_Cpp_Widget_MainOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_Widget_MainOptions);
UNN_Cpp_Widget_MainOptions::~UNN_Cpp_Widget_MainOptions() {}
// End Class UNN_Cpp_Widget_MainOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_MainOptions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_Widget_MainOptions, UNN_Cpp_Widget_MainOptions::StaticClass, TEXT("UNN_Cpp_Widget_MainOptions"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_MainOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_MainOptions), 127134238U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_MainOptions_h_887540860(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_MainOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Main_NN_Cpp_Widget_MainOptions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
