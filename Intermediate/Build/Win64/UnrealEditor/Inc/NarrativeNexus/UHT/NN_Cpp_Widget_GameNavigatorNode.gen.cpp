// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Widgets/Game/NN_Cpp_Widget_GameNavigatorNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_Widget_GameNavigatorNode() {}

// Begin Cross Module References
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_GameNavigatorNode Function OnDescriptionButtonClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameNavigatorNode_OnDescriptionButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Functions ###############\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameNavigatorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Functions ###############" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameNavigatorNode_OnDescriptionButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode, nullptr, "OnDescriptionButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameNavigatorNode_OnDescriptionButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameNavigatorNode_OnDescriptionButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameNavigatorNode_OnDescriptionButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameNavigatorNode_OnDescriptionButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameNavigatorNode::execOnDescriptionButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDescriptionButtonClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameNavigatorNode Function OnDescriptionButtonClicked

// Begin Class UNN_Cpp_Widget_GameNavigatorNode
void UNN_Cpp_Widget_GameNavigatorNode::StaticRegisterNativesUNN_Cpp_Widget_GameNavigatorNode()
{
	UClass* Class = UNN_Cpp_Widget_GameNavigatorNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDescriptionButtonClicked", &UNN_Cpp_Widget_GameNavigatorNode::execOnDescriptionButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_Widget_GameNavigatorNode);
UClass* Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_NoRegister()
{
	return UNN_Cpp_Widget_GameNavigatorNode::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Game/NN_Cpp_Widget_GameNavigatorNode.h" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameNavigatorNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Buttons ###############\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameNavigatorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Buttons ###############" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DescriptionButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameNavigatorNode_OnDescriptionButtonClicked, "OnDescriptionButtonClicked" }, // 2173550036
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_GameNavigatorNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_Statics::NewProp_DescriptionButton = { "DescriptionButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameNavigatorNode, DescriptionButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionButton_MetaData), NewProp_DescriptionButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_Statics::NewProp_DescriptionButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_Statics::ClassParams = {
	&UNN_Cpp_Widget_GameNavigatorNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_Widget_GameNavigatorNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_Widget_GameNavigatorNode.OuterSingleton, Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_Widget_GameNavigatorNode.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_Widget_GameNavigatorNode>()
{
	return UNN_Cpp_Widget_GameNavigatorNode::StaticClass();
}
UNN_Cpp_Widget_GameNavigatorNode::UNN_Cpp_Widget_GameNavigatorNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_Widget_GameNavigatorNode);
UNN_Cpp_Widget_GameNavigatorNode::~UNN_Cpp_Widget_GameNavigatorNode() {}
// End Class UNN_Cpp_Widget_GameNavigatorNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameNavigatorNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode, UNN_Cpp_Widget_GameNavigatorNode::StaticClass, TEXT("UNN_Cpp_Widget_GameNavigatorNode"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_GameNavigatorNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_GameNavigatorNode), 1762914399U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameNavigatorNode_h_4122169243(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameNavigatorNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameNavigatorNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
