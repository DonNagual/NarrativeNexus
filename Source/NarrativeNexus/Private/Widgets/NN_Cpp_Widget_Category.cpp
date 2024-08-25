// NN_Cpp_Widget_Category.cpp

#include "Widgets/NN_Cpp_Widget_Category.h"

void UNN_Cpp_Widget_Category::NativeConstruct()
{
	Super::NativeConstruct();

	// DEBUG
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Widget Category Constructed"));
	
	// Hide all sub-widgets initially
	HideAllWidgets();

	MainButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnMainButtonClicked);
	GameButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnGameButtonClicked);
	CreatorButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnCreatorButtonClicked);
	HelpButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnHelpButtonClicked);
	QuitButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnQuitButtonClicked);
}

void UNN_Cpp_Widget_Category::HideAllWidgets()
{
	HideCategorySubWidget(MainWidget);
	HideCategorySubWidget(GameWidget);
	HideCategorySubWidget(CreatorWidget);
	HideCategorySubWidget(HelpWidget);
	HideCategorySubWidget(QuitWidget);
	HideCategorySubWidget(AreYouSureWidget);
}

void UNN_Cpp_Widget_Category::HideCategorySubWidget(UUserWidget* SubWidget)
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->HideWidget(SubWidget);
	}
}

void UNN_Cpp_Widget_Category::OnMainButtonClicked()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(MainWidget);
		Interface->ShowMainMenuWidgetViaInterface();
		Interface->RemoveAllNodesFromScrollBoxViaInterface();
		Interface->RemoveAllGPTMessagesFromScrollBoxViaInterface();
	}
}

void UNN_Cpp_Widget_Category::OnGameButtonClicked()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(GameWidget);
		Interface->ShowGameMenuWidgetViaInterface();
		Interface->RemoveAllNodesFromScrollBoxViaInterface();
		Interface->RemoveAllGPTMessagesFromScrollBoxViaInterface();
	}
}

void UNN_Cpp_Widget_Category::OnCreatorButtonClicked()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(CreatorWidget);
		Interface->ShowCreatorMenuWidgetViaInterface();
		Interface->RemoveAllNodesFromScrollBoxViaInterface();
		Interface->RemoveAllGPTMessagesFromScrollBoxViaInterface();
	}
}

void UNN_Cpp_Widget_Category::OnHelpButtonClicked()
{
	if (HelpWidget->IsVisible())
	{
		if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
		{
			Interface->HideWidget(HelpWidget);
		}
	}
	else if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(HelpWidget);
	}
}

// #################### QuitGame ####################

void UNN_Cpp_Widget_Category::HideCategoryBorder()
{
	CategoryBorder->SetVisibility(ESlateVisibility::Collapsed);
}

void UNN_Cpp_Widget_Category::OnQuitButtonClicked()
{
	HideAllWidgets();
	HideCategoryBorder();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{ 
		Interface->ShowWidget(QuitWidget);

		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UNN_Cpp_Widget_Category::ExecuteQuitGame, 2.5f, false);
	}
}

void UNN_Cpp_Widget_Category::ExecuteQuitGame()
{
	if (auto* GI = Cast<UNN_Cpp_GameInstance>(GetWorld()->GetGameInstance()))
	{
		GI->QuitGame();
	}
}
