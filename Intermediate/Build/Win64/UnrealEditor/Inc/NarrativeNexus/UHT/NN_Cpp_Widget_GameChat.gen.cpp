// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNexus/Public/Widgets/Game/NN_Cpp_Widget_GameChat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNN_Cpp_Widget_GameChat() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_GameChat();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_GameChat_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UMultiLineEditableText_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_GameChat Function HandleChatGPTResponse
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse_Statics
{
	struct NN_Cpp_Widget_GameChat_eventHandleChatGPTResponse_Parms
	{
		FString Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY()\n//UNN_Cpp_ChatGPT* PersistentChatGPTClient;\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY()\nUNN_Cpp_ChatGPT* PersistentChatGPTClient;" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NN_Cpp_Widget_GameChat_eventHandleChatGPTResponse_Parms, Response), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "HandleChatGPTResponse", nullptr, nullptr, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse_Statics::NN_Cpp_Widget_GameChat_eventHandleChatGPTResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse_Statics::NN_Cpp_Widget_GameChat_eventHandleChatGPTResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execHandleChatGPTResponse)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleChatGPTResponse(Z_Param_Response);
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function HandleChatGPTResponse

// Begin Class UNN_Cpp_Widget_GameChat Function OnBackButtonClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnBackButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Functions ###############\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Functions ###############" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnBackButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "OnBackButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnBackButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnBackButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnBackButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnBackButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execOnBackButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBackButtonClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function OnBackButtonClicked

// Begin Class UNN_Cpp_Widget_GameChat Function OnSelectContinueClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectContinueClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectContinueClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "OnSelectContinueClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectContinueClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectContinueClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectContinueClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectContinueClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execOnSelectContinueClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelectContinueClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function OnSelectContinueClicked

// Begin Class UNN_Cpp_Widget_GameChat Function OnSelectLeftClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectLeftClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectLeftClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "OnSelectLeftClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectLeftClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectLeftClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectLeftClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectLeftClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execOnSelectLeftClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelectLeftClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function OnSelectLeftClicked

// Begin Class UNN_Cpp_Widget_GameChat Function OnSelectRightClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectRightClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectRightClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "OnSelectRightClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectRightClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectRightClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectRightClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectRightClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execOnSelectRightClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelectRightClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function OnSelectRightClicked

// Begin Class UNN_Cpp_Widget_GameChat Function OnSendButtomClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSendButtomClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSendButtomClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "OnSendButtomClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSendButtomClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSendButtomClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSendButtomClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSendButtomClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execOnSendButtomClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSendButtomClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function OnSendButtomClicked

// Begin Class UNN_Cpp_Widget_GameChat
void UNN_Cpp_Widget_GameChat::StaticRegisterNativesUNN_Cpp_Widget_GameChat()
{
	UClass* Class = UNN_Cpp_Widget_GameChat::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleChatGPTResponse", &UNN_Cpp_Widget_GameChat::execHandleChatGPTResponse },
		{ "OnBackButtonClicked", &UNN_Cpp_Widget_GameChat::execOnBackButtonClicked },
		{ "OnSelectContinueClicked", &UNN_Cpp_Widget_GameChat::execOnSelectContinueClicked },
		{ "OnSelectLeftClicked", &UNN_Cpp_Widget_GameChat::execOnSelectLeftClicked },
		{ "OnSelectRightClicked", &UNN_Cpp_Widget_GameChat::execOnSelectRightClicked },
		{ "OnSendButtomClicked", &UNN_Cpp_Widget_GameChat::execOnSendButtomClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNN_Cpp_Widget_GameChat);
UClass* Z_Construct_UClass_UNN_Cpp_Widget_GameChat_NoRegister()
{
	return UNN_Cpp_Widget_GameChat::StaticClass();
}
struct Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Game/NN_Cpp_Widget_GameChat.h" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Buttons ###############\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Buttons ###############" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendButtom_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectContinueButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectLeftButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectRightButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMessageFeld_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Message ###############\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Message ###############" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameChatMessageWidgetClass_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SendButtom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectContinueButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectLeftButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectRightButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMessageFeld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageScrollBox;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameChatMessageWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse, "HandleChatGPTResponse" }, // 847846300
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnBackButtonClicked, "OnBackButtonClicked" }, // 104452184
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectContinueClicked, "OnSelectContinueClicked" }, // 950789350
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectLeftClicked, "OnSelectLeftClicked" }, // 2853581991
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectRightClicked, "OnSelectRightClicked" }, // 1976217373
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSendButtomClicked, "OnSendButtomClicked" }, // 3856994712
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_GameChat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackButton_MetaData), NewProp_BackButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SendButtom = { "SendButtom", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, SendButtom), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendButtom_MetaData), NewProp_SendButtom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SelectContinueButton = { "SelectContinueButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, SelectContinueButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectContinueButton_MetaData), NewProp_SelectContinueButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SelectLeftButton = { "SelectLeftButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, SelectLeftButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectLeftButton_MetaData), NewProp_SelectLeftButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SelectRightButton = { "SelectRightButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, SelectRightButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectRightButton_MetaData), NewProp_SelectRightButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_InputMessageFeld = { "InputMessageFeld", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, InputMessageFeld), Z_Construct_UClass_UMultiLineEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMessageFeld_MetaData), NewProp_InputMessageFeld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_MessageScrollBox = { "MessageScrollBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, MessageScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageScrollBox_MetaData), NewProp_MessageScrollBox_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_GameChatMessageWidgetClass = { "GameChatMessageWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, GameChatMessageWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameChatMessageWidgetClass_MetaData), NewProp_GameChatMessageWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_BackButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SendButtom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SelectContinueButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SelectLeftButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SelectRightButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_InputMessageFeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_MessageScrollBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_GameChatMessageWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNexus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::ClassParams = {
	&UNN_Cpp_Widget_GameChat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::Class_MetaDataParams), Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNN_Cpp_Widget_GameChat()
{
	if (!Z_Registration_Info_UClass_UNN_Cpp_Widget_GameChat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNN_Cpp_Widget_GameChat.OuterSingleton, Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNN_Cpp_Widget_GameChat.OuterSingleton;
}
template<> NARRATIVENEXUS_API UClass* StaticClass<UNN_Cpp_Widget_GameChat>()
{
	return UNN_Cpp_Widget_GameChat::StaticClass();
}
UNN_Cpp_Widget_GameChat::UNN_Cpp_Widget_GameChat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNN_Cpp_Widget_GameChat);
UNN_Cpp_Widget_GameChat::~UNN_Cpp_Widget_GameChat() {}
// End Class UNN_Cpp_Widget_GameChat

// Begin Registration
struct Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNN_Cpp_Widget_GameChat, UNN_Cpp_Widget_GameChat::StaticClass, TEXT("UNN_Cpp_Widget_GameChat"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_GameChat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_GameChat), 1256919850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_2079093050(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
