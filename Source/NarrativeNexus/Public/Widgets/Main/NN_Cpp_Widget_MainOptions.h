// NN_Cpp_Widget_MainOptions.h
#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_MainOptions.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_MainOptions : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	// ############### Widgets ###############

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* MainOptionsMainWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* MainOptionsChatWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* MainOptionsCreatorWidget;

protected:
	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> OptionsMainButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> OptionsChatButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> OptionsCreatorButton;

	// ############### WidgetSwitcher ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UWidgetSwitcher> OptionsWidgetSwitcher;

private:
	// ############### Functions ###############

	UFUNCTION()
	void OnSwitchToOptionsMainWidget();

	UFUNCTION()
	void OnSwitchToOptionsChatWidget();

	UFUNCTION()
	void OnSwitchToOptionsCreatorWidget();
};
