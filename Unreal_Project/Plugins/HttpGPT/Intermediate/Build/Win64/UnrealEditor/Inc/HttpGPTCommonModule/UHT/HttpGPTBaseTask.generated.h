// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/HttpGPTBaseTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHttpGPTBaseTask;
struct FHttpGPTCommonOptions;
#ifdef HTTPGPTCOMMONMODULE_HttpGPTBaseTask_generated_h
#error "HttpGPTBaseTask.generated.h already included, missing '#pragma once' in HttpGPTBaseTask.h"
#endif
#define HTTPGPTCOMMONMODULE_HttpGPTBaseTask_generated_h

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_14_DELEGATE \
HTTPGPTCOMMONMODULE_API void FHttpGPTGenericDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpGPTGenericDelegate);


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCommonOptions); \
	DECLARE_FUNCTION(execStopHttpGPTTask);


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpGPTBaseTask(); \
	friend struct Z_Construct_UClass_UHttpGPTBaseTask_Statics; \
public: \
	DECLARE_CLASS(UHttpGPTBaseTask, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpGPTCommonModule"), NO_API) \
	DECLARE_SERIALIZER(UHttpGPTBaseTask)


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpGPTBaseTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHttpGPTBaseTask(UHttpGPTBaseTask&&); \
	UHttpGPTBaseTask(const UHttpGPTBaseTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpGPTBaseTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpGPTBaseTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpGPTBaseTask) \
	NO_API virtual ~UHttpGPTBaseTask();


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_19_PROLOG
#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPGPTCOMMONMODULE_API UClass* StaticClass<class UHttpGPTBaseTask>();

#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsTaskStillValid); \
	DECLARE_FUNCTION(execIsTaskReadyToDestroy); \
	DECLARE_FUNCTION(execIsTaskActive);


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpGPTTaskStatus(); \
	friend struct Z_Construct_UClass_UHttpGPTTaskStatus_Statics; \
public: \
	DECLARE_CLASS(UHttpGPTTaskStatus, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpGPTCommonModule"), NO_API) \
	DECLARE_SERIALIZER(UHttpGPTTaskStatus)


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpGPTTaskStatus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHttpGPTTaskStatus(UHttpGPTTaskStatus&&); \
	UHttpGPTTaskStatus(const UHttpGPTTaskStatus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpGPTTaskStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpGPTTaskStatus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpGPTTaskStatus) \
	NO_API virtual ~UHttpGPTTaskStatus();


#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_83_PROLOG
#define FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_86_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPGPTCOMMONMODULE_API UClass* StaticClass<class UHttpGPTTaskStatus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
