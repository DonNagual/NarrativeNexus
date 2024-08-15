// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GPT/NN_Cpp_GPT.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVENEXUS_NN_Cpp_GPT_generated_h
#error "NN_Cpp_GPT.generated.h already included, missing '#pragma once' in NN_Cpp_GPT.h"
#endif
#define NARRATIVENEXUS_NN_Cpp_GPT_generated_h

#define FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_34_DELEGATE \
static void FOnGPTResponseReceived_DelegateWrapper(const FMulticastScriptDelegate& OnGPTResponseReceived, const FString& Response);


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNN_Cpp_GPT(); \
	friend struct Z_Construct_UClass_UNN_Cpp_GPT_Statics; \
public: \
	DECLARE_CLASS(UNN_Cpp_GPT, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeNexus"), NO_API) \
	DECLARE_SERIALIZER(UNN_Cpp_GPT)


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNN_Cpp_GPT(UNN_Cpp_GPT&&); \
	UNN_Cpp_GPT(const UNN_Cpp_GPT&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNN_Cpp_GPT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNN_Cpp_GPT); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNN_Cpp_GPT) \
	NO_API virtual ~UNN_Cpp_GPT();


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_12_PROLOG
#define FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_15_INCLASS_NO_PURE_DECLS \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVENEXUS_API UClass* StaticClass<class UNN_Cpp_GPT>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
