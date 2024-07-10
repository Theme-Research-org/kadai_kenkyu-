// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpeechRecognizerDownloader.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNTIMESPEECHRECOGNIZEREDITOR_SpeechRecognizerDownloader_generated_h
#error "SpeechRecognizerDownloader.generated.h already included, missing '#pragma once' in SpeechRecognizerDownloader.h"
#endif
#define RUNTIMESPEECHRECOGNIZEREDITOR_SpeechRecognizerDownloader_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizerEditor_Private_SpeechRecognizerDownloader_h


#define FOREACH_ENUM_EDOWNLOADTOMEMORYRESULT_RECOGNIZER(op) \
	op(EDownloadToMemoryResult_Recognizer::Success) \
	op(EDownloadToMemoryResult_Recognizer::SucceededByPayload) \
	op(EDownloadToMemoryResult_Recognizer::Cancelled) \
	op(EDownloadToMemoryResult_Recognizer::DownloadFailed) \
	op(EDownloadToMemoryResult_Recognizer::InvalidURL) 

enum class EDownloadToMemoryResult_Recognizer : uint8;
template<> struct TIsUEnumClass<EDownloadToMemoryResult_Recognizer> { enum { Value = true }; };
template<> RUNTIMESPEECHRECOGNIZEREDITOR_API UEnum* StaticEnum<EDownloadToMemoryResult_Recognizer>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
