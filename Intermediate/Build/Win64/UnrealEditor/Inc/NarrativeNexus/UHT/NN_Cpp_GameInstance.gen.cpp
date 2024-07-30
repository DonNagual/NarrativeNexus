// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/General/NN_Cpp_GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_GameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_GameInstance();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_GameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_GameInstance Function QuitGame
struct Z_Construct_UFunction_UNN_Cpp_GameInstance_QuitGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/General/NN_Cpp_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_GameInstance_QuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_GameInstance, nullptr, "QuitGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_GameInstance_QuitGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_GameInstance_QuitGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_GameInstance_QuitGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_GameInstance_QuitGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_GameInstance::execQuitGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuitGame();
	P_NATIVE_END;
}
// End Class UNN_Cpp_GameInstance Function QuitGame

// Begin Class UNN_Cpp_GameInstance
void UNN_Cpp_GameInstance::StaticRegisterNativesUNN_Cpp_GameInstance()
{
	UClass* Class = UNN_Cpp_GameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "QuitGame", &UNN_Cpp_GameInstance::execQuitGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_GameInstance);
UClass* Z_Construct_UClass_UNN_Cpp_GameInstance_NoRegister()
{
	return UNN_Cpp_GameInstance::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_GameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "General/NN_Cpp_GameInstance.h" },
		{ "ModuleRelativePath", "Public/General/NN_Cpp_GameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNN_Cpp_GameInstance_QuitGame, "QuitGame" }, // 4291413608
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_GameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_GameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_GameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_GameInstance_Statics::ClassParams = {
	&UNN_Cpp_GameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_GameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_GameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_GameInstance()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_GameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_GameInstance.OuterSingleton, Z_Construct_UClass_UNN_Cpp_GameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_GameInstance.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_GameInstance>()
{
	return UNN_Cpp_GameInstance::StaticClass();
}
UNN_Cpp_GameInstance::UNN_Cpp_GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_GameInstance);
UNN_Cpp_GameInstance::~UNN_Cpp_GameInstance() {}
// End Class UNN_Cpp_GameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_GameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_GameInstance, UNN_Cpp_GameInstance::StaticClass, TEXT("UNN_Cpp_GameInstance"), &Z_Registration_Info_UClass_UNN_Cpp_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_GameInstance), 1315019206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_GameInstance_h_3235808626(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_GameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
