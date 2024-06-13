// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTEditorModule/Private/Chat/HttpGPTMessagingHandler.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTChatTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTMessagingHandler() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatResponse();
HTTPGPTEDITORMODULE_API UClass* Z_Construct_UClass_UHttpGPTMessagingHandler();
HTTPGPTEDITORMODULE_API UClass* Z_Construct_UClass_UHttpGPTMessagingHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_HttpGPTEditorModule();
// End Cross Module References

// Begin Class UHttpGPTMessagingHandler Function ProcessCompleted
struct Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics
{
	struct HttpGPTMessagingHandler_eventProcessCompleted_Parms
	{
		FHttpGPTChatResponse Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Chat/HttpGPTMessagingHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTMessagingHandler_eventProcessCompleted_Parms, Response), Z_Construct_UScriptStruct_FHttpGPTChatResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2821707508
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTMessagingHandler, nullptr, "ProcessCompleted", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::HttpGPTMessagingHandler_eventProcessCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::HttpGPTMessagingHandler_eventProcessCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTMessagingHandler::execProcessCompleted)
{
	P_GET_STRUCT_REF(FHttpGPTChatResponse,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessCompleted(Z_Param_Out_Response);
	P_NATIVE_END;
}
// End Class UHttpGPTMessagingHandler Function ProcessCompleted

// Begin Class UHttpGPTMessagingHandler Function ProcessUpdated
struct Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics
{
	struct HttpGPTMessagingHandler_eventProcessUpdated_Parms
	{
		FHttpGPTChatResponse Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Chat/HttpGPTMessagingHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTMessagingHandler_eventProcessUpdated_Parms, Response), Z_Construct_UScriptStruct_FHttpGPTChatResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 2821707508
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTMessagingHandler, nullptr, "ProcessUpdated", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::HttpGPTMessagingHandler_eventProcessUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::HttpGPTMessagingHandler_eventProcessUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTMessagingHandler::execProcessUpdated)
{
	P_GET_STRUCT_REF(FHttpGPTChatResponse,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessUpdated(Z_Param_Out_Response);
	P_NATIVE_END;
}
// End Class UHttpGPTMessagingHandler Function ProcessUpdated

// Begin Class UHttpGPTMessagingHandler Function RequestFailed
struct Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Chat/HttpGPTMessagingHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTMessagingHandler, nullptr, "RequestFailed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTMessagingHandler::execRequestFailed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestFailed();
	P_NATIVE_END;
}
// End Class UHttpGPTMessagingHandler Function RequestFailed

// Begin Class UHttpGPTMessagingHandler Function RequestSent
struct Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Chat/HttpGPTMessagingHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTMessagingHandler, nullptr, "RequestSent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTMessagingHandler::execRequestSent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestSent();
	P_NATIVE_END;
}
// End Class UHttpGPTMessagingHandler Function RequestSent

// Begin Class UHttpGPTMessagingHandler
void UHttpGPTMessagingHandler::StaticRegisterNativesUHttpGPTMessagingHandler()
{
	UClass* Class = UHttpGPTMessagingHandler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ProcessCompleted", &UHttpGPTMessagingHandler::execProcessCompleted },
		{ "ProcessUpdated", &UHttpGPTMessagingHandler::execProcessUpdated },
		{ "RequestFailed", &UHttpGPTMessagingHandler::execRequestFailed },
		{ "RequestSent", &UHttpGPTMessagingHandler::execRequestSent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTMessagingHandler);
UClass* Z_Construct_UClass_UHttpGPTMessagingHandler_NoRegister()
{
	return UHttpGPTMessagingHandler::StaticClass();
}
struct Z_Construct_UClass_UHttpGPTMessagingHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Implementation" },
		{ "IncludePath", "Chat/HttpGPTMessagingHandler.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Chat/HttpGPTMessagingHandler.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted, "ProcessCompleted" }, // 510986336
		{ &Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated, "ProcessUpdated" }, // 1792023487
		{ &Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed, "RequestFailed" }, // 2822303885
		{ &Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent, "RequestSent" }, // 3955341348
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTMessagingHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHttpGPTMessagingHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTEditorModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTMessagingHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTMessagingHandler_Statics::ClassParams = {
	&UHttpGPTMessagingHandler::StaticClass,
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
	0x000802A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTMessagingHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UHttpGPTMessagingHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHttpGPTMessagingHandler()
{
	if (!Z_Registration_Info_UClass_UHttpGPTMessagingHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTMessagingHandler.OuterSingleton, Z_Construct_UClass_UHttpGPTMessagingHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHttpGPTMessagingHandler.OuterSingleton;
}
template<> HTTPGPTEDITORMODULE_API UClass* StaticClass<UHttpGPTMessagingHandler>()
{
	return UHttpGPTMessagingHandler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTMessagingHandler);
UHttpGPTMessagingHandler::~UHttpGPTMessagingHandler() {}
// End Class UHttpGPTMessagingHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_Chat_HttpGPTMessagingHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHttpGPTMessagingHandler, UHttpGPTMessagingHandler::StaticClass, TEXT("UHttpGPTMessagingHandler"), &Z_Registration_Info_UClass_UHttpGPTMessagingHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTMessagingHandler), 3601723840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_Chat_HttpGPTMessagingHandler_h_387629096(TEXT("/Script/HttpGPTEditorModule"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_Chat_HttpGPTMessagingHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_Chat_HttpGPTMessagingHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
