// NN_Cpp_PlayerController.h

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"
#include "Widgets/NN_Cpp_Widget_Category.h"
#include "Widgets/NN_Cpp_Widget_AreYouSure.h"
#include "Widgets/Main/NN_Cpp_Widget_Main.h"
#include "Widgets/Main/NN_Cpp_Widget_MainMenu.h"
#include "Widgets/Main/NN_Cpp_Widget_MainOptions.h"
#include "Widgets/Creator/NN_Cpp_Widget_Creator.h"
#include "Widgets/Game/NN_Cpp_Widget_Game.h"
#include "Widgets/Game/NN_Cpp_Widget_GameMenu.h"
#include "Widgets/Game/NN_Cpp_Widget_GameChat.h"
#include "Widgets/Game/NN_Cpp_Widget_GameNavigator.h"
//#include "GPT/NN_Cpp_APIKeyLoader.h"
//#include "GPT/NN_Cpp_JSONHandler.h"
//#include "GPT/NN_Cpp_HTTPRequestHandler.h"
//#include "GPT/NN_Cpp_GPTTextRequestManager.h"
//#include "GPT/NN_Cpp_GPTTextResponseManager.h"
//#include "GPT/NN_Cpp_GPTImageRequestManager.h"
//#include "GPT/NN_Cpp_GPTImageResponseManager.h"
//#include "GPT/NN_Cpp_GPTConversationManager.h"
//#include "Interface/NN_Cpp_IF_GPT.h"
#include "NN_Cpp_PlayerController.generated.h"

UCLASS()
class NARRATIVENEXUS_API ANN_Cpp_PlayerController : public APlayerController, public INN_Cpp_IF_WidgetController, public INN_Cpp_IF_GPT
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	// ############### GPT Interface ###############
	virtual void InitializeGPT() override;
	virtual void DestroyGPT() override;
	virtual UNN_Cpp_GPT* GetGPT() const override;
	virtual void SetGPT(UNN_Cpp_GPT* InGPT) override;

	// ############### WidgetController Interface ###############

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
	virtual void ShowGameNavigatorWidgetViaInterface() override;
	virtual void ShowGameChatWidgetViaInterface() override;
	virtual void ShowGameInventoryWidgetViaInterface() override;

	// ############### Options ###############

	virtual bool IsShortSummaryGenerationEnabledViaInterface() const override;
	virtual bool IsMaxSummaryGenerationEnabledViaInterface() const override;
	virtual bool IsImageGenerationEnabledViaInterface() const override;
	virtual int32 GetMaxConversationHistorySizeViaInterface() const override;

	// ############### GameNavigator ###############

	virtual void RemoveAllNodesFromScrollBoxViaInterface() override;
	virtual void OnGameNavigatorWidgetVisibilityChangedViaInterface() override;

	// ############### GameChat ###############

	virtual void RemoveAllGPTMessagesFromScrollBoxViaInterface() override;
	virtual bool IsGameChatWidgetVisibleViaInterface()override;

	// ############### AreYouSure ###############

	virtual void ShowAreYouSureWidgetViaInterface() override;
	virtual void HideAreYouSureWidgetViaInterface() override;

	virtual void SetTriggeredWidgetViaInterface(ETriggeredButton TriggeredButton) override;
	virtual void OnYesButtonClickedAfterMainButtonViaInterface() override;
	virtual void OnYesButtonClickedAfterGameButtonViaInterface() override;
	virtual void OnYesButtonClickedAfterCreatorButtonViaInterface() override;
	virtual void OnYesButtonClickedAfterBackButtonViaInterface() override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Category")
	TSubclassOf<UUserWidget> CategoryWidgetClass;

private:
	// ############### GPT ###############
	UPROPERTY()
	UNN_Cpp_GPT* GPTInstance;

	UPROPERTY()
	UNN_Cpp_APIKeyLoader* APIKeyInstance;

	UPROPERTY()
	UNN_Cpp_JSONHandler* JSONHandlerInstance;

	UPROPERTY()
	UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance;

	UPROPERTY()
	UNN_Cpp_GPTTextRequestManager* TextRequestManagerInstance;

	UPROPERTY()
	UNN_Cpp_GPTTextResponseManager* TextResponseManagerInstance;

	UPROPERTY()
	UNN_Cpp_GPTImageRequestManager* ImageRequestManagerInstance;

	UPROPERTY()
	UNN_Cpp_GPTImageResponseManager* ImageResponseManagerInstance;

	UPROPERTY()
	UNN_Cpp_GPTConversationManager* ConversationManagerInstance;
	
	// ############### Widgets ###############

	UPROPERTY()
	class UNN_Cpp_Widget_Category* CategoryWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_Main* MainWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_MainMenu* MainMenuWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_MainOptions* MainOptionsWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_Creator* CreatorWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_Game* GameWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_GameMenu* GameMenuWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_GameChat* GameChatWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_GameNavigator*	GameNavigatorWidget;

	UPROPERTY()
	class UNN_Cpp_Widget_AreYouSure* AreYouSureWidget;

	void InitializeWidgets();
};
