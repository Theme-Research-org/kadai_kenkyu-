// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTChatTypes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTCommonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTChatTypes() {}

// Begin Cross Module References
HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel();
HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole();
HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTPropertyType();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatChoice();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatMessage();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatOptions();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatResponse();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatUsage();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonError();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTFunction();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTFunctionCall();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTFunctionProperty();
UPackage* Z_Construct_UPackage__Script_HttpGPTCommonModule();
// End Cross Module References

// Begin Enum EHttpGPTPropertyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHttpGPTPropertyType;
static UEnum* EHttpGPTPropertyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHttpGPTPropertyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHttpGPTPropertyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTPropertyType, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("EHttpGPTPropertyType"));
	}
	return Z_Registration_Info_UEnum_EHttpGPTPropertyType.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTPropertyType>()
{
	return EHttpGPTPropertyType_StaticEnum();
}
struct Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTPropertyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boolean.Name", "EHttpGPTPropertyType::Boolean" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Property Type" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "Number.Name", "EHttpGPTPropertyType::Number" },
		{ "String.Name", "EHttpGPTPropertyType::String" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHttpGPTPropertyType::Number", (int64)EHttpGPTPropertyType::Number },
		{ "EHttpGPTPropertyType::Boolean", (int64)EHttpGPTPropertyType::Boolean },
		{ "EHttpGPTPropertyType::String", (int64)EHttpGPTPropertyType::String },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTPropertyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	"EHttpGPTPropertyType",
	"EHttpGPTPropertyType",
	Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTPropertyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTPropertyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTPropertyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTPropertyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTPropertyType()
{
	if (!Z_Registration_Info_UEnum_EHttpGPTPropertyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHttpGPTPropertyType.InnerSingleton, Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTPropertyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHttpGPTPropertyType.InnerSingleton;
}
// End Enum EHttpGPTPropertyType

// Begin ScriptStruct FHttpGPTFunctionProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTFunctionProperty;
class UScriptStruct* FHttpGPTFunctionProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTFunctionProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTFunctionProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTFunctionProperty, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTFunctionProperty"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTFunctionProperty.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTFunctionProperty>()
{
	return FHttpGPTFunctionProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Function Parameter" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Description" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Enum" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Enum_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Enum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTFunctionProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTFunctionProperty, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTFunctionProperty, Type), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTPropertyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1643198084
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTFunctionProperty, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::NewProp_Enum_Inner = { "Enum", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTFunctionProperty, Enum), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enum_MetaData), NewProp_Enum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::NewProp_Enum_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::NewProp_Enum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	&NewStructOps,
	"HttpGPTFunctionProperty",
	Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::PropPointers),
	sizeof(FHttpGPTFunctionProperty),
	alignof(FHttpGPTFunctionProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTFunctionProperty()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTFunctionProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTFunctionProperty.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTFunctionProperty.InnerSingleton;
}
// End ScriptStruct FHttpGPTFunctionProperty

// Begin ScriptStruct FHttpGPTFunction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTFunction;
class UScriptStruct* FHttpGPTFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTFunction, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTFunction"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTFunction.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTFunction>()
{
	return FHttpGPTFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHttpGPTFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Function" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Description" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Properties" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredProperties_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Required Properties" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTFunction, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTFunction, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHttpGPTFunctionProperty, METADATA_PARAMS(0, nullptr) }; // 1852330069
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTFunction, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) }; // 1852330069
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::NewProp_RequiredProperties_Inner = { "RequiredProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::NewProp_RequiredProperties = { "RequiredProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTFunction, RequiredProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredProperties_MetaData), NewProp_RequiredProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::NewProp_Properties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::NewProp_Properties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::NewProp_RequiredProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::NewProp_RequiredProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	&NewStructOps,
	"HttpGPTFunction",
	Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::PropPointers),
	sizeof(FHttpGPTFunction),
	alignof(FHttpGPTFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTFunction()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTFunction.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTFunction.InnerSingleton;
}
// End ScriptStruct FHttpGPTFunction

// Begin ScriptStruct FHttpGPTFunctionCall
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTFunctionCall;
class UScriptStruct* FHttpGPTFunctionCall::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTFunctionCall.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTFunctionCall.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTFunctionCall, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTFunctionCall"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTFunctionCall.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTFunctionCall>()
{
	return FHttpGPTFunctionCall::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Function Call" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Arguments" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Arguments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTFunctionCall>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTFunctionCall, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTFunctionCall, Arguments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arguments_MetaData), NewProp_Arguments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics::NewProp_Arguments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	&NewStructOps,
	"HttpGPTFunctionCall",
	Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics::PropPointers),
	sizeof(FHttpGPTFunctionCall),
	alignof(FHttpGPTFunctionCall),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTFunctionCall()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTFunctionCall.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTFunctionCall.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTFunctionCall.InnerSingleton;
}
// End ScriptStruct FHttpGPTFunctionCall

// Begin Enum EHttpGPTChatRole
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHttpGPTChatRole;
static UEnum* EHttpGPTChatRole_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHttpGPTChatRole.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHttpGPTChatRole.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("EHttpGPTChatRole"));
	}
	return Z_Registration_Info_UEnum_EHttpGPTChatRole.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTChatRole>()
{
	return EHttpGPTChatRole_StaticEnum();
}
struct Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Assistant.Name", "EHttpGPTChatRole::Assistant" },
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Chat Role" },
		{ "Function.Name", "EHttpGPTChatRole::Function" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "System.Name", "EHttpGPTChatRole::System" },
		{ "User.Name", "EHttpGPTChatRole::User" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHttpGPTChatRole::User", (int64)EHttpGPTChatRole::User },
		{ "EHttpGPTChatRole::Assistant", (int64)EHttpGPTChatRole::Assistant },
		{ "EHttpGPTChatRole::System", (int64)EHttpGPTChatRole::System },
		{ "EHttpGPTChatRole::Function", (int64)EHttpGPTChatRole::Function },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	"EHttpGPTChatRole",
	"EHttpGPTChatRole",
	Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole()
{
	if (!Z_Registration_Info_UEnum_EHttpGPTChatRole.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHttpGPTChatRole.InnerSingleton, Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHttpGPTChatRole.InnerSingleton;
}
// End Enum EHttpGPTChatRole

// Begin ScriptStruct FHttpGPTChatMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTChatMessage;
class UScriptStruct* FHttpGPTChatMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTChatMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTChatMessage, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTChatMessage"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatMessage.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTChatMessage>()
{
	return FHttpGPTChatMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Chat Message" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionCall_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "EditCondition", "Role == EHttpGPTChatRole::Function" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Role;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionCall;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTChatMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatMessage, Role), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Role_MetaData), NewProp_Role_MetaData) }; // 2060829143
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatMessage, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_FunctionCall = { "FunctionCall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatMessage, FunctionCall), Z_Construct_UScriptStruct_FHttpGPTFunctionCall, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionCall_MetaData), NewProp_FunctionCall_MetaData) }; // 761255842
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Role_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Role,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_FunctionCall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	&NewStructOps,
	"HttpGPTChatMessage",
	Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::PropPointers),
	sizeof(FHttpGPTChatMessage),
	alignof(FHttpGPTChatMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatMessage()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTChatMessage.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatMessage.InnerSingleton;
}
// End ScriptStruct FHttpGPTChatMessage

// Begin ScriptStruct FHttpGPTChatChoice
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTChatChoice;
class UScriptStruct* FHttpGPTChatChoice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatChoice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTChatChoice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTChatChoice, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTChatChoice"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatChoice.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTChatChoice>()
{
	return FHttpGPTChatChoice::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Chat Choice" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishReason_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FinishReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTChatChoice>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatChoice, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatChoice, Message), Z_Construct_UScriptStruct_FHttpGPTChatMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) }; // 3117863013
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_FinishReason = { "FinishReason", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatChoice, FinishReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishReason_MetaData), NewProp_FinishReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_FinishReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	&NewStructOps,
	"HttpGPTChatChoice",
	Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::PropPointers),
	sizeof(FHttpGPTChatChoice),
	alignof(FHttpGPTChatChoice),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatChoice()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatChoice.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTChatChoice.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatChoice.InnerSingleton;
}
// End ScriptStruct FHttpGPTChatChoice

// Begin ScriptStruct FHttpGPTChatUsage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTChatUsage;
class UScriptStruct* FHttpGPTChatUsage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatUsage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTChatUsage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTChatUsage, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTChatUsage"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatUsage.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTChatUsage>()
{
	return FHttpGPTChatUsage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Chat Usage" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptTokens_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletionTokens_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalTokens_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PromptTokens;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompletionTokens;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalTokens;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTChatUsage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_PromptTokens = { "PromptTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatUsage, PromptTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptTokens_MetaData), NewProp_PromptTokens_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_CompletionTokens = { "CompletionTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatUsage, CompletionTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletionTokens_MetaData), NewProp_CompletionTokens_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_TotalTokens = { "TotalTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatUsage, TotalTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalTokens_MetaData), NewProp_TotalTokens_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_PromptTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_CompletionTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_TotalTokens,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	&NewStructOps,
	"HttpGPTChatUsage",
	Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::PropPointers),
	sizeof(FHttpGPTChatUsage),
	alignof(FHttpGPTChatUsage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatUsage()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTChatUsage.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatUsage.InnerSingleton;
}
// End ScriptStruct FHttpGPTChatUsage

// Begin ScriptStruct FHttpGPTChatResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTChatResponse;
class UScriptStruct* FHttpGPTChatResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTChatResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTChatResponse, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTChatResponse"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatResponse.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTChatResponse>()
{
	return FHttpGPTChatResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Chat Response" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Usage_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Object;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Created;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Choices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Choices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Usage;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTChatResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatResponse, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatResponse, Object), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatResponse, Created), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Created_MetaData), NewProp_Created_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Choices_Inner = { "Choices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHttpGPTChatChoice, METADATA_PARAMS(0, nullptr) }; // 758700883
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatResponse, Choices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Choices_MetaData), NewProp_Choices_MetaData) }; // 758700883
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatResponse, Usage), Z_Construct_UScriptStruct_FHttpGPTChatUsage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Usage_MetaData), NewProp_Usage_MetaData) }; // 2657993583
void Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FHttpGPTChatResponse*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHttpGPTChatResponse), &Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatResponse, Error), Z_Construct_UScriptStruct_FHttpGPTCommonError, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) }; // 3953807954
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Created,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Choices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Choices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Usage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	&NewStructOps,
	"HttpGPTChatResponse",
	Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::PropPointers),
	sizeof(FHttpGPTChatResponse),
	alignof(FHttpGPTChatResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatResponse()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTChatResponse.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatResponse.InnerSingleton;
}
// End ScriptStruct FHttpGPTChatResponse

// Begin Enum EHttpGPTChatModel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHttpGPTChatModel;
static UEnum* EHttpGPTChatModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHttpGPTChatModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHttpGPTChatModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("EHttpGPTChatModel"));
	}
	return Z_Registration_Info_UEnum_EHttpGPTChatModel.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTChatModel>()
{
	return EHttpGPTChatModel_StaticEnum();
}
struct Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "codedavinci002.DisplayName", "code-davinci-002" },
		{ "codedavinci002.Name", "EHttpGPTChatModel::codedavinci002" },
		{ "DisplayName", "HttpGPT Chat Model" },
		{ "gpt35turbo.DisplayName", "gpt-3.5-turbo" },
		{ "gpt35turbo.Name", "EHttpGPTChatModel::gpt35turbo" },
		{ "gpt35turbo16k.DisplayName", "gpt-3.5-turbo-16k" },
		{ "gpt35turbo16k.Name", "EHttpGPTChatModel::gpt35turbo16k" },
		{ "gpt4.DisplayName", "gpt-4" },
		{ "gpt4.Name", "EHttpGPTChatModel::gpt4" },
		{ "gpt432k.DisplayName", "gpt-4-32k" },
		{ "gpt432k.Name", "EHttpGPTChatModel::gpt432k" },
		{ "gpt4o.Displayname", "gpt-4o" },
		{ "gpt4o.Name", "EHttpGPTChatModel::gpt4o" },
		{ "gpt4turbo.DisplayName", "gpt-4-turbo" },
		{ "gpt4turbo.Name", "EHttpGPTChatModel::gpt4turbo" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "textdavinci002.DisplayName", "text-davinci-002" },
		{ "textdavinci002.Name", "EHttpGPTChatModel::textdavinci002" },
		{ "textdavinci003.DisplayName", "text-davinci-003" },
		{ "textdavinci003.Name", "EHttpGPTChatModel::textdavinci003" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHttpGPTChatModel::gpt4o", (int64)EHttpGPTChatModel::gpt4o },
		{ "EHttpGPTChatModel::gpt4turbo", (int64)EHttpGPTChatModel::gpt4turbo },
		{ "EHttpGPTChatModel::gpt4", (int64)EHttpGPTChatModel::gpt4 },
		{ "EHttpGPTChatModel::gpt432k", (int64)EHttpGPTChatModel::gpt432k },
		{ "EHttpGPTChatModel::gpt35turbo", (int64)EHttpGPTChatModel::gpt35turbo },
		{ "EHttpGPTChatModel::gpt35turbo16k", (int64)EHttpGPTChatModel::gpt35turbo16k },
		{ "EHttpGPTChatModel::textdavinci003", (int64)EHttpGPTChatModel::textdavinci003 },
		{ "EHttpGPTChatModel::textdavinci002", (int64)EHttpGPTChatModel::textdavinci002 },
		{ "EHttpGPTChatModel::codedavinci002", (int64)EHttpGPTChatModel::codedavinci002 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	"EHttpGPTChatModel",
	"EHttpGPTChatModel",
	Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel()
{
	if (!Z_Registration_Info_UEnum_EHttpGPTChatModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHttpGPTChatModel.InnerSingleton, Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHttpGPTChatModel.InnerSingleton;
}
// End Enum EHttpGPTChatModel

// Begin ScriptStruct FHttpGPTChatOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTChatOptions;
class UScriptStruct* FHttpGPTChatOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTChatOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTChatOptions, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTChatOptions"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatOptions.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTChatOptions>()
{
	return FHttpGPTChatOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Chat Options" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Model" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Temperature" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopP_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "TopP" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Choices" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStream_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Stream" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stop_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Stop" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresencePenalty_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "-2.0" },
		{ "DisplayName", "Presence Penalty" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "-2.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyPenalty_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "-2.0" },
		{ "DisplayName", "Frequency Penalty" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "-2.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTokens_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ClampMax", "32768" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Max Tokens" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "UIMax", "32768" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogitBias_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Logit Bias" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TopP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Choices;
	static void NewProp_bStream_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStream;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Stop_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PresencePenalty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyPenalty;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTokens;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LogitBias_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LogitBias_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LogitBias;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTChatOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatOptions, Model), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) }; // 1093350004
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatOptions, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_TopP = { "TopP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatOptions, TopP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopP_MetaData), NewProp_TopP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatOptions, Choices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Choices_MetaData), NewProp_Choices_MetaData) };
void Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_bStream_SetBit(void* Obj)
{
	((FHttpGPTChatOptions*)Obj)->bStream = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_bStream = { "bStream", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHttpGPTChatOptions), &Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_bStream_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStream_MetaData), NewProp_bStream_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Stop_Inner = { "Stop", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Stop = { "Stop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatOptions, Stop), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stop_MetaData), NewProp_Stop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_PresencePenalty = { "PresencePenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatOptions, PresencePenalty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresencePenalty_MetaData), NewProp_PresencePenalty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_FrequencyPenalty = { "FrequencyPenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatOptions, FrequencyPenalty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrequencyPenalty_MetaData), NewProp_FrequencyPenalty_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_MaxTokens = { "MaxTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatOptions, MaxTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTokens_MetaData), NewProp_MaxTokens_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias_ValueProp = { "LogitBias", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias_Key_KeyProp = { "LogitBias_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias = { "LogitBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHttpGPTChatOptions, LogitBias), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogitBias_MetaData), NewProp_LogitBias_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Model_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_TopP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Choices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_bStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Stop_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Stop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_PresencePenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_FrequencyPenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_MaxTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	nullptr,
	&NewStructOps,
	"HttpGPTChatOptions",
	Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::PropPointers),
	sizeof(FHttpGPTChatOptions),
	alignof(FHttpGPTChatOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatOptions()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTChatOptions.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatOptions.InnerSingleton;
}
// End ScriptStruct FHttpGPTChatOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHttpGPTPropertyType_StaticEnum, TEXT("EHttpGPTPropertyType"), &Z_Registration_Info_UEnum_EHttpGPTPropertyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1643198084U) },
		{ EHttpGPTChatRole_StaticEnum, TEXT("EHttpGPTChatRole"), &Z_Registration_Info_UEnum_EHttpGPTChatRole, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2060829143U) },
		{ EHttpGPTChatModel_StaticEnum, TEXT("EHttpGPTChatModel"), &Z_Registration_Info_UEnum_EHttpGPTChatModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1093350004U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHttpGPTFunctionProperty::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics::NewStructOps, TEXT("HttpGPTFunctionProperty"), &Z_Registration_Info_UScriptStruct_HttpGPTFunctionProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTFunctionProperty), 1852330069U) },
		{ FHttpGPTFunction::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTFunction_Statics::NewStructOps, TEXT("HttpGPTFunction"), &Z_Registration_Info_UScriptStruct_HttpGPTFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTFunction), 3025053234U) },
		{ FHttpGPTFunctionCall::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics::NewStructOps, TEXT("HttpGPTFunctionCall"), &Z_Registration_Info_UScriptStruct_HttpGPTFunctionCall, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTFunctionCall), 761255842U) },
		{ FHttpGPTChatMessage::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewStructOps, TEXT("HttpGPTChatMessage"), &Z_Registration_Info_UScriptStruct_HttpGPTChatMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTChatMessage), 3117863013U) },
		{ FHttpGPTChatChoice::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewStructOps, TEXT("HttpGPTChatChoice"), &Z_Registration_Info_UScriptStruct_HttpGPTChatChoice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTChatChoice), 758700883U) },
		{ FHttpGPTChatUsage::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewStructOps, TEXT("HttpGPTChatUsage"), &Z_Registration_Info_UScriptStruct_HttpGPTChatUsage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTChatUsage), 2657993583U) },
		{ FHttpGPTChatResponse::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewStructOps, TEXT("HttpGPTChatResponse"), &Z_Registration_Info_UScriptStruct_HttpGPTChatResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTChatResponse), 2821707508U) },
		{ FHttpGPTChatOptions::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewStructOps, TEXT("HttpGPTChatOptions"), &Z_Registration_Info_UScriptStruct_HttpGPTChatOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTChatOptions), 3354722897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_2957145509(TEXT("/Script/HttpGPTCommonModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
