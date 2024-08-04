// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_ChatGPT.h
#pragma once

#include "CoreMinimal.h"
#include "Http.h"
#include "Delegates/DelegateCombinations.h"
#include "NN_Cpp_ChatGPT.generated.h"

// Declare a delegate type for when a ChatGPT response is received
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChatGPTResponseReceived, const FString&, Response);

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_ChatGPT : public UObject
{
	GENERATED_BODY()

public:
	// Static method to create an instance of the ChatGPT
	static UNN_Cpp_ChatGPT* CreateChatGPT(UObject* Outer);

	// Method to send a message to ChatGPT
	void SendMessageToChatGPT(const FString& Message);

	// Getter for the last response
	FString GetLastResponse() const { return LastResponse; }

	// The response received delegate
	UPROPERTY()
	FOnChatGPTResponseReceived OnChatGPTResponseReceived;

private:
	// Callback method when a response is received
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	// The response from ChatGPT will be stored here for further use
	FString LastResponse;

	// Store the entire conversation hoszory
	TArray<TSharedPtr<FJsonObject>> ConversationHistory;
};
