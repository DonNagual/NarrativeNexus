// NN_Cpp_PlayerController.h
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"
#include "Widgets/NN_Cpp_Widget_Category.h"
#include "Widgets/Main/NN_Cpp_Widget_Main.h"
#include "Widgets/Main/NN_Cpp_Widget_MainMenu.h"
#include "Widgets/Main/NN_Cpp_Widget_MainOptions.h"
#include "Widgets/Creator/NN_Cpp_Widget_Creator.h"
#include "Widgets/Game/NN_Cpp_Widget_Game.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_PlayerController.generated.h"

UCLASS()
class NARRATIVENEXUS_API ANN_Cpp_PlayerController : public APlayerController, public INN_Cpp_IF_WidgetController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	virtual void ShowWidget(UUserWidget* SubWidget) override;
	virtual void HideWidget(UUserWidget* SubWidget) override;

	// ############### Main ###############

	virtual void ShowMainMenuWidgetViaInterface() override;
	virtual void ShowMainGuideWidgetViaInterface() override;
	virtual void ShowMainOptionsWidgetViaInterface() override;
	virtual void ShowMainTutorialWidgetViaInterface() override;
	virtual void ShowMainCreditsWidgetViaInterface() override;

	// ############### Creator ###############

	virtual void ShowCreatorMenuWidgetViaInterface() override;
	virtual void ShowCreatorWorlWidgetViaInterface() override;
	virtual void ShowCreatorCharacterWidgetViaInterface() override;
	virtual void ShowCreatorStoryWidgetViaInterface() override;

	// ############### Game ###############

	virtual void ShowGameMenuWidgetViaInterface() override;
	virtual void ShowGameChatWidgetViaInterface() override;
	virtual void ShowGameInventoryWidgetViaInterface() override;

	// ############### Options ###############

	virtual bool IsImageGenerationEnabledViaInterface() const override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Category")
	TSubclassOf<UUserWidget> CategoryWidgetClass;

private:
	UPROPERTY()
	class UNN_Cpp_Widget_Category* CategoryWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_Main* MainWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_MainOptions* MainOptionsWidget;

	void InitializeWidgets();
};
