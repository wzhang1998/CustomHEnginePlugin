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

#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_232_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniSession_Statics; \
	CUSTOMHENGINEPLUGIN_API static class UScriptStruct* StaticStruct();


template<> CUSTOMHENGINEPLUGIN_API UScriptStruct* StaticStruct<struct FHoudiniSession>();

#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_268_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics; \
	CUSTOMHENGINEPLUGIN_API static class UScriptStruct* StaticStruct();


template<> CUSTOMHENGINEPLUGIN_API UScriptStruct* StaticStruct<struct FHoudiniCookOptions>();

#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_277_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics; \
	CUSTOMHENGINEPLUGIN_API static class UScriptStruct* StaticStruct();


template<> CUSTOMHENGINEPLUGIN_API UScriptStruct* StaticStruct<struct FHoudiniPartInfo>();

#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_285_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniAttributeInfo_Statics; \
	CUSTOMHENGINEPLUGIN_API static class UScriptStruct* StaticStruct();


template<> CUSTOMHENGINEPLUGIN_API UScriptStruct* StaticStruct<struct FHoudiniAttributeInfo>();

#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_294_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexListStruct_Statics; \
	CUSTOMHENGINEPLUGIN_API static class UScriptStruct* StaticStruct();


template<> CUSTOMHENGINEPLUGIN_API UScriptStruct* StaticStruct<struct FVertexListStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h


#define FOREACH_ENUM_EHOUDINISESSIONTYPE(op) \
	op(EHoudiniSessionType::HOUDINI_SESSION_INPROCESS) \
	op(EHoudiniSessionType::HOUDINI_SESSION_THRIFT) \
	op(EHoudiniSessionType::HOUDINI_SESSION_CUSTOM1) \
	op(EHoudiniSessionType::HOUDINI_SESSION_CUSTOM2) \
	op(EHoudiniSessionType::HOUDINI_SESSION_CUSTOM3) 

enum class EHoudiniSessionType : uint8;
template<> struct TIsUEnumClass<EHoudiniSessionType> { enum { Value = true }; };
template<> CUSTOMHENGINEPLUGIN_API UEnum* StaticEnum<EHoudiniSessionType>();

#define FOREACH_ENUM_EHOUDININODETYPE(op) \
	op(EHoudiniNodeType::HOUDINI_NODETYPE_ANY) \
	op(EHoudiniNodeType::HOUDINI_NODETYPE_NONE) \
	op(EHoudiniNodeType::HOUDINI_NODETYPE_OBJ) \
	op(EHoudiniNodeType::HOUDINI_NODETYPE_SOP) \
	op(EHoudiniNodeType::HOUDINI_NODETYPE_CHOP) \
	op(EHoudiniNodeType::HOUDINI_NODETYPE_ROP) \
	op(EHoudiniNodeType::HOUDINI_NODETYPE_SHOP) \
	op(EHoudiniNodeType::HOUDINI_NODETYPE_COP) \
	op(EHoudiniNodeType::HOUDINI_NODETYPE_VOP) \
	op(EHoudiniNodeType::HOUDINI_NODETYPE_DOP) \
	op(EHoudiniNodeType::HOUDINI_NODETYPE_TOP) 

enum class EHoudiniNodeType : uint8;
template<> struct TIsUEnumClass<EHoudiniNodeType> { enum { Value = true }; };
template<> CUSTOMHENGINEPLUGIN_API UEnum* StaticEnum<EHoudiniNodeType>();

#define FOREACH_ENUM_EHOUDININODEFLAGS(op) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_ANY) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_NONE) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_DISPLAY) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_RENDER) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_TEMPLATED) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_LOCKED) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_EDITABLE) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_BYPASS) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_NETWORK) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_GEOMETRY) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_CAMERA) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_LIGHT) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_SUBNET) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_SOP_CURVE) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_SOP_GUIDE) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_TOP_NONSCHEDULER) \
	op(EHoudiniNodeFlags::HOUDINI_NODEFLAGS_NON_BYPASS) 

enum class EHoudiniNodeFlags : uint8;
template<> struct TIsUEnumClass<EHoudiniNodeFlags> { enum { Value = true }; };
template<> CUSTOMHENGINEPLUGIN_API UEnum* StaticEnum<EHoudiniNodeFlags>();

#define FOREACH_ENUM_EHOUDINIPARTTYPE(op) \
	op(EHoudiniPartType::HOUDINI_PARTTYPE_INVALID) \
	op(EHoudiniPartType::HOUDINI_PARTTYPE_MESH) \
	op(EHoudiniPartType::HOUDINI_PARTTYPE_CURVE) \
	op(EHoudiniPartType::HOUDINI_PARTTYPE_VOLUME) \
	op(EHoudiniPartType::HOUDINI_PARTTYPE_INSTANCER) \
	op(EHoudiniPartType::HOUDINI_PARTTYPE_BOX) \
	op(EHoudiniPartType::HOUDINI_PARTTYPE_SPHERE) 

enum class EHoudiniPartType : uint8;
template<> struct TIsUEnumClass<EHoudiniPartType> { enum { Value = true }; };
template<> CUSTOMHENGINEPLUGIN_API UEnum* StaticEnum<EHoudiniPartType>();

#define FOREACH_ENUM_EHOUDINISTORAGETYPE(op) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_INVALID) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_INT) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_INT64) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT64) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_STRING) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_UINT8) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_INT8) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_INT16) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_INT_ARRAY) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_INT64_ARRAY) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT_ARRAY) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT64_ARRAY) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_STRING_ARRAY) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_UINT8_ARRAY) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_INT8_ARRAY) \
	op(EHoudiniStorageType::HOUDINI_STORAGETYPE_INT16_ARRAY) 

enum class EHoudiniStorageType : uint8;
template<> struct TIsUEnumClass<EHoudiniStorageType> { enum { Value = true }; };
template<> CUSTOMHENGINEPLUGIN_API UEnum* StaticEnum<EHoudiniStorageType>();

#define FOREACH_ENUM_EHOUDINIATTRIBUTEOWNER(op) \
	op(EHoudiniAttributeOwner::HOUDINI_ATTROWNER_INVALID) \
	op(EHoudiniAttributeOwner::HOUDINI_ATTROWNER_VERTEX) \
	op(EHoudiniAttributeOwner::HOUDINI_ATTROWNER_POINT) \
	op(EHoudiniAttributeOwner::HOUDINI_ATTROWNER_PRIM) \
	op(EHoudiniAttributeOwner::HOUDINI_ATTROWNER_DETAIL) 

enum class EHoudiniAttributeOwner : uint8;
template<> struct TIsUEnumClass<EHoudiniAttributeOwner> { enum { Value = true }; };
template<> CUSTOMHENGINEPLUGIN_API UEnum* StaticEnum<EHoudiniAttributeOwner>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
