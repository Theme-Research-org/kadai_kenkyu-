// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpeechRecognizerTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNTIMESPEECHRECOGNIZER_SpeechRecognizerTypes_generated_h
#error "SpeechRecognizerTypes.generated.h already included, missing '#pragma once' in SpeechRecognizerTypes.h"
#endif
#define RUNTIMESPEECHRECOGNIZER_SpeechRecognizerTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Plugins_RuntimeSpeechRecognizer_Source_RuntimeSpeechRecognizer_Public_SpeechRecognizerTypes_h


#define FOREACH_ENUM_ESPEECHRECOGNIZERMODELSIZE(op) \
	op(ESpeechRecognizerModelSize::Tiny) \
	op(ESpeechRecognizerModelSize::Tiny_Q5_1) \
	op(ESpeechRecognizerModelSize::Tiny_Q8_0) \
	op(ESpeechRecognizerModelSize::Base) \
	op(ESpeechRecognizerModelSize::Base_Q5_1) \
	op(ESpeechRecognizerModelSize::Small) \
	op(ESpeechRecognizerModelSize::Small_Q5_1) \
	op(ESpeechRecognizerModelSize::Medium) \
	op(ESpeechRecognizerModelSize::Medium_Q5_0) \
	op(ESpeechRecognizerModelSize::Large_V1) \
	op(ESpeechRecognizerModelSize::Large_V2) \
	op(ESpeechRecognizerModelSize::Large_V2_Q5_0) \
	op(ESpeechRecognizerModelSize::Large_V3) \
	op(ESpeechRecognizerModelSize::Large_V3_Q5_0) \
	op(ESpeechRecognizerModelSize::Custom) 

enum class ESpeechRecognizerModelSize : uint8;
template<> struct TIsUEnumClass<ESpeechRecognizerModelSize> { enum { Value = true }; };
template<> RUNTIMESPEECHRECOGNIZER_API UEnum* StaticEnum<ESpeechRecognizerModelSize>();

#define FOREACH_ENUM_ESPEECHRECOGNIZERMODELLANGUAGE(op) \
	op(ESpeechRecognizerModelLanguage::EnglishOnly) \
	op(ESpeechRecognizerModelLanguage::Multilingual) 

enum class ESpeechRecognizerModelLanguage : uint8;
template<> struct TIsUEnumClass<ESpeechRecognizerModelLanguage> { enum { Value = true }; };
template<> RUNTIMESPEECHRECOGNIZER_API UEnum* StaticEnum<ESpeechRecognizerModelLanguage>();

#define FOREACH_ENUM_ESPEECHRECOGNIZERLANGUAGE(op) \
	op(ESpeechRecognizerLanguage::Auto) \
	op(ESpeechRecognizerLanguage::En) \
	op(ESpeechRecognizerLanguage::Zh) \
	op(ESpeechRecognizerLanguage::De) \
	op(ESpeechRecognizerLanguage::Es) \
	op(ESpeechRecognizerLanguage::Ru) \
	op(ESpeechRecognizerLanguage::Ko) \
	op(ESpeechRecognizerLanguage::Fr) \
	op(ESpeechRecognizerLanguage::Ja) \
	op(ESpeechRecognizerLanguage::Pt) \
	op(ESpeechRecognizerLanguage::Tr) \
	op(ESpeechRecognizerLanguage::Pl) \
	op(ESpeechRecognizerLanguage::Ca) \
	op(ESpeechRecognizerLanguage::Nl) \
	op(ESpeechRecognizerLanguage::Ar) \
	op(ESpeechRecognizerLanguage::Sv) \
	op(ESpeechRecognizerLanguage::It) \
	op(ESpeechRecognizerLanguage::Id) \
	op(ESpeechRecognizerLanguage::Hi) \
	op(ESpeechRecognizerLanguage::Fi) \
	op(ESpeechRecognizerLanguage::Vi) \
	op(ESpeechRecognizerLanguage::He) \
	op(ESpeechRecognizerLanguage::Uk) \
	op(ESpeechRecognizerLanguage::El) \
	op(ESpeechRecognizerLanguage::Ms) \
	op(ESpeechRecognizerLanguage::Cs) \
	op(ESpeechRecognizerLanguage::Ro) \
	op(ESpeechRecognizerLanguage::Da) \
	op(ESpeechRecognizerLanguage::Hu) \
	op(ESpeechRecognizerLanguage::Ta) \
	op(ESpeechRecognizerLanguage::No) \
	op(ESpeechRecognizerLanguage::Th) \
	op(ESpeechRecognizerLanguage::Ur) \
	op(ESpeechRecognizerLanguage::Hr) \
	op(ESpeechRecognizerLanguage::Bg) \
	op(ESpeechRecognizerLanguage::Lt) \
	op(ESpeechRecognizerLanguage::La) \
	op(ESpeechRecognizerLanguage::Mi) \
	op(ESpeechRecognizerLanguage::Ml) \
	op(ESpeechRecognizerLanguage::Cy) \
	op(ESpeechRecognizerLanguage::Sk) \
	op(ESpeechRecognizerLanguage::Te) \
	op(ESpeechRecognizerLanguage::Fa) \
	op(ESpeechRecognizerLanguage::Lv) \
	op(ESpeechRecognizerLanguage::Bn) \
	op(ESpeechRecognizerLanguage::Sr) \
	op(ESpeechRecognizerLanguage::Az) \
	op(ESpeechRecognizerLanguage::Sl) \
	op(ESpeechRecognizerLanguage::Kn) \
	op(ESpeechRecognizerLanguage::Et) \
	op(ESpeechRecognizerLanguage::Mk) \
	op(ESpeechRecognizerLanguage::Br) \
	op(ESpeechRecognizerLanguage::Eu) \
	op(ESpeechRecognizerLanguage::Is) \
	op(ESpeechRecognizerLanguage::Hy) \
	op(ESpeechRecognizerLanguage::Ne) \
	op(ESpeechRecognizerLanguage::Mn) \
	op(ESpeechRecognizerLanguage::Bs) \
	op(ESpeechRecognizerLanguage::Kk) \
	op(ESpeechRecognizerLanguage::Sq) \
	op(ESpeechRecognizerLanguage::Sw) \
	op(ESpeechRecognizerLanguage::Gl) \
	op(ESpeechRecognizerLanguage::Mr) \
	op(ESpeechRecognizerLanguage::Pa) \
	op(ESpeechRecognizerLanguage::Si) \
	op(ESpeechRecognizerLanguage::Km) \
	op(ESpeechRecognizerLanguage::Sn) \
	op(ESpeechRecognizerLanguage::Yo) \
	op(ESpeechRecognizerLanguage::So) \
	op(ESpeechRecognizerLanguage::Af) \
	op(ESpeechRecognizerLanguage::Oc) \
	op(ESpeechRecognizerLanguage::Ka) \
	op(ESpeechRecognizerLanguage::Be) \
	op(ESpeechRecognizerLanguage::Tg) \
	op(ESpeechRecognizerLanguage::Sd) \
	op(ESpeechRecognizerLanguage::Gu) \
	op(ESpeechRecognizerLanguage::Am) \
	op(ESpeechRecognizerLanguage::Yi) \
	op(ESpeechRecognizerLanguage::Lo) \
	op(ESpeechRecognizerLanguage::Uz) \
	op(ESpeechRecognizerLanguage::Fo) \
	op(ESpeechRecognizerLanguage::Ht) \
	op(ESpeechRecognizerLanguage::Ps) \
	op(ESpeechRecognizerLanguage::Tk) \
	op(ESpeechRecognizerLanguage::Nn) \
	op(ESpeechRecognizerLanguage::Mt) \
	op(ESpeechRecognizerLanguage::Sa) \
	op(ESpeechRecognizerLanguage::Lb) \
	op(ESpeechRecognizerLanguage::My) \
	op(ESpeechRecognizerLanguage::Bo) \
	op(ESpeechRecognizerLanguage::Tl) \
	op(ESpeechRecognizerLanguage::Mg) \
	op(ESpeechRecognizerLanguage::As) \
	op(ESpeechRecognizerLanguage::Tt) \
	op(ESpeechRecognizerLanguage::Haw) \
	op(ESpeechRecognizerLanguage::Ln) \
	op(ESpeechRecognizerLanguage::Ha) \
	op(ESpeechRecognizerLanguage::Ba) \
	op(ESpeechRecognizerLanguage::Jw) \
	op(ESpeechRecognizerLanguage::Su) 

enum class ESpeechRecognizerLanguage : uint8;
template<> struct TIsUEnumClass<ESpeechRecognizerLanguage> { enum { Value = true }; };
template<> RUNTIMESPEECHRECOGNIZER_API UEnum* StaticEnum<ESpeechRecognizerLanguage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
