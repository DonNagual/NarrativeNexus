// NN_Cpp_Widget_GameNavigator.h

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/ScrollBox.h"
#include "Components/EditableTextBox.h"
#include "Components/Image.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_Widget_GameNavigatorNode.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_GameNavigator.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_GameNavigator : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	//virtual void OnWidgetVisibilityChanged(ESlateVisibility OldVisibility, ESlateVisibility NewVisibility) override;
	UFUNCTION()
	void OnWidgetVisibilityChanged();

	UFUNCTION()
	void RemoveAllNodesFromScrollBox();

protected:

	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SearchButtom;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> BackButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> RepeatButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> AcceptButton;

	// ############### Nodes ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> SearchInputMessageFeld;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UScrollBox> NodeScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Node")
	TSubclassOf<UUserWidget> GameNavigatorNodeClass;

	// ############### Image ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> NavigatorImage;

	// ############### Node Text ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> NodeDescriptionText;

private:
	// ############### Button - Functions ###############

	UFUNCTION()
	void OnSearchButtomClicked();

	UFUNCTION()
	void OnBackButtonClicked();

	UFUNCTION()
	void OnRepeatButtonClicked();

	UFUNCTION()
	void OnAcceptButtonClicked();

	UFUNCTION()
	void AddNodeToScrollBox();

};
