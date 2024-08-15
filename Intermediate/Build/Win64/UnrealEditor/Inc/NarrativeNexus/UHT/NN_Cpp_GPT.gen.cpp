// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/GPT/NN_Cpp_GPT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_GPT() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_GPT();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_GPT_NoRegister();
NARRATIVENEXUS_API UFunction* Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Delegate FOnGPTResponseReceived
struct Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature_Statics
{
	struct NN_Cpp_GPT_eventOnGPTResponseReceived_Parms
	{
		FString Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The response received delegate\n" },
#endif
		{ "ModuleRelativePath", "Public/GPT/NN_Cpp_GPT.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The response received delegate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NN_Cpp_GPT_eventOnGPTResponseReceived_Parms, Response), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_GPT, nullptr, "OnGPTResponseReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature_Statics::NN_Cpp_GPT_eventOnGPTResponseReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature_Statics::NN_Cpp_GPT_eventOnGPTResponseReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNN_Cpp_GPT::FOnGPTResponseReceived_DelegateWrapper(const FMulticastScriptDelegate& OnGPTResponseReceived, const FString& Response)
{
	struct NN_Cpp_GPT_eventOnGPTResponseReceived_Parms
	{
		FString Response;
	};
	NN_Cpp_GPT_eventOnGPTResponseReceived_Parms Parms;
	Parms.Response=Response;
	OnGPTResponseReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGPTResponseReceived

// Begin Class UNN_Cpp_GPT
void UNN_Cpp_GPT::StaticRegisterNativesUNN_Cpp_GPT()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_GPT);
UClass* Z_Construct_UClass_UNN_Cpp_GPT_NoRegister()
{
	return UNN_Cpp_GPT::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_GPT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GPT/NN_Cpp_GPT.h" },
		{ "ModuleRelativePath", "Public/GPT/NN_Cpp_GPT.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UNN_Cpp_GPT_OnGPTResponseReceived__DelegateSignature, "OnGPTResponseReceived__DelegateSignature" }, // 2900791749
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_GPT>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_GPT_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_GPT_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_GPT_Statics::ClassParams = {
	&UNN_Cpp_GPT::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_GPT_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_GPT_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_GPT()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_GPT.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_GPT.OuterSingleton, Z_Construct_UClass_UNN_Cpp_GPT_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_GPT.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_GPT>()
{
	return UNN_Cpp_GPT::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_GPT);
UNN_Cpp_GPT::~UNN_Cpp_GPT() {}
// End Class UNN_Cpp_GPT

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_GPT, UNN_Cpp_GPT::StaticClass, TEXT("UNN_Cpp_GPT"), &Z_Registration_Info_UClass_UNN_Cpp_GPT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_GPT), 3320058339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_1268995462(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
