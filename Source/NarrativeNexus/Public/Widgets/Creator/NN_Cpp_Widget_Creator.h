// NN_Cpp_Widget_Creator.h

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_Creator.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_Creator : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	// ############### Widgets ###############

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* CreatorMenuWidget;

	UPROPERTY(META = (BindWidget))
	class UUserWidget* CreatorNavigatorWidget;

	UPROPERTY(META = (BindWidget))
	class UUserWidget* CharacterMenuWidget;

	// ############### Functions ###############

	UFUNCTION()
	virtual void ShowCreatorMenuWidget();

	UFUNCTION()
	virtual void ShowCreatorNavigatorWidget();

	UFUNCTION()
	virtual void ShowCharacterMenuWidget();

protected:

	UPROPERTY(meta = (BindWidget))
	class UPanelWidget* CreatorContainer;

private:

	// ############### Functions ###############

	UFUNCTION()
	void HideCreatorSubWidget(UUserWidget* SubWidget);

	UFUNCTION()
	void HideAllWidgets();
};
