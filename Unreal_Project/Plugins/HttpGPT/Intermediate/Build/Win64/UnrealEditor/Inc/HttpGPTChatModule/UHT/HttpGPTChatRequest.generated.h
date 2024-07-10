// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/HttpGPTChatRequest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHttpGPTChatRequest;
class UObject;
struct FHttpGPTChatMessage;
struct FHttpGPTChatOptions;
struct FHttpGPTChatResponse;
struct FHttpGPTCommonOptions;
struct FHttpGPTFunction;
#ifdef HTTPGPTCHATMODULE_HttpGPTChatRequest_generated_h
#error "HttpGPTChatRequest.generated.h already included, missing '#pragma once' in HttpGPTChatRequest.h"
#endif
#define HTTPGPTCHATMODULE_HttpGPTChatRequest_generated_h

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_14_DELEGATE \
HTTPGPTCHATMODULE_API void FHttpGPTChatResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpGPTChatResponseDelegate, FHttpGPTChatResponse const& Response);


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetChatOptions); \
	DECLARE_FUNCTION(execSendMessages_CustomOptions); \
	DECLARE_FUNCTION(execSendMessage_CustomOptions); \
	DECLARE_FUNCTION(execSendMessages_DefaultOptions); \
	DECLARE_FUNCTION(execSendMessage_DefaultOptions);


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpGPTChatRequest(); \
	friend struct Z_Construct_UClass_UHttpGPTChatRequest_Statics; \
public: \
	DECLARE_CLASS(UHttpGPTChatRequest, UHttpGPTBaseTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpGPTChatModule"), NO_API) \
	DECLARE_SERIALIZER(UHttpGPTChatRequest)


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpGPTChatRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHttpGPTChatRequest(UHttpGPTChatRequest&&); \
	UHttpGPTChatRequest(const UHttpGPTChatRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpGPTChatRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpGPTChatRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpGPTChatRequest) \
	NO_API virtual ~UHttpGPTChatRequest();


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_19_PROLOG
#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPGPTCHATMODULE_API UClass* StaticClass<class UHttpGPTChatRequest>();

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCastToHttpGPTChatRequest);


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpGPTChatHelper(); \
	friend struct Z_Construct_UClass_UHttpGPTChatHelper_Statics; \
public: \
	DECLARE_CLASS(UHttpGPTChatHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpGPTChatModule"), NO_API) \
	DECLARE_SERIALIZER(UHttpGPTChatHelper)


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpGPTChatHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHttpGPTChatHelper(UHttpGPTChatHelper&&); \
	UHttpGPTChatHelper(const UHttpGPTChatHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpGPTChatHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpGPTChatHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpGPTChatHelper) \
	NO_API virtual ~UHttpGPTChatHelper();


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_92_PROLOG
#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_95_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPGPTCHATMODULE_API UClass* StaticClass<class UHttpGPTChatHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
