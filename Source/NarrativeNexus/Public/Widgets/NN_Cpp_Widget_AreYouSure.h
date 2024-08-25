// NN_Cpp_Widget_AreYouSure.h

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_AreYouSure.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_AreYouSure : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> YesButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> NoButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> AreYouSureMessage;

	UPROPERTY()
	UUserWidget* GameChatWidget;

	// ############### Functions ###############

	UFUNCTION()
	void OnYesButtonClicked();

	UFUNCTION()
	void OnNoButtonClicked();

	UFUNCTION()
	void SetWidgetVisibility();

	UFUNCTION()
	void WriteAreYouSureMessage();

	UFUNCTION()
	bool IsWidgetVisible() const;

};
