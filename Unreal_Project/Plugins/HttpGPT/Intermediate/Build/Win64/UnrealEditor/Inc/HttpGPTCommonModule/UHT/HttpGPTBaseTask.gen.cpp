// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTCommonModule/Public/Tasks/HttpGPTBaseTask.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTCommonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTBaseTask() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTBaseTask();
HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTBaseTask_NoRegister();
HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTTaskStatus();
HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTTaskStatus_NoRegister();
HTTPGPTCOMMONMODULE_API UFunction* Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonOptions();
UPackage* Z_Construct_UPackage__Script_HttpGPTCommonModule();
// End Cross Module References

// Begin Delegate FHttpGPTGenericDelegate
struct Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpGPTCommonModule, nullptr, "HttpGPTGenericDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHttpGPTGenericDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpGPTGenericDelegate)
{
	HttpGPTGenericDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FHttpGPTGenericDelegate

// Begin Class UHttpGPTBaseTask Function GetCommonOptions
struct Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics
{
	struct HttpGPTBaseTask_eventGetCommonOptions_Parms
	{
		FHttpGPTCommonOptions ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
		{ "DisplayName", "Get API Key" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTBaseTask_eventGetCommonOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FHttpGPTCommonOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 149639269
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTBaseTask, nullptr, "GetCommonOptions", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::HttpGPTBaseTask_eventGetCommonOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::HttpGPTBaseTask_eventGetCommonOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTBaseTask::execGetCommonOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHttpGPTCommonOptions*)Z_Param__Result=P_THIS->GetCommonOptions();
	P_NATIVE_END;
}
// End Class UHttpGPTBaseTask Function GetCommonOptions

// Begin Class UHttpGPTBaseTask Function StopHttpGPTTask
struct Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
		{ "DisplayName", "Stop HttpGPT Task" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTBaseTask, nullptr, "StopHttpGPTTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTBaseTask::execStopHttpGPTTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopHttpGPTTask();
	P_NATIVE_END;
}
// End Class UHttpGPTBaseTask Function StopHttpGPTTask

// Begin Class UHttpGPTBaseTask
void UHttpGPTBaseTask::StaticRegisterNativesUHttpGPTBaseTask()
{
	UClass* Class = UHttpGPTBaseTask::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCommonOptions", &UHttpGPTBaseTask::execGetCommonOptions },
		{ "StopHttpGPTTask", &UHttpGPTBaseTask::execStopHttpGPTTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTBaseTask);
UClass* Z_Construct_UClass_UHttpGPTBaseTask_NoRegister()
{
	return UHttpGPTBaseTask::StaticClass();
}
struct Z_Construct_UClass_UHttpGPTBaseTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "Tasks/HttpGPTBaseTask.h" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestFailed_MetaData[] = {
		{ "Category", "HttpGPT" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestSent_MetaData[] = {
		{ "Category", "HttpGPT" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestFailed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestSent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions, "GetCommonOptions" }, // 3697964946
		{ &Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask, "StopHttpGPTTask" }, // 989191454
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTBaseTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTBaseTask_Statics::NewProp_RequestFailed = { "RequestFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTBaseTask, RequestFailed), Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestFailed_MetaData), NewProp_RequestFailed_MetaData) }; // 2150708827
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTBaseTask_Statics::NewProp_RequestSent = { "RequestSent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpGPTBaseTask, RequestSent), Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestSent_MetaData), NewProp_RequestSent_MetaData) }; // 2150708827
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHttpGPTBaseTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTBaseTask_Statics::NewProp_RequestFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTBaseTask_Statics::NewProp_RequestSent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTBaseTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHttpGPTBaseTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTBaseTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTBaseTask_Statics::ClassParams = {
	&UHttpGPTBaseTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHttpGPTBaseTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTBaseTask_Statics::PropPointers),
	0,
	0x009002A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTBaseTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UHttpGPTBaseTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHttpGPTBaseTask()
{
	if (!Z_Registration_Info_UClass_UHttpGPTBaseTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTBaseTask.OuterSingleton, Z_Construct_UClass_UHttpGPTBaseTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHttpGPTBaseTask.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UClass* StaticClass<UHttpGPTBaseTask>()
{
	return UHttpGPTBaseTask::StaticClass();
}
UHttpGPTBaseTask::UHttpGPTBaseTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTBaseTask);
UHttpGPTBaseTask::~UHttpGPTBaseTask() {}
// End Class UHttpGPTBaseTask

// Begin Class UHttpGPTTaskStatus Function IsTaskActive
struct Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics
{
	struct HttpGPTTaskStatus_eventIsTaskActive_Parms
	{
		const UHttpGPTBaseTask* Test;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Test;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTTaskStatus_eventIsTaskActive_Parms, Test), Z_Construct_UClass_UHttpGPTBaseTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Test_MetaData), NewProp_Test_MetaData) };
void Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HttpGPTTaskStatus_eventIsTaskActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HttpGPTTaskStatus_eventIsTaskActive_Parms), &Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_Test,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTTaskStatus, nullptr, "IsTaskActive", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::HttpGPTTaskStatus_eventIsTaskActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::HttpGPTTaskStatus_eventIsTaskActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTTaskStatus::execIsTaskActive)
{
	P_GET_OBJECT(UHttpGPTBaseTask,Z_Param_Test);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHttpGPTTaskStatus::IsTaskActive(Z_Param_Test);
	P_NATIVE_END;
}
// End Class UHttpGPTTaskStatus Function IsTaskActive

// Begin Class UHttpGPTTaskStatus Function IsTaskReadyToDestroy
struct Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics
{
	struct HttpGPTTaskStatus_eventIsTaskReadyToDestroy_Parms
	{
		const UHttpGPTBaseTask* Test;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Test;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTTaskStatus_eventIsTaskReadyToDestroy_Parms, Test), Z_Construct_UClass_UHttpGPTBaseTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Test_MetaData), NewProp_Test_MetaData) };
void Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HttpGPTTaskStatus_eventIsTaskReadyToDestroy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HttpGPTTaskStatus_eventIsTaskReadyToDestroy_Parms), &Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_Test,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTTaskStatus, nullptr, "IsTaskReadyToDestroy", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::HttpGPTTaskStatus_eventIsTaskReadyToDestroy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::HttpGPTTaskStatus_eventIsTaskReadyToDestroy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTTaskStatus::execIsTaskReadyToDestroy)
{
	P_GET_OBJECT(UHttpGPTBaseTask,Z_Param_Test);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHttpGPTTaskStatus::IsTaskReadyToDestroy(Z_Param_Test);
	P_NATIVE_END;
}
// End Class UHttpGPTTaskStatus Function IsTaskReadyToDestroy

// Begin Class UHttpGPTTaskStatus Function IsTaskStillValid
struct Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics
{
	struct HttpGPTTaskStatus_eventIsTaskStillValid_Parms
	{
		const UHttpGPTBaseTask* Test;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Test;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTTaskStatus_eventIsTaskStillValid_Parms, Test), Z_Construct_UClass_UHttpGPTBaseTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Test_MetaData), NewProp_Test_MetaData) };
void Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HttpGPTTaskStatus_eventIsTaskStillValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HttpGPTTaskStatus_eventIsTaskStillValid_Parms), &Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_Test,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTTaskStatus, nullptr, "IsTaskStillValid", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::HttpGPTTaskStatus_eventIsTaskStillValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::HttpGPTTaskStatus_eventIsTaskStillValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTTaskStatus::execIsTaskStillValid)
{
	P_GET_OBJECT(UHttpGPTBaseTask,Z_Param_Test);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHttpGPTTaskStatus::IsTaskStillValid(Z_Param_Test);
	P_NATIVE_END;
}
// End Class UHttpGPTTaskStatus Function IsTaskStillValid

// Begin Class UHttpGPTTaskStatus
void UHttpGPTTaskStatus::StaticRegisterNativesUHttpGPTTaskStatus()
{
	UClass* Class = UHttpGPTTaskStatus::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsTaskActive", &UHttpGPTTaskStatus::execIsTaskActive },
		{ "IsTaskReadyToDestroy", &UHttpGPTTaskStatus::execIsTaskReadyToDestroy },
		{ "IsTaskStillValid", &UHttpGPTTaskStatus::execIsTaskStillValid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTTaskStatus);
UClass* Z_Construct_UClass_UHttpGPTTaskStatus_NoRegister()
{
	return UHttpGPTTaskStatus::StaticClass();
}
struct Z_Construct_UClass_UHttpGPTTaskStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
		{ "IncludePath", "Tasks/HttpGPTBaseTask.h" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive, "IsTaskActive" }, // 2791086491
		{ &Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy, "IsTaskReadyToDestroy" }, // 11316657
		{ &Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid, "IsTaskStillValid" }, // 2504134111
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTTaskStatus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHttpGPTTaskStatus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTTaskStatus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTTaskStatus_Statics::ClassParams = {
	&UHttpGPTTaskStatus::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001002A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTTaskStatus_Statics::Class_MetaDataParams), Z_Construct_UClass_UHttpGPTTaskStatus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHttpGPTTaskStatus()
{
	if (!Z_Registration_Info_UClass_UHttpGPTTaskStatus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTTaskStatus.OuterSingleton, Z_Construct_UClass_UHttpGPTTaskStatus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHttpGPTTaskStatus.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UClass* StaticClass<UHttpGPTTaskStatus>()
{
	return UHttpGPTTaskStatus::StaticClass();
}
UHttpGPTTaskStatus::UHttpGPTTaskStatus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTTaskStatus);
UHttpGPTTaskStatus::~UHttpGPTTaskStatus() {}
// End Class UHttpGPTTaskStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHttpGPTBaseTask, UHttpGPTBaseTask::StaticClass, TEXT("UHttpGPTBaseTask"), &Z_Registration_Info_UClass_UHttpGPTBaseTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTBaseTask), 4219359639U) },
		{ Z_Construct_UClass_UHttpGPTTaskStatus, UHttpGPTTaskStatus::StaticClass, TEXT("UHttpGPTTaskStatus"), &Z_Registration_Info_UClass_UHttpGPTTaskStatus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTTaskStatus), 542991215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_2958180472(TEXT("/Script/HttpGPTCommonModule"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
