// NN_Cpp_Widget_CreatorMenu.h

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Components/WidgetSwitcher.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_CreatorMenu.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_CreatorMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

protected:
	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> CreateNewNexusButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> LoadExistingNexusButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> OpenNexusCreatorButton;

	// ############### WidgetSwitcher ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UWidgetSwitcher> NexusCreatorWidgetSwitcher;

	// ############### Text Box ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> CreateNexusNameEditableTextBox;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> CreatePasswordEditableTextBox;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> CreateRepeatPasswordEditableTextBox;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> LoadNexusNameEditableTextBox;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> LoadPasswordEditableTextBox;

private:

	// ############### Functions ###############

	UFUNCTION()
	void OnOpenNexusCreatorButtonClicked();

	UFUNCTION()
	void OnSwitchToCreateNewNexusBorder();

	UFUNCTION()
	void OnSwitchToLoadExistingNexusBorder();



};
