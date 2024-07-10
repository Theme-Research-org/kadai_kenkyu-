// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpeechRecognizer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USpeechRecognizer;
enum class ESpeechRecognizerLanguage : uint8;
struct FSpeechRecognitionParameters;
#ifdef RUNTIMESPEECHRECOGNIZER_SpeechRecognizer_generated_h
#error "SpeechRecognizer.generated.h already included, missing '#pragma once' in SpeechRecognizer.h"
#endif
#define RUNTIMESPEECHRECOGNIZER_SpeechRecognizer_generated_h

#define FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_11_DELEGATE \
RUNTIMESPEECHRECOGNIZER_API void FOnSpeechRecognitionStartedDynamic_DelegateWrapper(const FScriptDelegate& OnSpeechRecognitionStartedDynamic, bool bSucceeded);


#define FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_18_DELEGATE \
RUNTIMESPEECHRECOGNIZER_API void FOnSpeechRecognitionFinishedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnSpeechRecognitionFinishedDynamic);


#define FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_25_DELEGATE \
RUNTIMESPEECHRECOGNIZER_API void FOnSpeechRecognizedTextSegmentDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnSpeechRecognizedTextSegmentDynamic, const FString& RecognizedWords);


#define FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_32_DELEGATE \
RUNTIMESPEECHRECOGNIZER_API void FOnSpeechRecognitionErrorDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnSpeechRecognitionErrorDynamic, const FString& ShortErrorMessage, const FString& LongErrorMessage);


#define FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_39_DELEGATE \
RUNTIMESPEECHRECOGNIZER_API void FOnSpeechRecognitionProgressDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnSpeechRecognitionProgressDynamic, int32 Progress);


#define FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_45_DELEGATE \
RUNTIMESPEECHRECOGNIZER_API void FOnSpeechRecognitionStoppedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnSpeechRecognitionStoppedDynamic);


#define FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetInitialPrompt); \
	DECLARE_FUNCTION(execSetBeamSize); \
	DECLARE_FUNCTION(execSetSuppressNonSpeechTokens); \
	DECLARE_FUNCTION(execSetSuppressBlank); \
	DECLARE_FUNCTION(execSetEntropyThreshold); \
	DECLARE_FUNCTION(execSetTemperatureToIncrease); \
	DECLARE_FUNCTION(execSetAudioContextSize); \
	DECLARE_FUNCTION(execSetSpeedUp); \
	DECLARE_FUNCTION(execSetMaxTokens); \
	DECLARE_FUNCTION(execSetSingleSegment); \
	DECLARE_FUNCTION(execSetNoContext); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetTranslateToEnglish); \
	DECLARE_FUNCTION(execSetLanguage); \
	DECLARE_FUNCTION(execSetNumOfThreads); \
	DECLARE_FUNCTION(execSetStreamingDefaults); \
	DECLARE_FUNCTION(execSetNonStreamingDefaults); \
	DECLARE_FUNCTION(execGetRecognitionParameters); \
	DECLARE_FUNCTION(execGetStreamingDefaults); \
	DECLARE_FUNCTION(execGetNonStreamingDefaults); \
	DECLARE_FUNCTION(execSetRecognitionParameters); \
	DECLARE_FUNCTION(execGetIsFinished); \
	DECLARE_FUNCTION(execGetIsStopping); \
	DECLARE_FUNCTION(execGetIsStopped); \
	DECLARE_FUNCTION(execClearAudioData); \
	DECLARE_FUNCTION(execForceProcessPendingAudioData); \
	DECLARE_FUNCTION(execProcessAudioData); \
	DECLARE_FUNCTION(execStopSpeechRecognition); \
	DECLARE_FUNCTION(execStartSpeechRecognition); \
	DECLARE_FUNCTION(execCreateSpeechRecognizer);


#define FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpeechRecognizer(); \
	friend struct Z_Construct_UClass_USpeechRecognizer_Statics; \
public: \
	DECLARE_CLASS(USpeechRecognizer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeSpeechRecognizer"), NO_API) \
	DECLARE_SERIALIZER(USpeechRecognizer)


#define FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USpeechRecognizer(USpeechRecognizer&&); \
	USpeechRecognizer(const USpeechRecognizer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeechRecognizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeechRecognizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpeechRecognizer) \
	NO_API virtual ~USpeechRecognizer();


#define FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_54_PROLOG
#define FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_57_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMESPEECHRECOGNIZER_API UClass* StaticClass<class USpeechRecognizer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
