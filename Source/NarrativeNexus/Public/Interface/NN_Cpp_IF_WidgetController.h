// NN_Cpp_IF_WidgetController.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Enums/NN_Cpp_EnumButtons.h"
#include "NN_Cpp_IF_WidgetController.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNN_Cpp_IF_WidgetController : public UInterface
{
	GENERATED_BODY()
};

class NARRATIVENEXUS_API INN_Cpp_IF_WidgetController
{
	GENERATED_BODY()

public:

	virtual void ShowWidget(UUserWidget* SubWidget) = 0;
	virtual void HideWidget(UUserWidget* SubWidget) = 0;

	// ############### Main ###############

	virtual void ShowMainMenuWidgetViaInterface() = 0;
	virtual void ShowMainGuideWidgetViaInterface() = 0;
	virtual void ShowMainOptionsWidgetViaInterface() = 0;
	virtual void ShowMainTutorialWidgetViaInterface() = 0;
	virtual void ShowMainCreditsWidgetViaInterface() = 0;

	// ############### Creator ###############

	virtual void ShowCreatorMenuWidgetViaInterface() = 0;
	virtual void ShowCreatorWorlWidgetViaInterface() = 0;
	virtual void ShowCreatorCharacterWidgetViaInterface() = 0;
	virtual void ShowCreatorStoryWidgetViaInterface() = 0;

	// ############### Game ###############

	virtual void ShowGameMenuWidgetViaInterface() = 0;
	virtual void ShowGameNavigatorWidgetViaInterface() = 0;
	virtual void ShowGameChatWidgetViaInterface() = 0;
	virtual void ShowGameInventoryWidgetViaInterface() = 0;

	// ############### Options ###############

	virtual bool IsSummaryGenerationEnabledViaInterface() const = 0;
	virtual bool IsImageGenerationEnabledViaInterface() const = 0;
	virtual int32 GetCurrentMessageNumberViaInterface() const = 0;

	// ############### GameNavigator ###############
	
	virtual void RemoveAllNodesFromScrollBoxViaInterface() = 0;
	virtual void OnGameNavigatorWidgetVisibilityChangedViaInterface() = 0;

	// ############### GameChat ###############

	virtual void RemoveAllGPTMessagesFromScrollBoxViaInterface() = 0;
	virtual bool IsGameChatWidgetVisibleViaInterface() = 0;

	// ############### AreYouSure ###############
	
	virtual void ShowAreYouSureWidgetViaInterface() = 0;
	virtual void HideAreYouSureWidgetViaInterface() = 0;
	virtual void OnYesButtonClickedAfterMainButtonViaInterface() = 0;
	virtual void OnYesButtonClickedAfterGameButtonViaInterface() = 0;
	virtual void OnYesButtonClickedAfterCreatorButtonViaInterface() = 0;
	virtual void OnYesButtonClickedAfterBackButtonViaInterface() = 0;

	virtual void SetTriggeredWidgetViaInterface(ETriggeredButton TriggeredButton) = 0;
};
