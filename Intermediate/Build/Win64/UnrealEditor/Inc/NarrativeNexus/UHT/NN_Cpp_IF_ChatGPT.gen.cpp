// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Interface/NN_Cpp_IF_ChatGPT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_IF_ChatGPT() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_IF_ChatGPT();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_IF_ChatGPT_NoRegister();
NARRATIVENEXUS_API UFunction* Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Delegate FOnChatGPTResponseReceived
struct Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature_Statics
{
	struct _Script_NarrativeNexus_eventOnChatGPTResponseReceived_Parms
	{
		FString Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/NN_Cpp_IF_ChatGPT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeNexus_eventOnChatGPTResponseReceived_Parms, Response), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeNexus, nullptr, "OnChatGPTResponseReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature_Statics::_Script_NarrativeNexus_eventOnChatGPTResponseReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature_Statics::_Script_NarrativeNexus_eventOnChatGPTResponseReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChatGPTResponseReceived_DelegateWrapper(const FMulticastScriptDelegate& OnChatGPTResponseReceived, const FString& Response)
{
	struct _Script_NarrativeNexus_eventOnChatGPTResponseReceived_Parms
	{
		FString Response;
	};
	_Script_NarrativeNexus_eventOnChatGPTResponseReceived_Parms Parms;
	Parms.Response=Response;
	OnChatGPTResponseReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChatGPTResponseReceived

// Begin Interface UNN_Cpp_IF_ChatGPT
void UNN_Cpp_IF_ChatGPT::StaticRegisterNativesUNN_Cpp_IF_ChatGPT()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_IF_ChatGPT);
UClass* Z_Construct_UClass_UNN_Cpp_IF_ChatGPT_NoRegister()
{
	return UNN_Cpp_IF_ChatGPT::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_IF_ChatGPT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/NN_Cpp_IF_ChatGPT.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INN_Cpp_IF_ChatGPT>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNN_Cpp_IF_ChatGPT_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_IF_ChatGPT_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_IF_ChatGPT_Statics::ClassParams = {
	&UNN_Cpp_IF_ChatGPT::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_IF_ChatGPT_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_IF_ChatGPT_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_IF_ChatGPT()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_IF_ChatGPT.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_IF_ChatGPT.OuterSingleton, Z_Construct_UClass_UNN_Cpp_IF_ChatGPT_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_IF_ChatGPT.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_IF_ChatGPT>()
{
	return UNN_Cpp_IF_ChatGPT::StaticClass();
}
UNN_Cpp_IF_ChatGPT::UNN_Cpp_IF_ChatGPT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_IF_ChatGPT);
UNN_Cpp_IF_ChatGPT::~UNN_Cpp_IF_ChatGPT() {}
// End Interface UNN_Cpp_IF_ChatGPT

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_ChatGPT_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_IF_ChatGPT, UNN_Cpp_IF_ChatGPT::StaticClass, TEXT("UNN_Cpp_IF_ChatGPT"), &Z_Registration_Info_UClass_UNN_Cpp_IF_ChatGPT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_IF_ChatGPT), 3545708827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_ChatGPT_h_3931928419(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_ChatGPT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_ChatGPT_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
