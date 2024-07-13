// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/General/NN_Cpp_GameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_GameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_ANN_Cpp_GameStateBase();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_ANN_Cpp_GameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class ANN_Cpp_GameStateBase
void ANN_Cpp_GameStateBase::StaticRegisterNativesANN_Cpp_GameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANN_Cpp_GameStateBase);
UClass* Z_Construct_UClass_ANN_Cpp_GameStateBase_NoRegister()
{
	return ANN_Cpp_GameStateBase::StaticClass();
}
struct Z_Construct_UClass_ANN_Cpp_GameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "General/NN_Cpp_GameStateBase.h" },
		{ "ModuleRelativePath", "Public/General/NN_Cpp_GameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANN_Cpp_GameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANN_Cpp_GameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANN_Cpp_GameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANN_Cpp_GameStateBase_Statics::ClassParams = {
	&ANN_Cpp_GameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANN_Cpp_GameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANN_Cpp_GameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANN_Cpp_GameStateBase()
{
	if (!Z_Registration_Info_UClass_ANN_Cpp_GameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANN_Cpp_GameStateBase.OuterSingleton, Z_Construct_UClass_ANN_Cpp_GameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANN_Cpp_GameStateBase.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<ANN_Cpp_GameStateBase>()
{
	return ANN_Cpp_GameStateBase::StaticClass();
}
ANN_Cpp_GameStateBase::ANN_Cpp_GameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANN_Cpp_GameStateBase);
ANN_Cpp_GameStateBase::~ANN_Cpp_GameStateBase() {}
// End Class ANN_Cpp_GameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_GameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANN_Cpp_GameStateBase, ANN_Cpp_GameStateBase::StaticClass, TEXT("ANN_Cpp_GameStateBase"), &Z_Registration_Info_UClass_ANN_Cpp_GameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANN_Cpp_GameStateBase), 2642449413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_GameStateBase_h_1402865152(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_GameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_GameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
