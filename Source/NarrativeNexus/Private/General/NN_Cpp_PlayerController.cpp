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

	// DEBUG
	if (GPTInstance)
	{
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_PlayerController - InitializeGPTInstance: %p\n"), GPTInstance);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("NN_Cpp_PlayerController: Failed to create GPTInstance"));
	}
}

void ANN_Cpp_PlayerController::DestroyGPT()
{
	if (GPTInstance)
	{
		GPTInstance->ConditionalBeginDestroy();
		GPTInstance = nullptr;
		GameChatWidget->NativeDestruct();
		// DEBUG
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

void ANN_Cpp_PlayerController::OnWidgetVisibilityChangedViaInterface()
{
	GameNavigatorWidget->OnWidgetVisibilityChanged();
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
