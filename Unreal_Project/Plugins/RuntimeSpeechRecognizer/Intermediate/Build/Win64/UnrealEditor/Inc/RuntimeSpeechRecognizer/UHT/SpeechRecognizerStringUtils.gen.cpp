// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeSpeechRecognizer/Public/SpeechRecognizerStringUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognizerStringUtils() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
RUNTIMESPEECHRECOGNIZER_API UClass* Z_Construct_UClass_USpeechRecognizerStringUtils();
RUNTIMESPEECHRECOGNIZER_API UClass* Z_Construct_UClass_USpeechRecognizerStringUtils_NoRegister();
UPackage* Z_Construct_UPackage__Script_RuntimeSpeechRecognizer();
// End Cross Module References

// Begin Class USpeechRecognizerStringUtils Function ComputeLevenshteinSimilarity
struct Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics
{
	struct SpeechRecognizerStringUtils_eventComputeLevenshteinSimilarity_Parms
	{
		FString BaseString;
		FString CandidateString;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SpeechRecognizer|String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Computes the Levenshtein similarity between two strings\n\x09 * This method is useful for recognizing spoken commands\n\x09 * \n\x09 * @param BaseString The base string to compare against\n\x09 * @param CandidateString The candidate string to compare\n\x09 * @return The similarity between 0 and 1, where 1 is a perfect match\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SpeechRecognizerStringUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Computes the Levenshtein similarity between two strings\nThis method is useful for recognizing spoken commands\n\n@param BaseString The base string to compare against\n@param CandidateString The candidate string to compare\n@return The similarity between 0 and 1, where 1 is a perfect match" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandidateString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CandidateString;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::NewProp_BaseString = { "BaseString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizerStringUtils_eventComputeLevenshteinSimilarity_Parms, BaseString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseString_MetaData), NewProp_BaseString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::NewProp_CandidateString = { "CandidateString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizerStringUtils_eventComputeLevenshteinSimilarity_Parms, CandidateString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandidateString_MetaData), NewProp_CandidateString_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpeechRecognizerStringUtils_eventComputeLevenshteinSimilarity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::NewProp_BaseString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::NewProp_CandidateString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognizerStringUtils, nullptr, "ComputeLevenshteinSimilarity", nullptr, nullptr, Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::SpeechRecognizerStringUtils_eventComputeLevenshteinSimilarity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::SpeechRecognizerStringUtils_eventComputeLevenshteinSimilarity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpeechRecognizerStringUtils::execComputeLevenshteinSimilarity)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BaseString);
	P_GET_PROPERTY(FStrProperty,Z_Param_CandidateString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USpeechRecognizerStringUtils::ComputeLevenshteinSimilarity(Z_Param_BaseString,Z_Param_CandidateString);
	P_NATIVE_END;
}
// End Class USpeechRecognizerStringUtils Function ComputeLevenshteinSimilarity

// Begin Class USpeechRecognizerStringUtils
void USpeechRecognizerStringUtils::StaticRegisterNativesUSpeechRecognizerStringUtils()
{
	UClass* Class = USpeechRecognizerStringUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComputeLevenshteinSimilarity", &USpeechRecognizerStringUtils::execComputeLevenshteinSimilarity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpeechRecognizerStringUtils);
UClass* Z_Construct_UClass_USpeechRecognizerStringUtils_NoRegister()
{
	return USpeechRecognizerStringUtils::StaticClass();
}
struct Z_Construct_UClass_USpeechRecognizerStringUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Utility class for string-related operations used by the speech recognizer.\n */" },
#endif
		{ "IncludePath", "SpeechRecognizerStringUtils.h" },
		{ "ModuleRelativePath", "Public/SpeechRecognizerStringUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility class for string-related operations used by the speech recognizer." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpeechRecognizerStringUtils_ComputeLevenshteinSimilarity, "ComputeLevenshteinSimilarity" }, // 2823653543
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeechRecognizerStringUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USpeechRecognizerStringUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognizerStringUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpeechRecognizerStringUtils_Statics::ClassParams = {
	&USpeechRecognizerStringUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognizerStringUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_USpeechRecognizerStringUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpeechRecognizerStringUtils()
{
	if (!Z_Registration_Info_UClass_USpeechRecognizerStringUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpeechRecognizerStringUtils.OuterSingleton, Z_Construct_UClass_USpeechRecognizerStringUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpeechRecognizerStringUtils.OuterSingleton;
}
template<> RUNTIMESPEECHRECOGNIZER_API UClass* StaticClass<USpeechRecognizerStringUtils>()
{
	return USpeechRecognizerStringUtils::StaticClass();
}
USpeechRecognizerStringUtils::USpeechRecognizerStringUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpeechRecognizerStringUtils);
USpeechRecognizerStringUtils::~USpeechRecognizerStringUtils() {}
// End Class USpeechRecognizerStringUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerStringUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpeechRecognizerStringUtils, USpeechRecognizerStringUtils::StaticClass, TEXT("USpeechRecognizerStringUtils"), &Z_Registration_Info_UClass_USpeechRecognizerStringUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpeechRecognizerStringUtils), 2354581519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerStringUtils_h_1557283781(TEXT("/Script/RuntimeSpeechRecognizer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerStringUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerStringUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
