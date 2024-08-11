// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/NN_Cpp_Widget_Category.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef NARRATIVENEXUS_NN_Cpp_Widget_Category_generated_h
#error "NN_Cpp_Widget_Category.generated.h already included, missing '#pragma once' in NN_Cpp_Widget_Category.h"
#endif
#define NARRATIVENEXUS_NN_Cpp_Widget_Category_generated_h

#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Category_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHideCategoryBorder); \
	DECLARE_FUNCTION(execExecuteQuitGame); \
	DECLARE_FUNCTION(execOnQuitButtonClicked); \
	DECLARE_FUNCTION(execOnHelpButtonClicked); \
	DECLARE_FUNCTION(execOnCreatorButtonClicked); \
	DECLARE_FUNCTION(execOnGameButtonClicked); \
	DECLARE_FUNCTION(execOnMainButtonClicked); \
	DECLARE_FUNCTION(execHideAllWidgets); \
	DECLARE_FUNCTION(execHideCategorySubWidget);


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Category_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNN_Cpp_Widget_Category(); \
	friend struct Z_Construct_UClass_UNN_Cpp_Widget_Category_Statics; \
public: \
	DECLARE_CLASS(UNN_Cpp_Widget_Category, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeNexus"), NO_API) \
	DECLARE_SERIALIZER(UNN_Cpp_Widget_Category)


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Category_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNN_Cpp_Widget_Category(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNN_Cpp_Widget_Category(UNN_Cpp_Widget_Category&&); \
	UNN_Cpp_Widget_Category(const UNN_Cpp_Widget_Category&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNN_Cpp_Widget_Category); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNN_Cpp_Widget_Category); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNN_Cpp_Widget_Category) \
	NO_API virtual ~UNN_Cpp_Widget_Category();


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Category_h_14_PROLOG
#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Category_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Category_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Category_h_17_INCLASS_NO_PURE_DECLS \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Category_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVENEXUS_API UClass* StaticClass<class UNN_Cpp_Widget_Category>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NarrativeNexus_Source_NarrativeNexus_Public_Widgets_NN_Cpp_Widget_Category_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
