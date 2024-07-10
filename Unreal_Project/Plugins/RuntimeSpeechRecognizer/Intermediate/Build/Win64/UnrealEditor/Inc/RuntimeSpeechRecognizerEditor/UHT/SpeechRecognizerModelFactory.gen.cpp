// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeSpeechRecognizerEditor/Public/SpeechRecognizerModelFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognizerModelFactory() {}

// Begin Cross Module References
RUNTIMESPEECHRECOGNIZEREDITOR_API UClass* Z_Construct_UClass_USpeechRecognizerModelFactory();
RUNTIMESPEECHRECOGNIZEREDITOR_API UClass* Z_Construct_UClass_USpeechRecognizerModelFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_RuntimeSpeechRecognizerEditor();
// End Cross Module References

// Begin Class USpeechRecognizerModelFactory
void USpeechRecognizerModelFactory::StaticRegisterNativesUSpeechRecognizerModelFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpeechRecognizerModelFactory);
UClass* Z_Construct_UClass_USpeechRecognizerModelFactory_NoRegister()
{
	return USpeechRecognizerModelFactory::StaticClass();
}
struct Z_Construct_UClass_USpeechRecognizerModelFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Language model factory for creating language model assets. This factory is only used in the editor when creating a language model asset from a file\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "SpeechRecognizerModelFactory.h" },
		{ "ModuleRelativePath", "Public/SpeechRecognizerModelFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Language model factory for creating language model assets. This factory is only used in the editor when creating a language model asset from a file" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeechRecognizerModelFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USpeechRecognizerModelFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeSpeechRecognizerEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognizerModelFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpeechRecognizerModelFactory_Statics::ClassParams = {
	&USpeechRecognizerModelFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognizerModelFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USpeechRecognizerModelFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpeechRecognizerModelFactory()
{
	if (!Z_Registration_Info_UClass_USpeechRecognizerModelFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpeechRecognizerModelFactory.OuterSingleton, Z_Construct_UClass_USpeechRecognizerModelFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpeechRecognizerModelFactory.OuterSingleton;
}
template<> RUNTIMESPEECHRECOGNIZEREDITOR_API UClass* StaticClass<USpeechRecognizerModelFactory>()
{
	return USpeechRecognizerModelFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpeechRecognizerModelFactory);
USpeechRecognizerModelFactory::~USpeechRecognizerModelFactory() {}
// End Class USpeechRecognizerModelFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizerEditor_Public_SpeechRecognizerModelFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpeechRecognizerModelFactory, USpeechRecognizerModelFactory::StaticClass, TEXT("USpeechRecognizerModelFactory"), &Z_Registration_Info_UClass_USpeechRecognizerModelFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpeechRecognizerModelFactory), 3004874943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizerEditor_Public_SpeechRecognizerModelFactory_h_2283678594(TEXT("/Script/RuntimeSpeechRecognizerEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizerEditor_Public_SpeechRecognizerModelFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizerEditor_Public_SpeechRecognizerModelFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
