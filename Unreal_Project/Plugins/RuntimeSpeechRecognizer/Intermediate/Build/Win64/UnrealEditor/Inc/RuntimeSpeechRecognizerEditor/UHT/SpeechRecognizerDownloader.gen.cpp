// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeSpeechRecognizerEditor/Private/SpeechRecognizerDownloader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognizerDownloader() {}

// Begin Cross Module References
RUNTIMESPEECHRECOGNIZEREDITOR_API UEnum* Z_Construct_UEnum_RuntimeSpeechRecognizerEditor_EDownloadToMemoryResult_Recognizer();
UPackage* Z_Construct_UPackage__Script_RuntimeSpeechRecognizerEditor();
// End Cross Module References

// Begin Enum EDownloadToMemoryResult_Recognizer
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDownloadToMemoryResult_Recognizer;
static UEnum* EDownloadToMemoryResult_Recognizer_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDownloadToMemoryResult_Recognizer.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDownloadToMemoryResult_Recognizer.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeSpeechRecognizerEditor_EDownloadToMemoryResult_Recognizer, (UObject*)Z_Construct_UPackage__Script_RuntimeSpeechRecognizerEditor(), TEXT("EDownloadToMemoryResult_Recognizer"));
	}
	return Z_Registration_Info_UEnum_EDownloadToMemoryResult_Recognizer.OuterSingleton;
}
template<> RUNTIMESPEECHRECOGNIZEREDITOR_API UEnum* StaticEnum<EDownloadToMemoryResult_Recognizer>()
{
	return EDownloadToMemoryResult_Recognizer_StaticEnum();
}
struct Z_Construct_UEnum_RuntimeSpeechRecognizerEditor_EDownloadToMemoryResult_Recognizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "EDownloadToMemoryResult_Recognizer::Cancelled" },
		{ "Category", "Speech Recognizer Downloader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Possible results from a download request\n*/" },
#endif
		{ "DownloadFailed.Name", "EDownloadToMemoryResult_Recognizer::DownloadFailed" },
		{ "InvalidURL.Name", "EDownloadToMemoryResult_Recognizer::InvalidURL" },
		{ "ModuleRelativePath", "Private/SpeechRecognizerDownloader.h" },
		{ "SucceededByPayload.Comment", "/** Downloaded successfully, but there was no Content-Length header in the response and thus downloaded by payload */" },
		{ "SucceededByPayload.Name", "EDownloadToMemoryResult_Recognizer::SucceededByPayload" },
		{ "SucceededByPayload.ToolTip", "Downloaded successfully, but there was no Content-Length header in the response and thus downloaded by payload" },
		{ "Success.Name", "EDownloadToMemoryResult_Recognizer::Success" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Possible results from a download request" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDownloadToMemoryResult_Recognizer::Success", (int64)EDownloadToMemoryResult_Recognizer::Success },
		{ "EDownloadToMemoryResult_Recognizer::SucceededByPayload", (int64)EDownloadToMemoryResult_Recognizer::SucceededByPayload },
		{ "EDownloadToMemoryResult_Recognizer::Cancelled", (int64)EDownloadToMemoryResult_Recognizer::Cancelled },
		{ "EDownloadToMemoryResult_Recognizer::DownloadFailed", (int64)EDownloadToMemoryResult_Recognizer::DownloadFailed },
		{ "EDownloadToMemoryResult_Recognizer::InvalidURL", (int64)EDownloadToMemoryResult_Recognizer::InvalidURL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeSpeechRecognizerEditor_EDownloadToMemoryResult_Recognizer_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizerEditor,
	nullptr,
	"EDownloadToMemoryResult_Recognizer",
	"EDownloadToMemoryResult_Recognizer",
	Z_Construct_UEnum_RuntimeSpeechRecognizerEditor_EDownloadToMemoryResult_Recognizer_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeSpeechRecognizerEditor_EDownloadToMemoryResult_Recognizer_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeSpeechRecognizerEditor_EDownloadToMemoryResult_Recognizer_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RuntimeSpeechRecognizerEditor_EDownloadToMemoryResult_Recognizer_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RuntimeSpeechRecognizerEditor_EDownloadToMemoryResult_Recognizer()
{
	if (!Z_Registration_Info_UEnum_EDownloadToMemoryResult_Recognizer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDownloadToMemoryResult_Recognizer.InnerSingleton, Z_Construct_UEnum_RuntimeSpeechRecognizerEditor_EDownloadToMemoryResult_Recognizer_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDownloadToMemoryResult_Recognizer.InnerSingleton;
}
// End Enum EDownloadToMemoryResult_Recognizer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizerEditor_Private_SpeechRecognizerDownloader_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDownloadToMemoryResult_Recognizer_StaticEnum, TEXT("EDownloadToMemoryResult_Recognizer"), &Z_Registration_Info_UEnum_EDownloadToMemoryResult_Recognizer, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 684079765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizerEditor_Private_SpeechRecognizerDownloader_h_980793545(TEXT("/Script/RuntimeSpeechRecognizerEditor"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizerEditor_Private_SpeechRecognizerDownloader_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizerEditor_Private_SpeechRecognizerDownloader_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
