// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HAPI_To_Unreal_Common_Bridge.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMHENGINEPLUGIN_HAPI_To_Unreal_Common_Bridge_generated_h
#error "HAPI_To_Unreal_Common_Bridge.generated.h already included, missing '#pragma once' in HAPI_To_Unreal_Common_Bridge.h"
#endif
#define CUSTOMHENGINEPLUGIN_HAPI_To_Unreal_Common_Bridge_generated_h

#define FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniSession_Statics; \
	CUSTOMHENGINEPLUGIN_API static class UScriptStruct* StaticStruct();


template<> CUSTOMHENGINEPLUGIN_API UScriptStruct* StaticStruct<struct FHoudiniSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h


#define FOREACH_ENUM_EHOUDINISESSIONTYPE(op) \
	op(EHoudiniSessionType::HOUDINI_SESSION_INPROCESS) \
	op(EHoudiniSessionType::HOUDINI_SESSION_THRIFT) \
	op(EHoudiniSessionType::HOUDINI_SESSION_CUSTOM1) \
	op(EHoudiniSessionType::HOUDINI_SESSION_CUSTOM2) \
	op(EHoudiniSessionType::HOUDINI_SESSION_CUSTOM3) 

enum class EHoudiniSessionType;
template<> struct TIsUEnumClass<EHoudiniSessionType> { enum { Value = true }; };
template<> CUSTOMHENGINEPLUGIN_API UEnum* StaticEnum<EHoudiniSessionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
