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

		CreatorWidget = Cast<UNN_Cpp_Widget_Creator>(CategoryWidget->CreatorWidget);
		CreatorNavigatorWidget = Cast<UNN_Cpp_Widget_CreatorNavigator>(CreatorWidget->CreatorNavigatorWidget);



		MainWidget = Cast<UNN_Cpp_Widget_Main>(CategoryWidget->MainWidget);
		MainMenuWidget = Cast< UNN_Cpp_Widget_MainMenu>(MainWidget->MainMenuWidget);
		MainOptionsWidget = Cast<UNN_Cpp_Widget_MainOptions>(MainWidget->MainOptionsWidget);
		MainOptionsChatWidget = Cast<UNN_Cpp_Widget_MainOptionsChat>(MainOptionsWidget->MainOptionsChatWidget);

		GameWidget = Cast<UNN_Cpp_Widget_Game>(CategoryWidget->GameWidget);
		GameMenuWidget = Cast<UNN_Cpp_Widget_GameMenu>(GameWidget->GameMenuWidget);
		GameNavigatorWidget = Cast<UNN_Cpp_Widget_GameNavigator>(GameWidget->GameNavigatorWidget);
		GameChatWidget = Cast<UNN_Cpp_Widget_GameChat>(GameWidget->GameChatWidget);

		AreYouSureWidget = Cast<UNN_Cpp_Widget_AreYouSure>(CategoryWidget->AreYouSureWidget);
	}
}

void ANN_Cpp_PlayerController::InitializeGPT()
{
	GPTInstance = NewObject<UNN_Cpp_GPT>(this);
	APIKeyInstance = NewObject<UNN_Cpp_APIKeyLoader>(this);
	JSONHandlerInstance = NewObject<UNN_Cpp_JSONHandler>(this);
	HTTPRequestHandlerInstance = NewObject<UNN_Cpp_HTTPRequestHandler>(this);
	TextRequestManagerInstance = NewObject<UNN_Cpp_GPTTextRequestManager>(this);
	TextResponseManagerInstance = NewObject<UNN_Cpp_GPTTextResponseManager>(this);
	ImageRequestManagerInstance = NewObject<UNN_Cpp_GPTImageRequestManager>(this);
	ImageResponseManagerInstance = NewObject<UNN_Cpp_GPTImageResponseManager>(this);
	ConversationManagerInstance = NewObject< UNN_Cpp_GPTConversationManager>(this);

	// DEBUG
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeGPTInstance: %p\n"), GPTInstance);
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeAPIKeyInstance: %p\n"), APIKeyInstance);
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeJSONHandlerInstance: %p\n"), JSONHandlerInstance);
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeHTTPRequestHandlerInstance: %p\n"), HTTPRequestHandlerInstance);
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeTextRequestManagerInstance: %p\n"), TextRequestManagerInstance);
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeTextResponseManagerInstance: %p\n"), TextResponseManagerInstance);
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeImageRequestManagerInstance: %p\n"), ImageRequestManagerInstance);
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeImageResponseManagerInstance: %p\n"), ImageResponseManagerInstance);
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
		GPTInstance->SetTextRequestManager(TextRequestManagerInstance);
		GPTInstance->SetTextResponseManager(TextResponseManagerInstance);
		GPTInstance->SetImageRequestManager(ImageRequestManagerInstance);
		GPTInstance->SetImageResponseManager(ImageResponseManagerInstance);
		GPTInstance->SetConversationManager(ConversationManagerInstance);

		TextRequestManagerInstance->SetTextResponseManager(TextResponseManagerInstance);
		ImageRequestManagerInstance->SetImageResponseManager(ImageResponseManagerInstance);
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
		ImageResponseManagerInstance = nullptr;
		ImageRequestManagerInstance = nullptr;
		TextResponseManagerInstance = nullptr;
		TextRequestManagerInstance = nullptr;
		HTTPRequestHandlerInstance = nullptr;
		APIKeyInstance = nullptr;
		JSONHandlerInstance = nullptr;
		GPTInstance = nullptr;

		// DEBUG
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - DestroyConversationManagerInstance: %p\n"), ConversationManagerInstance);
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - DestroyImageResponseManagerInstance: %p\n"), ImageResponseManagerInstance);
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - DestroyImageRequestManagerInstance: %p\n"), ImageRequestManagerInstance);
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - DestroyTextResponseManagerInstance: %p\n"), TextResponseManagerInstance);
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - DestroyTextRequestManagerInstance: %p\n"), TextRequestManagerInstance);
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

bool ANN_Cpp_PlayerController::IsGameChatWidgetVisibleViaInterface()
{
	return GameChatWidget ? GameChatWidget->IsGameChatWidgetVisible() : false;
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
	
}

void ANN_Cpp_PlayerController::ShowCharacterMenuWidgetViaInterface()
{
	CreatorWidget->ShowCharacterMenuWidget();
}

void ANN_Cpp_PlayerController::ShowCreatorStoryWidgetViaInterface()
{
	
}

void ANN_Cpp_PlayerController::ShowCreatorNavigatorWidgetViaInterface()
{
	CreatorWidget->ShowCreatorNavigatorWidget();
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

bool ANN_Cpp_PlayerController::IsShortSummaryGenerationEnabledViaInterface() const
{
	if (MainOptionsChatWidget)
	{
		return MainOptionsChatWidget->IsShortSummaryGenerationEnabled();
	}
	return false;
}

bool ANN_Cpp_PlayerController::IsMaxSummaryGenerationEnabledViaInterface() const
{
	if (MainOptionsChatWidget)
	{
		return MainOptionsChatWidget->IsMaxSummaryGenerationEnabled();
	}
	return false;
}

bool ANN_Cpp_PlayerController::IsInfoGenerationEnabledViaInterface() const
{
	if (MainOptionsChatWidget)
	{
		return MainOptionsChatWidget->IsInfoGenerationEnabled();
	}
	return false;
}

bool ANN_Cpp_PlayerController::IsSuggestionGenerationEnabledViaInterface() const
{
	if (MainOptionsChatWidget)
	{
		return MainOptionsChatWidget->IsSuggestionGenerationEnabled();
	}
	return false;
}

bool ANN_Cpp_PlayerController::IsDescriptionGenerationForImageEnabledViaInterface() const
{
	if (MainOptionsChatWidget)
	{
		return MainOptionsChatWidget->IsDescriptionGenerationForImageEnabled();
	}
	return false;
}

bool ANN_Cpp_PlayerController::IsGenerateImageFromDiscriptionEnabledViaInterface() const
{
	if (MainOptionsChatWidget)
	{
		return MainOptionsChatWidget->IsGenerateImageFromDiscriptionEnabled();
	}
	return false;
}

int32 ANN_Cpp_PlayerController::GetMaxConversationHistorySizeViaInterface() const
{
	if (MainOptionsChatWidget)
	{
		return MainOptionsChatWidget->GetMaxConversationHistorySize();
	}
	return 4;
}

void ANN_Cpp_PlayerController::RemoveAllNodesFromScrollBoxViaInterface()
{
	GameNavigatorWidget->RemoveAllNodesFromScrollBox();
}

// ############### AreYouSure ###############

void ANN_Cpp_PlayerController::ShowAreYouSureWidgetViaInterface()
{
	AreYouSureWidget->ShowAreYouSureWidget();
}

void ANN_Cpp_PlayerController::HideAreYouSureWidgetViaInterface()
{
	AreYouSureWidget->HideAreYouSureWidget();
}

void ANN_Cpp_PlayerController::SetTriggeredWidgetViaInterface(ETriggeredButton TriggeredButton)
{
	if (AreYouSureWidget)
	{
		AreYouSureWidget->SetTriggeredButton(TriggeredButton);
	}
}

void ANN_Cpp_PlayerController::OnYesButtonClickedAfterMainButtonViaInterface()
{
	GameChatWidget->RemoveAllGPTMessagesFromScrollBox();
	HideWidget(GameChatWidget);
	CategoryWidget->OnMainButtonClicked();
}

void ANN_Cpp_PlayerController::OnYesButtonClickedAfterGameButtonViaInterface()
{
	GameChatWidget->RemoveAllGPTMessagesFromScrollBox();
	HideWidget(GameChatWidget);
	CategoryWidget->OnGameButtonClicked();
}

void ANN_Cpp_PlayerController::OnYesButtonClickedAfterCreatorButtonViaInterface()
{
	GameChatWidget->RemoveAllGPTMessagesFromScrollBox();
	HideWidget(GameChatWidget);
	CategoryWidget->OnCreatorButtonClicked();
}

void ANN_Cpp_PlayerController::OnYesButtonClickedAfterBackGameChatButtonViaInterface()
{
	GameChatWidget->RemoveAllGPTMessagesFromScrollBox();
	HideWidget(GameChatWidget);
	DestroyGPT();
	GameWidget->ShowGameNavigatorWidget();
	GameNavigatorWidget->OnGameNavigatorWidgetVisibilityChanged();
}

void ANN_Cpp_PlayerController::OnYesButtonClickedAfterBackCreateButtonViaInterface()
{
	CreatorWidget->ShowCreatorMenuWidget();
}
