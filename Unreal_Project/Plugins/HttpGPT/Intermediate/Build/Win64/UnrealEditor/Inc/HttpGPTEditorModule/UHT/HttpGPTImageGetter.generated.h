// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImageGen/HttpGPTImageGetter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FHttpGPTImageResponse;
#ifdef HTTPGPTEDITORMODULE_HttpGPTImageGetter_generated_h
#error "HttpGPTImageGetter.generated.h already included, missing '#pragma once' in HttpGPTImageGetter.h"
#endif
#define HTTPGPTEDITORMODULE_HttpGPTImageGetter_generated_h

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_ImageGen_HttpGPTImageGetter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execImageGenerated); \
	DECLARE_FUNCTION(execProcessCompleted); \
	DECLARE_FUNCTION(execRequestFailed); \
	DECLARE_FUNCTION(execRequestSent);


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_ImageGen_HttpGPTImageGetter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpGPTImageGetter(); \
	friend struct Z_Construct_UClass_UHttpGPTImageGetter_Statics; \
public: \
	DECLARE_CLASS(UHttpGPTImageGetter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpGPTEditorModule"), HTTPGPTEDITORMODULE_API) \
	DECLARE_SERIALIZER(UHttpGPTImageGetter)


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_ImageGen_HttpGPTImageGetter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHttpGPTImageGetter(UHttpGPTImageGetter&&); \
	UHttpGPTImageGetter(const UHttpGPTImageGetter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HTTPGPTEDITORMODULE_API, UHttpGPTImageGetter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpGPTImageGetter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpGPTImageGetter) \
	HTTPGPTEDITORMODULE_API virtual ~UHttpGPTImageGetter();


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_ImageGen_HttpGPTImageGetter_h_15_PROLOG
#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_ImageGen_HttpGPTImageGetter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_ImageGen_HttpGPTImageGetter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_ImageGen_HttpGPTImageGetter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_ImageGen_HttpGPTImageGetter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPGPTEDITORMODULE_API UClass* StaticClass<class UHttpGPTImageGetter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_ImageGen_HttpGPTImageGetter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
