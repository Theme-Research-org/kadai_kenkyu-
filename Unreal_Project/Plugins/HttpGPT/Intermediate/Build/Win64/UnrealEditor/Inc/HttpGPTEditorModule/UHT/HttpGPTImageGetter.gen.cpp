// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTEditorModule/Private/ImageGen/HttpGPTImageGetter.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTImageTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTImageGetter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageResponse();
HTTPGPTEDITORMODULE_API UClass* Z_Construct_UClass_UHttpGPTImageGetter();
HTTPGPTEDITORMODULE_API UClass* Z_Construct_UClass_UHttpGPTImageGetter_NoRegister();
UPackage* Z_Construct_UPackage__Script_HttpGPTEditorModule();
// End Cross Module References

// Begin Class UHttpGPTImageGetter Function ImageGenerated
struct Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated_Statics
{
	struct HttpGPTImageGetter_eventImageGenerated_Parms
	{
		const UTexture2D* Texture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ImageGen/HttpGPTImageGetter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageGetter_eventImageGenerated_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageGetter, nullptr, "ImageGenerated", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated_Statics::HttpGPTImageGetter_eventImageGenerated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated_Statics::HttpGPTImageGetter_eventImageGenerated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTImageGetter::execImageGenerated)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ImageGenerated(Z_Param_Texture);
	P_NATIVE_END;
}
// End Class UHttpGPTImageGetter Function ImageGenerated

// Begin Class UHttpGPTImageGetter Function ProcessCompleted
struct Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted_Statics
{
	struct HttpGPTImageGetter_eventProcessCompleted_Parms
	{
		FHttpGPTImageResponse Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ImageGen/HttpGPTImageGetter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpGPTImageGetter_eventProcessCompleted_Parms, Response), Z_Construct_UScriptStruct_FHttpGPTImageResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 1996345346
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageGetter, nullptr, "ProcessCompleted", nullptr, nullptr, Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted_Statics::HttpGPTImageGetter_eventProcessCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted_Statics::HttpGPTImageGetter_eventProcessCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTImageGetter::execProcessCompleted)
{
	P_GET_STRUCT_REF(FHttpGPTImageResponse,Z_Param_Out_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessCompleted(Z_Param_Out_Response);
	P_NATIVE_END;
}
// End Class UHttpGPTImageGetter Function ProcessCompleted

// Begin Class UHttpGPTImageGetter Function RequestFailed
struct Z_Construct_UFunction_UHttpGPTImageGetter_RequestFailed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ImageGen/HttpGPTImageGetter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageGetter_RequestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageGetter, nullptr, "RequestFailed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageGetter_RequestFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTImageGetter_RequestFailed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHttpGPTImageGetter_RequestFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageGetter_RequestFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTImageGetter::execRequestFailed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestFailed();
	P_NATIVE_END;
}
// End Class UHttpGPTImageGetter Function RequestFailed

// Begin Class UHttpGPTImageGetter Function RequestSent
struct Z_Construct_UFunction_UHttpGPTImageGetter_RequestSent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ImageGen/HttpGPTImageGetter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageGetter_RequestSent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageGetter, nullptr, "RequestSent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageGetter_RequestSent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpGPTImageGetter_RequestSent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHttpGPTImageGetter_RequestSent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageGetter_RequestSent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHttpGPTImageGetter::execRequestSent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestSent();
	P_NATIVE_END;
}
// End Class UHttpGPTImageGetter Function RequestSent

// Begin Class UHttpGPTImageGetter
void UHttpGPTImageGetter::StaticRegisterNativesUHttpGPTImageGetter()
{
	UClass* Class = UHttpGPTImageGetter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ImageGenerated", &UHttpGPTImageGetter::execImageGenerated },
		{ "ProcessCompleted", &UHttpGPTImageGetter::execProcessCompleted },
		{ "RequestFailed", &UHttpGPTImageGetter::execRequestFailed },
		{ "RequestSent", &UHttpGPTImageGetter::execRequestSent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTImageGetter);
UClass* Z_Construct_UClass_UHttpGPTImageGetter_NoRegister()
{
	return UHttpGPTImageGetter::StaticClass();
}
struct Z_Construct_UClass_UHttpGPTImageGetter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Implementation" },
		{ "IncludePath", "ImageGen/HttpGPTImageGetter.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/ImageGen/HttpGPTImageGetter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTImageGetter_ImageGenerated, "ImageGenerated" }, // 3455872202
		{ &Z_Construct_UFunction_UHttpGPTImageGetter_ProcessCompleted, "ProcessCompleted" }, // 523439611
		{ &Z_Construct_UFunction_UHttpGPTImageGetter_RequestFailed, "RequestFailed" }, // 3760280687
		{ &Z_Construct_UFunction_UHttpGPTImageGetter_RequestSent, "RequestSent" }, // 1030135898
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTImageGetter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHttpGPTImageGetter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTEditorModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageGetter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTImageGetter_Statics::ClassParams = {
	&UHttpGPTImageGetter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageGetter_Statics::Class_MetaDataParams), Z_Construct_UClass_UHttpGPTImageGetter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHttpGPTImageGetter()
{
	if (!Z_Registration_Info_UClass_UHttpGPTImageGetter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTImageGetter.OuterSingleton, Z_Construct_UClass_UHttpGPTImageGetter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHttpGPTImageGetter.OuterSingleton;
}
template<> HTTPGPTEDITORMODULE_API UClass* StaticClass<UHttpGPTImageGetter>()
{
	return UHttpGPTImageGetter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTImageGetter);
UHttpGPTImageGetter::~UHttpGPTImageGetter() {}
// End Class UHttpGPTImageGetter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_ImageGen_HttpGPTImageGetter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHttpGPTImageGetter, UHttpGPTImageGetter::StaticClass, TEXT("UHttpGPTImageGetter"), &Z_Registration_Info_UClass_UHttpGPTImageGetter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTImageGetter), 3168809530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_ImageGen_HttpGPTImageGetter_h_1959002094(TEXT("/Script/HttpGPTEditorModule"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_ImageGen_HttpGPTImageGetter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_HttpGPT_Source_HttpGPTEditorModule_Private_ImageGen_HttpGPTImageGetter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
