// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTCommonModule/Public/Utils/HttpGPTHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTHelper() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTHelper();
HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTHelper_NoRegister();
HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel();
HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole();
HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize();
HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTPropertyType();
HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat();
UPackage* Z_Construct_UPackage__Script_HttpGPTCommonModule();
// End Cross Module References

// Begin Class UHttpGPTHelper Function FormatToName
struct Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics
{
	struct HttpGPTHelper_eventFormatToName_Parms
	{
		EHttpGPTResponseFormat Format;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "Convert HttpGPT Format to Name" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventFormatToName_Parms, Format), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 1431230916
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventFormatToName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_Format_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "FormatToName", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::HttpGPTHelper_eventFormatToName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::HttpGPTHelper_eventFormatToName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTHelper_FormatToName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTHelper::execFormatToName)
{
	P_GET_ENUM(EHttpGPTResponseFormat,Z_Param_Format);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UHttpGPTHelper::FormatToName(EHttpGPTResponseFormat(Z_Param_Format));
	P_NATIVE_END;
}
// End Class UHttpGPTHelper Function FormatToName

// Begin Class UHttpGPTHelper Function GetAvailableGPTModels
struct Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics
{
	struct HttpGPTHelper_eventGetAvailableGPTModels_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Get Available GPT Models" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventGetAvailableGPTModels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "GetAvailableGPTModels", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::HttpGPTHelper_eventGetAvailableGPTModels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::HttpGPTHelper_eventGetAvailableGPTModels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTHelper::execGetAvailableGPTModels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UHttpGPTHelper::GetAvailableGPTModels();
	P_NATIVE_END;
}
// End Class UHttpGPTHelper Function GetAvailableGPTModels

// Begin Class UHttpGPTHelper Function GetEndpointForModel
struct Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics
{
	struct HttpGPTHelper_eventGetEndpointForModel_Parms
	{
		EHttpGPTChatModel Model;
		bool bIsAzureOpenAI;
		FString AzureOpenAIAPIVersion;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "CPP_Default_AzureOpenAIAPIVersion", "None" },
		{ "CPP_Default_bIsAzureOpenAI", "false" },
		{ "DisplayName", "Get Endpoint for Model" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAzureOpenAI_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AzureOpenAIAPIVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
	static void NewProp_bIsAzureOpenAI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAzureOpenAI;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AzureOpenAIAPIVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventGetEndpointForModel_Parms, Model), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) }; // 1093350004
void Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_bIsAzureOpenAI_SetBit(void* Obj)
{
	((HttpGPTHelper_eventGetEndpointForModel_Parms*)Obj)->bIsAzureOpenAI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_bIsAzureOpenAI = { "bIsAzureOpenAI", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HttpGPTHelper_eventGetEndpointForModel_Parms), &Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_bIsAzureOpenAI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAzureOpenAI_MetaData), NewProp_bIsAzureOpenAI_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_AzureOpenAIAPIVersion = { "AzureOpenAIAPIVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventGetEndpointForModel_Parms, AzureOpenAIAPIVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AzureOpenAIAPIVersion_MetaData), NewProp_AzureOpenAIAPIVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventGetEndpointForModel_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_Model_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_bIsAzureOpenAI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_AzureOpenAIAPIVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "GetEndpointForModel", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::HttpGPTHelper_eventGetEndpointForModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::HttpGPTHelper_eventGetEndpointForModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTHelper::execGetEndpointForModel)
{
	P_GET_ENUM(EHttpGPTChatModel,Z_Param_Model);
	P_GET_UBOOL(Z_Param_bIsAzureOpenAI);
	P_GET_PROPERTY(FStrProperty,Z_Param_AzureOpenAIAPIVersion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UHttpGPTHelper::GetEndpointForModel(EHttpGPTChatModel(Z_Param_Model),Z_Param_bIsAzureOpenAI,Z_Param_AzureOpenAIAPIVersion);
	P_NATIVE_END;
}
// End Class UHttpGPTHelper Function GetEndpointForModel

// Begin Class UHttpGPTHelper Function ModelSupportsChat
struct Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics
{
	struct HttpGPTHelper_eventModelSupportsChat_Parms
	{
		EHttpGPTChatModel Model;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Model Supports Chat" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventModelSupportsChat_Parms, Model), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) }; // 1093350004
void Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HttpGPTHelper_eventModelSupportsChat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HttpGPTHelper_eventModelSupportsChat_Parms), &Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_Model_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "ModelSupportsChat", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::HttpGPTHelper_eventModelSupportsChat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::HttpGPTHelper_eventModelSupportsChat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTHelper::execModelSupportsChat)
{
	P_GET_ENUM(EHttpGPTChatModel,Z_Param_Model);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHttpGPTHelper::ModelSupportsChat(EHttpGPTChatModel(Z_Param_Model));
	P_NATIVE_END;
}
// End Class UHttpGPTHelper Function ModelSupportsChat

// Begin Class UHttpGPTHelper Function ModelToName
struct Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics
{
	struct HttpGPTHelper_eventModelToName_Parms
	{
		EHttpGPTChatModel Model;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Convert HttpGPT Model to Name" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventModelToName_Parms, Model), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) }; // 1093350004
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventModelToName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_Model_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "ModelToName", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::HttpGPTHelper_eventModelToName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::HttpGPTHelper_eventModelToName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTHelper_ModelToName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTHelper::execModelToName)
{
	P_GET_ENUM(EHttpGPTChatModel,Z_Param_Model);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UHttpGPTHelper::ModelToName(EHttpGPTChatModel(Z_Param_Model));
	P_NATIVE_END;
}
// End Class UHttpGPTHelper Function ModelToName

// Begin Class UHttpGPTHelper Function NameToFormat
struct Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics
{
	struct HttpGPTHelper_eventNameToFormat_Parms
	{
		FName Format;
		EHttpGPTResponseFormat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "Convert Name to HttpGPT Format" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Format;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventNameToFormat_Parms, Format), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventNameToFormat_Parms, ReturnValue), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1431230916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "NameToFormat", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::HttpGPTHelper_eventNameToFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::HttpGPTHelper_eventNameToFormat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTHelper_NameToFormat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTHelper::execNameToFormat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Format);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EHttpGPTResponseFormat*)Z_Param__Result=UHttpGPTHelper::NameToFormat(Z_Param_Format);
	P_NATIVE_END;
}
// End Class UHttpGPTHelper Function NameToFormat

// Begin Class UHttpGPTHelper Function NameToModel
struct Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics
{
	struct HttpGPTHelper_eventNameToModel_Parms
	{
		FName Model;
		EHttpGPTChatModel ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Convert Name to HttpGPT Model" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Model;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventNameToModel_Parms, Model), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventNameToModel_Parms, ReturnValue), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1093350004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "NameToModel", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::HttpGPTHelper_eventNameToModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::HttpGPTHelper_eventNameToModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTHelper_NameToModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTHelper::execNameToModel)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Model);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EHttpGPTChatModel*)Z_Param__Result=UHttpGPTHelper::NameToModel(Z_Param_Model);
	P_NATIVE_END;
}
// End Class UHttpGPTHelper Function NameToModel

// Begin Class UHttpGPTHelper Function NameToPropertyType
struct Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics
{
	struct HttpGPTHelper_eventNameToPropertyType_Parms
	{
		FName Type;
		EHttpGPTPropertyType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Convert Name to HttpGPT Param Type" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventNameToPropertyType_Parms, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventNameToPropertyType_Parms, ReturnValue), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTPropertyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1643198084
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "NameToPropertyType", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::HttpGPTHelper_eventNameToPropertyType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::HttpGPTHelper_eventNameToPropertyType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTHelper::execNameToPropertyType)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EHttpGPTPropertyType*)Z_Param__Result=UHttpGPTHelper::NameToPropertyType(Z_Param_Type);
	P_NATIVE_END;
}
// End Class UHttpGPTHelper Function NameToPropertyType

// Begin Class UHttpGPTHelper Function NameToRole
struct Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics
{
	struct HttpGPTHelper_eventNameToRole_Parms
	{
		FName Role;
		EHttpGPTChatRole ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Convert Name to HttpGPT Role" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Role;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventNameToRole_Parms, Role), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Role_MetaData), NewProp_Role_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventNameToRole_Parms, ReturnValue), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2060829143
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_Role,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "NameToRole", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::HttpGPTHelper_eventNameToRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::HttpGPTHelper_eventNameToRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTHelper_NameToRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTHelper::execNameToRole)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Role);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EHttpGPTChatRole*)Z_Param__Result=UHttpGPTHelper::NameToRole(Z_Param_Role);
	P_NATIVE_END;
}
// End Class UHttpGPTHelper Function NameToRole

// Begin Class UHttpGPTHelper Function NameToSize
struct Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics
{
	struct HttpGPTHelper_eventNameToSize_Parms
	{
		FName Size;
		EHttpGPTImageSize ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "Convert Name to HttpGPT Size" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Size;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventNameToSize_Parms, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventNameToSize_Parms, ReturnValue), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3103602510
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "NameToSize", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::HttpGPTHelper_eventNameToSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::HttpGPTHelper_eventNameToSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTHelper_NameToSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTHelper::execNameToSize)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EHttpGPTImageSize*)Z_Param__Result=UHttpGPTHelper::NameToSize(Z_Param_Size);
	P_NATIVE_END;
}
// End Class UHttpGPTHelper Function NameToSize

// Begin Class UHttpGPTHelper Function PropertyTypeToName
struct Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics
{
	struct HttpGPTHelper_eventPropertyTypeToName_Parms
	{
		EHttpGPTPropertyType Type;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Convert HttpGPT Param Type to Name" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventPropertyTypeToName_Parms, Type), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTPropertyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1643198084
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventPropertyTypeToName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "PropertyTypeToName", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::HttpGPTHelper_eventPropertyTypeToName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::HttpGPTHelper_eventPropertyTypeToName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTHelper::execPropertyTypeToName)
{
	P_GET_ENUM(EHttpGPTPropertyType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UHttpGPTHelper::PropertyTypeToName(EHttpGPTPropertyType(Z_Param_Type));
	P_NATIVE_END;
}
// End Class UHttpGPTHelper Function PropertyTypeToName

// Begin Class UHttpGPTHelper Function RoleToName
struct Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics
{
	struct HttpGPTHelper_eventRoleToName_Parms
	{
		EHttpGPTChatRole Role;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Convert HttpGPT Role to Name" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Role;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventRoleToName_Parms, Role), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Role_MetaData), NewProp_Role_MetaData) }; // 2060829143
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventRoleToName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_Role_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_Role,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "RoleToName", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::HttpGPTHelper_eventRoleToName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::HttpGPTHelper_eventRoleToName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTHelper_RoleToName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTHelper::execRoleToName)
{
	P_GET_ENUM(EHttpGPTChatRole,Z_Param_Role);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UHttpGPTHelper::RoleToName(EHttpGPTChatRole(Z_Param_Role));
	P_NATIVE_END;
}
// End Class UHttpGPTHelper Function RoleToName

// Begin Class UHttpGPTHelper Function SizeToName
struct Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics
{
	struct HttpGPTHelper_eventSizeToName_Parms
	{
		EHttpGPTImageSize Size;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "Convert HttpGPT Size to Name" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Size_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Size;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_Size_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventSizeToName_Parms, Size), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) }; // 3103602510
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTHelper_eventSizeToName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_Size_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "SizeToName", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::HttpGPTHelper_eventSizeToName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::HttpGPTHelper_eventSizeToName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTHelper_SizeToName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTHelper::execSizeToName)
{
	P_GET_ENUM(EHttpGPTImageSize,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UHttpGPTHelper::SizeToName(EHttpGPTImageSize(Z_Param_Size));
	P_NATIVE_END;
}
// End Class UHttpGPTHelper Function SizeToName

// Begin Class UHttpGPTHelper
void UHttpGPTHelper::StaticRegisterNativesUHttpGPTHelper()
{
	UClass* Class = UHttpGPTHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FormatToName", &UHttpGPTHelper::execFormatToName },
		{ "GetAvailableGPTModels", &UHttpGPTHelper::execGetAvailableGPTModels },
		{ "GetEndpointForModel", &UHttpGPTHelper::execGetEndpointForModel },
		{ "ModelSupportsChat", &UHttpGPTHelper::execModelSupportsChat },
		{ "ModelToName", &UHttpGPTHelper::execModelToName },
		{ "NameToFormat", &UHttpGPTHelper::execNameToFormat },
		{ "NameToModel", &UHttpGPTHelper::execNameToModel },
		{ "NameToPropertyType", &UHttpGPTHelper::execNameToPropertyType },
		{ "NameToRole", &UHttpGPTHelper::execNameToRole },
		{ "NameToSize", &UHttpGPTHelper::execNameToSize },
		{ "PropertyTypeToName", &UHttpGPTHelper::execPropertyTypeToName },
		{ "RoleToName", &UHttpGPTHelper::execRoleToName },
		{ "SizeToName", &UHttpGPTHelper::execSizeToName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTHelper);
UClass* Z_Construct_UClass_UHttpGPTHelper_NoRegister()
{
	return UHttpGPTHelper::StaticClass();
}
struct Z_Construct_UClass_UHttpGPTHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Utils/HttpGPTHelper.h" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTHelper_FormatToName, "FormatToName" }, // 1327388796
		{ &Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels, "GetAvailableGPTModels" }, // 2768694391
		{ &Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel, "GetEndpointForModel" }, // 2153144045
		{ &Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat, "ModelSupportsChat" }, // 383255325
		{ &Z_Construct_UFunction_UHttpGPTHelper_ModelToName, "ModelToName" }, // 3535583126
		{ &Z_Construct_UFunction_UHttpGPTHelper_NameToFormat, "NameToFormat" }, // 3350999615
		{ &Z_Construct_UFunction_UHttpGPTHelper_NameToModel, "NameToModel" }, // 2261164406
		{ &Z_Construct_UFunction_UHttpGPTHelper_NameToPropertyType, "NameToPropertyType" }, // 3605393176
		{ &Z_Construct_UFunction_UHttpGPTHelper_NameToRole, "NameToRole" }, // 4108509898
		{ &Z_Construct_UFunction_UHttpGPTHelper_NameToSize, "NameToSize" }, // 1851035
		{ &Z_Construct_UFunction_UHttpGPTHelper_PropertyTypeToName, "PropertyTypeToName" }, // 3022055835
		{ &Z_Construct_UFunction_UHttpGPTHelper_RoleToName, "RoleToName" }, // 1589287957
		{ &Z_Construct_UFunction_UHttpGPTHelper_SizeToName, "SizeToName" }, // 1040906796
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHttpGPTHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTHelper_Statics::ClassParams = {
	&UHttpGPTHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UHttpGPTHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHttpGPTHelper()
{
	if (!Z_Registration_Info_UClass_UHttpGPTHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTHelper.OuterSingleton, Z_Construct_UClass_UHttpGPTHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHttpGPTHelper.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UClass* StaticClass<UHttpGPTHelper>()
{
	return UHttpGPTHelper::StaticClass();
}
UHttpGPTHelper::UHttpGPTHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTHelper);
UHttpGPTHelper::~UHttpGPTHelper() {}
// End Class UHttpGPTHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHttpGPTHelper, UHttpGPTHelper::StaticClass, TEXT("UHttpGPTHelper"), &Z_Registration_Info_UClass_UHttpGPTHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTHelper), 2369611522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_604186507(TEXT("/Script/HttpGPTCommonModule"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
