// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTImageModule/Public/Tasks/HttpGPTImageRequest.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTCommonTypes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTImageTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTImageRequest() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTBaseTask();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonOptions();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageData();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageOptions();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageResponse();
HTTPGPTIMAGEMODULE_API UClass* Z_Construct_UClass_UHttpGPTImageHelper();
HTTPGPTIMAGEMODULE_API UClass* Z_Construct_UClass_UHttpGPTImageHelper_NoRegister();
HTTPGPTIMAGEMODULE_API UClass* Z_Construct_UClass_UHttpGPTImageRequest();
HTTPGPTIMAGEMODULE_API UClass* Z_Construct_UClass_UHttpGPTImageRequest_NoRegister();
HTTPGPTIMAGEMODULE_API UFunction* Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature();
HTTPGPTIMAGEMODULE_API UFunction* Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_HttpGPTImageModule();
// End Cross Module References

// Begin Delegate FHttpGPTImageResponseDelegate
struct Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics
{
	struct _Script_HttpGPTImageModule_eventHttpGPTImageResponseDelegate_Parms
	{
		FHttpGPTImageResponse Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HttpGPTImageModule_eventHttpGPTImageResponseDelegate_Parms, Response), Z_Construct_UScriptStruct_FHttpGPTImageResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 1996345346
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpGPTImageModule, nullptr, "HttpGPTImageResponseDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::_Script_HttpGPTImageModule_eventHttpGPTImageResponseDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::_Script_HttpGPTImageModule_eventHttpGPTImageResponseDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHttpGPTImageResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpGPTImageResponseDelegate, FHttpGPTImageResponse const& Response)
{
	struct _Script_HttpGPTImageModule_eventHttpGPTImageResponseDelegate_Parms
	{
		FHttpGPTImageResponse Response;
	};
	_Script_HttpGPTImageModule_eventHttpGPTImageResponseDelegate_Parms Parms;
	Parms.Response=Response;
	HttpGPTImageResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FHttpGPTImageResponseDelegate

// Begin Class UHttpGPTImageRequest Function GetImageOptions
struct Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics
{
	struct HttpGPTImageRequest_eventGetImageOptions_Parms
	{
		FHttpGPTImageOptions ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageRequest_eventGetImageOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FHttpGPTImageOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3327341991
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageRequest, nullptr, "GetImageOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::HttpGPTImageRequest_eventGetImageOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::HttpGPTImageRequest_eventGetImageOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTImageRequest::execGetImageOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHttpGPTImageOptions*)Z_Param__Result=P_THIS->GetImageOptions();
	P_NATIVE_END;
}
// End Class UHttpGPTImageRequest Function GetImageOptions

// Begin Class UHttpGPTImageRequest Function GetPrompt
struct Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics
{
	struct HttpGPTImageRequest_eventGetPrompt_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageRequest_eventGetPrompt_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageRequest, nullptr, "GetPrompt", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::HttpGPTImageRequest_eventGetPrompt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::HttpGPTImageRequest_eventGetPrompt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTImageRequest::execGetPrompt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetPrompt();
	P_NATIVE_END;
}
// End Class UHttpGPTImageRequest Function GetPrompt

// Begin Class UHttpGPTImageRequest Function RequestImages_CustomOptions
struct Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics
{
	struct HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms
	{
		const UObject* WorldContextObject;
		FString Prompt;
		FHttpGPTCommonOptions CommonOptions;
		FHttpGPTImageOptions ImageOptions;
		UHttpGPTImageRequest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "HttpGPT | Image | Custom" },
		{ "DisplayName", "Request Images with Custom Options" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms, Prompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prompt_MetaData), NewProp_Prompt_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_CommonOptions = { "CommonOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms, CommonOptions), Z_Construct_UScriptStruct_FHttpGPTCommonOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonOptions_MetaData), NewProp_CommonOptions_MetaData) }; // 149639269
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_ImageOptions = { "ImageOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms, ImageOptions), Z_Construct_UScriptStruct_FHttpGPTImageOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageOptions_MetaData), NewProp_ImageOptions_MetaData) }; // 3327341991
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms, ReturnValue), Z_Construct_UClass_UHttpGPTImageRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_Prompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_CommonOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_ImageOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageRequest, nullptr, "RequestImages_CustomOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTImageRequest::execRequestImages_CustomOptions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
	P_GET_STRUCT(FHttpGPTCommonOptions,Z_Param_CommonOptions);
	P_GET_STRUCT(FHttpGPTImageOptions,Z_Param_ImageOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHttpGPTImageRequest**)Z_Param__Result=UHttpGPTImageRequest::RequestImages_CustomOptions(Z_Param_WorldContextObject,Z_Param_Prompt,Z_Param_CommonOptions,Z_Param_ImageOptions);
	P_NATIVE_END;
}
// End Class UHttpGPTImageRequest Function RequestImages_CustomOptions

// Begin Class UHttpGPTImageRequest Function RequestImages_DefaultOptions
struct Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics
{
	struct HttpGPTImageRequest_eventRequestImages_DefaultOptions_Parms
	{
		const UObject* WorldContextObject;
		FString Prompt;
		UHttpGPTImageRequest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "HttpGPT | Image | Default" },
		{ "DisplayName", "Request Images with Default Options" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_DefaultOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_DefaultOptions_Parms, Prompt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prompt_MetaData), NewProp_Prompt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_DefaultOptions_Parms, ReturnValue), Z_Construct_UClass_UHttpGPTImageRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_Prompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageRequest, nullptr, "RequestImages_DefaultOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::HttpGPTImageRequest_eventRequestImages_DefaultOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::HttpGPTImageRequest_eventRequestImages_DefaultOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTImageRequest::execRequestImages_DefaultOptions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHttpGPTImageRequest**)Z_Param__Result=UHttpGPTImageRequest::RequestImages_DefaultOptions(Z_Param_WorldContextObject,Z_Param_Prompt);
	P_NATIVE_END;
}
// End Class UHttpGPTImageRequest Function RequestImages_DefaultOptions

// Begin Class UHttpGPTImageRequest
void UHttpGPTImageRequest::StaticRegisterNativesUHttpGPTImageRequest()
{
	UClass* Class = UHttpGPTImageRequest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetImageOptions", &UHttpGPTImageRequest::execGetImageOptions },
		{ "GetPrompt", &UHttpGPTImageRequest::execGetPrompt },
		{ "RequestImages_CustomOptions", &UHttpGPTImageRequest::execRequestImages_CustomOptions },
		{ "RequestImages_DefaultOptions", &UHttpGPTImageRequest::execRequestImages_DefaultOptions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTImageRequest);
UClass* Z_Construct_UClass_UHttpGPTImageRequest_NoRegister()
{
	return UHttpGPTImageRequest::StaticClass();
}
struct Z_Construct_UClass_UHttpGPTImageRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "Tasks/HttpGPTImageRequest.h" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessCompleted_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressUpdated_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressStarted_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorReceived_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ProcessCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ProgressUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ProgressStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ErrorReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions, "GetImageOptions" }, // 3310742287
		{ &Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt, "GetPrompt" }, // 4198811096
		{ &Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions, "RequestImages_CustomOptions" }, // 3113214691
		{ &Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions, "RequestImages_DefaultOptions" }, // 700916781
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTImageRequest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProcessCompleted = { "ProcessCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTImageRequest, ProcessCompleted), Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessCompleted_MetaData), NewProp_ProcessCompleted_MetaData) }; // 1148208908
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProgressUpdated = { "ProgressUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTImageRequest, ProgressUpdated), Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressUpdated_MetaData), NewProp_ProgressUpdated_MetaData) }; // 1148208908
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProgressStarted = { "ProgressStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTImageRequest, ProgressStarted), Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressStarted_MetaData), NewProp_ProgressStarted_MetaData) }; // 1148208908
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ErrorReceived = { "ErrorReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTImageRequest, ErrorReceived), Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorReceived_MetaData), NewProp_ErrorReceived_MetaData) }; // 1148208908
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHttpGPTImageRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProcessCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProgressUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProgressStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ErrorReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageRequest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHttpGPTImageRequest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHttpGPTBaseTask,
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTImageModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageRequest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTImageRequest_Statics::ClassParams = {
	&UHttpGPTImageRequest::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHttpGPTImageRequest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageRequest_Statics::PropPointers),
	0,
	0x009002A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageRequest_Statics::Class_MetaDataParams), Z_Construct_UClass_UHttpGPTImageRequest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHttpGPTImageRequest()
{
	if (!Z_Registration_Info_UClass_UHttpGPTImageRequest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTImageRequest.OuterSingleton, Z_Construct_UClass_UHttpGPTImageRequest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHttpGPTImageRequest.OuterSingleton;
}
template<> HTTPGPTIMAGEMODULE_API UClass* StaticClass<UHttpGPTImageRequest>()
{
	return UHttpGPTImageRequest::StaticClass();
}
UHttpGPTImageRequest::UHttpGPTImageRequest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTImageRequest);
UHttpGPTImageRequest::~UHttpGPTImageRequest() {}
// End Class UHttpGPTImageRequest

// Begin Delegate FHttpGPTImageGenerate
struct Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics
{
	struct _Script_HttpGPTImageModule_eventHttpGPTImageGenerate_Parms
	{
		UTexture2D* Image;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HttpGPTImageModule_eventHttpGPTImageGenerate_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::NewProp_Image,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpGPTImageModule, nullptr, "HttpGPTImageGenerate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::_Script_HttpGPTImageModule_eventHttpGPTImageGenerate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::_Script_HttpGPTImageModule_eventHttpGPTImageGenerate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHttpGPTImageGenerate_DelegateWrapper(const FScriptDelegate& HttpGPTImageGenerate, UTexture2D* Image)
{
	struct _Script_HttpGPTImageModule_eventHttpGPTImageGenerate_Parms
	{
		UTexture2D* Image;
	};
	_Script_HttpGPTImageModule_eventHttpGPTImageGenerate_Parms Parms;
	Parms.Image=Image;
	HttpGPTImageGenerate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FHttpGPTImageGenerate

// Begin Class UHttpGPTImageHelper Function CastToHttpGPTImageRequest
struct Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics
{
	struct HttpGPTImageHelper_eventCastToHttpGPTImageRequest_Parms
	{
		const UObject* Object;
		UHttpGPTImageRequest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "Cast to HttpGPT Image Request" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageHelper_eventCastToHttpGPTImageRequest_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageHelper_eventCastToHttpGPTImageRequest_Parms, ReturnValue), Z_Construct_UClass_UHttpGPTImageRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageHelper, nullptr, "CastToHttpGPTImageRequest", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::HttpGPTImageHelper_eventCastToHttpGPTImageRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::HttpGPTImageHelper_eventCastToHttpGPTImageRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTImageHelper::execCastToHttpGPTImageRequest)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHttpGPTImageRequest**)Z_Param__Result=UHttpGPTImageHelper::CastToHttpGPTImageRequest(Z_Param_Object);
	P_NATIVE_END;
}
// End Class UHttpGPTImageHelper Function CastToHttpGPTImageRequest

// Begin Class UHttpGPTImageHelper Function GenerateImage
struct Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics
{
	struct HttpGPTImageHelper_eventGenerateImage_Parms
	{
		FHttpGPTImageData ImageData;
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageData;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::NewProp_ImageData = { "ImageData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageHelper_eventGenerateImage_Parms, ImageData), Z_Construct_UScriptStruct_FHttpGPTImageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageData_MetaData), NewProp_ImageData_MetaData) }; // 1970629911
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageHelper_eventGenerateImage_Parms, Callback), Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1041222573
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::NewProp_ImageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageHelper, nullptr, "GenerateImage", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::HttpGPTImageHelper_eventGenerateImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::HttpGPTImageHelper_eventGenerateImage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTImageHelper::execGenerateImage)
{
	P_GET_STRUCT_REF(FHttpGPTImageData,Z_Param_Out_ImageData);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHttpGPTImageHelper::GenerateImage(Z_Param_Out_ImageData,FHttpGPTImageGenerate(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UHttpGPTImageHelper Function GenerateImage

// Begin Class UHttpGPTImageHelper
void UHttpGPTImageHelper::StaticRegisterNativesUHttpGPTImageHelper()
{
	UClass* Class = UHttpGPTImageHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CastToHttpGPTImageRequest", &UHttpGPTImageHelper::execCastToHttpGPTImageRequest },
		{ "GenerateImage", &UHttpGPTImageHelper::execGenerateImage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTImageHelper);
UClass* Z_Construct_UClass_UHttpGPTImageHelper_NoRegister()
{
	return UHttpGPTImageHelper::StaticClass();
}
struct Z_Construct_UClass_UHttpGPTImageHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "HttpGPT Image Helper" },
		{ "IncludePath", "Tasks/HttpGPTImageRequest.h" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest, "CastToHttpGPTImageRequest" }, // 3983992016
		{ &Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage, "GenerateImage" }, // 522390208
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTImageHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHttpGPTImageHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTImageModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTImageHelper_Statics::ClassParams = {
	&UHttpGPTImageHelper::StaticClass,
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
	0x001002A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UHttpGPTImageHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHttpGPTImageHelper()
{
	if (!Z_Registration_Info_UClass_UHttpGPTImageHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTImageHelper.OuterSingleton, Z_Construct_UClass_UHttpGPTImageHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHttpGPTImageHelper.OuterSingleton;
}
template<> HTTPGPTIMAGEMODULE_API UClass* StaticClass<UHttpGPTImageHelper>()
{
	return UHttpGPTImageHelper::StaticClass();
}
UHttpGPTImageHelper::UHttpGPTImageHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTImageHelper);
UHttpGPTImageHelper::~UHttpGPTImageHelper() {}
// End Class UHttpGPTImageHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHttpGPTImageRequest, UHttpGPTImageRequest::StaticClass, TEXT("UHttpGPTImageRequest"), &Z_Registration_Info_UClass_UHttpGPTImageRequest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTImageRequest), 2910535807U) },
		{ Z_Construct_UClass_UHttpGPTImageHelper, UHttpGPTImageHelper::StaticClass, TEXT("UHttpGPTImageHelper"), &Z_Registration_Info_UClass_UHttpGPTImageHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTImageHelper), 1241119630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_3996792957(TEXT("/Script/HttpGPTImageModule"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
