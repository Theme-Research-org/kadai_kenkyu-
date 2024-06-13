// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTChatModule/Public/Tasks/HttpGPTChatRequest.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTChatTypes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTCommonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTChatRequest() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
HTTPGPTCHATMODULE_API UClass* Z_Construct_UClass_UHttpGPTChatHelper();
HTTPGPTCHATMODULE_API UClass* Z_Construct_UClass_UHttpGPTChatHelper_NoRegister();
HTTPGPTCHATMODULE_API UClass* Z_Construct_UClass_UHttpGPTChatRequest();
HTTPGPTCHATMODULE_API UClass* Z_Construct_UClass_UHttpGPTChatRequest_NoRegister();
HTTPGPTCHATMODULE_API UFunction* Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature();
HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTBaseTask();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatMessage();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatOptions();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatResponse();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonOptions();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTFunction();
UPackage* Z_Construct_UPackage__Script_HttpGPTChatModule();
// End Cross Module References

// Begin Delegate FHttpGPTChatResponseDelegate
struct Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature_Statics
{
	struct _Script_HttpGPTChatModule_eventHttpGPTChatResponseDelegate_Parms
	{
		FHttpGPTChatResponse Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTChatRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HttpGPTChatModule_eventHttpGPTChatResponseDelegate_Parms, Response), Z_Construct_UScriptStruct_FHttpGPTChatResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2821707508
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpGPTChatModule, nullptr, "HttpGPTChatResponseDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature_Statics::_Script_HttpGPTChatModule_eventHttpGPTChatResponseDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature_Statics::_Script_HttpGPTChatModule_eventHttpGPTChatResponseDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHttpGPTChatResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpGPTChatResponseDelegate, FHttpGPTChatResponse const& Response)
{
	struct _Script_HttpGPTChatModule_eventHttpGPTChatResponseDelegate_Parms
	{
		FHttpGPTChatResponse Response;
	};
	_Script_HttpGPTChatModule_eventHttpGPTChatResponseDelegate_Parms Parms;
	Parms.Response=Response;
	HttpGPTChatResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FHttpGPTChatResponseDelegate

// Begin Class UHttpGPTChatRequest Function GetChatOptions
struct Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions_Statics
{
	struct HttpGPTChatRequest_eventGetChatOptions_Parms
	{
		FHttpGPTChatOptions ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTChatRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventGetChatOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FHttpGPTChatOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3354722897
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTChatRequest, nullptr, "GetChatOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions_Statics::HttpGPTChatRequest_eventGetChatOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions_Statics::HttpGPTChatRequest_eventGetChatOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTChatRequest::execGetChatOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHttpGPTChatOptions*)Z_Param__Result=P_THIS->GetChatOptions();
	P_NATIVE_END;
}
// End Class UHttpGPTChatRequest Function GetChatOptions

// Begin Class UHttpGPTChatRequest Function SendMessage_CustomOptions
struct Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics
{
	struct HttpGPTChatRequest_eventSendMessage_CustomOptions_Parms
	{
		const UObject* WorldContextObject;
		FString Message;
		TArray<FHttpGPTFunction> Functions;
		FHttpGPTCommonOptions CommonOptions;
		FHttpGPTChatOptions ChatOptions;
		UHttpGPTChatRequest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Functions" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "HttpGPT | Chat | Custom" },
		{ "DisplayName", "Send Message with Custom Options" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTChatRequest.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Functions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Functions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChatOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessage_CustomOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessage_CustomOptions_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHttpGPTFunction, METADATA_PARAMS(0, nullptr) }; // 3025053234
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessage_CustomOptions_Parms, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Functions_MetaData), NewProp_Functions_MetaData) }; // 3025053234
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::NewProp_CommonOptions = { "CommonOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessage_CustomOptions_Parms, CommonOptions), Z_Construct_UScriptStruct_FHttpGPTCommonOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonOptions_MetaData), NewProp_CommonOptions_MetaData) }; // 149639269
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::NewProp_ChatOptions = { "ChatOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessage_CustomOptions_Parms, ChatOptions), Z_Construct_UScriptStruct_FHttpGPTChatOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatOptions_MetaData), NewProp_ChatOptions_MetaData) }; // 3354722897
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessage_CustomOptions_Parms, ReturnValue), Z_Construct_UClass_UHttpGPTChatRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::NewProp_Functions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::NewProp_Functions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::NewProp_CommonOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::NewProp_ChatOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTChatRequest, nullptr, "SendMessage_CustomOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::HttpGPTChatRequest_eventSendMessage_CustomOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::HttpGPTChatRequest_eventSendMessage_CustomOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTChatRequest::execSendMessage_CustomOptions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_TARRAY_REF(FHttpGPTFunction,Z_Param_Out_Functions);
	P_GET_STRUCT(FHttpGPTCommonOptions,Z_Param_CommonOptions);
	P_GET_STRUCT(FHttpGPTChatOptions,Z_Param_ChatOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHttpGPTChatRequest**)Z_Param__Result=UHttpGPTChatRequest::SendMessage_CustomOptions(Z_Param_WorldContextObject,Z_Param_Message,Z_Param_Out_Functions,Z_Param_CommonOptions,Z_Param_ChatOptions);
	P_NATIVE_END;
}
// End Class UHttpGPTChatRequest Function SendMessage_CustomOptions

// Begin Class UHttpGPTChatRequest Function SendMessage_DefaultOptions
struct Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics
{
	struct HttpGPTChatRequest_eventSendMessage_DefaultOptions_Parms
	{
		const UObject* WorldContextObject;
		FString Message;
		TArray<FHttpGPTFunction> Functions;
		UHttpGPTChatRequest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Functions" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "HttpGPT | Chat | Default" },
		{ "DisplayName", "Send Message with Default Options" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTChatRequest.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Functions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Functions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessage_DefaultOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessage_DefaultOptions_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHttpGPTFunction, METADATA_PARAMS(0, nullptr) }; // 3025053234
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessage_DefaultOptions_Parms, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Functions_MetaData), NewProp_Functions_MetaData) }; // 3025053234
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessage_DefaultOptions_Parms, ReturnValue), Z_Construct_UClass_UHttpGPTChatRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::NewProp_Functions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::NewProp_Functions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTChatRequest, nullptr, "SendMessage_DefaultOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::HttpGPTChatRequest_eventSendMessage_DefaultOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::HttpGPTChatRequest_eventSendMessage_DefaultOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTChatRequest::execSendMessage_DefaultOptions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_TARRAY_REF(FHttpGPTFunction,Z_Param_Out_Functions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHttpGPTChatRequest**)Z_Param__Result=UHttpGPTChatRequest::SendMessage_DefaultOptions(Z_Param_WorldContextObject,Z_Param_Message,Z_Param_Out_Functions);
	P_NATIVE_END;
}
// End Class UHttpGPTChatRequest Function SendMessage_DefaultOptions

// Begin Class UHttpGPTChatRequest Function SendMessages_CustomOptions
struct Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics
{
	struct HttpGPTChatRequest_eventSendMessages_CustomOptions_Parms
	{
		const UObject* WorldContextObject;
		TArray<FHttpGPTChatMessage> Messages;
		TArray<FHttpGPTFunction> Functions;
		FHttpGPTCommonOptions CommonOptions;
		FHttpGPTChatOptions ChatOptions;
		UHttpGPTChatRequest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Functions" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "HttpGPT | Chat | Custom" },
		{ "DisplayName", "Send Messages with Custom Options" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTChatRequest.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Messages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Messages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Functions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Functions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChatOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessages_CustomOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHttpGPTChatMessage, METADATA_PARAMS(0, nullptr) }; // 3117863013
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessages_CustomOptions_Parms, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Messages_MetaData), NewProp_Messages_MetaData) }; // 3117863013
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHttpGPTFunction, METADATA_PARAMS(0, nullptr) }; // 3025053234
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessages_CustomOptions_Parms, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Functions_MetaData), NewProp_Functions_MetaData) }; // 3025053234
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_CommonOptions = { "CommonOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessages_CustomOptions_Parms, CommonOptions), Z_Construct_UScriptStruct_FHttpGPTCommonOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonOptions_MetaData), NewProp_CommonOptions_MetaData) }; // 149639269
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_ChatOptions = { "ChatOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessages_CustomOptions_Parms, ChatOptions), Z_Construct_UScriptStruct_FHttpGPTChatOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatOptions_MetaData), NewProp_ChatOptions_MetaData) }; // 3354722897
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessages_CustomOptions_Parms, ReturnValue), Z_Construct_UClass_UHttpGPTChatRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_Messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_Messages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_Functions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_Functions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_CommonOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_ChatOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTChatRequest, nullptr, "SendMessages_CustomOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::HttpGPTChatRequest_eventSendMessages_CustomOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::HttpGPTChatRequest_eventSendMessages_CustomOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTChatRequest::execSendMessages_CustomOptions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FHttpGPTChatMessage,Z_Param_Out_Messages);
	P_GET_TARRAY_REF(FHttpGPTFunction,Z_Param_Out_Functions);
	P_GET_STRUCT(FHttpGPTCommonOptions,Z_Param_CommonOptions);
	P_GET_STRUCT(FHttpGPTChatOptions,Z_Param_ChatOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHttpGPTChatRequest**)Z_Param__Result=UHttpGPTChatRequest::SendMessages_CustomOptions(Z_Param_WorldContextObject,Z_Param_Out_Messages,Z_Param_Out_Functions,Z_Param_CommonOptions,Z_Param_ChatOptions);
	P_NATIVE_END;
}
// End Class UHttpGPTChatRequest Function SendMessages_CustomOptions

// Begin Class UHttpGPTChatRequest Function SendMessages_DefaultOptions
struct Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics
{
	struct HttpGPTChatRequest_eventSendMessages_DefaultOptions_Parms
	{
		const UObject* WorldContextObject;
		TArray<FHttpGPTChatMessage> Messages;
		TArray<FHttpGPTFunction> Functions;
		UHttpGPTChatRequest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Functions" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "HttpGPT | Chat | Default" },
		{ "DisplayName", "Send Messages with Default Options" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTChatRequest.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Messages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Messages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Functions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Functions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessages_DefaultOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHttpGPTChatMessage, METADATA_PARAMS(0, nullptr) }; // 3117863013
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessages_DefaultOptions_Parms, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Messages_MetaData), NewProp_Messages_MetaData) }; // 3117863013
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHttpGPTFunction, METADATA_PARAMS(0, nullptr) }; // 3025053234
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessages_DefaultOptions_Parms, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Functions_MetaData), NewProp_Functions_MetaData) }; // 3025053234
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatRequest_eventSendMessages_DefaultOptions_Parms, ReturnValue), Z_Construct_UClass_UHttpGPTChatRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::NewProp_Messages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::NewProp_Messages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::NewProp_Functions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::NewProp_Functions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTChatRequest, nullptr, "SendMessages_DefaultOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::HttpGPTChatRequest_eventSendMessages_DefaultOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::HttpGPTChatRequest_eventSendMessages_DefaultOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTChatRequest::execSendMessages_DefaultOptions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FHttpGPTChatMessage,Z_Param_Out_Messages);
	P_GET_TARRAY_REF(FHttpGPTFunction,Z_Param_Out_Functions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHttpGPTChatRequest**)Z_Param__Result=UHttpGPTChatRequest::SendMessages_DefaultOptions(Z_Param_WorldContextObject,Z_Param_Out_Messages,Z_Param_Out_Functions);
	P_NATIVE_END;
}
// End Class UHttpGPTChatRequest Function SendMessages_DefaultOptions

// Begin Class UHttpGPTChatRequest
void UHttpGPTChatRequest::StaticRegisterNativesUHttpGPTChatRequest()
{
	UClass* Class = UHttpGPTChatRequest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetChatOptions", &UHttpGPTChatRequest::execGetChatOptions },
		{ "SendMessage_CustomOptions", &UHttpGPTChatRequest::execSendMessage_CustomOptions },
		{ "SendMessage_DefaultOptions", &UHttpGPTChatRequest::execSendMessage_DefaultOptions },
		{ "SendMessages_CustomOptions", &UHttpGPTChatRequest::execSendMessages_CustomOptions },
		{ "SendMessages_DefaultOptions", &UHttpGPTChatRequest::execSendMessages_DefaultOptions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTChatRequest);
UClass* Z_Construct_UClass_UHttpGPTChatRequest_NoRegister()
{
	return UHttpGPTChatRequest::StaticClass();
}
struct Z_Construct_UClass_UHttpGPTChatRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "Tasks/HttpGPTChatRequest.h" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTChatRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessCompleted_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTChatRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressUpdated_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTChatRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressStarted_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTChatRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorReceived_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTChatRequest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ProcessCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ProgressUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ProgressStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ErrorReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTChatRequest_GetChatOptions, "GetChatOptions" }, // 501545635
		{ &Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_CustomOptions, "SendMessage_CustomOptions" }, // 2539225762
		{ &Z_Construct_UFunction_UHttpGPTChatRequest_SendMessage_DefaultOptions, "SendMessage_DefaultOptions" }, // 1394205948
		{ &Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_CustomOptions, "SendMessages_CustomOptions" }, // 4233396436
		{ &Z_Construct_UFunction_UHttpGPTChatRequest_SendMessages_DefaultOptions, "SendMessages_DefaultOptions" }, // 1553931863
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTChatRequest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTChatRequest_Statics::NewProp_ProcessCompleted = { "ProcessCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTChatRequest, ProcessCompleted), Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessCompleted_MetaData), NewProp_ProcessCompleted_MetaData) }; // 3426293404
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTChatRequest_Statics::NewProp_ProgressUpdated = { "ProgressUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTChatRequest, ProgressUpdated), Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressUpdated_MetaData), NewProp_ProgressUpdated_MetaData) }; // 3426293404
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTChatRequest_Statics::NewProp_ProgressStarted = { "ProgressStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTChatRequest, ProgressStarted), Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressStarted_MetaData), NewProp_ProgressStarted_MetaData) }; // 3426293404
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTChatRequest_Statics::NewProp_ErrorReceived = { "ErrorReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTChatRequest, ErrorReceived), Z_Construct_UDelegateFunction_HttpGPTChatModule_HttpGPTChatResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorReceived_MetaData), NewProp_ErrorReceived_MetaData) }; // 3426293404
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHttpGPTChatRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTChatRequest_Statics::NewProp_ProcessCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTChatRequest_Statics::NewProp_ProgressUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTChatRequest_Statics::NewProp_ProgressStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTChatRequest_Statics::NewProp_ErrorReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTChatRequest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHttpGPTChatRequest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHttpGPTBaseTask,
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTChatModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTChatRequest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTChatRequest_Statics::ClassParams = {
	&UHttpGPTChatRequest::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHttpGPTChatRequest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTChatRequest_Statics::PropPointers),
	0,
	0x009002A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTChatRequest_Statics::Class_MetaDataParams), Z_Construct_UClass_UHttpGPTChatRequest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHttpGPTChatRequest()
{
	if (!Z_Registration_Info_UClass_UHttpGPTChatRequest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTChatRequest.OuterSingleton, Z_Construct_UClass_UHttpGPTChatRequest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHttpGPTChatRequest.OuterSingleton;
}
template<> HTTPGPTCHATMODULE_API UClass* StaticClass<UHttpGPTChatRequest>()
{
	return UHttpGPTChatRequest::StaticClass();
}
UHttpGPTChatRequest::UHttpGPTChatRequest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTChatRequest);
UHttpGPTChatRequest::~UHttpGPTChatRequest() {}
// End Class UHttpGPTChatRequest

// Begin Class UHttpGPTChatHelper Function CastToHttpGPTChatRequest
struct Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics
{
	struct HttpGPTChatHelper_eventCastToHttpGPTChatRequest_Parms
	{
		const UObject* Object;
		UHttpGPTChatRequest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Cast to HttpGPT Chat Request" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTChatRequest.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatHelper_eventCastToHttpGPTChatRequest_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTChatHelper_eventCastToHttpGPTChatRequest_Parms, ReturnValue), Z_Construct_UClass_UHttpGPTChatRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTChatHelper, nullptr, "CastToHttpGPTChatRequest", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics::HttpGPTChatHelper_eventCastToHttpGPTChatRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics::HttpGPTChatHelper_eventCastToHttpGPTChatRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTChatHelper::execCastToHttpGPTChatRequest)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHttpGPTChatRequest**)Z_Param__Result=UHttpGPTChatHelper::CastToHttpGPTChatRequest(Z_Param_Object);
	P_NATIVE_END;
}
// End Class UHttpGPTChatHelper Function CastToHttpGPTChatRequest

// Begin Class UHttpGPTChatHelper
void UHttpGPTChatHelper::StaticRegisterNativesUHttpGPTChatHelper()
{
	UClass* Class = UHttpGPTChatHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CastToHttpGPTChatRequest", &UHttpGPTChatHelper::execCastToHttpGPTChatRequest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTChatHelper);
UClass* Z_Construct_UClass_UHttpGPTChatHelper_NoRegister()
{
	return UHttpGPTChatHelper::StaticClass();
}
struct Z_Construct_UClass_UHttpGPTChatHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Chat Helper" },
		{ "IncludePath", "Tasks/HttpGPTChatRequest.h" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTChatRequest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTChatHelper_CastToHttpGPTChatRequest, "CastToHttpGPTChatRequest" }, // 189287914
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTChatHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHttpGPTChatHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTChatModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTChatHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTChatHelper_Statics::ClassParams = {
	&UHttpGPTChatHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTChatHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UHttpGPTChatHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHttpGPTChatHelper()
{
	if (!Z_Registration_Info_UClass_UHttpGPTChatHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTChatHelper.OuterSingleton, Z_Construct_UClass_UHttpGPTChatHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHttpGPTChatHelper.OuterSingleton;
}
template<> HTTPGPTCHATMODULE_API UClass* StaticClass<UHttpGPTChatHelper>()
{
	return UHttpGPTChatHelper::StaticClass();
}
UHttpGPTChatHelper::UHttpGPTChatHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTChatHelper);
UHttpGPTChatHelper::~UHttpGPTChatHelper() {}
// End Class UHttpGPTChatHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHttpGPTChatRequest, UHttpGPTChatRequest::StaticClass, TEXT("UHttpGPTChatRequest"), &Z_Registration_Info_UClass_UHttpGPTChatRequest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTChatRequest), 4120080148U) },
		{ Z_Construct_UClass_UHttpGPTChatHelper, UHttpGPTChatHelper::StaticClass, TEXT("UHttpGPTChatHelper"), &Z_Registration_Info_UClass_UHttpGPTChatHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTChatHelper), 3115228085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_2515826251(TEXT("/Script/HttpGPTChatModule"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
