// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeSpeechRecognizer/Public/SpeechRecognizer.h"
#include "RuntimeSpeechRecognizer/Public/SpeechRecognizerThread.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognizer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RUNTIMESPEECHRECOGNIZER_API UClass* Z_Construct_UClass_USpeechRecognizer();
RUNTIMESPEECHRECOGNIZER_API UClass* Z_Construct_UClass_USpeechRecognizer_NoRegister();
RUNTIMESPEECHRECOGNIZER_API UEnum* Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerLanguage();
RUNTIMESPEECHRECOGNIZER_API UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature();
RUNTIMESPEECHRECOGNIZER_API UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionFinishedDynamic__DelegateSignature();
RUNTIMESPEECHRECOGNIZER_API UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature();
RUNTIMESPEECHRECOGNIZER_API UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature();
RUNTIMESPEECHRECOGNIZER_API UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStoppedDynamic__DelegateSignature();
RUNTIMESPEECHRECOGNIZER_API UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature();
RUNTIMESPEECHRECOGNIZER_API UScriptStruct* Z_Construct_UScriptStruct_FSpeechRecognitionParameters();
UPackage* Z_Construct_UPackage__Script_RuntimeSpeechRecognizer();
// End Cross Module References

// Begin Delegate FOnSpeechRecognitionStartedDynamic
struct Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics
{
	struct _Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionStartedDynamic_Parms
	{
		bool bSucceeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate for speech recognition started */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate for speech recognition started" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionStartedDynamic_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionStartedDynamic_Parms), &Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics::NewProp_bSucceeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizer, nullptr, "OnSpeechRecognitionStartedDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics::_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionStartedDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics::_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionStartedDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSpeechRecognitionStartedDynamic_DelegateWrapper(const FScriptDelegate& OnSpeechRecognitionStartedDynamic, bool bSucceeded)
{
	struct _Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionStartedDynamic_Parms
	{
		bool bSucceeded;
	};
	_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionStartedDynamic_Parms Parms;
	Parms.bSucceeded=bSucceeded ? true : false;
	OnSpeechRecognitionStartedDynamic.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnSpeechRecognitionStartedDynamic

// Begin Delegate FOnSpeechRecognitionFinishedDynamic
struct Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionFinishedDynamic__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate for speech recognition finished */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate for speech recognition finished" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionFinishedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizer, nullptr, "OnSpeechRecognitionFinishedDynamic__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionFinishedDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionFinishedDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionFinishedDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionFinishedDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSpeechRecognitionFinishedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnSpeechRecognitionFinishedDynamic)
{
	OnSpeechRecognitionFinishedDynamic.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnSpeechRecognitionFinishedDynamic

// Begin Delegate FOnSpeechRecognizedTextSegmentDynamic
struct Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature_Statics
{
	struct _Script_RuntimeSpeechRecognizer_eventOnSpeechRecognizedTextSegmentDynamic_Parms
	{
		FString RecognizedWords;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate for recognized words */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate for recognized words" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecognizedWords_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RecognizedWords;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature_Statics::NewProp_RecognizedWords = { "RecognizedWords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognizedTextSegmentDynamic_Parms, RecognizedWords), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecognizedWords_MetaData), NewProp_RecognizedWords_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature_Statics::NewProp_RecognizedWords,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizer, nullptr, "OnSpeechRecognizedTextSegmentDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature_Statics::_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognizedTextSegmentDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature_Statics::_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognizedTextSegmentDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSpeechRecognizedTextSegmentDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnSpeechRecognizedTextSegmentDynamic, const FString& RecognizedWords)
{
	struct _Script_RuntimeSpeechRecognizer_eventOnSpeechRecognizedTextSegmentDynamic_Parms
	{
		FString RecognizedWords;
	};
	_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognizedTextSegmentDynamic_Parms Parms;
	Parms.RecognizedWords=RecognizedWords;
	OnSpeechRecognizedTextSegmentDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSpeechRecognizedTextSegmentDynamic

// Begin Delegate FOnSpeechRecognitionErrorDynamic
struct Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics
{
	struct _Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionErrorDynamic_Parms
	{
		FString ShortErrorMessage;
		FString LongErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate for speech recognition errors */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate for speech recognition errors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LongErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShortErrorMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LongErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics::NewProp_ShortErrorMessage = { "ShortErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionErrorDynamic_Parms, ShortErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortErrorMessage_MetaData), NewProp_ShortErrorMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics::NewProp_LongErrorMessage = { "LongErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionErrorDynamic_Parms, LongErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LongErrorMessage_MetaData), NewProp_LongErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics::NewProp_ShortErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics::NewProp_LongErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizer, nullptr, "OnSpeechRecognitionErrorDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics::_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionErrorDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics::_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionErrorDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSpeechRecognitionErrorDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnSpeechRecognitionErrorDynamic, const FString& ShortErrorMessage, const FString& LongErrorMessage)
{
	struct _Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionErrorDynamic_Parms
	{
		FString ShortErrorMessage;
		FString LongErrorMessage;
	};
	_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionErrorDynamic_Parms Parms;
	Parms.ShortErrorMessage=ShortErrorMessage;
	Parms.LongErrorMessage=LongErrorMessage;
	OnSpeechRecognitionErrorDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSpeechRecognitionErrorDynamic

// Begin Delegate FOnSpeechRecognitionProgressDynamic
struct Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature_Statics
{
	struct _Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionProgressDynamic_Parms
	{
		int32 Progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate for speech recognition progress */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate for speech recognition progress" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionProgressDynamic_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizer, nullptr, "OnSpeechRecognitionProgressDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature_Statics::_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionProgressDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature_Statics::_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionProgressDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSpeechRecognitionProgressDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnSpeechRecognitionProgressDynamic, int32 Progress)
{
	struct _Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionProgressDynamic_Parms
	{
		int32 Progress;
	};
	_Script_RuntimeSpeechRecognizer_eventOnSpeechRecognitionProgressDynamic_Parms Parms;
	Parms.Progress=Progress;
	OnSpeechRecognitionProgressDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSpeechRecognitionProgressDynamic

// Begin Delegate FOnSpeechRecognitionStoppedDynamic
struct Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStoppedDynamic__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate for speech recognition thread fully stopped */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate for speech recognition thread fully stopped" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStoppedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizer, nullptr, "OnSpeechRecognitionStoppedDynamic__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStoppedDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStoppedDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStoppedDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStoppedDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSpeechRecognitionStoppedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnSpeechRecognitionStoppedDynamic)
{
	OnSpeechRecognitionStoppedDynamic.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnSpeechRecognitionStoppedDynamic

// Begin Class USpeechRecognizer Function ClearAudioData
struct Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics
{
	struct SpeechRecognizer_eventClearAudioData_Parms
	{
		bool bClearPendingAudioData;
		bool bClearAudioQueue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Process" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clears the audio data that was queued before but not yet processed\n\x09 *\n\x09 * @param bClearPendingAudioData Whether to clear the pending audio data or not\n\x09 * @param bClearAudioQueue Whether to clear the audio queue or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the audio data that was queued before but not yet processed\n\n@param bClearPendingAudioData Whether to clear the pending audio data or not\n@param bClearAudioQueue Whether to clear the audio queue or not" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bClearPendingAudioData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearPendingAudioData;
	static void NewProp_bClearAudioQueue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearAudioQueue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::NewProp_bClearPendingAudioData_SetBit(void* Obj)
{
	((SpeechRecognizer_eventClearAudioData_Parms*)Obj)->bClearPendingAudioData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::NewProp_bClearPendingAudioData = { "bClearPendingAudioData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventClearAudioData_Parms), &Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::NewProp_bClearPendingAudioData_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::NewProp_bClearAudioQueue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventClearAudioData_Parms*)Obj)->bClearAudioQueue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::NewProp_bClearAudioQueue = { "bClearAudioQueue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventClearAudioData_Parms), &Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::NewProp_bClearAudioQueue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::NewProp_bClearPendingAudioData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::NewProp_bClearAudioQueue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "ClearAudioData", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::SpeechRecognizer_eventClearAudioData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::SpeechRecognizer_eventClearAudioData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_ClearAudioData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_ClearAudioData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execClearAudioData)
{
	P_GET_UBOOL(Z_Param_bClearPendingAudioData);
	P_GET_UBOOL(Z_Param_bClearAudioQueue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAudioData(Z_Param_bClearPendingAudioData,Z_Param_bClearAudioQueue);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function ClearAudioData

// Begin Class USpeechRecognizer Function CreateSpeechRecognizer
struct Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer_Statics
{
	struct SpeechRecognizer_eventCreateSpeechRecognizer_Parms
	{
		USpeechRecognizer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Create" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates an instance of the speech recognizer\n\x09 *\n\x09 * @return Created speech recognizer\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an instance of the speech recognizer\n\n@return Created speech recognizer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventCreateSpeechRecognizer_Parms, ReturnValue), Z_Construct_UClass_USpeechRecognizer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "CreateSpeechRecognizer", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer_Statics::SpeechRecognizer_eventCreateSpeechRecognizer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer_Statics::SpeechRecognizer_eventCreateSpeechRecognizer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execCreateSpeechRecognizer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USpeechRecognizer**)Z_Param__Result=USpeechRecognizer::CreateSpeechRecognizer();
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function CreateSpeechRecognizer

// Begin Class USpeechRecognizer Function ForceProcessPendingAudioData
struct Z_Construct_UFunction_USpeechRecognizer_ForceProcessPendingAudioData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Process" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Processes audio data that was queued before but not yet processed, especially useful when using step size functionality\n\x09 * This function ensures all audio data is processed, even if it did not fit into the step size yet\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Processes audio data that was queued before but not yet processed, especially useful when using step size functionality\nThis function ensures all audio data is processed, even if it did not fit into the step size yet" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_ForceProcessPendingAudioData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "ForceProcessPendingAudioData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_ForceProcessPendingAudioData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_ForceProcessPendingAudioData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USpeechRecognizer_ForceProcessPendingAudioData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_ForceProcessPendingAudioData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execForceProcessPendingAudioData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceProcessPendingAudioData();
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function ForceProcessPendingAudioData

// Begin Class USpeechRecognizer Function GetIsFinished
struct Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics
{
	struct SpeechRecognizer_eventGetIsFinished_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether all the audio data has been processed or not\n\x09 *\n\x09 * @return True if all the audio data has been processed, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether all the audio data has been processed or not\n\n@return True if all the audio data has been processed, false otherwise" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventGetIsFinished_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventGetIsFinished_Parms), &Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "GetIsFinished", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics::SpeechRecognizer_eventGetIsFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics::SpeechRecognizer_eventGetIsFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_GetIsFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_GetIsFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execGetIsFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsFinished();
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function GetIsFinished

// Begin Class USpeechRecognizer Function GetIsStopped
struct Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics
{
	struct SpeechRecognizer_eventGetIsStopped_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether the thread worker is stopped or not\n\x09 *\n\x09 * @return True if the thread worker is stopped, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the thread worker is stopped or not\n\n@return True if the thread worker is stopped, false otherwise" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventGetIsStopped_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventGetIsStopped_Parms), &Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "GetIsStopped", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics::SpeechRecognizer_eventGetIsStopped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics::SpeechRecognizer_eventGetIsStopped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_GetIsStopped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_GetIsStopped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execGetIsStopped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsStopped();
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function GetIsStopped

// Begin Class USpeechRecognizer Function GetIsStopping
struct Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics
{
	struct SpeechRecognizer_eventGetIsStopping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether the speech recognition is currently stopping (but not yet stopped) or not\n\x09 * It is set to true when the StopSpeechRecognition function is called, and set to false when the thread worker is fully stopped\n\x09 * \n\x09 * @return True if the speech recognition is currently stopping, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the speech recognition is currently stopping (but not yet stopped) or not\nIt is set to true when the StopSpeechRecognition function is called, and set to false when the thread worker is fully stopped\n\n@return True if the speech recognition is currently stopping, false otherwise" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventGetIsStopping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventGetIsStopping_Parms), &Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "GetIsStopping", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics::SpeechRecognizer_eventGetIsStopping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics::SpeechRecognizer_eventGetIsStopping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_GetIsStopping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_GetIsStopping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execGetIsStopping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsStopping();
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function GetIsStopping

// Begin Class USpeechRecognizer Function GetNonStreamingDefaults
struct Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults_Statics
{
	struct SpeechRecognizer_eventGetNonStreamingDefaults_Parms
	{
		FSpeechRecognitionParameters ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Getters|All" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the default parameters suitable for non-streaming speech recognition\n\x09 * @return The default parameters suitable for non-streaming speech recognition\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the default parameters suitable for non-streaming speech recognition\n@return The default parameters suitable for non-streaming speech recognition" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventGetNonStreamingDefaults_Parms, ReturnValue), Z_Construct_UScriptStruct_FSpeechRecognitionParameters, METADATA_PARAMS(0, nullptr) }; // 3073011819
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "GetNonStreamingDefaults", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults_Statics::SpeechRecognizer_eventGetNonStreamingDefaults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults_Statics::SpeechRecognizer_eventGetNonStreamingDefaults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execGetNonStreamingDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSpeechRecognitionParameters*)Z_Param__Result=USpeechRecognizer::GetNonStreamingDefaults();
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function GetNonStreamingDefaults

// Begin Class USpeechRecognizer Function GetRecognitionParameters
struct Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters_Statics
{
	struct SpeechRecognizer_eventGetRecognitionParameters_Parms
	{
		FSpeechRecognitionParameters ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Getters|All" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the current recognition parameters\n\x09 * @return The current recognition parameters\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current recognition parameters\n@return The current recognition parameters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventGetRecognitionParameters_Parms, ReturnValue), Z_Construct_UScriptStruct_FSpeechRecognitionParameters, METADATA_PARAMS(0, nullptr) }; // 3073011819
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "GetRecognitionParameters", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters_Statics::SpeechRecognizer_eventGetRecognitionParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters_Statics::SpeechRecognizer_eventGetRecognitionParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execGetRecognitionParameters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSpeechRecognitionParameters*)Z_Param__Result=P_THIS->GetRecognitionParameters();
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function GetRecognitionParameters

// Begin Class USpeechRecognizer Function GetStreamingDefaults
struct Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults_Statics
{
	struct SpeechRecognizer_eventGetStreamingDefaults_Parms
	{
		FSpeechRecognitionParameters ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Getters|All" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the default parameters suitable for streaming speech recognition\n\x09 * @return The default parameters suitable for streaming speech recognition\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the default parameters suitable for streaming speech recognition\n@return The default parameters suitable for streaming speech recognition" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventGetStreamingDefaults_Parms, ReturnValue), Z_Construct_UScriptStruct_FSpeechRecognitionParameters, METADATA_PARAMS(0, nullptr) }; // 3073011819
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "GetStreamingDefaults", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults_Statics::SpeechRecognizer_eventGetStreamingDefaults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults_Statics::SpeechRecognizer_eventGetStreamingDefaults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execGetStreamingDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSpeechRecognitionParameters*)Z_Param__Result=USpeechRecognizer::GetStreamingDefaults();
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function GetStreamingDefaults

// Begin Class USpeechRecognizer Function ProcessAudioData
struct Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics
{
	struct SpeechRecognizer_eventProcessAudioData_Parms
	{
		TArray<float> PCMData;
		float SampleRate;
		int32 NumOfChannels;
		bool bLast;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Process" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Processes the audio data and recognizes the words\n\x09 *\n\x09 * @param PCMData PCM audio data in 32-bit floating point interleaved format\n\x09 * @param SampleRate The sample rate of the audio data\n\x09 * @param NumOfChannels The number of channels in the audio data\n\x09 * @param bLast Whether this is the last audio data to process. If true, the audio data will be queued for processing even if the enabled step size is not reached\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Processes the audio data and recognizes the words\n\n@param PCMData PCM audio data in 32-bit floating point interleaved format\n@param SampleRate The sample rate of the audio data\n@param NumOfChannels The number of channels in the audio data\n@param bLast Whether this is the last audio data to process. If true, the audio data will be queued for processing even if the enabled step size is not reached" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PCMData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PCMData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfChannels;
	static void NewProp_bLast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLast;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::NewProp_PCMData_Inner = { "PCMData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::NewProp_PCMData = { "PCMData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventProcessAudioData_Parms, PCMData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventProcessAudioData_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::NewProp_NumOfChannels = { "NumOfChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventProcessAudioData_Parms, NumOfChannels), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::NewProp_bLast_SetBit(void* Obj)
{
	((SpeechRecognizer_eventProcessAudioData_Parms*)Obj)->bLast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::NewProp_bLast = { "bLast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventProcessAudioData_Parms), &Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::NewProp_bLast_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::NewProp_PCMData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::NewProp_PCMData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::NewProp_NumOfChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::NewProp_bLast,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "ProcessAudioData", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::SpeechRecognizer_eventProcessAudioData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::SpeechRecognizer_eventProcessAudioData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execProcessAudioData)
{
	P_GET_TARRAY(float,Z_Param_PCMData);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumOfChannels);
	P_GET_UBOOL(Z_Param_bLast);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessAudioData(Z_Param_PCMData,Z_Param_SampleRate,Z_Param_NumOfChannels,Z_Param_bLast);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function ProcessAudioData

// Begin Class USpeechRecognizer Function SetAudioContextSize
struct Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics
{
	struct SpeechRecognizer_eventSetAudioContextSize_Parms
	{
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the size of the audio context\n\x09 *\n\x09 * @param Value The size of the audio context\n\x09 * @return True if the setting was set successfully, false otherwise\n\x09 * @note Can only be called when the thread is stopped\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the size of the audio context\n\n@param Value The size of the audio context\n@return True if the setting was set successfully, false otherwise\n@note Can only be called when the thread is stopped" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventSetAudioContextSize_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetAudioContextSize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetAudioContextSize_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetAudioContextSize", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::SpeechRecognizer_eventSetAudioContextSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::SpeechRecognizer_eventSetAudioContextSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetAudioContextSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAudioContextSize(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetAudioContextSize

// Begin Class USpeechRecognizer Function SetBeamSize
struct Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics
{
	struct SpeechRecognizer_eventSetBeamSize_Parms
	{
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the number of beams in beam search. Only applicable when temperature is zero\n\x09 * \n\x09 * @param Value The number of beams in beam search\n\x09 * @return True if the setting was set successfully, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the number of beams in beam search. Only applicable when temperature is zero\n\n@param Value The number of beams in beam search\n@return True if the setting was set successfully, false otherwise" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventSetBeamSize_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetBeamSize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetBeamSize_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetBeamSize", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::SpeechRecognizer_eventSetBeamSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::SpeechRecognizer_eventSetBeamSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetBeamSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetBeamSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetBeamSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetBeamSize(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetBeamSize

// Begin Class USpeechRecognizer Function SetEntropyThreshold
struct Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics
{
	struct SpeechRecognizer_eventSetEntropyThreshold_Parms
	{
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the entropy threshold\n\x09 * If the compression ratio is higher than this value, treat the decoding as failed. Similar to OpenAI's \"compression_ratio_threshold\"\n\x09 *\n\x09 * @param Value The entropy threshold\n\x09 * @return True if the setting was set successfully, false otherwise\n\x09 * @note Can only be called when the thread is stopped\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the entropy threshold\nIf the compression ratio is higher than this value, treat the decoding as failed. Similar to OpenAI's \"compression_ratio_threshold\"\n\n@param Value The entropy threshold\n@return True if the setting was set successfully, false otherwise\n@note Can only be called when the thread is stopped" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventSetEntropyThreshold_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetEntropyThreshold_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetEntropyThreshold_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetEntropyThreshold", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::SpeechRecognizer_eventSetEntropyThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::SpeechRecognizer_eventSetEntropyThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetEntropyThreshold)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetEntropyThreshold(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetEntropyThreshold

// Begin Class USpeechRecognizer Function SetInitialPrompt
struct Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics
{
	struct SpeechRecognizer_eventSetInitialPrompt_Parms
	{
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the initial prompt for the first window\n\x09 * This can be used to provide context for the recognition to make it more likely to predict the words correctly\n\x09 * \n\x09 * @param Value The initial prompt for the first window\n\x09 * @return True if the setting was set successfully, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the initial prompt for the first window\nThis can be used to provide context for the recognition to make it more likely to predict the words correctly\n\n@param Value The initial prompt for the first window\n@return True if the setting was set successfully, false otherwise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventSetInitialPrompt_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetInitialPrompt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetInitialPrompt_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetInitialPrompt", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::SpeechRecognizer_eventSetInitialPrompt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::SpeechRecognizer_eventSetInitialPrompt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetInitialPrompt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetInitialPrompt(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetInitialPrompt

// Begin Class USpeechRecognizer Function SetLanguage
struct Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics
{
	struct SpeechRecognizer_eventSetLanguage_Parms
	{
		ESpeechRecognizerLanguage Language;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the language to use for speech recognition\n\x09 *\n\x09 * @param Language The language to use. Must be supported by the selected language model in the Editor settings\n\x09 * @return True if the language was successfully set, false otherwise\n\x09 * @note Can only be called when the thread worker is stopped\n\x09 * @note Setting the language to Auto will decrease the recognition accuracy and performance\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the language to use for speech recognition\n\n@param Language The language to use. Must be supported by the selected language model in the Editor settings\n@return True if the language was successfully set, false otherwise\n@note Can only be called when the thread worker is stopped\n@note Setting the language to Auto will decrease the recognition accuracy and performance" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Language_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Language;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::NewProp_Language_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventSetLanguage_Parms, Language), Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerLanguage, METADATA_PARAMS(0, nullptr) }; // 1572137747
void Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetLanguage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetLanguage_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::NewProp_Language_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetLanguage", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::SpeechRecognizer_eventSetLanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::SpeechRecognizer_eventSetLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetLanguage)
{
	P_GET_ENUM(ESpeechRecognizerLanguage,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetLanguage(ESpeechRecognizerLanguage(Z_Param_Language));
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetLanguage

// Begin Class USpeechRecognizer Function SetMaxTokens
struct Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics
{
	struct SpeechRecognizer_eventSetMaxTokens_Parms
	{
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the maximum number of tokens per text segment (0 = no limit)\n\x09 *\n\x09 * @param Value The maximum number of tokens per text segment (0 = no limit)\n\x09 * @return True if the setting was set successfully, false otherwise\n\x09 * @note Can only be called when the thread is stopped\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the maximum number of tokens per text segment (0 = no limit)\n\n@param Value The maximum number of tokens per text segment (0 = no limit)\n@return True if the setting was set successfully, false otherwise\n@note Can only be called when the thread is stopped" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventSetMaxTokens_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetMaxTokens_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetMaxTokens_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetMaxTokens", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::SpeechRecognizer_eventSetMaxTokens_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::SpeechRecognizer_eventSetMaxTokens_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetMaxTokens)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetMaxTokens(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetMaxTokens

// Begin Class USpeechRecognizer Function SetNoContext
struct Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics
{
	struct SpeechRecognizer_eventSetNoContext_Parms
	{
		bool bNoContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether to use past transcription (if any) as initial prompt for the decoder\n\x09 *\n\x09 * @param bNoContext Whether to use past transcription (if any) as initial prompt for the decoder\n\x09 * @return True if the setting was set successfully, false otherwise\n\x09 * @note Can only be called when the thread is stopped\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to use past transcription (if any) as initial prompt for the decoder\n\n@param bNoContext Whether to use past transcription (if any) as initial prompt for the decoder\n@return True if the setting was set successfully, false otherwise\n@note Can only be called when the thread is stopped" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bNoContext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::NewProp_bNoContext_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetNoContext_Parms*)Obj)->bNoContext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::NewProp_bNoContext = { "bNoContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetNoContext_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::NewProp_bNoContext_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetNoContext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetNoContext_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::NewProp_bNoContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetNoContext", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::SpeechRecognizer_eventSetNoContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::SpeechRecognizer_eventSetNoContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetNoContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetNoContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetNoContext)
{
	P_GET_UBOOL(Z_Param_bNoContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNoContext(Z_Param_bNoContext);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetNoContext

// Begin Class USpeechRecognizer Function SetNonStreamingDefaults
struct Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics
{
	struct SpeechRecognizer_eventSetNonStreamingDefaults_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|All" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the default parameters suitable for non-streaming speech recognition\n\x09 *\n\x09 * @return True if the parameters were set successfully, false otherwise\n\x09 * @note Can only be called when the thread worker is stopped\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the default parameters suitable for non-streaming speech recognition\n\n@return True if the parameters were set successfully, false otherwise\n@note Can only be called when the thread worker is stopped" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetNonStreamingDefaults_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetNonStreamingDefaults_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetNonStreamingDefaults", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics::SpeechRecognizer_eventSetNonStreamingDefaults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics::SpeechRecognizer_eventSetNonStreamingDefaults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetNonStreamingDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNonStreamingDefaults();
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetNonStreamingDefaults

// Begin Class USpeechRecognizer Function SetNumOfThreads
struct Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics
{
	struct SpeechRecognizer_eventSetNumOfThreads_Parms
	{
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the number of threads to use for speech recognition\n\x09 *\n\x09 * @param Value The number of threads to use\n\x09 * @return True if the number of threads was set successfully, false otherwise\n\x09 * @note Can only be called when the thread is stopped\n\x09 * @note Set this value to 0 to use the number of cores\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the number of threads to use for speech recognition\n\n@param Value The number of threads to use\n@return True if the number of threads was set successfully, false otherwise\n@note Can only be called when the thread is stopped\n@note Set this value to 0 to use the number of cores" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventSetNumOfThreads_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetNumOfThreads_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetNumOfThreads_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetNumOfThreads", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::SpeechRecognizer_eventSetNumOfThreads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::SpeechRecognizer_eventSetNumOfThreads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetNumOfThreads)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNumOfThreads(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetNumOfThreads

// Begin Class USpeechRecognizer Function SetRecognitionParameters
struct Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics
{
	struct SpeechRecognizer_eventSetRecognitionParameters_Parms
	{
		FSpeechRecognitionParameters Parameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|All" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the parameters for speech recognition. If you want to change only specific parameters, consider using the individual setter functions\n\x09 *\n\x09 * @param Parameters The parameters to use for speech recognition\n\x09 * @return True if the parameters were set successfully, false otherwise\n\x09 * @note Can only be called when the thread worker is stopped\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the parameters for speech recognition. If you want to change only specific parameters, consider using the individual setter functions\n\n@param Parameters The parameters to use for speech recognition\n@return True if the parameters were set successfully, false otherwise\n@note Can only be called when the thread worker is stopped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventSetRecognitionParameters_Parms, Parameters), Z_Construct_UScriptStruct_FSpeechRecognitionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 3073011819
void Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetRecognitionParameters_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetRecognitionParameters_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetRecognitionParameters", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::SpeechRecognizer_eventSetRecognitionParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::SpeechRecognizer_eventSetRecognitionParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetRecognitionParameters)
{
	P_GET_STRUCT_REF(FSpeechRecognitionParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetRecognitionParameters(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetRecognitionParameters

// Begin Class USpeechRecognizer Function SetSingleSegment
struct Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics
{
	struct SpeechRecognizer_eventSetSingleSegment_Parms
	{
		bool bSingleSegment;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether to force single segment output (useful for streaming)\n\x09 *\n\x09 * @param bSingleSegment Whether to force single segment output (useful for streaming)\n\x09 * @return True if the setting was set successfully, false otherwise\n\x09 * @note Can only be called when the thread is stopped\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to force single segment output (useful for streaming)\n\n@param bSingleSegment Whether to force single segment output (useful for streaming)\n@return True if the setting was set successfully, false otherwise\n@note Can only be called when the thread is stopped" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSingleSegment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleSegment;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::NewProp_bSingleSegment_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetSingleSegment_Parms*)Obj)->bSingleSegment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::NewProp_bSingleSegment = { "bSingleSegment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetSingleSegment_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::NewProp_bSingleSegment_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetSingleSegment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetSingleSegment_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::NewProp_bSingleSegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetSingleSegment", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::SpeechRecognizer_eventSetSingleSegment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::SpeechRecognizer_eventSetSingleSegment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetSingleSegment)
{
	P_GET_UBOOL(Z_Param_bSingleSegment);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetSingleSegment(Z_Param_bSingleSegment);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetSingleSegment

// Begin Class USpeechRecognizer Function SetSpeedUp
struct Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics
{
	struct SpeechRecognizer_eventSetSpeedUp_Parms
	{
		bool bSpeedUp;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether to speed up the recognition by 2x using Phase Vocoder\n\x09 *\n\x09 * @param bSpeedUp Whether to speed up the recognition by using a smaller model\n\x09 * @return True if the setting was set successfully, false otherwise\n\x09 * @note Can only be called when the thread is stopped\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to speed up the recognition by 2x using Phase Vocoder\n\n@param bSpeedUp Whether to speed up the recognition by using a smaller model\n@return True if the setting was set successfully, false otherwise\n@note Can only be called when the thread is stopped" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSpeedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpeedUp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::NewProp_bSpeedUp_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetSpeedUp_Parms*)Obj)->bSpeedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::NewProp_bSpeedUp = { "bSpeedUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetSpeedUp_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::NewProp_bSpeedUp_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetSpeedUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetSpeedUp_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::NewProp_bSpeedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetSpeedUp", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::SpeechRecognizer_eventSetSpeedUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::SpeechRecognizer_eventSetSpeedUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetSpeedUp)
{
	P_GET_UBOOL(Z_Param_bSpeedUp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetSpeedUp(Z_Param_bSpeedUp);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetSpeedUp

// Begin Class USpeechRecognizer Function SetStepSize
struct Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics
{
	struct SpeechRecognizer_eventSetStepSize_Parms
	{
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the step size in milliseconds. Determines how often to send audio data for recognition.\n\x09 * 5000 ms (5 seconds) is used by default\n\x09 *\n\x09 * @param Value The step size in milliseconds\n\x09 * @return True if the step size was set successfully, false otherwise\n\x09 * @note Can only be called when the thread is stopped\n\x09 * @note Set this value to 0 to disable step size\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the step size in milliseconds. Determines how often to send audio data for recognition.\n5000 ms (5 seconds) is used by default\n\n@param Value The step size in milliseconds\n@return True if the step size was set successfully, false otherwise\n@note Can only be called when the thread is stopped\n@note Set this value to 0 to disable step size" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventSetStepSize_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetStepSize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetStepSize_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetStepSize", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::SpeechRecognizer_eventSetStepSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::SpeechRecognizer_eventSetStepSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetStepSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetStepSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetStepSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetStepSize(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetStepSize

// Begin Class USpeechRecognizer Function SetStreamingDefaults
struct Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics
{
	struct SpeechRecognizer_eventSetStreamingDefaults_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|All" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the default parameters suitable for streaming speech recognition\n\x09 *\n\x09 * @return True if the parameters were set successfully, false otherwise\n\x09 * @note Can only be called when the thread worker is stopped\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the default parameters suitable for streaming speech recognition\n\n@return True if the parameters were set successfully, false otherwise\n@note Can only be called when the thread worker is stopped" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetStreamingDefaults_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetStreamingDefaults_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetStreamingDefaults", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics::SpeechRecognizer_eventSetStreamingDefaults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics::SpeechRecognizer_eventSetStreamingDefaults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetStreamingDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetStreamingDefaults();
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetStreamingDefaults

// Begin Class USpeechRecognizer Function SetSuppressBlank
struct Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics
{
	struct SpeechRecognizer_eventSetSuppressBlank_Parms
	{
		bool Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether to suppress blanks showing up in outputs\n\x09 *\n\x09 * @param Value Whether to suppress blanks showing up in outputs\n\x09 * @return True if the setting was set successfully, false otherwise\n\x09 * @note Can only be called when the thread is stopped\n\x09 * @author https://github.com/amartinz\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to suppress blanks showing up in outputs\n\n@param Value Whether to suppress blanks showing up in outputs\n@return True if the setting was set successfully, false otherwise\n@note Can only be called when the thread is stopped\n@author https://github.com/amartinz" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::NewProp_Value_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetSuppressBlank_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetSuppressBlank_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetSuppressBlank_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetSuppressBlank_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetSuppressBlank", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::SpeechRecognizer_eventSetSuppressBlank_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::SpeechRecognizer_eventSetSuppressBlank_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetSuppressBlank)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetSuppressBlank(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetSuppressBlank

// Begin Class USpeechRecognizer Function SetSuppressNonSpeechTokens
struct Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics
{
	struct SpeechRecognizer_eventSetSuppressNonSpeechTokens_Parms
	{
		bool Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether to suppress non speech tokens showing up in outputs\n\x09 *\n\x09 * @param Value Whether to suppress non speech tokens showing up in outputs\n\x09 * @return True if the setting was set successfully, false otherwise\n\x09 * @note Can only be called when the thread is stopped\n\x09 * @author https://github.com/amartinz\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to suppress non speech tokens showing up in outputs\n\n@param Value Whether to suppress non speech tokens showing up in outputs\n@return True if the setting was set successfully, false otherwise\n@note Can only be called when the thread is stopped\n@author https://github.com/amartinz" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::NewProp_Value_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetSuppressNonSpeechTokens_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetSuppressNonSpeechTokens_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetSuppressNonSpeechTokens_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetSuppressNonSpeechTokens_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetSuppressNonSpeechTokens", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::SpeechRecognizer_eventSetSuppressNonSpeechTokens_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::SpeechRecognizer_eventSetSuppressNonSpeechTokens_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetSuppressNonSpeechTokens)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetSuppressNonSpeechTokens(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetSuppressNonSpeechTokens

// Begin Class USpeechRecognizer Function SetTemperatureToIncrease
struct Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics
{
	struct SpeechRecognizer_eventSetTemperatureToIncrease_Parms
	{
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the temperature to increase when falling back when the decoding fails to meet either of the thresholds below\n\x09 *\n\x09 * @param Value The temperature to increase when falling back when the decoding fails to meet either of the thresholds below\n\x09 * @return True if the setting was set successfully, false otherwise\n\x09 * @note Can only be called when the thread is stopped\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the temperature to increase when falling back when the decoding fails to meet either of the thresholds below\n\n@param Value The temperature to increase when falling back when the decoding fails to meet either of the thresholds below\n@return True if the setting was set successfully, false otherwise\n@note Can only be called when the thread is stopped" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventSetTemperatureToIncrease_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetTemperatureToIncrease_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetTemperatureToIncrease_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetTemperatureToIncrease", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::SpeechRecognizer_eventSetTemperatureToIncrease_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::SpeechRecognizer_eventSetTemperatureToIncrease_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetTemperatureToIncrease)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTemperatureToIncrease(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetTemperatureToIncrease

// Begin Class USpeechRecognizer Function SetTranslateToEnglish
struct Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics
{
	struct SpeechRecognizer_eventSetTranslateToEnglish_Parms
	{
		bool bTranslate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Setters|Individual" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets whether to translate the recognized words to English\n\x09 *\n\x09 * @param bTranslate Whether to translate the recognized words to English or not. If true, the language model must be multilingual\n\x09 * @return True if the translation was successfully set, false otherwise\n\x09 * @note Can only be called when the thread worker is stopped\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to translate the recognized words to English\n\n@param bTranslate Whether to translate the recognized words to English or not. If true, the language model must be multilingual\n@return True if the translation was successfully set, false otherwise\n@note Can only be called when the thread worker is stopped" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bTranslate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::NewProp_bTranslate_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetTranslateToEnglish_Parms*)Obj)->bTranslate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::NewProp_bTranslate = { "bTranslate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetTranslateToEnglish_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::NewProp_bTranslate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpeechRecognizer_eventSetTranslateToEnglish_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpeechRecognizer_eventSetTranslateToEnglish_Parms), &Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::NewProp_bTranslate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "SetTranslateToEnglish", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::SpeechRecognizer_eventSetTranslateToEnglish_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::SpeechRecognizer_eventSetTranslateToEnglish_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execSetTranslateToEnglish)
{
	P_GET_UBOOL(Z_Param_bTranslate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTranslateToEnglish(Z_Param_bTranslate);
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function SetTranslateToEnglish

// Begin Class USpeechRecognizer Function StartSpeechRecognition
struct Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition_Statics
{
	struct SpeechRecognizer_eventStartSpeechRecognition_Parms
	{
		FScriptDelegate OnStarted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts the speech recognition. Ensure that all the needed parameters are set before calling this function\n\x09 *\n\x09 * @return True if the speech recognition was started successfully, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts the speech recognition. Ensure that all the needed parameters are set before calling this function\n\n@return True if the speech recognition was started successfully, false otherwise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStarted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnStarted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition_Statics::NewProp_OnStarted = { "OnStarted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizer_eventStartSpeechRecognition_Parms, OnStarted), Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStarted_MetaData), NewProp_OnStarted_MetaData) }; // 1436496255
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition_Statics::NewProp_OnStarted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "StartSpeechRecognition", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition_Statics::SpeechRecognizer_eventStartSpeechRecognition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition_Statics::SpeechRecognizer_eventStartSpeechRecognition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execStartSpeechRecognition)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnStarted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSpeechRecognition(FOnSpeechRecognitionStartedDynamic(Z_Param_Out_OnStarted));
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function StartSpeechRecognition

// Begin Class USpeechRecognizer Function StopSpeechRecognition
struct Z_Construct_UFunction_USpeechRecognizer_StopSpeechRecognition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Speech Recognizer|Main" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops the speech recognition. The speech recognition can be started again after calling this function\n\x09 *\n\x09 * @return True if the speech recognition was stopped successfully, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops the speech recognition. The speech recognition can be started again after calling this function\n\n@return True if the speech recognition was stopped successfully, false otherwise" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizer_StopSpeechRecognition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizer, nullptr, "StopSpeechRecognition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizer_StopSpeechRecognition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizer_StopSpeechRecognition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USpeechRecognizer_StopSpeechRecognition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizer_StopSpeechRecognition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizer::execStopSpeechRecognition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSpeechRecognition();
	P_NATIVE_END;
}
// End Class USpeechRecognizer Function StopSpeechRecognition

// Begin Class USpeechRecognizer
void USpeechRecognizer::StaticRegisterNativesUSpeechRecognizer()
{
	UClass* Class = USpeechRecognizer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAudioData", &USpeechRecognizer::execClearAudioData },
		{ "CreateSpeechRecognizer", &USpeechRecognizer::execCreateSpeechRecognizer },
		{ "ForceProcessPendingAudioData", &USpeechRecognizer::execForceProcessPendingAudioData },
		{ "GetIsFinished", &USpeechRecognizer::execGetIsFinished },
		{ "GetIsStopped", &USpeechRecognizer::execGetIsStopped },
		{ "GetIsStopping", &USpeechRecognizer::execGetIsStopping },
		{ "GetNonStreamingDefaults", &USpeechRecognizer::execGetNonStreamingDefaults },
		{ "GetRecognitionParameters", &USpeechRecognizer::execGetRecognitionParameters },
		{ "GetStreamingDefaults", &USpeechRecognizer::execGetStreamingDefaults },
		{ "ProcessAudioData", &USpeechRecognizer::execProcessAudioData },
		{ "SetAudioContextSize", &USpeechRecognizer::execSetAudioContextSize },
		{ "SetBeamSize", &USpeechRecognizer::execSetBeamSize },
		{ "SetEntropyThreshold", &USpeechRecognizer::execSetEntropyThreshold },
		{ "SetInitialPrompt", &USpeechRecognizer::execSetInitialPrompt },
		{ "SetLanguage", &USpeechRecognizer::execSetLanguage },
		{ "SetMaxTokens", &USpeechRecognizer::execSetMaxTokens },
		{ "SetNoContext", &USpeechRecognizer::execSetNoContext },
		{ "SetNonStreamingDefaults", &USpeechRecognizer::execSetNonStreamingDefaults },
		{ "SetNumOfThreads", &USpeechRecognizer::execSetNumOfThreads },
		{ "SetRecognitionParameters", &USpeechRecognizer::execSetRecognitionParameters },
		{ "SetSingleSegment", &USpeechRecognizer::execSetSingleSegment },
		{ "SetSpeedUp", &USpeechRecognizer::execSetSpeedUp },
		{ "SetStepSize", &USpeechRecognizer::execSetStepSize },
		{ "SetStreamingDefaults", &USpeechRecognizer::execSetStreamingDefaults },
		{ "SetSuppressBlank", &USpeechRecognizer::execSetSuppressBlank },
		{ "SetSuppressNonSpeechTokens", &USpeechRecognizer::execSetSuppressNonSpeechTokens },
		{ "SetTemperatureToIncrease", &USpeechRecognizer::execSetTemperatureToIncrease },
		{ "SetTranslateToEnglish", &USpeechRecognizer::execSetTranslateToEnglish },
		{ "StartSpeechRecognition", &USpeechRecognizer::execStartSpeechRecognition },
		{ "StopSpeechRecognition", &USpeechRecognizer::execStopSpeechRecognition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpeechRecognizer);
UClass* Z_Construct_UClass_USpeechRecognizer_NoRegister()
{
	return USpeechRecognizer::StaticClass();
}
struct Z_Construct_UClass_USpeechRecognizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a speech recognizer that can recognize spoken words\n */" },
#endif
		{ "IncludePath", "SpeechRecognizer.h" },
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a speech recognizer that can recognize spoken words" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRecognitionFinished_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer|Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcast when all the audio data has been processed */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcast when all the audio data has been processed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRecognizedTextSegment_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer|Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcast when recognized words are received */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcast when recognized words are received" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRecognitionError_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer|Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcast when an error occurs during speech recognition */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcast when an error occurs during speech recognition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRecognitionProgress_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer|Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcast when the speech recognition progress obtained */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcast when the speech recognition progress obtained" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRecognitionStopped_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer|Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dynamic delegate broadcast when the speech recognition thread is fully stopped */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic delegate broadcast when the speech recognition thread is fully stopped" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecognitionFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecognizedTextSegment;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecognitionError;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecognitionProgress;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecognitionStopped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpeechRecognizer_ClearAudioData, "ClearAudioData" }, // 2547497746
		{ &Z_Construct_UFunction_USpeechRecognizer_CreateSpeechRecognizer, "CreateSpeechRecognizer" }, // 731493325
		{ &Z_Construct_UFunction_USpeechRecognizer_ForceProcessPendingAudioData, "ForceProcessPendingAudioData" }, // 2817653882
		{ &Z_Construct_UFunction_USpeechRecognizer_GetIsFinished, "GetIsFinished" }, // 2934024648
		{ &Z_Construct_UFunction_USpeechRecognizer_GetIsStopped, "GetIsStopped" }, // 4104830966
		{ &Z_Construct_UFunction_USpeechRecognizer_GetIsStopping, "GetIsStopping" }, // 712968716
		{ &Z_Construct_UFunction_USpeechRecognizer_GetNonStreamingDefaults, "GetNonStreamingDefaults" }, // 378054693
		{ &Z_Construct_UFunction_USpeechRecognizer_GetRecognitionParameters, "GetRecognitionParameters" }, // 2906433935
		{ &Z_Construct_UFunction_USpeechRecognizer_GetStreamingDefaults, "GetStreamingDefaults" }, // 2915289939
		{ &Z_Construct_UFunction_USpeechRecognizer_ProcessAudioData, "ProcessAudioData" }, // 776838439
		{ &Z_Construct_UFunction_USpeechRecognizer_SetAudioContextSize, "SetAudioContextSize" }, // 3382234863
		{ &Z_Construct_UFunction_USpeechRecognizer_SetBeamSize, "SetBeamSize" }, // 4133236592
		{ &Z_Construct_UFunction_USpeechRecognizer_SetEntropyThreshold, "SetEntropyThreshold" }, // 1007443246
		{ &Z_Construct_UFunction_USpeechRecognizer_SetInitialPrompt, "SetInitialPrompt" }, // 2912119002
		{ &Z_Construct_UFunction_USpeechRecognizer_SetLanguage, "SetLanguage" }, // 2037664178
		{ &Z_Construct_UFunction_USpeechRecognizer_SetMaxTokens, "SetMaxTokens" }, // 14544058
		{ &Z_Construct_UFunction_USpeechRecognizer_SetNoContext, "SetNoContext" }, // 2085044946
		{ &Z_Construct_UFunction_USpeechRecognizer_SetNonStreamingDefaults, "SetNonStreamingDefaults" }, // 2900263020
		{ &Z_Construct_UFunction_USpeechRecognizer_SetNumOfThreads, "SetNumOfThreads" }, // 1034495816
		{ &Z_Construct_UFunction_USpeechRecognizer_SetRecognitionParameters, "SetRecognitionParameters" }, // 3268514956
		{ &Z_Construct_UFunction_USpeechRecognizer_SetSingleSegment, "SetSingleSegment" }, // 3331276228
		{ &Z_Construct_UFunction_USpeechRecognizer_SetSpeedUp, "SetSpeedUp" }, // 3099380328
		{ &Z_Construct_UFunction_USpeechRecognizer_SetStepSize, "SetStepSize" }, // 2969044403
		{ &Z_Construct_UFunction_USpeechRecognizer_SetStreamingDefaults, "SetStreamingDefaults" }, // 1321224831
		{ &Z_Construct_UFunction_USpeechRecognizer_SetSuppressBlank, "SetSuppressBlank" }, // 900906197
		{ &Z_Construct_UFunction_USpeechRecognizer_SetSuppressNonSpeechTokens, "SetSuppressNonSpeechTokens" }, // 1917776738
		{ &Z_Construct_UFunction_USpeechRecognizer_SetTemperatureToIncrease, "SetTemperatureToIncrease" }, // 2555510326
		{ &Z_Construct_UFunction_USpeechRecognizer_SetTranslateToEnglish, "SetTranslateToEnglish" }, // 3382131814
		{ &Z_Construct_UFunction_USpeechRecognizer_StartSpeechRecognition, "StartSpeechRecognition" }, // 2243965280
		{ &Z_Construct_UFunction_USpeechRecognizer_StopSpeechRecognition, "StopSpeechRecognition" }, // 1965632313
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeechRecognizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognizer_Statics::NewProp_OnRecognitionFinished = { "OnRecognitionFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognizer, OnRecognitionFinished), Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionFinishedDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRecognitionFinished_MetaData), NewProp_OnRecognitionFinished_MetaData) }; // 1143728747
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognizer_Statics::NewProp_OnRecognizedTextSegment = { "OnRecognizedTextSegment", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognizer, OnRecognizedTextSegment), Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRecognizedTextSegment_MetaData), NewProp_OnRecognizedTextSegment_MetaData) }; // 1120051251
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognizer_Statics::NewProp_OnRecognitionError = { "OnRecognitionError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognizer, OnRecognitionError), Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRecognitionError_MetaData), NewProp_OnRecognitionError_MetaData) }; // 312507657
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognizer_Statics::NewProp_OnRecognitionProgress = { "OnRecognitionProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognizer, OnRecognitionProgress), Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRecognitionProgress_MetaData), NewProp_OnRecognitionProgress_MetaData) }; // 3652159654
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognizer_Statics::NewProp_OnRecognitionStopped = { "OnRecognitionStopped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognizer, OnRecognitionStopped), Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStoppedDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRecognitionStopped_MetaData), NewProp_OnRecognitionStopped_MetaData) }; // 2718664555
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpeechRecognizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognizer_Statics::NewProp_OnRecognitionFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognizer_Statics::NewProp_OnRecognizedTextSegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognizer_Statics::NewProp_OnRecognitionError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognizer_Statics::NewProp_OnRecognitionProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognizer_Statics::NewProp_OnRecognitionStopped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognizer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpeechRecognizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpeechRecognizer_Statics::ClassParams = {
	&USpeechRecognizer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpeechRecognizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognizer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognizer_Statics::Class_MetaDataParams), Z_Construct_UClass_USpeechRecognizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpeechRecognizer()
{
	if (!Z_Registration_Info_UClass_USpeechRecognizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpeechRecognizer.OuterSingleton, Z_Construct_UClass_USpeechRecognizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpeechRecognizer.OuterSingleton;
}
template<> RUNTIMESPEECHRECOGNIZER_API UClass* StaticClass<USpeechRecognizer>()
{
	return USpeechRecognizer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpeechRecognizer);
USpeechRecognizer::~USpeechRecognizer() {}
// End Class USpeechRecognizer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpeechRecognizer, USpeechRecognizer::StaticClass, TEXT("USpeechRecognizer"), &Z_Registration_Info_UClass_USpeechRecognizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpeechRecognizer), 1722478215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_702194879(TEXT("/Script/RuntimeSpeechRecognizer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
