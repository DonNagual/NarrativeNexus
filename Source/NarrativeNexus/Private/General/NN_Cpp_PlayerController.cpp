// NN_Cpp_PlayerController.cpp

#include "General/NN_Cpp_PlayerController.h"

void ANN_Cpp_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	InitializeGPT();
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
	}
}

void ANN_Cpp_PlayerController::InitializeGPT()
{
	GPTInstance = NewObject<UNN_Cpp_GPT>(this);
	if (GPTInstance)
	{
		UE_LOG(LogTemp, Warning, TEXT("GPTInstance successfully created: %p"), GPTInstance);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create GPTInstance"));
	}
}

UNN_Cpp_GPT* ANN_Cpp_PlayerController::GetGPT() const
{
	if (GPTInstance)
	{
		UE_LOG(LogTemp, Warning, TEXT("Returning GPTInstance: %p"), GPTInstance);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("GPTInstance is nullptr in GetGPT()"));
	}
	return GPTInstance;
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
