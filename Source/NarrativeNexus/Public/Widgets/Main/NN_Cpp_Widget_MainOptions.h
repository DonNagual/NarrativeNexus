// NN_Cpp_Widget_MainOptions.h
#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/CheckBox.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_MainOptions.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_MainOptions : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	bool IsShortSummaryGenerationEnabled() const;

	bool IsMaxSummaryGenerationEnabled() const;

	bool IsInfoGenerationEnabled() const;

	bool IsDescriptionGenerationForImageEnabled() const;

	bool IsGenerateImageFromDiscriptionEnabled() const;

	int GetMaxConversationHistorySize() const;

protected:
	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> BackButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> APIKeySaveButton;

	// ############### Message Counter ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> UpButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> DownButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> MaxConversationHistorySizeText;
	
	// ############### CheckBox ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCheckBox> GenerateShortSummaryCheckBox;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCheckBox> GenerateMaxSummaryCheckBox;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCheckBox> GenerateInfoCheckBox;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCheckBox> GenerateImageDescriptionCheckBox;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCheckBox> GenerateImageCheckBox;

	// ############### API Key Textfeld ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> APIKeyInputText;

private:
	// ############### Functions ###############

	UFUNCTION()
	void OnBackButtonClicked();

	UFUNCTION()
	void OnGenerateShortSummaryCheckBoxChanged(bool bIsChecked);

	UFUNCTION()
	void OnGenerateMaxSummaryCheckBoxChanged(bool bIsChecked);

	UFUNCTION()
	void OnGenerateImageDescriptionCheckBox(bool bIsChecked);

	UFUNCTION()
	void OnGenerateImageCheckBoxChanged(bool bIsChecked);

	UFUNCTION()
	void OnAPIKeySaveButtonClicked();

	// ############### Message Number ###############
	
	int32 MaxConversationHistorySize = 4;

	UFUNCTION()
	void OnUpButtonClicked();

	UFUNCTION()
	void OnDownButtonClicked();

};
