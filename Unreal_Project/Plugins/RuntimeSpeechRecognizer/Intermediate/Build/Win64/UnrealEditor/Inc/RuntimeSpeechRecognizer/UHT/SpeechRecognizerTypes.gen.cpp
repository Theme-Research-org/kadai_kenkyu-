// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeSpeechRecognizer/Public/SpeechRecognizerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognizerTypes() {}

// Begin Cross Module References
RUNTIMESPEECHRECOGNIZER_API UEnum* Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerLanguage();
RUNTIMESPEECHRECOGNIZER_API UEnum* Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelLanguage();
RUNTIMESPEECHRECOGNIZER_API UEnum* Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelSize();
UPackage* Z_Construct_UPackage__Script_RuntimeSpeechRecognizer();
// End Cross Module References

// Begin Enum ESpeechRecognizerModelSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeechRecognizerModelSize;
static UEnum* ESpeechRecognizerModelSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpeechRecognizerModelSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpeechRecognizerModelSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelSize, (UObject*)Z_Construct_UPackage__Script_RuntimeSpeechRecognizer(), TEXT("ESpeechRecognizerModelSize"));
	}
	return Z_Registration_Info_UEnum_ESpeechRecognizerModelSize.OuterSingleton;
}
template<> RUNTIMESPEECHRECOGNIZER_API UEnum* StaticEnum<ESpeechRecognizerModelSize>()
{
	return ESpeechRecognizerModelSize_StaticEnum();
}
struct Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Base.Name", "ESpeechRecognizerModelSize::Base" },
		{ "Base_Q5_1.DisplayName", "Base Quantized (Q5_1)" },
		{ "Base_Q5_1.Name", "ESpeechRecognizerModelSize::Base_Q5_1" },
		{ "Base_Q5_1.ToolTip", "Base model with quantization to 5 bits and 1 decimal point" },
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The size of the language model to use by the speech recognizer\n * The larger the model, the more accurate the recognition, but the slower the recognition\n * Intended to be defined once in the project settings and cannot be changed at runtime\n */" },
#endif
		{ "Custom.Name", "ESpeechRecognizerModelSize::Custom" },
		{ "Custom.ToolTip", "Custom model size. The model size will be determined by the language model file name (e.g. 'ggml-medium.en-q5_0.bin'" },
		{ "Large_V1.Name", "ESpeechRecognizerModelSize::Large_V1" },
		{ "Large_V2.Name", "ESpeechRecognizerModelSize::Large_V2" },
		{ "Large_V2_Q5_0.DisplayName", "Large V2 Quantized (Q5_0)" },
		{ "Large_V2_Q5_0.Name", "ESpeechRecognizerModelSize::Large_V2_Q5_0" },
		{ "Large_V2_Q5_0.ToolTip", "Large V2 model with quantization to 5 bits and 0 decimal points" },
		{ "Large_V3.Name", "ESpeechRecognizerModelSize::Large_V3" },
		{ "Large_V3_Q5_0.DisplayName", "Large V3 Quantized (Q5_0)" },
		{ "Large_V3_Q5_0.Name", "ESpeechRecognizerModelSize::Large_V3_Q5_0" },
		{ "Large_V3_Q5_0.ToolTip", "Large V3 model with quantization to 5 bits and 0 decimal points" },
		{ "Medium.Name", "ESpeechRecognizerModelSize::Medium" },
		{ "Medium_Q5_0.DisplayName", "Medium Quantized (Q5_0)" },
		{ "Medium_Q5_0.Name", "ESpeechRecognizerModelSize::Medium_Q5_0" },
		{ "Medium_Q5_0.ToolTip", "Medium model with quantization to 5 bits and 0 decimal points" },
		{ "ModuleRelativePath", "Public/SpeechRecognizerTypes.h" },
		{ "Small.Name", "ESpeechRecognizerModelSize::Small" },
		{ "Small_Q5_1.DisplayName", "Small Quantized (Q5_1)" },
		{ "Small_Q5_1.Name", "ESpeechRecognizerModelSize::Small_Q5_1" },
		{ "Small_Q5_1.ToolTip", "Small model with quantization to 5 bits and 1 decimal point" },
		{ "Tiny.Name", "ESpeechRecognizerModelSize::Tiny" },
		{ "Tiny_Q5_1.DisplayName", "Tiny Quantized (Q5_1)" },
		{ "Tiny_Q5_1.Name", "ESpeechRecognizerModelSize::Tiny_Q5_1" },
		{ "Tiny_Q5_1.ToolTip", "Tiny model with quantization to 5 bits and 1 decimal point" },
		{ "Tiny_Q8_0.DisplayName", "Tiny Quantized (Q8_0)" },
		{ "Tiny_Q8_0.Name", "ESpeechRecognizerModelSize::Tiny_Q8_0" },
		{ "Tiny_Q8_0.ToolTip", "Tiny model with quantization to 8 bits and 0 decimal points" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of the language model to use by the speech recognizer\nThe larger the model, the more accurate the recognition, but the slower the recognition\nIntended to be defined once in the project settings and cannot be changed at runtime" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpeechRecognizerModelSize::Tiny", (int64)ESpeechRecognizerModelSize::Tiny },
		{ "ESpeechRecognizerModelSize::Tiny_Q5_1", (int64)ESpeechRecognizerModelSize::Tiny_Q5_1 },
		{ "ESpeechRecognizerModelSize::Tiny_Q8_0", (int64)ESpeechRecognizerModelSize::Tiny_Q8_0 },
		{ "ESpeechRecognizerModelSize::Base", (int64)ESpeechRecognizerModelSize::Base },
		{ "ESpeechRecognizerModelSize::Base_Q5_1", (int64)ESpeechRecognizerModelSize::Base_Q5_1 },
		{ "ESpeechRecognizerModelSize::Small", (int64)ESpeechRecognizerModelSize::Small },
		{ "ESpeechRecognizerModelSize::Small_Q5_1", (int64)ESpeechRecognizerModelSize::Small_Q5_1 },
		{ "ESpeechRecognizerModelSize::Medium", (int64)ESpeechRecognizerModelSize::Medium },
		{ "ESpeechRecognizerModelSize::Medium_Q5_0", (int64)ESpeechRecognizerModelSize::Medium_Q5_0 },
		{ "ESpeechRecognizerModelSize::Large_V1", (int64)ESpeechRecognizerModelSize::Large_V1 },
		{ "ESpeechRecognizerModelSize::Large_V2", (int64)ESpeechRecognizerModelSize::Large_V2 },
		{ "ESpeechRecognizerModelSize::Large_V2_Q5_0", (int64)ESpeechRecognizerModelSize::Large_V2_Q5_0 },
		{ "ESpeechRecognizerModelSize::Large_V3", (int64)ESpeechRecognizerModelSize::Large_V3 },
		{ "ESpeechRecognizerModelSize::Large_V3_Q5_0", (int64)ESpeechRecognizerModelSize::Large_V3_Q5_0 },
		{ "ESpeechRecognizerModelSize::Custom", (int64)ESpeechRecognizerModelSize::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizer,
	nullptr,
	"ESpeechRecognizerModelSize",
	"ESpeechRecognizerModelSize",
	Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelSize()
{
	if (!Z_Registration_Info_UEnum_ESpeechRecognizerModelSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeechRecognizerModelSize.InnerSingleton, Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpeechRecognizerModelSize.InnerSingleton;
}
// End Enum ESpeechRecognizerModelSize

// Begin Enum ESpeechRecognizerModelLanguage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeechRecognizerModelLanguage;
static UEnum* ESpeechRecognizerModelLanguage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpeechRecognizerModelLanguage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpeechRecognizerModelLanguage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelLanguage, (UObject*)Z_Construct_UPackage__Script_RuntimeSpeechRecognizer(), TEXT("ESpeechRecognizerModelLanguage"));
	}
	return Z_Registration_Info_UEnum_ESpeechRecognizerModelLanguage.OuterSingleton;
}
template<> RUNTIMESPEECHRECOGNIZER_API UEnum* StaticEnum<ESpeechRecognizerModelLanguage>()
{
	return ESpeechRecognizerModelLanguage_StaticEnum();
}
struct Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelLanguage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The language model for the speech recognizer. Defines the vocabulary of words the recognizer will understand\n * The English-only model contains a larger vocabulary of English-only words, while the multilingual model contains a smaller vocabulary of words in multiple language\n * The model should be defined once in the project settings and cannot be changed at runtime\n */" },
#endif
		{ "EnglishOnly.Name", "ESpeechRecognizerModelLanguage::EnglishOnly" },
		{ "ModuleRelativePath", "Public/SpeechRecognizerTypes.h" },
		{ "Multilingual.Name", "ESpeechRecognizerModelLanguage::Multilingual" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The language model for the speech recognizer. Defines the vocabulary of words the recognizer will understand\nThe English-only model contains a larger vocabulary of English-only words, while the multilingual model contains a smaller vocabulary of words in multiple language\nThe model should be defined once in the project settings and cannot be changed at runtime" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpeechRecognizerModelLanguage::EnglishOnly", (int64)ESpeechRecognizerModelLanguage::EnglishOnly },
		{ "ESpeechRecognizerModelLanguage::Multilingual", (int64)ESpeechRecognizerModelLanguage::Multilingual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelLanguage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizer,
	nullptr,
	"ESpeechRecognizerModelLanguage",
	"ESpeechRecognizerModelLanguage",
	Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelLanguage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelLanguage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelLanguage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelLanguage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelLanguage()
{
	if (!Z_Registration_Info_UEnum_ESpeechRecognizerModelLanguage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeechRecognizerModelLanguage.InnerSingleton, Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerModelLanguage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpeechRecognizerModelLanguage.InnerSingleton;
}
// End Enum ESpeechRecognizerModelLanguage

// Begin Enum ESpeechRecognizerLanguage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeechRecognizerLanguage;
static UEnum* ESpeechRecognizerLanguage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpeechRecognizerLanguage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpeechRecognizerLanguage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerLanguage, (UObject*)Z_Construct_UPackage__Script_RuntimeSpeechRecognizer(), TEXT("ESpeechRecognizerLanguage"));
	}
	return Z_Registration_Info_UEnum_ESpeechRecognizerLanguage.OuterSingleton;
}
template<> RUNTIMESPEECHRECOGNIZER_API UEnum* StaticEnum<ESpeechRecognizerLanguage>()
{
	return ESpeechRecognizerLanguage_StaticEnum();
}
struct Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerLanguage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Af.DisplayName", "Afrikaans" },
		{ "Af.Name", "ESpeechRecognizerLanguage::Af" },
		{ "Am.DisplayName", "Amharic" },
		{ "Am.Name", "ESpeechRecognizerLanguage::Am" },
		{ "Ar.DisplayName", "Arabic" },
		{ "Ar.Name", "ESpeechRecognizerLanguage::Ar" },
		{ "As.DisplayName", "Assamese" },
		{ "As.Name", "ESpeechRecognizerLanguage::As" },
		{ "Auto.Name", "ESpeechRecognizerLanguage::Auto" },
		{ "Az.DisplayName", "Azerbaijani" },
		{ "Az.Name", "ESpeechRecognizerLanguage::Az" },
		{ "Ba.DisplayName", "Bashkir" },
		{ "Ba.Name", "ESpeechRecognizerLanguage::Ba" },
		{ "Be.DisplayName", "Belarusian" },
		{ "Be.Name", "ESpeechRecognizerLanguage::Be" },
		{ "Bg.DisplayName", "Bulgarian" },
		{ "Bg.Name", "ESpeechRecognizerLanguage::Bg" },
		{ "BlueprintType", "true" },
		{ "Bn.DisplayName", "Bengali" },
		{ "Bn.Name", "ESpeechRecognizerLanguage::Bn" },
		{ "Bo.DisplayName", "Tibetan" },
		{ "Bo.Name", "ESpeechRecognizerLanguage::Bo" },
		{ "Br.DisplayName", "Breton" },
		{ "Br.Name", "ESpeechRecognizerLanguage::Br" },
		{ "Bs.DisplayName", "Bosnian" },
		{ "Bs.Name", "ESpeechRecognizerLanguage::Bs" },
		{ "Ca.DisplayName", "Catalan" },
		{ "Ca.Name", "ESpeechRecognizerLanguage::Ca" },
		{ "Category", "Runtime Speech Recognizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The language to use for the speech recognizer\n * If the model is EnglishOnly, only English language is supported\n * Otherwise, any of the supported languages, including \"auto\" to automatically detect the language can be used\n */" },
#endif
		{ "Cs.DisplayName", "Czech" },
		{ "Cs.Name", "ESpeechRecognizerLanguage::Cs" },
		{ "Cy.DisplayName", "Welsh" },
		{ "Cy.Name", "ESpeechRecognizerLanguage::Cy" },
		{ "Da.DisplayName", "Danish" },
		{ "Da.Name", "ESpeechRecognizerLanguage::Da" },
		{ "De.DisplayName", "German" },
		{ "De.Name", "ESpeechRecognizerLanguage::De" },
		{ "El.DisplayName", "Greek" },
		{ "El.Name", "ESpeechRecognizerLanguage::El" },
		{ "En.DisplayName", "English" },
		{ "En.Name", "ESpeechRecognizerLanguage::En" },
		{ "Es.DisplayName", "Spanish" },
		{ "Es.Name", "ESpeechRecognizerLanguage::Es" },
		{ "Et.DisplayName", "Estonian" },
		{ "Et.Name", "ESpeechRecognizerLanguage::Et" },
		{ "Eu.DisplayName", "Basque" },
		{ "Eu.Name", "ESpeechRecognizerLanguage::Eu" },
		{ "Fa.DisplayName", "Persian" },
		{ "Fa.Name", "ESpeechRecognizerLanguage::Fa" },
		{ "Fi.DisplayName", "Finnish" },
		{ "Fi.Name", "ESpeechRecognizerLanguage::Fi" },
		{ "Fo.DisplayName", "Faroese" },
		{ "Fo.Name", "ESpeechRecognizerLanguage::Fo" },
		{ "Fr.DisplayName", "French" },
		{ "Fr.Name", "ESpeechRecognizerLanguage::Fr" },
		{ "Gl.DisplayName", "Galician" },
		{ "Gl.Name", "ESpeechRecognizerLanguage::Gl" },
		{ "Gu.DisplayName", "Gujarati" },
		{ "Gu.Name", "ESpeechRecognizerLanguage::Gu" },
		{ "Ha.DisplayName", "Hausa" },
		{ "Ha.Name", "ESpeechRecognizerLanguage::Ha" },
		{ "Haw.DisplayName", "Hawaiian" },
		{ "Haw.Name", "ESpeechRecognizerLanguage::Haw" },
		{ "He.DisplayName", "Hebrew" },
		{ "He.Name", "ESpeechRecognizerLanguage::He" },
		{ "Hi.DisplayName", "Hindi" },
		{ "Hi.Name", "ESpeechRecognizerLanguage::Hi" },
		{ "Hr.DisplayName", "Croatian" },
		{ "Hr.Name", "ESpeechRecognizerLanguage::Hr" },
		{ "Ht.DisplayName", "Haitian Creole" },
		{ "Ht.Name", "ESpeechRecognizerLanguage::Ht" },
		{ "Hu.DisplayName", "Hungarian" },
		{ "Hu.Name", "ESpeechRecognizerLanguage::Hu" },
		{ "Hy.DisplayName", "Armenian" },
		{ "Hy.Name", "ESpeechRecognizerLanguage::Hy" },
		{ "Id.DisplayName", "Indonesian" },
		{ "Id.Name", "ESpeechRecognizerLanguage::Id" },
		{ "Is.DisplayName", "Icelandic" },
		{ "Is.Name", "ESpeechRecognizerLanguage::Is" },
		{ "It.DisplayName", "Italian" },
		{ "It.Name", "ESpeechRecognizerLanguage::It" },
		{ "Ja.DisplayName", "Japanese" },
		{ "Ja.Name", "ESpeechRecognizerLanguage::Ja" },
		{ "Jw.DisplayName", "Javanese" },
		{ "Jw.Name", "ESpeechRecognizerLanguage::Jw" },
		{ "Ka.DisplayName", "Georgian" },
		{ "Ka.Name", "ESpeechRecognizerLanguage::Ka" },
		{ "Kk.DisplayName", "Kazakh" },
		{ "Kk.Name", "ESpeechRecognizerLanguage::Kk" },
		{ "Km.DisplayName", "Khmer" },
		{ "Km.Name", "ESpeechRecognizerLanguage::Km" },
		{ "Kn.DisplayName", "Kannada" },
		{ "Kn.Name", "ESpeechRecognizerLanguage::Kn" },
		{ "Ko.DisplayName", "Korean" },
		{ "Ko.Name", "ESpeechRecognizerLanguage::Ko" },
		{ "La.DisplayName", "Latin" },
		{ "La.Name", "ESpeechRecognizerLanguage::La" },
		{ "Lb.DisplayName", "Luxembourgish" },
		{ "Lb.Name", "ESpeechRecognizerLanguage::Lb" },
		{ "Ln.DisplayName", "Lingala" },
		{ "Ln.Name", "ESpeechRecognizerLanguage::Ln" },
		{ "Lo.DisplayName", "Lao" },
		{ "Lo.Name", "ESpeechRecognizerLanguage::Lo" },
		{ "Lt.DisplayName", "Lithuanian" },
		{ "Lt.Name", "ESpeechRecognizerLanguage::Lt" },
		{ "Lv.DisplayName", "Latvian" },
		{ "Lv.Name", "ESpeechRecognizerLanguage::Lv" },
		{ "Mg.DisplayName", "Malagasy" },
		{ "Mg.Name", "ESpeechRecognizerLanguage::Mg" },
		{ "Mi.DisplayName", "Maori" },
		{ "Mi.Name", "ESpeechRecognizerLanguage::Mi" },
		{ "Mk.DisplayName", "Macedonian" },
		{ "Mk.Name", "ESpeechRecognizerLanguage::Mk" },
		{ "Ml.DisplayName", "Malayalam" },
		{ "Ml.Name", "ESpeechRecognizerLanguage::Ml" },
		{ "Mn.DisplayName", "Mongolian" },
		{ "Mn.Name", "ESpeechRecognizerLanguage::Mn" },
		{ "ModuleRelativePath", "Public/SpeechRecognizerTypes.h" },
		{ "Mr.DisplayName", "Marathi" },
		{ "Mr.Name", "ESpeechRecognizerLanguage::Mr" },
		{ "Ms.DisplayName", "Malay" },
		{ "Ms.Name", "ESpeechRecognizerLanguage::Ms" },
		{ "Mt.DisplayName", "Maltese" },
		{ "Mt.Name", "ESpeechRecognizerLanguage::Mt" },
		{ "My.DisplayName", "Myanmar" },
		{ "My.Name", "ESpeechRecognizerLanguage::My" },
		{ "Ne.DisplayName", "Nepali" },
		{ "Ne.Name", "ESpeechRecognizerLanguage::Ne" },
		{ "Nl.DisplayName", "Dutch" },
		{ "Nl.Name", "ESpeechRecognizerLanguage::Nl" },
		{ "Nn.DisplayName", "Hynorsk" },
		{ "Nn.Name", "ESpeechRecognizerLanguage::Nn" },
		{ "No.DisplayName", "Norwegian" },
		{ "No.Name", "ESpeechRecognizerLanguage::No" },
		{ "Oc.DisplayName", "Occitan" },
		{ "Oc.Name", "ESpeechRecognizerLanguage::Oc" },
		{ "Pa.DisplayName", "Punjabi" },
		{ "Pa.Name", "ESpeechRecognizerLanguage::Pa" },
		{ "Pl.DisplayName", "Polish" },
		{ "Pl.Name", "ESpeechRecognizerLanguage::Pl" },
		{ "Ps.DisplayName", "Pashto" },
		{ "Ps.Name", "ESpeechRecognizerLanguage::Ps" },
		{ "Pt.DisplayName", "Portuguese" },
		{ "Pt.Name", "ESpeechRecognizerLanguage::Pt" },
		{ "Ro.DisplayName", "Romanian" },
		{ "Ro.Name", "ESpeechRecognizerLanguage::Ro" },
		{ "Ru.DisplayName", "Russian" },
		{ "Ru.Name", "ESpeechRecognizerLanguage::Ru" },
		{ "Sa.DisplayName", "Sanskrit" },
		{ "Sa.Name", "ESpeechRecognizerLanguage::Sa" },
		{ "Sd.DisplayName", "Sindhi" },
		{ "Sd.Name", "ESpeechRecognizerLanguage::Sd" },
		{ "Si.DisplayName", "Sinhala" },
		{ "Si.Name", "ESpeechRecognizerLanguage::Si" },
		{ "Sk.DisplayName", "Slovak" },
		{ "Sk.Name", "ESpeechRecognizerLanguage::Sk" },
		{ "Sl.DisplayName", "Slovenian" },
		{ "Sl.Name", "ESpeechRecognizerLanguage::Sl" },
		{ "Sn.DisplayName", "Shona" },
		{ "Sn.Name", "ESpeechRecognizerLanguage::Sn" },
		{ "So.DisplayName", "Somali" },
		{ "So.Name", "ESpeechRecognizerLanguage::So" },
		{ "Sq.DisplayName", "Albanian" },
		{ "Sq.Name", "ESpeechRecognizerLanguage::Sq" },
		{ "Sr.DisplayName", "Serbian" },
		{ "Sr.Name", "ESpeechRecognizerLanguage::Sr" },
		{ "Su.DisplayName", "Sundanese" },
		{ "Su.Name", "ESpeechRecognizerLanguage::Su" },
		{ "Sv.DisplayName", "Swedish" },
		{ "Sv.Name", "ESpeechRecognizerLanguage::Sv" },
		{ "Sw.DisplayName", "Swahili" },
		{ "Sw.Name", "ESpeechRecognizerLanguage::Sw" },
		{ "Ta.DisplayName", "Tamil" },
		{ "Ta.Name", "ESpeechRecognizerLanguage::Ta" },
		{ "Te.DisplayName", "Telugu" },
		{ "Te.Name", "ESpeechRecognizerLanguage::Te" },
		{ "Tg.DisplayName", "Tajik" },
		{ "Tg.Name", "ESpeechRecognizerLanguage::Tg" },
		{ "Th.DisplayName", "Thai" },
		{ "Th.Name", "ESpeechRecognizerLanguage::Th" },
		{ "Tk.DisplayName", "Turkmen" },
		{ "Tk.Name", "ESpeechRecognizerLanguage::Tk" },
		{ "Tl.DisplayName", "Tagalog" },
		{ "Tl.Name", "ESpeechRecognizerLanguage::Tl" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The language to use for the speech recognizer\nIf the model is EnglishOnly, only English language is supported\nOtherwise, any of the supported languages, including \"auto\" to automatically detect the language can be used" },
#endif
		{ "Tr.DisplayName", "Turkish" },
		{ "Tr.Name", "ESpeechRecognizerLanguage::Tr" },
		{ "Tt.DisplayName", "Tatar" },
		{ "Tt.Name", "ESpeechRecognizerLanguage::Tt" },
		{ "Uk.DisplayName", "Ukrainian" },
		{ "Uk.Name", "ESpeechRecognizerLanguage::Uk" },
		{ "Ur.DisplayName", "Urdu" },
		{ "Ur.Name", "ESpeechRecognizerLanguage::Ur" },
		{ "Uz.DisplayName", "Uzbek" },
		{ "Uz.Name", "ESpeechRecognizerLanguage::Uz" },
		{ "Vi.DisplayName", "Vietnamese" },
		{ "Vi.Name", "ESpeechRecognizerLanguage::Vi" },
		{ "Yi.DisplayName", "Yiddish" },
		{ "Yi.Name", "ESpeechRecognizerLanguage::Yi" },
		{ "Yo.DisplayName", "Yoruba" },
		{ "Yo.Name", "ESpeechRecognizerLanguage::Yo" },
		{ "Zh.DisplayName", "Chinese" },
		{ "Zh.Name", "ESpeechRecognizerLanguage::Zh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpeechRecognizerLanguage::Auto", (int64)ESpeechRecognizerLanguage::Auto },
		{ "ESpeechRecognizerLanguage::En", (int64)ESpeechRecognizerLanguage::En },
		{ "ESpeechRecognizerLanguage::Zh", (int64)ESpeechRecognizerLanguage::Zh },
		{ "ESpeechRecognizerLanguage::De", (int64)ESpeechRecognizerLanguage::De },
		{ "ESpeechRecognizerLanguage::Es", (int64)ESpeechRecognizerLanguage::Es },
		{ "ESpeechRecognizerLanguage::Ru", (int64)ESpeechRecognizerLanguage::Ru },
		{ "ESpeechRecognizerLanguage::Ko", (int64)ESpeechRecognizerLanguage::Ko },
		{ "ESpeechRecognizerLanguage::Fr", (int64)ESpeechRecognizerLanguage::Fr },
		{ "ESpeechRecognizerLanguage::Ja", (int64)ESpeechRecognizerLanguage::Ja },
		{ "ESpeechRecognizerLanguage::Pt", (int64)ESpeechRecognizerLanguage::Pt },
		{ "ESpeechRecognizerLanguage::Tr", (int64)ESpeechRecognizerLanguage::Tr },
		{ "ESpeechRecognizerLanguage::Pl", (int64)ESpeechRecognizerLanguage::Pl },
		{ "ESpeechRecognizerLanguage::Ca", (int64)ESpeechRecognizerLanguage::Ca },
		{ "ESpeechRecognizerLanguage::Nl", (int64)ESpeechRecognizerLanguage::Nl },
		{ "ESpeechRecognizerLanguage::Ar", (int64)ESpeechRecognizerLanguage::Ar },
		{ "ESpeechRecognizerLanguage::Sv", (int64)ESpeechRecognizerLanguage::Sv },
		{ "ESpeechRecognizerLanguage::It", (int64)ESpeechRecognizerLanguage::It },
		{ "ESpeechRecognizerLanguage::Id", (int64)ESpeechRecognizerLanguage::Id },
		{ "ESpeechRecognizerLanguage::Hi", (int64)ESpeechRecognizerLanguage::Hi },
		{ "ESpeechRecognizerLanguage::Fi", (int64)ESpeechRecognizerLanguage::Fi },
		{ "ESpeechRecognizerLanguage::Vi", (int64)ESpeechRecognizerLanguage::Vi },
		{ "ESpeechRecognizerLanguage::He", (int64)ESpeechRecognizerLanguage::He },
		{ "ESpeechRecognizerLanguage::Uk", (int64)ESpeechRecognizerLanguage::Uk },
		{ "ESpeechRecognizerLanguage::El", (int64)ESpeechRecognizerLanguage::El },
		{ "ESpeechRecognizerLanguage::Ms", (int64)ESpeechRecognizerLanguage::Ms },
		{ "ESpeechRecognizerLanguage::Cs", (int64)ESpeechRecognizerLanguage::Cs },
		{ "ESpeechRecognizerLanguage::Ro", (int64)ESpeechRecognizerLanguage::Ro },
		{ "ESpeechRecognizerLanguage::Da", (int64)ESpeechRecognizerLanguage::Da },
		{ "ESpeechRecognizerLanguage::Hu", (int64)ESpeechRecognizerLanguage::Hu },
		{ "ESpeechRecognizerLanguage::Ta", (int64)ESpeechRecognizerLanguage::Ta },
		{ "ESpeechRecognizerLanguage::No", (int64)ESpeechRecognizerLanguage::No },
		{ "ESpeechRecognizerLanguage::Th", (int64)ESpeechRecognizerLanguage::Th },
		{ "ESpeechRecognizerLanguage::Ur", (int64)ESpeechRecognizerLanguage::Ur },
		{ "ESpeechRecognizerLanguage::Hr", (int64)ESpeechRecognizerLanguage::Hr },
		{ "ESpeechRecognizerLanguage::Bg", (int64)ESpeechRecognizerLanguage::Bg },
		{ "ESpeechRecognizerLanguage::Lt", (int64)ESpeechRecognizerLanguage::Lt },
		{ "ESpeechRecognizerLanguage::La", (int64)ESpeechRecognizerLanguage::La },
		{ "ESpeechRecognizerLanguage::Mi", (int64)ESpeechRecognizerLanguage::Mi },
		{ "ESpeechRecognizerLanguage::Ml", (int64)ESpeechRecognizerLanguage::Ml },
		{ "ESpeechRecognizerLanguage::Cy", (int64)ESpeechRecognizerLanguage::Cy },
		{ "ESpeechRecognizerLanguage::Sk", (int64)ESpeechRecognizerLanguage::Sk },
		{ "ESpeechRecognizerLanguage::Te", (int64)ESpeechRecognizerLanguage::Te },
		{ "ESpeechRecognizerLanguage::Fa", (int64)ESpeechRecognizerLanguage::Fa },
		{ "ESpeechRecognizerLanguage::Lv", (int64)ESpeechRecognizerLanguage::Lv },
		{ "ESpeechRecognizerLanguage::Bn", (int64)ESpeechRecognizerLanguage::Bn },
		{ "ESpeechRecognizerLanguage::Sr", (int64)ESpeechRecognizerLanguage::Sr },
		{ "ESpeechRecognizerLanguage::Az", (int64)ESpeechRecognizerLanguage::Az },
		{ "ESpeechRecognizerLanguage::Sl", (int64)ESpeechRecognizerLanguage::Sl },
		{ "ESpeechRecognizerLanguage::Kn", (int64)ESpeechRecognizerLanguage::Kn },
		{ "ESpeechRecognizerLanguage::Et", (int64)ESpeechRecognizerLanguage::Et },
		{ "ESpeechRecognizerLanguage::Mk", (int64)ESpeechRecognizerLanguage::Mk },
		{ "ESpeechRecognizerLanguage::Br", (int64)ESpeechRecognizerLanguage::Br },
		{ "ESpeechRecognizerLanguage::Eu", (int64)ESpeechRecognizerLanguage::Eu },
		{ "ESpeechRecognizerLanguage::Is", (int64)ESpeechRecognizerLanguage::Is },
		{ "ESpeechRecognizerLanguage::Hy", (int64)ESpeechRecognizerLanguage::Hy },
		{ "ESpeechRecognizerLanguage::Ne", (int64)ESpeechRecognizerLanguage::Ne },
		{ "ESpeechRecognizerLanguage::Mn", (int64)ESpeechRecognizerLanguage::Mn },
		{ "ESpeechRecognizerLanguage::Bs", (int64)ESpeechRecognizerLanguage::Bs },
		{ "ESpeechRecognizerLanguage::Kk", (int64)ESpeechRecognizerLanguage::Kk },
		{ "ESpeechRecognizerLanguage::Sq", (int64)ESpeechRecognizerLanguage::Sq },
		{ "ESpeechRecognizerLanguage::Sw", (int64)ESpeechRecognizerLanguage::Sw },
		{ "ESpeechRecognizerLanguage::Gl", (int64)ESpeechRecognizerLanguage::Gl },
		{ "ESpeechRecognizerLanguage::Mr", (int64)ESpeechRecognizerLanguage::Mr },
		{ "ESpeechRecognizerLanguage::Pa", (int64)ESpeechRecognizerLanguage::Pa },
		{ "ESpeechRecognizerLanguage::Si", (int64)ESpeechRecognizerLanguage::Si },
		{ "ESpeechRecognizerLanguage::Km", (int64)ESpeechRecognizerLanguage::Km },
		{ "ESpeechRecognizerLanguage::Sn", (int64)ESpeechRecognizerLanguage::Sn },
		{ "ESpeechRecognizerLanguage::Yo", (int64)ESpeechRecognizerLanguage::Yo },
		{ "ESpeechRecognizerLanguage::So", (int64)ESpeechRecognizerLanguage::So },
		{ "ESpeechRecognizerLanguage::Af", (int64)ESpeechRecognizerLanguage::Af },
		{ "ESpeechRecognizerLanguage::Oc", (int64)ESpeechRecognizerLanguage::Oc },
		{ "ESpeechRecognizerLanguage::Ka", (int64)ESpeechRecognizerLanguage::Ka },
		{ "ESpeechRecognizerLanguage::Be", (int64)ESpeechRecognizerLanguage::Be },
		{ "ESpeechRecognizerLanguage::Tg", (int64)ESpeechRecognizerLanguage::Tg },
		{ "ESpeechRecognizerLanguage::Sd", (int64)ESpeechRecognizerLanguage::Sd },
		{ "ESpeechRecognizerLanguage::Gu", (int64)ESpeechRecognizerLanguage::Gu },
		{ "ESpeechRecognizerLanguage::Am", (int64)ESpeechRecognizerLanguage::Am },
		{ "ESpeechRecognizerLanguage::Yi", (int64)ESpeechRecognizerLanguage::Yi },
		{ "ESpeechRecognizerLanguage::Lo", (int64)ESpeechRecognizerLanguage::Lo },
		{ "ESpeechRecognizerLanguage::Uz", (int64)ESpeechRecognizerLanguage::Uz },
		{ "ESpeechRecognizerLanguage::Fo", (int64)ESpeechRecognizerLanguage::Fo },
		{ "ESpeechRecognizerLanguage::Ht", (int64)ESpeechRecognizerLanguage::Ht },
		{ "ESpeechRecognizerLanguage::Ps", (int64)ESpeechRecognizerLanguage::Ps },
		{ "ESpeechRecognizerLanguage::Tk", (int64)ESpeechRecognizerLanguage::Tk },
		{ "ESpeechRecognizerLanguage::Nn", (int64)ESpeechRecognizerLanguage::Nn },
		{ "ESpeechRecognizerLanguage::Mt", (int64)ESpeechRecognizerLanguage::Mt },
		{ "ESpeechRecognizerLanguage::Sa", (int64)ESpeechRecognizerLanguage::Sa },
		{ "ESpeechRecognizerLanguage::Lb", (int64)ESpeechRecognizerLanguage::Lb },
		{ "ESpeechRecognizerLanguage::My", (int64)ESpeechRecognizerLanguage::My },
		{ "ESpeechRecognizerLanguage::Bo", (int64)ESpeechRecognizerLanguage::Bo },
		{ "ESpeechRecognizerLanguage::Tl", (int64)ESpeechRecognizerLanguage::Tl },
		{ "ESpeechRecognizerLanguage::Mg", (int64)ESpeechRecognizerLanguage::Mg },
		{ "ESpeechRecognizerLanguage::As", (int64)ESpeechRecognizerLanguage::As },
		{ "ESpeechRecognizerLanguage::Tt", (int64)ESpeechRecognizerLanguage::Tt },
		{ "ESpeechRecognizerLanguage::Haw", (int64)ESpeechRecognizerLanguage::Haw },
		{ "ESpeechRecognizerLanguage::Ln", (int64)ESpeechRecognizerLanguage::Ln },
		{ "ESpeechRecognizerLanguage::Ha", (int64)ESpeechRecognizerLanguage::Ha },
		{ "ESpeechRecognizerLanguage::Ba", (int64)ESpeechRecognizerLanguage::Ba },
		{ "ESpeechRecognizerLanguage::Jw", (int64)ESpeechRecognizerLanguage::Jw },
		{ "ESpeechRecognizerLanguage::Su", (int64)ESpeechRecognizerLanguage::Su },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerLanguage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizer,
	nullptr,
	"ESpeechRecognizerLanguage",
	"ESpeechRecognizerLanguage",
	Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerLanguage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerLanguage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerLanguage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerLanguage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerLanguage()
{
	if (!Z_Registration_Info_UEnum_ESpeechRecognizerLanguage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeechRecognizerLanguage.InnerSingleton, Z_Construct_UEnum_RuntimeSpeechRecognizer_ESpeechRecognizerLanguage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpeechRecognizerLanguage.InnerSingleton;
}
// End Enum ESpeechRecognizerLanguage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpeechRecognizerModelSize_StaticEnum, TEXT("ESpeechRecognizerModelSize"), &Z_Registration_Info_UEnum_ESpeechRecognizerModelSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4227967394U) },
		{ ESpeechRecognizerModelLanguage_StaticEnum, TEXT("ESpeechRecognizerModelLanguage"), &Z_Registration_Info_UEnum_ESpeechRecognizerModelLanguage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1806205478U) },
		{ ESpeechRecognizerLanguage_StaticEnum, TEXT("ESpeechRecognizerLanguage"), &Z_Registration_Info_UEnum_ESpeechRecognizerLanguage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1572137747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerTypes_h_1820018393(TEXT("/Script/RuntimeSpeechRecognizer"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
