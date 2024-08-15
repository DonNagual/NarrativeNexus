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
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_GameNavigatorNode
void UNN_Cpp_Widget_GameNavigatorNode::StaticRegisterNativesUNN_Cpp_Widget_GameNavigatorNode()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_GameNavigatorNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_UNN_Cpp_Widget_GameNavigatorNode, UNN_Cpp_Widget_GameNavigatorNode::StaticClass, TEXT("UNN_Cpp_Widget_GameNavigatorNode"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_GameNavigatorNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_GameNavigatorNode), 903996272U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameNavigatorNode_h_1877260776(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameNavigatorNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameNavigatorNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
