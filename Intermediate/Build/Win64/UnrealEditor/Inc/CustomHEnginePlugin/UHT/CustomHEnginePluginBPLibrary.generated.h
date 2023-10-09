// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomHEnginePluginBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHoudiniAttributeOwner : uint8;
enum class EHoudiniNodeFlags : uint8;
enum class EHoudiniNodeType : uint8;
enum class EHoudiniPartType : uint8;
enum class EHoudiniStorageType : uint8;
struct FHoudiniAttributeInfo;
struct FHoudiniCookOptions;
struct FHoudiniPartInfo;
struct FHoudiniSession;
#ifdef CUSTOMHENGINEPLUGIN_CustomHEnginePluginBPLibrary_generated_h
#error "CustomHEnginePluginBPLibrary.generated.h already included, missing '#pragma once' in CustomHEnginePluginBPLibrary.h"
#endif
#define CUSTOMHENGINEPLUGIN_CustomHEnginePluginBPLibrary_generated_h

#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_SPARSE_DATA
#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHoudiniGetPartInfoSubData); \
	DECLARE_FUNCTION(execHoudiniGetPartInfo); \
	DECLARE_FUNCTION(execHoudiniGetVertexList); \
	DECLARE_FUNCTION(execHoudiniCommitGeo); \
	DECLARE_FUNCTION(execHoudiniSetVertexListAndFaceCounts); \
	DECLARE_FUNCTION(execHoudiniGetAttributeStringData); \
	DECLARE_FUNCTION(execHoudiniGetAttributeFloatData); \
	DECLARE_FUNCTION(execHoudiniGetAttributeIntData); \
	DECLARE_FUNCTION(execHoudiniGetAttributeInfo); \
	DECLARE_FUNCTION(execHoudiniAddAndSetIntAttribute); \
	DECLARE_FUNCTION(execHoudiniAddAndSetStringAttribute); \
	DECLARE_FUNCTION(execHoudiniAddAndSetFloatAttribute); \
	DECLARE_FUNCTION(execHoudiniCreateAttributeInfo); \
	DECLARE_FUNCTION(execHoudiniSetPartInfo); \
	DECLARE_FUNCTION(execHoudiniCreatePartInfo); \
	DECLARE_FUNCTION(execHoudiniCreateInputNode); \
	DECLARE_FUNCTION(execHoudiniDeleteNode); \
	DECLARE_FUNCTION(execHoudiniDisconnectNodeInput); \
	DECLARE_FUNCTION(execHoudiniQueryNodeInput); \
	DECLARE_FUNCTION(execHoudiniConnectNodeInput); \
	DECLARE_FUNCTION(execHoudiniGetComposedChildNodeList); \
	DECLARE_FUNCTION(execHoudiniComposeChildNodeList); \
	DECLARE_FUNCTION(execHoudiniIsInitialized); \
	DECLARE_FUNCTION(execHoudiniCloseSession); \
	DECLARE_FUNCTION(execHoudiniCleanupSession); \
	DECLARE_FUNCTION(execHoudiniSaveHIPFile); \
	DECLARE_FUNCTION(execHoudiniCookNode); \
	DECLARE_FUNCTION(execHoudiniCreateNode); \
	DECLARE_FUNCTION(execHoudiniGetAssetOperatorName); \
	DECLARE_FUNCTION(execHoudiniLoadAssetLibraryFromFile); \
	DECLARE_FUNCTION(execHoudiniIsSessionValid); \
	DECLARE_FUNCTION(execHoudiniInitialize); \
	DECLARE_FUNCTION(execCreateHoudiniCookOptions); \
	DECLARE_FUNCTION(execStartServerAndCreateSession);


#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHoudiniGetPartInfoSubData); \
	DECLARE_FUNCTION(execHoudiniGetPartInfo); \
	DECLARE_FUNCTION(execHoudiniGetVertexList); \
	DECLARE_FUNCTION(execHoudiniCommitGeo); \
	DECLARE_FUNCTION(execHoudiniSetVertexListAndFaceCounts); \
	DECLARE_FUNCTION(execHoudiniGetAttributeStringData); \
	DECLARE_FUNCTION(execHoudiniGetAttributeFloatData); \
	DECLARE_FUNCTION(execHoudiniGetAttributeIntData); \
	DECLARE_FUNCTION(execHoudiniGetAttributeInfo); \
	DECLARE_FUNCTION(execHoudiniAddAndSetIntAttribute); \
	DECLARE_FUNCTION(execHoudiniAddAndSetStringAttribute); \
	DECLARE_FUNCTION(execHoudiniAddAndSetFloatAttribute); \
	DECLARE_FUNCTION(execHoudiniCreateAttributeInfo); \
	DECLARE_FUNCTION(execHoudiniSetPartInfo); \
	DECLARE_FUNCTION(execHoudiniCreatePartInfo); \
	DECLARE_FUNCTION(execHoudiniCreateInputNode); \
	DECLARE_FUNCTION(execHoudiniDeleteNode); \
	DECLARE_FUNCTION(execHoudiniDisconnectNodeInput); \
	DECLARE_FUNCTION(execHoudiniQueryNodeInput); \
	DECLARE_FUNCTION(execHoudiniConnectNodeInput); \
	DECLARE_FUNCTION(execHoudiniGetComposedChildNodeList); \
	DECLARE_FUNCTION(execHoudiniComposeChildNodeList); \
	DECLARE_FUNCTION(execHoudiniIsInitialized); \
	DECLARE_FUNCTION(execHoudiniCloseSession); \
	DECLARE_FUNCTION(execHoudiniCleanupSession); \
	DECLARE_FUNCTION(execHoudiniSaveHIPFile); \
	DECLARE_FUNCTION(execHoudiniCookNode); \
	DECLARE_FUNCTION(execHoudiniCreateNode); \
	DECLARE_FUNCTION(execHoudiniGetAssetOperatorName); \
	DECLARE_FUNCTION(execHoudiniLoadAssetLibraryFromFile); \
	DECLARE_FUNCTION(execHoudiniIsSessionValid); \
	DECLARE_FUNCTION(execHoudiniInitialize); \
	DECLARE_FUNCTION(execCreateHoudiniCookOptions); \
	DECLARE_FUNCTION(execStartServerAndCreateSession);


#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_ACCESSORS
#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomHEnginePluginBPLibrary(); \
	friend struct Z_Construct_UClass_UCustomHEnginePluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UCustomHEnginePluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomHEnginePlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomHEnginePluginBPLibrary)


#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUCustomHEnginePluginBPLibrary(); \
	friend struct Z_Construct_UClass_UCustomHEnginePluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UCustomHEnginePluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomHEnginePlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomHEnginePluginBPLibrary)


#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomHEnginePluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomHEnginePluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomHEnginePluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomHEnginePluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomHEnginePluginBPLibrary(UCustomHEnginePluginBPLibrary&&); \
	NO_API UCustomHEnginePluginBPLibrary(const UCustomHEnginePluginBPLibrary&); \
public: \
	NO_API virtual ~UCustomHEnginePluginBPLibrary();


#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomHEnginePluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomHEnginePluginBPLibrary(UCustomHEnginePluginBPLibrary&&); \
	NO_API UCustomHEnginePluginBPLibrary(const UCustomHEnginePluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomHEnginePluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomHEnginePluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomHEnginePluginBPLibrary) \
	NO_API virtual ~UCustomHEnginePluginBPLibrary();


#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_26_PROLOG
#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_SPARSE_DATA \
	FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_RPC_WRAPPERS \
	FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_ACCESSORS \
	FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_INCLASS \
	FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_SPARSE_DATA \
	FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_ACCESSORS \
	FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
	FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CustomHEnginePluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMHENGINEPLUGIN_API UClass* StaticClass<class UCustomHEnginePluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
