// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Management/HttpGPTSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHttpGPTChatOptions;
struct FHttpGPTCommonOptions;
struct FHttpGPTImageOptions;
#ifdef HTTPGPTCOMMONMODULE_HttpGPTSettings_generated_h
#error "HttpGPTSettings.generated.h already included, missing '#pragma once' in HttpGPTSettings.h"
#endif
#define HTTPGPTCOMMONMODULE_HttpGPTSettings_generated_h

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Management_HttpGPTSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetImageOptions); \
	DECLARE_FUNCTION(execGetImageOptions); \
	DECLARE_FUNCTION(execSetChatOptions); \
	DECLARE_FUNCTION(execGetChatOptions); \
	DECLARE_FUNCTION(execSetCommonOptions); \
	DECLARE_FUNCTION(execGetCommonOptions);


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Management_HttpGPTSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpGPTSettings(); \
	friend struct Z_Construct_UClass_UHttpGPTSettings_Statics; \
public: \
	DECLARE_CLASS(UHttpGPTSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HttpGPTCommonModule"), NO_API) \
	DECLARE_SERIALIZER(UHttpGPTSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Plugins");} \



#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Management_HttpGPTSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHttpGPTSettings(UHttpGPTSettings&&); \
	UHttpGPTSettings(const UHttpGPTSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpGPTSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpGPTSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpGPTSettings) \
	NO_API virtual ~UHttpGPTSettings();


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Management_HttpGPTSettings_h_17_PROLOG
#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Management_HttpGPTSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Management_HttpGPTSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Management_HttpGPTSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Management_HttpGPTSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPGPTCOMMONMODULE_API UClass* StaticClass<class UHttpGPTSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Management_HttpGPTSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
