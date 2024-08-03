// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Game/NN_Cpp_Widget_GameChat.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVENEXUS_NN_Cpp_Widget_GameChat_generated_h
#error "NN_Cpp_Widget_GameChat.generated.h already included, missing '#pragma once' in NN_Cpp_Widget_GameChat.h"
#endif
#define NARRATIVENEXUS_NN_Cpp_Widget_GameChat_generated_h

#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleChatGPTResponse); \
	DECLARE_FUNCTION(execOnSelectRightClicked); \
	DECLARE_FUNCTION(execOnSelectLeftClicked); \
	DECLARE_FUNCTION(execOnSelectContinueClicked); \
	DECLARE_FUNCTION(execOnSendButtomClicked); \
	DECLARE_FUNCTION(execOnBackButtonClicked);


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNN_Cpp_Widget_GameChat(); \
	friend struct Z_Construct_UClass_UNN_Cpp_Widget_GameChat_Statics; \
public: \
	DECLARE_CLASS(UNN_Cpp_Widget_GameChat, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeNexus"), NO_API) \
	DECLARE_SERIALIZER(UNN_Cpp_Widget_GameChat)


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNN_Cpp_Widget_GameChat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNN_Cpp_Widget_GameChat(UNN_Cpp_Widget_GameChat&&); \
	UNN_Cpp_Widget_GameChat(const UNN_Cpp_Widget_GameChat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNN_Cpp_Widget_GameChat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNN_Cpp_Widget_GameChat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNN_Cpp_Widget_GameChat) \
	NO_API virtual ~UNN_Cpp_Widget_GameChat();


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_16_PROLOG
#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_19_INCLASS_NO_PURE_DECLS \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVENEXUS_API UClass* StaticClass<class UNN_Cpp_Widget_GameChat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_Game_NN_Cpp_Widget_GameChat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
