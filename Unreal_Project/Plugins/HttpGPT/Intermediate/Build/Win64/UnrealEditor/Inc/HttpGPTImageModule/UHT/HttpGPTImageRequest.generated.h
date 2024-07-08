// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/HttpGPTImageRequest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHttpGPTImageRequest;
class UObject;
class UTexture2D;
struct FHttpGPTCommonOptions;
struct FHttpGPTImageData;
struct FHttpGPTImageOptions;
struct FHttpGPTImageResponse;
#ifdef HTTPGPTIMAGEMODULE_HttpGPTImageRequest_generated_h
#error "HttpGPTImageRequest.generated.h already included, missing '#pragma once' in HttpGPTImageRequest.h"
#endif
#define HTTPGPTIMAGEMODULE_HttpGPTImageRequest_generated_h

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_20_DELEGATE \
HTTPGPTIMAGEMODULE_API void FHttpGPTImageResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpGPTImageResponseDelegate, FHttpGPTImageResponse const& Response);


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPrompt); \
	DECLARE_FUNCTION(execGetImageOptions); \
	DECLARE_FUNCTION(execRequestImages_CustomOptions); \
	DECLARE_FUNCTION(execRequestImages_DefaultOptions);


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpGPTImageRequest(); \
	friend struct Z_Construct_UClass_UHttpGPTImageRequest_Statics; \
public: \
	DECLARE_CLASS(UHttpGPTImageRequest, UHttpGPTBaseTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpGPTImageModule"), NO_API) \
	DECLARE_SERIALIZER(UHttpGPTImageRequest)


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpGPTImageRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHttpGPTImageRequest(UHttpGPTImageRequest&&); \
	UHttpGPTImageRequest(const UHttpGPTImageRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpGPTImageRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpGPTImageRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpGPTImageRequest) \
	NO_API virtual ~UHttpGPTImageRequest();


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_25_PROLOG
#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_28_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPGPTIMAGEMODULE_API UClass* StaticClass<class UHttpGPTImageRequest>();

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_79_DELEGATE \
HTTPGPTIMAGEMODULE_API void FHttpGPTImageGenerate_DelegateWrapper(const FScriptDelegate& HttpGPTImageGenerate, UTexture2D* Image);


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateImage); \
	DECLARE_FUNCTION(execCastToHttpGPTImageRequest);


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpGPTImageHelper(); \
	friend struct Z_Construct_UClass_UHttpGPTImageHelper_Statics; \
public: \
	DECLARE_CLASS(UHttpGPTImageHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpGPTImageModule"), NO_API) \
	DECLARE_SERIALIZER(UHttpGPTImageHelper)


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpGPTImageHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHttpGPTImageHelper(UHttpGPTImageHelper&&); \
	UHttpGPTImageHelper(const UHttpGPTImageHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpGPTImageHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpGPTImageHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpGPTImageHelper) \
	NO_API virtual ~UHttpGPTImageHelper();


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_81_PROLOG
#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_84_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPGPTIMAGEMODULE_API UClass* StaticClass<class UHttpGPTImageHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
