// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTCommonModule/Public/Management/HttpGPTSettings.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTChatTypes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTCommonTypes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTImageTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTSettings();
HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTSettings_NoRegister();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatOptions();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonOptions();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageOptions();
UPackage* Z_Construct_UPackage__Script_HttpGPTCommonModule();
// End Cross Module References

// Begin Class UHttpGPTSettings Function GetChatOptions
struct Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions_Statics
{
	struct HttpGPTSettings_eventGetChatOptions_Parms
	{
		FHttpGPTChatOptions ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Settings" },
		{ "CompactNodeTitle", "HttpGPT Chat Options" },
		{ "DefaultToSelf", "Self" },
		{ "DisplayName", "Get Chat Options" },
		{ "HidePin", "Self" },
		{ "ModuleRelativePath", "Public/Management/HttpGPTSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTSettings_eventGetChatOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FHttpGPTChatOptions, METADATA_PARAMS(0, nullptr) }; // 3354722897
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTSettings, nullptr, "GetChatOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions_Statics::HttpGPTSettings_eventGetChatOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions_Statics::HttpGPTSettings_eventGetChatOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTSettings::execGetChatOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHttpGPTChatOptions*)Z_Param__Result=UHttpGPTSettings::GetChatOptions();
	P_NATIVE_END;
}
// End Class UHttpGPTSettings Function GetChatOptions

// Begin Class UHttpGPTSettings Function GetCommonOptions
struct Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions_Statics
{
	struct HttpGPTSettings_eventGetCommonOptions_Parms
	{
		FHttpGPTCommonOptions ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Settings" },
		{ "CompactNodeTitle", "HttpGPT Common Options" },
		{ "DefaultToSelf", "Self" },
		{ "DisplayName", "Get Common Options" },
		{ "HidePin", "Self" },
		{ "ModuleRelativePath", "Public/Management/HttpGPTSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTSettings_eventGetCommonOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FHttpGPTCommonOptions, METADATA_PARAMS(0, nullptr) }; // 149639269
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTSettings, nullptr, "GetCommonOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions_Statics::HttpGPTSettings_eventGetCommonOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions_Statics::HttpGPTSettings_eventGetCommonOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTSettings::execGetCommonOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHttpGPTCommonOptions*)Z_Param__Result=UHttpGPTSettings::GetCommonOptions();
	P_NATIVE_END;
}
// End Class UHttpGPTSettings Function GetCommonOptions

// Begin Class UHttpGPTSettings Function GetImageOptions
struct Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions_Statics
{
	struct HttpGPTSettings_eventGetImageOptions_Parms
	{
		FHttpGPTImageOptions ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Settings" },
		{ "CompactNodeTitle", "HttpGPT Image Options" },
		{ "DefaultToSelf", "Self" },
		{ "DisplayName", "Get Image Options" },
		{ "HidePin", "Self" },
		{ "ModuleRelativePath", "Public/Management/HttpGPTSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTSettings_eventGetImageOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FHttpGPTImageOptions, METADATA_PARAMS(0, nullptr) }; // 3327341991
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTSettings, nullptr, "GetImageOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions_Statics::HttpGPTSettings_eventGetImageOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions_Statics::HttpGPTSettings_eventGetImageOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTSettings::execGetImageOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHttpGPTImageOptions*)Z_Param__Result=UHttpGPTSettings::GetImageOptions();
	P_NATIVE_END;
}
// End Class UHttpGPTSettings Function GetImageOptions

// Begin Class UHttpGPTSettings Function SetChatOptions
struct Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions_Statics
{
	struct HttpGPTSettings_eventSetChatOptions_Parms
	{
		FHttpGPTChatOptions Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Settings" },
		{ "DefaultToSelf", "Self" },
		{ "DisplayName", "Set Chat Options" },
		{ "HidePin", "Self" },
		{ "ModuleRelativePath", "Public/Management/HttpGPTSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTSettings_eventSetChatOptions_Parms, Value), Z_Construct_UScriptStruct_FHttpGPTChatOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3354722897
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTSettings, nullptr, "SetChatOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions_Statics::HttpGPTSettings_eventSetChatOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions_Statics::HttpGPTSettings_eventSetChatOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTSettings::execSetChatOptions)
{
	P_GET_STRUCT_REF(FHttpGPTChatOptions,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHttpGPTSettings::SetChatOptions(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UHttpGPTSettings Function SetChatOptions

// Begin Class UHttpGPTSettings Function SetCommonOptions
struct Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions_Statics
{
	struct HttpGPTSettings_eventSetCommonOptions_Parms
	{
		FHttpGPTCommonOptions Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Settings" },
		{ "DefaultToSelf", "Self" },
		{ "DisplayName", "Set Common Options" },
		{ "HidePin", "Self" },
		{ "ModuleRelativePath", "Public/Management/HttpGPTSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTSettings_eventSetCommonOptions_Parms, Value), Z_Construct_UScriptStruct_FHttpGPTCommonOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 149639269
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTSettings, nullptr, "SetCommonOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions_Statics::HttpGPTSettings_eventSetCommonOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions_Statics::HttpGPTSettings_eventSetCommonOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTSettings::execSetCommonOptions)
{
	P_GET_STRUCT_REF(FHttpGPTCommonOptions,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHttpGPTSettings::SetCommonOptions(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UHttpGPTSettings Function SetCommonOptions

// Begin Class UHttpGPTSettings Function SetImageOptions
struct Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions_Statics
{
	struct HttpGPTSettings_eventSetImageOptions_Parms
	{
		FHttpGPTImageOptions Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Settings" },
		{ "DefaultToSelf", "Self" },
		{ "DisplayName", "Set Image Options" },
		{ "HidePin", "Self" },
		{ "ModuleRelativePath", "Public/Management/HttpGPTSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTSettings_eventSetImageOptions_Parms, Value), Z_Construct_UScriptStruct_FHttpGPTImageOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3327341991
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTSettings, nullptr, "SetImageOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions_Statics::HttpGPTSettings_eventSetImageOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions_Statics::HttpGPTSettings_eventSetImageOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTSettings::execSetImageOptions)
{
	P_GET_STRUCT_REF(FHttpGPTImageOptions,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHttpGPTSettings::SetImageOptions(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UHttpGPTSettings Function SetImageOptions

// Begin Class UHttpGPTSettings
void UHttpGPTSettings::StaticRegisterNativesUHttpGPTSettings()
{
	UClass* Class = UHttpGPTSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetChatOptions", &UHttpGPTSettings::execGetChatOptions },
		{ "GetCommonOptions", &UHttpGPTSettings::execGetCommonOptions },
		{ "GetImageOptions", &UHttpGPTSettings::execGetImageOptions },
		{ "SetChatOptions", &UHttpGPTSettings::execSetChatOptions },
		{ "SetCommonOptions", &UHttpGPTSettings::execSetCommonOptions },
		{ "SetImageOptions", &UHttpGPTSettings::execSetImageOptions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTSettings);
UClass* Z_Construct_UClass_UHttpGPTSettings_NoRegister()
{
	return UHttpGPTSettings::StaticClass();
}
struct Z_Construct_UClass_UHttpGPTSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "DisplayName", "HttpGPT" },
		{ "IncludePath", "Management/HttpGPTSettings.h" },
		{ "ModuleRelativePath", "Public/Management/HttpGPTSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonOptions_MetaData[] = {
		{ "Category", "Default Options" },
		{ "DisplayName", "Common Options" },
		{ "ModuleRelativePath", "Public/Management/HttpGPTSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatOptions_MetaData[] = {
		{ "Category", "Default Options" },
		{ "DisplayName", "Chat Options" },
		{ "ModuleRelativePath", "Public/Management/HttpGPTSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageOptions_MetaData[] = {
		{ "Category", "Default Options" },
		{ "DisplayName", "Image Options" },
		{ "ModuleRelativePath", "Public/Management/HttpGPTSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomSystemContext_MetaData[] = {
		{ "Category", "Editor | HttpGPT Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Enable custom system context in HttpGPT Chat Editor Tool */" },
#endif
		{ "DisplayName", "Use Custom System Context" },
		{ "ModuleRelativePath", "Public/Management/HttpGPTSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable custom system context in HttpGPT Chat Editor Tool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomSystemContext_MetaData[] = {
		{ "Category", "Editor | HttpGPT Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Custom system context to use in HttpGPT Chat Editor Tool */" },
#endif
		{ "DisplayName", "Custom System Context" },
		{ "EditCondition", "bUseCustomSystemContext" },
		{ "ModuleRelativePath", "Public/Management/HttpGPTSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom system context to use in HttpGPT Chat Editor Tool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedImagesDir_MetaData[] = {
		{ "Category", "Editor | HttpGPT Image Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Directory to store images generated by HttpGPT Image Generator Editor Tool */" },
#endif
		{ "DisplayName", "Generated Images Directory" },
		{ "ModuleRelativePath", "Public/Management/HttpGPTSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Directory to store images generated by HttpGPT Image Generator Editor Tool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInternalLogs_MetaData[] = {
		{ "Category", "Logging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Will print extra internal informations in log */" },
#endif
		{ "DisplayName", "Enable Internal Logs" },
		{ "ModuleRelativePath", "Public/Management/HttpGPTSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will print extra internal informations in log" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChatOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageOptions;
	static void NewProp_bUseCustomSystemContext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomSystemContext;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomSystemContext;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedImagesDir;
	static void NewProp_bEnableInternalLogs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInternalLogs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTSettings_GetChatOptions, "GetChatOptions" }, // 1927639583
		{ &Z_Construct_UFunction_UHttpGPTSettings_GetCommonOptions, "GetCommonOptions" }, // 3560430061
		{ &Z_Construct_UFunction_UHttpGPTSettings_GetImageOptions, "GetImageOptions" }, // 3539672606
		{ &Z_Construct_UFunction_UHttpGPTSettings_SetChatOptions, "SetChatOptions" }, // 802150980
		{ &Z_Construct_UFunction_UHttpGPTSettings_SetCommonOptions, "SetCommonOptions" }, // 3911254159
		{ &Z_Construct_UFunction_UHttpGPTSettings_SetImageOptions, "SetImageOptions" }, // 2661785548
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_CommonOptions = { "CommonOptions", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTSettings, CommonOptions), Z_Construct_UScriptStruct_FHttpGPTCommonOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonOptions_MetaData), NewProp_CommonOptions_MetaData) }; // 149639269
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_ChatOptions = { "ChatOptions", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTSettings, ChatOptions), Z_Construct_UScriptStruct_FHttpGPTChatOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatOptions_MetaData), NewProp_ChatOptions_MetaData) }; // 3354722897
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_ImageOptions = { "ImageOptions", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTSettings, ImageOptions), Z_Construct_UScriptStruct_FHttpGPTImageOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageOptions_MetaData), NewProp_ImageOptions_MetaData) }; // 3327341991
void Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_bUseCustomSystemContext_SetBit(void* Obj)
{
	((UHttpGPTSettings*)Obj)->bUseCustomSystemContext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_bUseCustomSystemContext = { "bUseCustomSystemContext", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHttpGPTSettings), &Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_bUseCustomSystemContext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomSystemContext_MetaData), NewProp_bUseCustomSystemContext_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_CustomSystemContext = { "CustomSystemContext", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTSettings, CustomSystemContext), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomSystemContext_MetaData), NewProp_CustomSystemContext_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_GeneratedImagesDir = { "GeneratedImagesDir", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTSettings, GeneratedImagesDir), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedImagesDir_MetaData), NewProp_GeneratedImagesDir_MetaData) };
void Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_bEnableInternalLogs_SetBit(void* Obj)
{
	((UHttpGPTSettings*)Obj)->bEnableInternalLogs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_bEnableInternalLogs = { "bEnableInternalLogs", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHttpGPTSettings), &Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_bEnableInternalLogs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableInternalLogs_MetaData), NewProp_bEnableInternalLogs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHttpGPTSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_CommonOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_ChatOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_ImageOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_bUseCustomSystemContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_CustomSystemContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_GeneratedImagesDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTSettings_Statics::NewProp_bEnableInternalLogs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHttpGPTSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTSettings_Statics::ClassParams = {
	&UHttpGPTSettings::StaticClass,
	"Plugins",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHttpGPTSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UHttpGPTSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHttpGPTSettings()
{
	if (!Z_Registration_Info_UClass_UHttpGPTSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTSettings.OuterSingleton, Z_Construct_UClass_UHttpGPTSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHttpGPTSettings.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UClass* StaticClass<UHttpGPTSettings>()
{
	return UHttpGPTSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTSettings);
UHttpGPTSettings::~UHttpGPTSettings() {}
// End Class UHttpGPTSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Management_HttpGPTSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHttpGPTSettings, UHttpGPTSettings::StaticClass, TEXT("UHttpGPTSettings"), &Z_Registration_Info_UClass_UHttpGPTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTSettings), 1149260698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Management_HttpGPTSettings_h_1017177907(TEXT("/Script/HttpGPTCommonModule"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Management_HttpGPTSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Management_HttpGPTSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
