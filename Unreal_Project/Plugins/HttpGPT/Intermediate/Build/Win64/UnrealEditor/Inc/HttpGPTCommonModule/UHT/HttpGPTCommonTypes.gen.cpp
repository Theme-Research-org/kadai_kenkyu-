// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTCommonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTCommonTypes() {}

// Begin Cross Module References
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonError();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonOptions();
UPackage* Z_Construct_UPackage__Script_HttpGPTCommonModule();
// End Cross Module References

// Begin ScriptStruct FHttpGPTCommonError
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTCommonError;
class UScriptStruct* FHttpGPTCommonError::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTCommonError.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTCommonError.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTCommonError, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTCommonError"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTCommonError.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTCommonError>()
{
	return FHttpGPTCommonError::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Common" },
		{ "DisplayName", "HttpGPT Common Error" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "HttpGPT | Common" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[] = {
		{ "Category", "HttpGPT | Common" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "HttpGPT | Common" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Code;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTCommonError>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTCommonError, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTCommonError, Code), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Code_MetaData), NewProp_Code_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTCommonError, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Code,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	&NewStructOps,
	"HttpGPTCommonError",
	Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::PropPointers),
	sizeof(FHttpGPTCommonError),
	alignof(FHttpGPTCommonError),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonError()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTCommonError.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTCommonError.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTCommonError.InnerSingleton;
}
// End ScriptStruct FHttpGPTCommonError

// Begin ScriptStruct FHttpGPTCommonOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions;
class UScriptStruct* FHttpGPTCommonOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTCommonOptions, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTCommonOptions"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTCommonOptions>()
{
	return FHttpGPTCommonOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Common" },
		{ "DisplayName", "HttpGPT Common Options" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_APIKey_MetaData[] = {
		{ "Category", "HttpGPT | Common" },
		{ "DisplayName", "API Key" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[] = {
		{ "Category", "HttpGPT | Common" },
		{ "DisplayName", "User" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAzureOpenAI_MetaData[] = {
		{ "Category", "HttpGPT | Common" },
		{ "DisplayName", "Is Azure OpenAI" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Endpoint_MetaData[] = {
		{ "Category", "HttpGPT | Common" },
		{ "DisplayName", "Endpoint" },
		{ "EditCondition", "bIsAzureOpenAI" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AzureOpenAIAPIVersion_MetaData[] = {
		{ "Category", "HttpGPT | Common" },
		{ "DisplayName", "Azure OpenAI API Version" },
		{ "EditCondition", "bIsAzureOpenAI" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_APIKey;
	static const UECodeGen_Private::FNamePropertyParams NewProp_User;
	static void NewProp_bIsAzureOpenAI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAzureOpenAI;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Endpoint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AzureOpenAIAPIVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTCommonOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTCommonOptions, APIKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_APIKey_MetaData), NewProp_APIKey_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTCommonOptions, User), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_User_MetaData), NewProp_User_MetaData) };
void Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_bIsAzureOpenAI_SetBit(void* Obj)
{
	((FHttpGPTCommonOptions*)Obj)->bIsAzureOpenAI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_bIsAzureOpenAI = { "bIsAzureOpenAI", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHttpGPTCommonOptions), &Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_bIsAzureOpenAI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAzureOpenAI_MetaData), NewProp_bIsAzureOpenAI_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_Endpoint = { "Endpoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTCommonOptions, Endpoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Endpoint_MetaData), NewProp_Endpoint_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_AzureOpenAIAPIVersion = { "AzureOpenAIAPIVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTCommonOptions, AzureOpenAIAPIVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AzureOpenAIAPIVersion_MetaData), NewProp_AzureOpenAIAPIVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_APIKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_bIsAzureOpenAI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_Endpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_AzureOpenAIAPIVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	&NewStructOps,
	"HttpGPTCommonOptions",
	Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::PropPointers),
	sizeof(FHttpGPTCommonOptions),
	alignof(FHttpGPTCommonOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonOptions()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions.InnerSingleton;
}
// End ScriptStruct FHttpGPTCommonOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTCommonTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHttpGPTCommonError::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewStructOps, TEXT("HttpGPTCommonError"), &Z_Registration_Info_UScriptStruct_HttpGPTCommonError, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTCommonError), 3953807954U) },
		{ FHttpGPTCommonOptions::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewStructOps, TEXT("HttpGPTCommonOptions"), &Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTCommonOptions), 149639269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTCommonTypes_h_3523931977(TEXT("/Script/HttpGPTCommonModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTCommonTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTCommonTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
