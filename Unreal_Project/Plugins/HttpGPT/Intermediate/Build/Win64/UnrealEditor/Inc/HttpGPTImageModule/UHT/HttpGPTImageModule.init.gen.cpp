// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTImageModule_init() {}
	HTTPGPTIMAGEMODULE_API UFunction* Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature();
	HTTPGPTIMAGEMODULE_API UFunction* Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HttpGPTImageModule;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HttpGPTImageModule()
	{
		if (!Z_Registration_Info_UPackage__Script_HttpGPTImageModule.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HttpGPTImageModule",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB1E9EAA3,
				0x87D6C33B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HttpGPTImageModule.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HttpGPTImageModule.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HttpGPTImageModule(Z_Construct_UPackage__Script_HttpGPTImageModule, TEXT("/Script/HttpGPTImageModule"), Z_Registration_Info_UPackage__Script_HttpGPTImageModule, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB1E9EAA3, 0x87D6C33B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
