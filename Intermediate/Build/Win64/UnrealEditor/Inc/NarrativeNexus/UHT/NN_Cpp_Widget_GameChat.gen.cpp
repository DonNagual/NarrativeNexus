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
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_ChatGPT_NoRegister();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_GameChat();
NARRATIVENEXUS_API UClass* Z_Construct_UClass_UNN_Cpp_Widget_GameChat_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNexus();
// End Cross Module References

// Begin Class UNN_Cpp_Widget_GameChat Function CreateStoryImage
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_CreateStoryImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Image - Functions ###############\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Image - Functions ###############" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_CreateStoryImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "CreateStoryImage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_CreateStoryImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_CreateStoryImage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_CreateStoryImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_CreateStoryImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execCreateStoryImage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateStoryImage();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function CreateStoryImage

// Begin Class UNN_Cpp_Widget_GameChat Function HandleChatGPTResponse
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse_Statics
{
	struct NN_Cpp_Widget_GameChat_eventHandleChatGPTResponse_Parms
	{
		FString Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
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
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
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

// Begin Class UNN_Cpp_Widget_GameChat Function OnContinueButtonClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnContinueButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnContinueButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "OnContinueButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnContinueButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnContinueButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnContinueButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnContinueButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execOnContinueButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnContinueButtonClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function OnContinueButtonClicked

// Begin Class UNN_Cpp_Widget_GameChat Function OnInfoButtonClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnInfoButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnInfoButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "OnInfoButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnInfoButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnInfoButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnInfoButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnInfoButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execOnInfoButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInfoButtonClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function OnInfoButtonClicked

// Begin Class UNN_Cpp_Widget_GameChat Function OnRepeatButtonClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnRepeatButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnRepeatButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "OnRepeatButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnRepeatButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnRepeatButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnRepeatButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnRepeatButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execOnRepeatButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRepeatButtonClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function OnRepeatButtonClicked

// Begin Class UNN_Cpp_Widget_GameChat Function OnResetButtonClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnResetButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnResetButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "OnResetButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnResetButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnResetButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnResetButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnResetButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execOnResetButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnResetButtonClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function OnResetButtonClicked

// Begin Class UNN_Cpp_Widget_GameChat Function OnSelectLowerButtonClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectLowerButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectLowerButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "OnSelectLowerButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectLowerButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectLowerButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectLowerButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectLowerButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execOnSelectLowerButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelectLowerButtonClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function OnSelectLowerButtonClicked

// Begin Class UNN_Cpp_Widget_GameChat Function OnSelectMiddleButtonClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectMiddleButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectMiddleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "OnSelectMiddleButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectMiddleButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectMiddleButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectMiddleButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectMiddleButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execOnSelectMiddleButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelectMiddleButtonClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function OnSelectMiddleButtonClicked

// Begin Class UNN_Cpp_Widget_GameChat Function OnSelectTopButtonClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectTopButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectTopButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "OnSelectTopButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectTopButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectTopButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectTopButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectTopButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execOnSelectTopButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelectTopButtonClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function OnSelectTopButtonClicked

// Begin Class UNN_Cpp_Widget_GameChat Function OnSendButtomClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSendButtomClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Button - Functions ###############\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Button - Functions ###############" },
#endif
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

// Begin Class UNN_Cpp_Widget_GameChat Function OnSummaryButtonClicked
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSummaryButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSummaryButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "OnSummaryButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSummaryButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSummaryButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSummaryButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSummaryButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execOnSummaryButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSummaryButtonClicked();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function OnSummaryButtonClicked

// Begin Class UNN_Cpp_Widget_GameChat Function RemoveLastChatGPTMessageFromScrollBox
struct Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_RemoveLastChatGPTMessageFromScrollBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions for remove messages at the chat\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions for remove messages at the chat" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_RemoveLastChatGPTMessageFromScrollBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNN_Cpp_Widget_GameChat, nullptr, "RemoveLastChatGPTMessageFromScrollBox", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_RemoveLastChatGPTMessageFromScrollBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_RemoveLastChatGPTMessageFromScrollBox_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_RemoveLastChatGPTMessageFromScrollBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_RemoveLastChatGPTMessageFromScrollBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNN_Cpp_Widget_GameChat::execRemoveLastChatGPTMessageFromScrollBox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveLastChatGPTMessageFromScrollBox();
	P_NATIVE_END;
}
// End Class UNN_Cpp_Widget_GameChat Function RemoveLastChatGPTMessageFromScrollBox

// Begin Class UNN_Cpp_Widget_GameChat
void UNN_Cpp_Widget_GameChat::StaticRegisterNativesUNN_Cpp_Widget_GameChat()
{
	UClass* Class = UNN_Cpp_Widget_GameChat::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateStoryImage", &UNN_Cpp_Widget_GameChat::execCreateStoryImage },
		{ "HandleChatGPTResponse", &UNN_Cpp_Widget_GameChat::execHandleChatGPTResponse },
		{ "OnBackButtonClicked", &UNN_Cpp_Widget_GameChat::execOnBackButtonClicked },
		{ "OnContinueButtonClicked", &UNN_Cpp_Widget_GameChat::execOnContinueButtonClicked },
		{ "OnInfoButtonClicked", &UNN_Cpp_Widget_GameChat::execOnInfoButtonClicked },
		{ "OnRepeatButtonClicked", &UNN_Cpp_Widget_GameChat::execOnRepeatButtonClicked },
		{ "OnResetButtonClicked", &UNN_Cpp_Widget_GameChat::execOnResetButtonClicked },
		{ "OnSelectLowerButtonClicked", &UNN_Cpp_Widget_GameChat::execOnSelectLowerButtonClicked },
		{ "OnSelectMiddleButtonClicked", &UNN_Cpp_Widget_GameChat::execOnSelectMiddleButtonClicked },
		{ "OnSelectTopButtonClicked", &UNN_Cpp_Widget_GameChat::execOnSelectTopButtonClicked },
		{ "OnSendButtomClicked", &UNN_Cpp_Widget_GameChat::execOnSendButtomClicked },
		{ "OnSummaryButtonClicked", &UNN_Cpp_Widget_GameChat::execOnSummaryButtonClicked },
		{ "RemoveLastChatGPTMessageFromScrollBox", &UNN_Cpp_Widget_GameChat::execRemoveLastChatGPTMessageFromScrollBox },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendButtom_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepeatButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SummaryButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinueButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectTopButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectMiddleButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectLowerButton_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoryImage_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ############### Image ###############\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "############### Image ###############" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatGPT_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Direct reference to ChatGPT object\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Game/NN_Cpp_Widget_GameChat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direct reference to ChatGPT object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SendButtom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RepeatButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InfoButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SummaryButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinueButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectTopButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectMiddleButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectLowerButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMessageFeld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageScrollBox;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameChatMessageWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoryImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatGPT;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_CreateStoryImage, "CreateStoryImage" }, // 249148490
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_HandleChatGPTResponse, "HandleChatGPTResponse" }, // 1344434522
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnBackButtonClicked, "OnBackButtonClicked" }, // 2321172930
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnContinueButtonClicked, "OnContinueButtonClicked" }, // 1454730058
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnInfoButtonClicked, "OnInfoButtonClicked" }, // 2848602773
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnRepeatButtonClicked, "OnRepeatButtonClicked" }, // 3272069638
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnResetButtonClicked, "OnResetButtonClicked" }, // 1857685094
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectLowerButtonClicked, "OnSelectLowerButtonClicked" }, // 1209598329
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectMiddleButtonClicked, "OnSelectMiddleButtonClicked" }, // 2590144414
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSelectTopButtonClicked, "OnSelectTopButtonClicked" }, // 3615022664
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSendButtomClicked, "OnSendButtomClicked" }, // 2385754228
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_OnSummaryButtonClicked, "OnSummaryButtonClicked" }, // 2142684143
		{ &Z_Construct_UFunction_UNN_Cpp_Widget_GameChat_RemoveLastChatGPTMessageFromScrollBox, "RemoveLastChatGPTMessageFromScrollBox" }, // 2039829145
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNN_Cpp_Widget_GameChat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SendButtom = { "SendButtom", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, SendButtom), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendButtom_MetaData), NewProp_SendButtom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackButton_MetaData), NewProp_BackButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_RepeatButton = { "RepeatButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, RepeatButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepeatButton_MetaData), NewProp_RepeatButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_ResetButton = { "ResetButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, ResetButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetButton_MetaData), NewProp_ResetButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_InfoButton = { "InfoButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, InfoButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoButton_MetaData), NewProp_InfoButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SummaryButton = { "SummaryButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, SummaryButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SummaryButton_MetaData), NewProp_SummaryButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_ContinueButton = { "ContinueButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, ContinueButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinueButton_MetaData), NewProp_ContinueButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SelectTopButton = { "SelectTopButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, SelectTopButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectTopButton_MetaData), NewProp_SelectTopButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SelectMiddleButton = { "SelectMiddleButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, SelectMiddleButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectMiddleButton_MetaData), NewProp_SelectMiddleButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SelectLowerButton = { "SelectLowerButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, SelectLowerButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectLowerButton_MetaData), NewProp_SelectLowerButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_InputMessageFeld = { "InputMessageFeld", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, InputMessageFeld), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMessageFeld_MetaData), NewProp_InputMessageFeld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_MessageScrollBox = { "MessageScrollBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, MessageScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageScrollBox_MetaData), NewProp_MessageScrollBox_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_GameChatMessageWidgetClass = { "GameChatMessageWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, GameChatMessageWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameChatMessageWidgetClass_MetaData), NewProp_GameChatMessageWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_StoryImage = { "StoryImage", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, StoryImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoryImage_MetaData), NewProp_StoryImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_ChatGPT = { "ChatGPT", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNN_Cpp_Widget_GameChat, ChatGPT), Z_Construct_UClass_UNN_Cpp_ChatGPT_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatGPT_MetaData), NewProp_ChatGPT_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SendButtom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_BackButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_RepeatButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_ResetButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_InfoButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SummaryButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_ContinueButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SelectTopButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SelectMiddleButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_SelectLowerButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_InputMessageFeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_MessageScrollBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_GameChatMessageWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_StoryImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics::NewProp_ChatGPT,
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
		{ Z_Construct_UClass_UNN_Cpp_Widget_GameChat, UNN_Cpp_Widget_GameChat::StaticClass, TEXT("UNN_Cpp_Widget_GameChat"), &Z_Registration_Info_UClass_UNN_Cpp_Widget_GameChat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNN_Cpp_Widget_GameChat), 1486725273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_2685704935(TEXT("/Script/NarrativeNexus"),
	Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
