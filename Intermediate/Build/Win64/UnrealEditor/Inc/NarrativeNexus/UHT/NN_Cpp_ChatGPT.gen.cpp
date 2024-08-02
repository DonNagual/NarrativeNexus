// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/ChatGPT/NN_Cpp_ChatGPT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_ChatGPT() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_ChatGPT();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_ChatGPT_NoRegister();
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare a delegate type for when a ChatGPT response is received\n" },
#endif
		{ "ModuleRelativePath", "Public/ChatGPT/NN_Cpp_ChatGPT.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare a delegate type for when a ChatGPT response is received" },
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

// Begin Class UNN_Cpp_ChatGPT
void UNN_Cpp_ChatGPT::StaticRegisterNativesUNN_Cpp_ChatGPT()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_ChatGPT);
UClass* Z_Construct_UClass_UNN_Cpp_ChatGPT_NoRegister()
{
	return UNN_Cpp_ChatGPT::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ChatGPT/NN_Cpp_ChatGPT.h" },
		{ "ModuleRelativePath", "Public/ChatGPT/NN_Cpp_ChatGPT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChatGPTResponseReceived_MetaData[] = {
		{ "Category", "ChatGPT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The response received delegate\n" },
#endif
		{ "ModuleRelativePath", "Public/ChatGPT/NN_Cpp_ChatGPT.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The response received delegate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatGPTResponseReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_ChatGPT>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::NewProp_OnChatGPTResponseReceived = { "OnChatGPTResponseReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_ChatGPT, OnChatGPTResponseReceived), Z_Construct_UDelegateFunction_NarrativeNexus_OnChatGPTResponseReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChatGPTResponseReceived_MetaData), NewProp_OnChatGPTResponseReceived_MetaData) }; // 3559450189
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::NewProp_OnChatGPTResponseReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::ClassParams = {
	&UNN_Cpp_ChatGPT::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_ChatGPT()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_ChatGPT.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_ChatGPT.OuterSingleton, Z_Construct_UClass_UNN_Cpp_ChatGPT_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_ChatGPT.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_ChatGPT>()
{
	return UNN_Cpp_ChatGPT::StaticClass();
}
UNN_Cpp_ChatGPT::UNN_Cpp_ChatGPT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_ChatGPT);
UNN_Cpp_ChatGPT::~UNN_Cpp_ChatGPT() {}
// End Class UNN_Cpp_ChatGPT

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_ChatGPT_NN_Cpp_ChatGPT_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_ChatGPT, UNN_Cpp_ChatGPT::StaticClass, TEXT("UNN_Cpp_ChatGPT"), &Z_Registration_Info_UClass_UNN_Cpp_ChatGPT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_ChatGPT), 3803947000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_ChatGPT_NN_Cpp_ChatGPT_h_31404237(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_ChatGPT_NN_Cpp_ChatGPT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_ChatGPT_NN_Cpp_ChatGPT_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
