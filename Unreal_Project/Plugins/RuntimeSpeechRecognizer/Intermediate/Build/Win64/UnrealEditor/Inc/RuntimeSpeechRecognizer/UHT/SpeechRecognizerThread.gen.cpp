// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeSpeechRecognizer/Public/SpeechRecognizerThread.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognizerThread() {}

// Begin Cross Module References
RUNTIMESPEECHRECOGNIZER_API UEnum* Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerLanguage();
RUNTIMESPEECHRECOGNIZER_API UScriptStruct* Z_Construct_UScriptStruct_FSpeechRecognitionParameters();
UPackage* Z_Construct_UPackage__Script_RuntimeSpeechRecognizer();
// End Cross Module References

// Begin ScriptStruct FSpeechRecognitionParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpeechRecognitionParameters;
class UScriptStruct* FSpeechRecognitionParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpeechRecognitionParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpeechRecognitionParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpeechRecognitionParameters, (UObject*)Z_Construct_UPackage__Script_RuntimeSpeechRecognizer(), TEXT("SpeechRecognitionParameters"));
	}
	return Z_Registration_Info_UScriptStruct_SpeechRecognitionParameters.OuterSingleton;
}
template<> RUNTIMESPEECHRECOGNIZER_API UScriptStruct* StaticStruct<FSpeechRecognitionParameters>()
{
	return FSpeechRecognitionParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Parameters for speech recognition\n * These parameters are intended to be immutable once the speech recognition thread is running\n * This is not an exhaustive list of parameters available in Whisper. Only the most important ones are exposed here\n * When adding more parameters, make sure to update the FillWhisperStateParameters() function\n */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameters for speech recognition\nThese parameters are intended to be immutable once the speech recognition thread is running\nThis is not an exhaustive list of parameters available in Whisper. Only the most important ones are exposed here\nWhen adding more parameters, make sure to update the FillWhisperStateParameters() function" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOfThreads_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of threads to use for speech recognition. Uses the number of cores if 0 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of threads to use for speech recognition. Uses the number of cores if 0" },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The language to use for speech recognition */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The language to use for speech recognition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTranslateToEnglish_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to translate the recognized words to English or not */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to translate the recognized words to English or not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSizeMs_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The step size in milliseconds used to accumulate audio in the pending audio buffer to be queued (e.g. 5000 ms = 5 seconds) */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The step size in milliseconds used to accumulate audio in the pending audio buffer to be queued (e.g. 5000 ms = 5 seconds)" },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoContext_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to use past transcription (if any) as initial prompt for the decoder */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use past transcription (if any) as initial prompt for the decoder" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSingleSegment_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to force single segment output (useful for streaming) */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to force single segment output (useful for streaming)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTokens_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The maximum number of tokens per text segment (0 = no limit) */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum number of tokens per text segment (0 = no limit)" },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpeedUp_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to speed up the audio by 2x using Phase Vocoder */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to speed up the audio by 2x using Phase Vocoder" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioContextSize_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The size of the audio context (0 = use default) */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of the audio context (0 = use default)" },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureToIncrease_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The temperature to increase when falling back when the decoding fails to meet either of the thresholds below */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The temperature to increase when falling back when the decoding fails to meet either of the thresholds below" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntropyThreshold_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the compression ratio is higher than this value, treat the decoding as failed. Similar to OpenAI's \"compression_ratio_threshold\" */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the compression ratio is higher than this value, treat the decoding as failed. Similar to OpenAI's \"compression_ratio_threshold\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressBlank_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to suppress blanks showing up in outputs */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to suppress blanks showing up in outputs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressNonSpeechTokens_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to suppress non speech tokens in outputs */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to suppress non speech tokens in outputs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamSize_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of beams in beam search, only applicable when temperature is zero */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of beams in beam search, only applicable when temperature is zero" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPrompt_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Optional text to provide as a prompt for the first window\n\x09 * This can be used to provide context for the recognition to make it more likely to predict the words correctly\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerThread.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional text to provide as a prompt for the first window\nThis can be used to provide context for the recognition to make it more likely to predict the words correctly" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfThreads;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Language_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Language;
	static void NewProp_bTranslateToEnglish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslateToEnglish;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StepSizeMs;
	static void NewProp_bNoContext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoContext;
	static void NewProp_bSingleSegment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleSegment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTokens;
	static void NewProp_bSpeedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpeedUp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioContextSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureToIncrease;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EntropyThreshold;
	static void NewProp_bSuppressBlank_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressBlank;
	static void NewProp_bSuppressNonSpeechTokens_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressNonSpeechTokens;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BeamSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InitialPrompt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpeechRecognitionParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_NumOfThreads = { "NumOfThreads", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeechRecognitionParameters, NumOfThreads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOfThreads_MetaData), NewProp_NumOfThreads_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_Language_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeechRecognitionParameters, Language), Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerLanguage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) }; // 1572137747
void Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bTranslateToEnglish_SetBit(void* Obj)
{
	((FSpeechRecognitionParameters*)Obj)->bTranslateToEnglish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bTranslateToEnglish = { "bTranslateToEnglish", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpeechRecognitionParameters), &Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bTranslateToEnglish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTranslateToEnglish_MetaData), NewProp_bTranslateToEnglish_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_StepSizeMs = { "StepSizeMs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeechRecognitionParameters, StepSizeMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSizeMs_MetaData), NewProp_StepSizeMs_MetaData) };
void Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bNoContext_SetBit(void* Obj)
{
	((FSpeechRecognitionParameters*)Obj)->bNoContext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bNoContext = { "bNoContext", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpeechRecognitionParameters), &Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bNoContext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoContext_MetaData), NewProp_bNoContext_MetaData) };
void Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSingleSegment_SetBit(void* Obj)
{
	((FSpeechRecognitionParameters*)Obj)->bSingleSegment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSingleSegment = { "bSingleSegment", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpeechRecognitionParameters), &Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSingleSegment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSingleSegment_MetaData), NewProp_bSingleSegment_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_MaxTokens = { "MaxTokens", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeechRecognitionParameters, MaxTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTokens_MetaData), NewProp_MaxTokens_MetaData) };
void Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSpeedUp_SetBit(void* Obj)
{
	((FSpeechRecognitionParameters*)Obj)->bSpeedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSpeedUp = { "bSpeedUp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpeechRecognitionParameters), &Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSpeedUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpeedUp_MetaData), NewProp_bSpeedUp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_AudioContextSize = { "AudioContextSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeechRecognitionParameters, AudioContextSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioContextSize_MetaData), NewProp_AudioContextSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_TemperatureToIncrease = { "TemperatureToIncrease", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeechRecognitionParameters, TemperatureToIncrease), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemperatureToIncrease_MetaData), NewProp_TemperatureToIncrease_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_EntropyThreshold = { "EntropyThreshold", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeechRecognitionParameters, EntropyThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntropyThreshold_MetaData), NewProp_EntropyThreshold_MetaData) };
void Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSuppressBlank_SetBit(void* Obj)
{
	((FSpeechRecognitionParameters*)Obj)->bSuppressBlank = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSuppressBlank = { "bSuppressBlank", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpeechRecognitionParameters), &Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSuppressBlank_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressBlank_MetaData), NewProp_bSuppressBlank_MetaData) };
void Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSuppressNonSpeechTokens_SetBit(void* Obj)
{
	((FSpeechRecognitionParameters*)Obj)->bSuppressNonSpeechTokens = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSuppressNonSpeechTokens = { "bSuppressNonSpeechTokens", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpeechRecognitionParameters), &Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSuppressNonSpeechTokens_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressNonSpeechTokens_MetaData), NewProp_bSuppressNonSpeechTokens_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_BeamSize = { "BeamSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeechRecognitionParameters, BeamSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamSize_MetaData), NewProp_BeamSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_InitialPrompt = { "InitialPrompt", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpeechRecognitionParameters, InitialPrompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPrompt_MetaData), NewProp_InitialPrompt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_NumOfThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_Language_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bTranslateToEnglish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_StepSizeMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bNoContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSingleSegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_MaxTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSpeedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_AudioContextSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_TemperatureToIncrease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_EntropyThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSuppressBlank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_bSuppressNonSpeechTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_BeamSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewProp_InitialPrompt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizer,
	nullptr,
	&NewStructOps,
	"SpeechRecognitionParameters",
	Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::PropPointers),
	sizeof(FSpeechRecognitionParameters),
	alignof(FSpeechRecognitionParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpeechRecognitionParameters()
{
	if (!Z_Registration_Info_UScriptStruct_SpeechRecognitionParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpeechRecognitionParameters.InnerSingleton, Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpeechRecognitionParameters.InnerSingleton;
}
// End ScriptStruct FSpeechRecognitionParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerThread_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpeechRecognitionParameters::StaticStruct, Z_Construct_UScriptStruct_FSpeechRecognitionParameters_Statics::NewStructOps, TEXT("SpeechRecognitionParameters"), &Z_Registration_Info_UScriptStruct_SpeechRecognitionParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpeechRecognitionParameters), 3073011819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerThread_h_1804439876(TEXT("/Script/RuntimeSpeechRecognizer"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerThread_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerThread_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
