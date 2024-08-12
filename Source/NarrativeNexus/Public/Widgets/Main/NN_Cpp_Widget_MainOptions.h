// NN_Cpp_Widget_MainOptions.h
#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/CheckBox.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_MainOptions.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_MainOptions : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	bool IsImageGenerationEnabled() const;

	bool IsSummaryGenerationEnabled() const;

	int GetCurrentMessageNumber() const;

protected:
	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> BackButton;

	// ############### Message Counter ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> UpButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> DownButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> MessageNumberText;
	
	// ############### CheckBox ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCheckBox> GenerateImageCheckBox;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCheckBox> GenerateSummaryCheckBox;

private:
	// ############### Functions ###############

	UFUNCTION()
	void OnBackButtonClicked();

	UFUNCTION()
	void OnGenerateSummaryCheckBoxChanged(bool bIsChecked);

	UFUNCTION()
	void OnGenerateImageCheckBoxChanged(bool bIsChecked);

	// ############### Message Number ###############
	
	int32 CurrentMessageNumber = 4;

	UFUNCTION()
	void OnUpButtonClicked();

	UFUNCTION()
	void OnDownButtonClicked();

};
