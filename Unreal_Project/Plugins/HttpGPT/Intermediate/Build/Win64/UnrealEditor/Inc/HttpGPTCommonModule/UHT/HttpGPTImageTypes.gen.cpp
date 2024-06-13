// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTImageTypes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTCommonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTImageTypes() {}

// Begin Cross Module References
HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize();
HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonError();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageData();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageOptions();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageResponse();
UPackage* Z_Construct_UPackage__Script_HttpGPTCommonModule();
// End Cross Module References

// Begin Enum EHttpGPTImageSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHttpGPTImageSize;
static UEnum* EHttpGPTImageSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHttpGPTImageSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHttpGPTImageSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("EHttpGPTImageSize"));
	}
	return Z_Registration_Info_UEnum_EHttpGPTImageSize.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTImageSize>()
{
	return EHttpGPTImageSize_StaticEnum();
}
struct Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "HttpGPT Image Size" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
		{ "x1024.DisplayName", "1024x1024" },
		{ "x1024.Name", "EHttpGPTImageSize::x1024" },
		{ "x256.DisplayName", "256x256" },
		{ "x256.Name", "EHttpGPTImageSize::x256" },
		{ "x512.DisplayName", "512x512" },
		{ "x512.Name", "EHttpGPTImageSize::x512" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHttpGPTImageSize::x256", (int64)EHttpGPTImageSize::x256 },
		{ "EHttpGPTImageSize::x512", (int64)EHttpGPTImageSize::x512 },
		{ "EHttpGPTImageSize::x1024", (int64)EHttpGPTImageSize::x1024 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	"EHttpGPTImageSize",
	"EHttpGPTImageSize",
	Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize()
{
	if (!Z_Registration_Info_UEnum_EHttpGPTImageSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHttpGPTImageSize.InnerSingleton, Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHttpGPTImageSize.InnerSingleton;
}
// End Enum EHttpGPTImageSize

// Begin Enum EHttpGPTResponseFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHttpGPTResponseFormat;
static UEnum* EHttpGPTResponseFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHttpGPTResponseFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHttpGPTResponseFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("EHttpGPTResponseFormat"));
	}
	return Z_Registration_Info_UEnum_EHttpGPTResponseFormat.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTResponseFormat>()
{
	return EHttpGPTResponseFormat_StaticEnum();
}
struct Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "b64_json.DisplayName", "B64" },
		{ "b64_json.Name", "EHttpGPTResponseFormat::b64_json" },
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "HttpGPT Image Response Format" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
		{ "url.DisplayName", "URL" },
		{ "url.Name", "EHttpGPTResponseFormat::url" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHttpGPTResponseFormat::url", (int64)EHttpGPTResponseFormat::url },
		{ "EHttpGPTResponseFormat::b64_json", (int64)EHttpGPTResponseFormat::b64_json },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	"EHttpGPTResponseFormat",
	"EHttpGPTResponseFormat",
	Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat()
{
	if (!Z_Registration_Info_UEnum_EHttpGPTResponseFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHttpGPTResponseFormat.InnerSingleton, Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHttpGPTResponseFormat.InnerSingleton;
}
// End Enum EHttpGPTResponseFormat

// Begin ScriptStruct FHttpGPTImageData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTImageData;
class UScriptStruct* FHttpGPTImageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTImageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTImageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTImageData, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTImageData"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTImageData.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTImageData>()
{
	return FHttpGPTImageData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHttpGPTImageData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "HttpGPT Image Data" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTImageData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTImageData, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTImageData, Format), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 1431230916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Format_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Format,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	&NewStructOps,
	"HttpGPTImageData",
	Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::PropPointers),
	sizeof(FHttpGPTImageData),
	alignof(FHttpGPTImageData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageData()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTImageData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTImageData.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTImageData.InnerSingleton;
}
// End ScriptStruct FHttpGPTImageData

// Begin ScriptStruct FHttpGPTImageResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTImageResponse;
class UScriptStruct* FHttpGPTImageResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTImageResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTImageResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTImageResponse, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTImageResponse"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTImageResponse.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTImageResponse>()
{
	return FHttpGPTImageResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "HttpGPT Image Response" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Created;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTImageResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTImageResponse, Created), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Created_MetaData), NewProp_Created_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHttpGPTImageData, METADATA_PARAMS(0, nullptr) }; // 1970629911
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTImageResponse, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1970629911
void Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FHttpGPTImageResponse*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHttpGPTImageResponse), &Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTImageResponse, Error), Z_Construct_UScriptStruct_FHttpGPTCommonError, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) }; // 3953807954
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Created,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	&NewStructOps,
	"HttpGPTImageResponse",
	Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::PropPointers),
	sizeof(FHttpGPTImageResponse),
	alignof(FHttpGPTImageResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageResponse()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTImageResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTImageResponse.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTImageResponse.InnerSingleton;
}
// End ScriptStruct FHttpGPTImageResponse

// Begin ScriptStruct FHttpGPTImageOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTImageOptions;
class UScriptStruct* FHttpGPTImageOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTImageOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTImageOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTImageOptions, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTImageOptions"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTImageOptions.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTImageOptions>()
{
	return FHttpGPTImageOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "HttpGPT Image Options" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImagesNum_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Number of Images" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "Image Size" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "Response Format" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ImagesNum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Size_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Size;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTImageOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_ImagesNum = { "ImagesNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTImageOptions, ImagesNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImagesNum_MetaData), NewProp_ImagesNum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Size_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTImageOptions, Size), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) }; // 3103602510
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTImageOptions, Format), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 1431230916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_ImagesNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Size_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Format_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Format,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	&NewStructOps,
	"HttpGPTImageOptions",
	Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::PropPointers),
	sizeof(FHttpGPTImageOptions),
	alignof(FHttpGPTImageOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageOptions()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTImageOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTImageOptions.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTImageOptions.InnerSingleton;
}
// End ScriptStruct FHttpGPTImageOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHttpGPTImageSize_StaticEnum, TEXT("EHttpGPTImageSize"), &Z_Registration_Info_UEnum_EHttpGPTImageSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3103602510U) },
		{ EHttpGPTResponseFormat_StaticEnum, TEXT("EHttpGPTResponseFormat"), &Z_Registration_Info_UEnum_EHttpGPTResponseFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1431230916U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHttpGPTImageData::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewStructOps, TEXT("HttpGPTImageData"), &Z_Registration_Info_UScriptStruct_HttpGPTImageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTImageData), 1970629911U) },
		{ FHttpGPTImageResponse::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewStructOps, TEXT("HttpGPTImageResponse"), &Z_Registration_Info_UScriptStruct_HttpGPTImageResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTImageResponse), 1996345346U) },
		{ FHttpGPTImageOptions::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewStructOps, TEXT("HttpGPTImageOptions"), &Z_Registration_Info_UScriptStruct_HttpGPTImageOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTImageOptions), 3327341991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_20789939(TEXT("/Script/HttpGPTCommonModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
