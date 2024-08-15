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
#include "Widgets/Game/NN_Cpp_Widget_GameNavigator.h"
#include "GPT/NN_Cpp_GPT.h"
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
	virtual void OnWidgetVisibilityChangedViaInterface() override;

	// Getter for GPT instance
	UNN_Cpp_GPT* GetGPT() const;

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
	virtual void ShowGameNavigatorWidgetViaInterface() override;
	virtual void ShowGameInventoryWidgetViaInterface() override;

	// ############### Options ###############

	virtual bool IsSummaryGenerationEnabledViaInterface() const override;
	virtual bool IsImageGenerationEnabledViaInterface() const override;
	virtual int32 GetCurrentMessageNumberViaInterface() const override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Category")
	TSubclassOf<UUserWidget> CategoryWidgetClass;

private:
	UPROPERTY()
	class UNN_Cpp_Widget_Category* CategoryWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_Main* MainWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_Creator* CreatorWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_Game* GameWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_MainOptions* MainOptionsWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_GameNavigator*	GameNavigatorWidget;

	UPROPERTY()
	UNN_Cpp_GPT* GPTInstance;

	void InitializeWidgets();
	void InitializeGPT();
};
