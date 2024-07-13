// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/General/NN_Cpp_GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_GameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_ANN_Cpp_GameModeBase();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_ANN_Cpp_GameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class ANN_Cpp_GameModeBase
void ANN_Cpp_GameModeBase::StaticRegisterNativesANN_Cpp_GameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANN_Cpp_GameModeBase);
UClass* Z_Construct_UClass_ANN_Cpp_GameModeBase_NoRegister()
{
	return ANN_Cpp_GameModeBase::StaticClass();
}
struct Z_Construct_UClass_ANN_Cpp_GameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "General/NN_Cpp_GameModeBase.h" },
		{ "ModuleRelativePath", "Public/General/NN_Cpp_GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANN_Cpp_GameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANN_Cpp_GameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANN_Cpp_GameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANN_Cpp_GameModeBase_Statics::ClassParams = {
	&ANN_Cpp_GameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANN_Cpp_GameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANN_Cpp_GameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANN_Cpp_GameModeBase()
{
	if (!Z_Registration_Info_UClass_ANN_Cpp_GameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANN_Cpp_GameModeBase.OuterSingleton, Z_Construct_UClass_ANN_Cpp_GameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANN_Cpp_GameModeBase.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<ANN_Cpp_GameModeBase>()
{
	return ANN_Cpp_GameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANN_Cpp_GameModeBase);
ANN_Cpp_GameModeBase::~ANN_Cpp_GameModeBase() {}
// End Class ANN_Cpp_GameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_GameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANN_Cpp_GameModeBase, ANN_Cpp_GameModeBase::StaticClass, TEXT("ANN_Cpp_GameModeBase"), &Z_Registration_Info_UClass_ANN_Cpp_GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANN_Cpp_GameModeBase), 2344276845U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_GameModeBase_h_3801068166(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_GameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
