// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeSpeechRecognizer_init() {}
	RUNTIMESPEECHRECOGNIZER_API UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature();
	RUNTIMESPEECHRECOGNIZER_API UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionFinishedDynamic__DelegateSignature();
	RUNTIMESPEECHRECOGNIZER_API UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature();
	RUNTIMESPEECHRECOGNIZER_API UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature();
	RUNTIMESPEECHRECOGNIZER_API UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStoppedDynamic__DelegateSignature();
	RUNTIMESPEECHRECOGNIZER_API UFunction* Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RuntimeSpeechRecognizer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RuntimeSpeechRecognizer()
	{
		if (!Z_Registration_Info_UPackage__Script_RuntimeSpeechRecognizer.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionErrorDynamic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionFinishedDynamic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionProgressDynamic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStartedDynamic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognitionStoppedDynamic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeSpeechRecognizer_OnSpeechRecognizedTextSegmentDynamic__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RuntimeSpeechRecognizer",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF2516FB5,
				0xE26733A0,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RuntimeSpeechRecognizer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RuntimeSpeechRecognizer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RuntimeSpeechRecognizer(Z_Construct_UPackage__Script_RuntimeSpeechRecognizer, TEXT("/Script/RuntimeSpeechRecognizer"), Z_Registration_Info_UPackage__Script_RuntimeSpeechRecognizer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF2516FB5, 0xE26733A0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
