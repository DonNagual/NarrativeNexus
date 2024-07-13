// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Interface/NN_Cpp_IF_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_IF_PlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_IF_PlayerController();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_IF_PlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Interface UNN_Cpp_IF_PlayerController
void UNN_Cpp_IF_PlayerController::StaticRegisterNativesUNN_Cpp_IF_PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_IF_PlayerController);
UClass* Z_Construct_UClass_UNN_Cpp_IF_PlayerController_NoRegister()
{
	return UNN_Cpp_IF_PlayerController::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_IF_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/NN_Cpp_IF_PlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INN_Cpp_IF_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_IF_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_IF_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_IF_PlayerController_Statics::ClassParams = {
	&UNN_Cpp_IF_PlayerController::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_IF_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_IF_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_IF_PlayerController()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_IF_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_IF_PlayerController.OuterSingleton, Z_Construct_UClass_UNN_Cpp_IF_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_IF_PlayerController.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_IF_PlayerController>()
{
	return UNN_Cpp_IF_PlayerController::StaticClass();
}
UNN_Cpp_IF_PlayerController::UNN_Cpp_IF_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_IF_PlayerController);
UNN_Cpp_IF_PlayerController::~UNN_Cpp_IF_PlayerController() {}
// End Interface UNN_Cpp_IF_PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_IF_PlayerController, UNN_Cpp_IF_PlayerController::StaticClass, TEXT("UNN_Cpp_IF_PlayerController"), &Z_Registration_Info_UClass_UNN_Cpp_IF_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_IF_PlayerController), 976938795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_PlayerController_h_930741292(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
