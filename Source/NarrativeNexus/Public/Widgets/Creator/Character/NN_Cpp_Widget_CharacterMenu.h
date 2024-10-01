// NN_Cpp_Widget_CharacterMenu.h

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_CharacterMenu.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_CharacterMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	// ############### Widgets ###############

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* CharacterGeneralWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* CharacterAttributeWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* CharacterAbilitiesWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* CharacterBackgroundWidget;

protected:
	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> ClearButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SaveButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> BackCreateButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> GeneralCreateButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> AttributesCreateButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> AbilitiesCreateButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> BackgroundCreateButton;

	// ############### WidgetSwitcher ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UWidgetSwitcher> CreateWidgetSwitcher;

private:
	// ############### Functions ###############

	UFUNCTION()
	void OnClearButtonClicked();

	UFUNCTION()
	void OnSaveButtonClicked();

	UFUNCTION()
	void OnBackCreateButtonClicked();

	UFUNCTION()
	void OnSwitchToCharacterGeneralWidget();

	UFUNCTION()
	void OnSwitchToCharacterAttributeWidget();

	UFUNCTION()
	void OnSwitchToCharacterAbilitiesWidget();

	UFUNCTION()
	void OnSwitchToCharacterBackstoryWidget();
};
