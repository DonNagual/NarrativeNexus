// NN_Cpp_Widget_Category.h
#pragma once

#include "CoreMinimal.h"
#include "TimerManager.h"
#include "Components/PanelWidget.h"
#include "Components/Border.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "General/NN_Cpp_GameInstance.h"
#include "Enums/NN_Cpp_EnumButtons.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_Category.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_Category : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	// ############### Buttons ###############

	UFUNCTION()
	void OnMainButtonClicked();

	UFUNCTION()
	void OnGameButtonClicked();

	UFUNCTION()
	void OnCreatorButtonClicked();

	// ############### Widgets ###############

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* MainWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* GameWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* CreatorWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* AreYouSureWidget;

protected:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UPanelWidget> CategoryContainer;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UBorder> CategoryBorder;

	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> MainButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> GameButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> CreatorButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> HelpButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> QuitButton;

private:
	// ############### Functions ###############

	UFUNCTION()
	void HideCategorySubWidget(UUserWidget* SubWidget);

	UFUNCTION()
	void HideAllWidgets();

	UFUNCTION()
	void OnHelpButtonClicked();

	UFUNCTION()
	void OnQuitButtonClicked();

	UFUNCTION()
	void ExecuteQuitGame();
	FTimerHandle TimerHandle;

	UFUNCTION()
	void HideCategoryBorder();

	// ############### Widgets ###############

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* HelpWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* QuitWidget;
};
