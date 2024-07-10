// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeSpeechRecognizer/Public/SpeechRecognizerModel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognizerModel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RUNTIMESPEECHRECOGNIZER_API UClass* Z_Construct_UClass_USpeechRecognizerModel();
RUNTIMESPEECHRECOGNIZER_API UClass* Z_Construct_UClass_USpeechRecognizerModel_NoRegister();
UPackage* Z_Construct_UPackage__Script_RuntimeSpeechRecognizer();
// End Cross Module References

// Begin Class USpeechRecognizerModel
void USpeechRecognizerModel::StaticRegisterNativesUSpeechRecognizerModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpeechRecognizerModel);
UClass* Z_Construct_UClass_USpeechRecognizerModel_NoRegister()
{
	return USpeechRecognizerModel::StaticClass();
}
struct Z_Construct_UClass_USpeechRecognizerModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Intended to be presented as an asset in the editor containing language model data\n */" },
#endif
		{ "IncludePath", "SpeechRecognizerModel.h" },
		{ "ModuleRelativePath", "Public/SpeechRecognizerModel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intended to be presented as an asset in the editor containing language model data" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeechRecognizerModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USpeechRecognizerModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognizerModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpeechRecognizerModel_Statics::ClassParams = {
	&USpeechRecognizerModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognizerModel_Statics::Class_MetaDataParams), Z_Construct_UClass_USpeechRecognizerModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpeechRecognizerModel()
{
	if (!Z_Registration_Info_UClass_USpeechRecognizerModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpeechRecognizerModel.OuterSingleton, Z_Construct_UClass_USpeechRecognizerModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpeechRecognizerModel.OuterSingleton;
}
template<> RUNTIMESPEECHRECOGNIZER_API UClass* StaticClass<USpeechRecognizerModel>()
{
	return USpeechRecognizerModel::StaticClass();
}
USpeechRecognizerModel::USpeechRecognizerModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpeechRecognizerModel);
USpeechRecognizerModel::~USpeechRecognizerModel() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USpeechRecognizerModel)
// End Class USpeechRecognizerModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpeechRecognizerModel, USpeechRecognizerModel::StaticClass, TEXT("USpeechRecognizerModel"), &Z_Registration_Info_UClass_USpeechRecognizerModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpeechRecognizerModel), 1523098811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerModel_h_779870815(TEXT("/Script/RuntimeSpeechRecognizer"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
