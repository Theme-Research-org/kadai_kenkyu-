// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeSpeechRecognizer/Public/SpeechRecognizerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognizerSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RUNTIMESPEECHRECOGNIZER_API UClass* Z_Construct_UClass_USpeechRecognizerSettings();
RUNTIMESPEECHRECOGNIZER_API UClass* Z_Construct_UClass_USpeechRecognizerSettings_NoRegister();
RUNTIMESPEECHRECOGNIZER_API UEnum* Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelLanguage();
RUNTIMESPEECHRECOGNIZER_API UEnum* Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelSize();
UPackage* Z_Construct_UPackage__Script_RuntimeSpeechRecognizer();
// End Cross Module References

// Begin Class USpeechRecognizerSettings
void USpeechRecognizerSettings::StaticRegisterNativesUSpeechRecognizerSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpeechRecognizerSettings);
UClass* Z_Construct_UClass_USpeechRecognizerSettings_NoRegister()
{
	return USpeechRecognizerSettings::StaticClass();
}
struct Z_Construct_UClass_USpeechRecognizerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Settings for the Runtime Speech Recognizer plugin\n */" },
#endif
		{ "IncludePath", "SpeechRecognizerSettings.h" },
		{ "ModuleRelativePath", "Public/SpeechRecognizerSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for the Runtime Speech Recognizer plugin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelSize_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Model size to use by the speech recognizer, defined once in the project settings and cannot be changed at runtime */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Model size to use by the speech recognizer, defined once in the project settings and cannot be changed at runtime" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelLanguage_MetaData[] = {
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Language model to use by the speech recognizer, defined once in the project settings and cannot be changed at runtime */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Language model to use by the speech recognizer, defined once in the project settings and cannot be changed at runtime" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelDownloadBaseUrl_MetaData[] = {
		{ "Category", "Advanced Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The base URL to download the language model from */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base URL to download the language model from" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelDownloadCustomName_MetaData[] = {
		{ "Category", "Advanced Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The custom name to use when downloading the language model. Only used if the language model size is custom\n\x09 * For example, if the custom name is \"ggml-medium.en-q5_0.bin\", and the base URL is \"https://huggingface.co/ggerganov/whisper.cpp/resolve/main/\",\n\x09 * the language model will be downloaded from \"https://huggingface.co/ggerganov/whisper.cpp/resolve/main/ggml-medium.en-q5_0.bin\"\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The custom name to use when downloading the language model. Only used if the language model size is custom\nFor example, if the custom name is \"ggml-medium.en-q5_0.bin\", and the base URL is \"https://huggingface.co/ggerganov/whisper.cpp/resolve/main/\",\nthe language model will be downloaded from \"https://huggingface.co/ggerganov/whisper.cpp/resolve/main/ggml-medium.en-q5_0.bin\"" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModelSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModelSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModelLanguage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModelLanguage;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelDownloadBaseUrl;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModelDownloadCustomName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeechRecognizerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpeechRecognizerSettings_Statics::NewProp_ModelSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpeechRecognizerSettings_Statics::NewProp_ModelSize = { "ModelSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognizerSettings, ModelSize), Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelSize_MetaData), NewProp_ModelSize_MetaData) }; // 4227967394
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpeechRecognizerSettings_Statics::NewProp_ModelLanguage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpeechRecognizerSettings_Statics::NewProp_ModelLanguage = { "ModelLanguage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognizerSettings, ModelLanguage), Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelLanguage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelLanguage_MetaData), NewProp_ModelLanguage_MetaData) }; // 1806205478
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpeechRecognizerSettings_Statics::NewProp_ModelDownloadBaseUrl = { "ModelDownloadBaseUrl", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognizerSettings, ModelDownloadBaseUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelDownloadBaseUrl_MetaData), NewProp_ModelDownloadBaseUrl_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpeechRecognizerSettings_Statics::NewProp_ModelDownloadCustomName = { "ModelDownloadCustomName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpeechRecognizerSettings, ModelDownloadCustomName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelDownloadCustomName_MetaData), NewProp_ModelDownloadCustomName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpeechRecognizerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognizerSettings_Statics::NewProp_ModelSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognizerSettings_Statics::NewProp_ModelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognizerSettings_Statics::NewProp_ModelLanguage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognizerSettings_Statics::NewProp_ModelLanguage,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognizerSettings_Statics::NewProp_ModelDownloadBaseUrl,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognizerSettings_Statics::NewProp_ModelDownloadCustomName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognizerSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpeechRecognizerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognizerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpeechRecognizerSettings_Statics::ClassParams = {
	&USpeechRecognizerSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpeechRecognizerSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognizerSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognizerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USpeechRecognizerSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpeechRecognizerSettings()
{
	if (!Z_Registration_Info_UClass_USpeechRecognizerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpeechRecognizerSettings.OuterSingleton, Z_Construct_UClass_USpeechRecognizerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpeechRecognizerSettings.OuterSingleton;
}
template<> RUNTIMESPEECHRECOGNIZER_API UClass* StaticClass<USpeechRecognizerSettings>()
{
	return USpeechRecognizerSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpeechRecognizerSettings);
USpeechRecognizerSettings::~USpeechRecognizerSettings() {}
// End Class USpeechRecognizerSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpeechRecognizerSettings, USpeechRecognizerSettings::StaticClass, TEXT("USpeechRecognizerSettings"), &Z_Registration_Info_UClass_USpeechRecognizerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpeechRecognizerSettings), 2728008345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerSettings_h_3625350371(TEXT("/Script/RuntimeSpeechRecognizer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
