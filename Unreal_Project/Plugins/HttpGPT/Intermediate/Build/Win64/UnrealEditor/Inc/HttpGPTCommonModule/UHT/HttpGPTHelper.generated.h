// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/HttpGPTHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHttpGPTChatModel : uint8;
enum class EHttpGPTChatRole : uint8;
enum class EHttpGPTImageSize : uint8;
enum class EHttpGPTPropertyType : uint8;
enum class EHttpGPTResponseFormat : uint8;
#ifdef HTTPGPTCOMMONMODULE_HttpGPTHelper_generated_h
#error "HttpGPTHelper.generated.h already included, missing '#pragma once' in HttpGPTHelper.h"
#endif
#define HTTPGPTCOMMONMODULE_HttpGPTHelper_generated_h

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNameToFormat); \
	DECLARE_FUNCTION(execFormatToName); \
	DECLARE_FUNCTION(execNameToSize); \
	DECLARE_FUNCTION(execSizeToName); \
	DECLARE_FUNCTION(execModelSupportsChat); \
	DECLARE_FUNCTION(execGetEndpointForModel); \
	DECLARE_FUNCTION(execGetAvailableGPTModels); \
	DECLARE_FUNCTION(execNameToPropertyType); \
	DECLARE_FUNCTION(execPropertyTypeToName); \
	DECLARE_FUNCTION(execNameToRole); \
	DECLARE_FUNCTION(execRoleToName); \
	DECLARE_FUNCTION(execNameToModel); \
	DECLARE_FUNCTION(execModelToName);


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpGPTHelper(); \
	friend struct Z_Construct_UClass_UHttpGPTHelper_Statics; \
public: \
	DECLARE_CLASS(UHttpGPTHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpGPTCommonModule"), NO_API) \
	DECLARE_SERIALIZER(UHttpGPTHelper)


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpGPTHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHttpGPTHelper(UHttpGPTHelper&&); \
	UHttpGPTHelper(const UHttpGPTHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpGPTHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpGPTHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpGPTHelper) \
	NO_API virtual ~UHttpGPTHelper();


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_16_PROLOG
#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPGPTCOMMONMODULE_API UClass* StaticClass<class UHttpGPTHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS