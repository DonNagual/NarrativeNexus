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
		MainOptionsWidget = Cast< UNN_Cpp_Widget_MainOptions>(MainWidget->MainOptionsWidget);
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

// ############### Main ###############

void ANN_Cpp_PlayerController::ShowMainMenuWidgetViaInterface()
{
	(Cast<UNN_Cpp_Widget_Main>(CategoryWidget->MainWidget))->ShowMainMenuWidget();
}

void ANN_Cpp_PlayerController::ShowMainGuideWidgetViaInterface()
{
	(Cast<UNN_Cpp_Widget_Main>(CategoryWidget->MainWidget))->ShowMainGuideWidget();
}

void ANN_Cpp_PlayerController::ShowMainOptionsWidgetViaInterface()
{
	(Cast<UNN_Cpp_Widget_Main>(CategoryWidget->MainWidget))->ShowMainOptionsWidget();
}

void ANN_Cpp_PlayerController::ShowMainTutorialWidgetViaInterface()
{
	(Cast<UNN_Cpp_Widget_Main>(CategoryWidget->MainWidget))->ShowMainTutorialWidget();
}

void ANN_Cpp_PlayerController::ShowMainCreditsWidgetViaInterface()
{
	(Cast<UNN_Cpp_Widget_Main>(CategoryWidget->MainWidget))->ShowMainCreditsWidget();
}

// ############### Creator ###############

void ANN_Cpp_PlayerController::ShowCreatorMenuWidgetViaInterface()
{
	(Cast<UNN_Cpp_Widget_Creator>(CategoryWidget->CreatorWidget))->ShowCreatorMenuWidget();
}

void ANN_Cpp_PlayerController::ShowCreatorWorlWidgetViaInterface()
{
	(Cast<UNN_Cpp_Widget_Creator>(CategoryWidget->CreatorWidget))->ShowCreatorWorlWidget();
}

void ANN_Cpp_PlayerController::ShowCreatorCharacterWidgetViaInterface()
{
	(Cast<UNN_Cpp_Widget_Creator>(CategoryWidget->CreatorWidget))->ShowCreatorCharacterWidget();
}

void ANN_Cpp_PlayerController::ShowCreatorStoryWidgetViaInterface()
{
	(Cast<UNN_Cpp_Widget_Creator>(CategoryWidget->CreatorWidget))->ShowCreatorStoryWidget();
}

// ############### Game ###############

void ANN_Cpp_PlayerController::ShowGameMenuWidgetViaInterface()
{
	(Cast<UNN_Cpp_Widget_Game>(CategoryWidget->GameWidget))->ShowGameMenuWidget();
}

void ANN_Cpp_PlayerController::ShowGameChatWidgetViaInterface()
{
	(Cast<UNN_Cpp_Widget_Game>(CategoryWidget->GameWidget))->ShowGameChatWidget();
}

void ANN_Cpp_PlayerController::ShowGameInventoryWidgetViaInterface()
{
	(Cast<UNN_Cpp_Widget_Game>(CategoryWidget->GameWidget))->ShowGameInventoryWidget();
}

bool ANN_Cpp_PlayerController::IsImageGenerationEnabledViaInterface() const
{
	if (MainOptionsWidget)
	{
		return MainOptionsWidget->IsImageGenerationEnabled();
	}
	return false;
}
