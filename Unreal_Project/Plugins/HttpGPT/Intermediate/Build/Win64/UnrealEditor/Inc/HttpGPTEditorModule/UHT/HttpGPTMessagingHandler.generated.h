// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chat/HttpGPTMessagingHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHttpGPTChatResponse;
#ifdef HTTPGPTEDITORMODULE_HttpGPTMessagingHandler_generated_h
#error "HttpGPTMessagingHandler.generated.h already included, missing '#pragma once' in HttpGPTMessagingHandler.h"
#endif
#define HTTPGPTEDITORMODULE_HttpGPTMessagingHandler_generated_h

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_Chat_HttpGPTMessagingHandler_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcessCompleted); \
	DECLARE_FUNCTION(execProcessUpdated); \
	DECLARE_FUNCTION(execRequestFailed); \
	DECLARE_FUNCTION(execRequestSent);


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_Chat_HttpGPTMessagingHandler_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpGPTMessagingHandler(); \
	friend struct Z_Construct_UClass_UHttpGPTMessagingHandler_Statics; \
public: \
	DECLARE_CLASS(UHttpGPTMessagingHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpGPTEditorModule"), HTTPGPTEDITORMODULE_API) \
	DECLARE_SERIALIZER(UHttpGPTMessagingHandler)


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_Chat_HttpGPTMessagingHandler_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHttpGPTMessagingHandler(UHttpGPTMessagingHandler&&); \
	UHttpGPTMessagingHandler(const UHttpGPTMessagingHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HTTPGPTEDITORMODULE_API, UHttpGPTMessagingHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpGPTMessagingHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpGPTMessagingHandler) \
	HTTPGPTEDITORMODULE_API virtual ~UHttpGPTMessagingHandler();


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_Chat_HttpGPTMessagingHandler_h_14_PROLOG
#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_Chat_HttpGPTMessagingHandler_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_Chat_HttpGPTMessagingHandler_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_Chat_HttpGPTMessagingHandler_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_Chat_HttpGPTMessagingHandler_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPGPTEDITORMODULE_API UClass* StaticClass<class UHttpGPTMessagingHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_Chat_HttpGPTMessagingHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
