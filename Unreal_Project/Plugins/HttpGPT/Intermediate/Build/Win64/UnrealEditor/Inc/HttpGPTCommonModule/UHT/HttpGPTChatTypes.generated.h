// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Structures/HttpGPTChatTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HTTPGPTCOMMONMODULE_HttpGPTChatTypes_generated_h
#error "HttpGPTChatTypes.generated.h already included, missing '#pragma once' in HttpGPTChatTypes.h"
#endif
#define HTTPGPTCOMMONMODULE_HttpGPTChatTypes_generated_h

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTFunctionProperty_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTFunctionProperty>();

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTFunction_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTFunction>();

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTFunctionCall_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTFunctionCall>();

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTChatMessage>();

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTChatChoice>();

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTChatUsage>();

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_148_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTChatResponse>();

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTChatOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h


#define FOREACH_ENUM_EHTTPGPTPROPERTYTYPE(op) \
	op(EHttpGPTPropertyType::Number) \
	op(EHttpGPTPropertyType::Boolean) \
	op(EHttpGPTPropertyType::String) 

enum class EHttpGPTPropertyType : uint8;
template<> struct TIsUEnumClass<EHttpGPTPropertyType> { enum { Value = true }; };
template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTPropertyType>();

#define FOREACH_ENUM_EHTTPGPTCHATROLE(op) \
	op(EHttpGPTChatRole::User) \
	op(EHttpGPTChatRole::Assistant) \
	op(EHttpGPTChatRole::System) \
	op(EHttpGPTChatRole::Function) 

enum class EHttpGPTChatRole : uint8;
template<> struct TIsUEnumClass<EHttpGPTChatRole> { enum { Value = true }; };
template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTChatRole>();

#define FOREACH_ENUM_EHTTPGPTCHATMODEL(op) \
	op(EHttpGPTChatModel::gpt4o) \
	op(EHttpGPTChatModel::gpt4turbo) \
	op(EHttpGPTChatModel::gpt4) \
	op(EHttpGPTChatModel::gpt432k) \
	op(EHttpGPTChatModel::gpt35turbo) \
	op(EHttpGPTChatModel::gpt35turbo16k) \
	op(EHttpGPTChatModel::textdavinci003) \
	op(EHttpGPTChatModel::textdavinci002) \
	op(EHttpGPTChatModel::codedavinci002) 

enum class EHttpGPTChatModel : uint8;
template<> struct TIsUEnumClass<EHttpGPTChatModel> { enum { Value = true }; };
template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTChatModel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
