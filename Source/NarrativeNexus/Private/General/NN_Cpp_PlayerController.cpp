// NN_Cpp_PlayerController.cpp

#include "General/NN_Cpp_PlayerController.h"

void ANN_Cpp_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	InitializeWidgets();
}

void ANN_Cpp_PlayerController::InitializeWidgets()
{
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), CategoryWidgetClass);
	if (Widget)
	{
		Widget->AddToViewport();
		CategoryWidget = Cast<UNN_Cpp_Widget_Category>(Widget);
		MainWidget = Cast<UNN_Cpp_Widget_Main>(CategoryWidget->MainWidget);
		CreatorWidget = Cast<UNN_Cpp_Widget_Creator>(CategoryWidget->CreatorWidget);
		GameWidget = Cast<UNN_Cpp_Widget_Game>(CategoryWidget->GameWidget);
		MainOptionsWidget = Cast<UNN_Cpp_Widget_MainOptions>(MainWidget->MainOptionsWidget);
		GameNavigatorWidget = Cast<UNN_Cpp_Widget_GameNavigator>(GameWidget->GameNavigatorWidget);
		GameChatWidget = Cast<UNN_Cpp_Widget_GameChat>(GameWidget->GameChatWidget);
	}
}

void ANN_Cpp_PlayerController::InitializeGPT()
{
	GPTInstance = NewObject<UNN_Cpp_GPT>(this);
	APIKeyInstance = NewObject<UNN_Cpp_APIKeyLoader>(this);
	JSONHandlerInstance = NewObject<UNN_Cpp_JSONHandler>(this);
	HTTPRequestHandlerInstance = NewObject<UNN_Cpp_HTTPRequestHandler>(this);
	RequestManagerInstance = NewObject<UNN_Cpp_GPTRequestManager>(this);
	ResponseManagerInstance = NewObject<UNN_Cpp_GPTResponseManager>(this);
	ConversationManagerInstance = NewObject< UNN_Cpp_GPTConversationManager>(this);

	// DEBUG
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeGPTInstance: %p\n"), GPTInstance);
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeAPIKeyInstance: %p\n"), APIKeyInstance);
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeJSONHandlerInstance: %p\n"), JSONHandlerInstance);
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeHTTPRequestHandlerInstance: %p\n"), HTTPRequestHandlerInstance);
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeRequestManagerInstance: %p\n"), RequestManagerInstance);
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeResponseManagerInstance: %p\n"), ResponseManagerInstance);
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeConversationManagerInstance: %p\n"), ConversationManagerInstance);

	if (GPTInstance && APIKeyInstance)
	{
		// Load the API key once and pass it to the GPT instance
		FString ApiKey = APIKeyInstance->LoadAPIKey();
		if (!ApiKey.IsEmpty())
		{
			GPTInstance->SetAPIKey(ApiKey);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to load API key in InitializeGPT"));
		}
		GPTInstance->SetJSONHandler(JSONHandlerInstance);
		GPTInstance->SetHTTPRequestHandler(HTTPRequestHandlerInstance);
		GPTInstance->SetRequestManager(RequestManagerInstance);
		GPTInstance->SetResponseManager(ResponseManagerInstance);
		GPTInstance->SetConversationManager(ConversationManagerInstance);

		RequestManagerInstance->SetResponseManager(ResponseManagerInstance);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("NN_Cpp_PlayerController: Failed to create GPTInstance or APIKeyLoaderInstance"));
	}
}

void ANN_Cpp_PlayerController::DestroyGPT()
{
	if (GPTInstance)
	{
		GameChatWidget->NativeDestruct();
		GPTInstance->ConditionalBeginDestroy();
		ConversationManagerInstance = nullptr;
		ResponseManagerInstance = nullptr;
		RequestManagerInstance = nullptr;
		HTTPRequestHandlerInstance = nullptr;
		APIKeyInstance = nullptr;
		JSONHandlerInstance = nullptr;
		GPTInstance = nullptr;

		// DEBUG
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - DestroyConversationManagerInstance: %p\n"), ConversationManagerInstance);
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - DestroyResponseManagerInstance: %p\n"), ResponseManagerInstance);
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - DestroyRequestManagerInstance: %p\n"), RequestManagerInstance);
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - DestroyHTTPRequestHandlerInstance: %p\n"), HTTPRequestHandlerInstance);
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - DestroyJSONHandlerInstance: %p\n"), JSONHandlerInstance);
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - DestroyAPIKeyInstance: %p\n"), APIKeyInstance);
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - DestroyGPTInstance: %p\n"), GPTInstance);
	}
}

UNN_Cpp_GPT* ANN_Cpp_PlayerController::GetGPT() const
{
	if (!GPTInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("NN_Cpp_PlayerController: GPTInstance is nullptr in GetGPT()"));
	}
	return GPTInstance;
}

void ANN_Cpp_PlayerController::SetGPT(UNN_Cpp_GPT* InGPT)
{
	if (GameChatWidget)
	{
		GameChatWidget->SetGPT(InGPT);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("NN_Cpp_PlayerController: GameChatWidget is nullptr in SetGPT()"));
	}
}

void ANN_Cpp_PlayerController::ShowWidget(UUserWidget* SubWidget)
{
	if (SubWidget)
	{
		SubWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

void ANN_Cpp_PlayerController::HideWidget(UUserWidget* SubWidget)
{
	if (SubWidget)
	{
		SubWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void ANN_Cpp_PlayerController::OnGameNavigatorWidgetVisibilityChangedViaInterface()
{
	GameNavigatorWidget->OnGameNavigatorWidgetVisibilityChanged();
}

void ANN_Cpp_PlayerController::RemoveAllGPTMessagesFromScrollBoxViaInterface()
{
	GameChatWidget->RemoveAllGPTMessagesFromScrollBox();
}

// ############### Main ###############

void ANN_Cpp_PlayerController::ShowMainMenuWidgetViaInterface()
{
	MainWidget->ShowMainMenuWidget();
}

void ANN_Cpp_PlayerController::ShowMainGuideWidgetViaInterface()
{
	MainWidget->ShowMainGuideWidget();
}

void ANN_Cpp_PlayerController::ShowMainOptionsWidgetViaInterface()
{
	MainWidget->ShowMainOptionsWidget();
}

void ANN_Cpp_PlayerController::ShowMainTutorialWidgetViaInterface()
{
	MainWidget->ShowMainTutorialWidget();
}

void ANN_Cpp_PlayerController::ShowMainCreditsWidgetViaInterface()
{
	MainWidget->ShowMainCreditsWidget();
}

// ############### Creator ###############

void ANN_Cpp_PlayerController::ShowCreatorMenuWidgetViaInterface()
{
	CreatorWidget->ShowCreatorMenuWidget();
}

void ANN_Cpp_PlayerController::ShowCreatorWorlWidgetViaInterface()
{
	CreatorWidget->ShowCreatorWorlWidget();
}

void ANN_Cpp_PlayerController::ShowCreatorCharacterWidgetViaInterface()
{
	CreatorWidget->ShowCreatorCharacterWidget();
}

void ANN_Cpp_PlayerController::ShowCreatorStoryWidgetViaInterface()
{
	CreatorWidget->ShowCreatorStoryWidget();
}

// ############### Game ###############

void ANN_Cpp_PlayerController::ShowGameMenuWidgetViaInterface()
{
	GameWidget->ShowGameMenuWidget();
}

void ANN_Cpp_PlayerController::ShowGameNavigatorWidgetViaInterface()
{
	GameWidget->ShowGameNavigatorWidget();
}

void ANN_Cpp_PlayerController::ShowGameChatWidgetViaInterface()
{
	GameWidget->ShowGameChatWidget();
}

void ANN_Cpp_PlayerController::ShowGameInventoryWidgetViaInterface()
{
	GameWidget->ShowGameInventoryWidget();
}

bool ANN_Cpp_PlayerController::IsSummaryGenerationEnabledViaInterface() const
{
	if (MainOptionsWidget)
	{
		return MainOptionsWidget->IsSummaryGenerationEnabled();
	}
	return false;
}

bool ANN_Cpp_PlayerController::IsImageGenerationEnabledViaInterface() const
{
	if (MainOptionsWidget)
	{
		return MainOptionsWidget->IsImageGenerationEnabled();
	}
	return false;
}

int32 ANN_Cpp_PlayerController::GetCurrentMessageNumberViaInterface() const
{
	if (MainOptionsWidget)
	{
		return MainOptionsWidget->GetCurrentMessageNumber();
	}
	return 4;
}

void ANN_Cpp_PlayerController::RemoveAllNodesFromScrollBoxViaInterface()
{
	GameNavigatorWidget->RemoveAllNodesFromScrollBox();
}
