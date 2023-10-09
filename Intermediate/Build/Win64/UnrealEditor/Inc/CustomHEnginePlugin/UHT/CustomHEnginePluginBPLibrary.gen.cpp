// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../CustomHEnginePluginBPLibrary.h"
#include "../HAPI_To_Unreal_Common_Bridge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomHEnginePluginBPLibrary() {}
// Cross Module References
	CUSTOMHENGINEPLUGIN_API UClass* Z_Construct_UClass_UCustomHEnginePluginBPLibrary();
	CUSTOMHENGINEPLUGIN_API UClass* Z_Construct_UClass_UCustomHEnginePluginBPLibrary_NoRegister();
	CUSTOMHENGINEPLUGIN_API UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner();
	CUSTOMHENGINEPLUGIN_API UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeFlags();
	CUSTOMHENGINEPLUGIN_API UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeType();
	CUSTOMHENGINEPLUGIN_API UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniPartType();
	CUSTOMHENGINEPLUGIN_API UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniStorageType();
	CUSTOMHENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAttributeInfo();
	CUSTOMHENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCookOptions();
	CUSTOMHENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPartInfo();
	CUSTOMHENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSession();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CustomHEnginePlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniGetPartInfoSubData)
	{
		P_GET_STRUCT_REF(FHoudiniPartInfo,Z_Param_Out_PartInfo);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FaceCount);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PointCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCustomHEnginePluginBPLibrary::HoudiniGetPartInfoSubData(Z_Param_Out_PartInfo,Z_Param_Out_FaceCount,Z_Param_Out_PointCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniGetPartInfo)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_GET_STRUCT_REF(FHoudiniPartInfo,Z_Param_Out_PartInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniGetPartInfo(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_PartId,Z_Param_Out_PartInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniGetVertexList)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_GET_TARRAY_REF(int32,Z_Param_Out_VertexList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniGetVertexList(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_PartId,Z_Param_Out_VertexList,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniCommitGeo)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniCommitGeo(Z_Param_HoudiniSession,Z_Param_NodeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniSetVertexListAndFaceCounts)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_TARRAY_REF(int32,Z_Param_Out_VertexDataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniSetVertexListAndFaceCounts(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_Out_VertexDataArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniGetAttributeStringData)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
		P_GET_STRUCT(FHoudiniAttributeInfo,Z_Param_AttributeInfo);
		P_GET_TARRAY_REF(FString,Z_Param_Out_DataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniGetAttributeStringData(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_PartId,Z_Param_AttributeName,Z_Param_AttributeInfo,Z_Param_Out_DataArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniGetAttributeFloatData)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
		P_GET_STRUCT(FHoudiniAttributeInfo,Z_Param_AttributeInfo);
		P_GET_TARRAY_REF(float,Z_Param_Out_DataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniGetAttributeFloatData(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_PartId,Z_Param_AttributeName,Z_Param_AttributeInfo,Z_Param_Out_DataArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniGetAttributeIntData)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
		P_GET_STRUCT(FHoudiniAttributeInfo,Z_Param_AttributeInfo);
		P_GET_TARRAY_REF(int32,Z_Param_Out_DataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniGetAttributeIntData(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_PartId,Z_Param_AttributeName,Z_Param_AttributeInfo,Z_Param_Out_DataArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniGetAttributeInfo)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FHoudiniAttributeInfo,Z_Param_Out_AttributeInfo);
		P_GET_ENUM(EHoudiniAttributeOwner,Z_Param_AttributeOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniGetAttributeInfo(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_PartId,Z_Param_AttributeName,Z_Param_Out_AttributeInfo,EHoudiniAttributeOwner(Z_Param_AttributeOwner));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniAddAndSetIntAttribute)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FHoudiniAttributeInfo,Z_Param_Out_AttributeInfo);
		P_GET_TARRAY_REF(int32,Z_Param_Out_DataArray);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniAddAndSetIntAttribute(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_AttributeName,Z_Param_Out_AttributeInfo,Z_Param_Out_DataArray,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniAddAndSetStringAttribute)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FHoudiniAttributeInfo,Z_Param_Out_AttributeInfo);
		P_GET_TARRAY_REF(FString,Z_Param_Out_DataArray);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniAddAndSetStringAttribute(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_AttributeName,Z_Param_Out_AttributeInfo,Z_Param_Out_DataArray,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniAddAndSetFloatAttribute)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FHoudiniAttributeInfo,Z_Param_Out_AttributeInfo);
		P_GET_TARRAY_REF(float,Z_Param_Out_DataArray);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniAddAndSetFloatAttribute(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_AttributeName,Z_Param_Out_AttributeInfo,Z_Param_Out_DataArray,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniCreateAttributeInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FIntProperty,Z_Param_TupleSize);
		P_GET_UBOOL(Z_Param_bExists);
		P_GET_ENUM(EHoudiniAttributeOwner,Z_Param_AttributeOwner);
		P_GET_ENUM(EHoudiniStorageType,Z_Param_StorageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHoudiniAttributeInfo*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniCreateAttributeInfo(Z_Param_Count,Z_Param_TupleSize,Z_Param_bExists,EHoudiniAttributeOwner(Z_Param_AttributeOwner),EHoudiniStorageType(Z_Param_StorageType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniSetPartInfo)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_STRUCT_REF(FHoudiniPartInfo,Z_Param_Out_HoudiniPartIndfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniSetPartInfo(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_Out_HoudiniPartIndfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniCreatePartInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FaceCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_PointCount);
		P_GET_ENUM(EHoudiniPartType,Z_Param_HoudiniPartType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHoudiniPartInfo*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniCreatePartInfo(Z_Param_FaceCount,Z_Param_VertexCount,Z_Param_PointCount,EHoudiniPartType(Z_Param_HoudiniPartType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniCreateInputNode)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NodeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniCreateInputNode(Z_Param_HoudiniSession,Z_Param_Out_NodeId,Z_Param_Label);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniDeleteNode)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniDeleteNode(Z_Param_HoudiniSession,Z_Param_NodeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniDisconnectNodeInput)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_PROPERTY(FIntProperty,Z_Param_InputIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniDisconnectNodeInput(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_InputIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniQueryNodeInput)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_PROPERTY(FIntProperty,Z_Param_IputIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConnectedNodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniQueryNodeInput(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_IputIndex,Z_Param_Out_ConnectedNodeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniConnectNodeInput)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_PROPERTY(FIntProperty,Z_Param_IputIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeIdToConnect);
		P_GET_PROPERTY(FIntProperty,Z_Param_OutputIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniConnectNodeInput(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_IputIndex,Z_Param_NodeIdToConnect,Z_Param_OutputIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniGetComposedChildNodeList)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_ParentNodeId);
		P_GET_TARRAY_REF(int32,Z_Param_Out_ChildNodeIdList);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChildCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniGetComposedChildNodeList(Z_Param_HoudiniSession,Z_Param_ParentNodeId,Z_Param_Out_ChildNodeIdList,Z_Param_ChildCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniComposeChildNodeList)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_ParentNodeId);
		P_GET_ENUM(EHoudiniNodeType,Z_Param_NodeType);
		P_GET_ENUM(EHoudiniNodeFlags,Z_Param_NodeFlags);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ChildCount);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniComposeChildNodeList(Z_Param_HoudiniSession,Z_Param_ParentNodeId,EHoudiniNodeType(Z_Param_NodeType),EHoudiniNodeFlags(Z_Param_NodeFlags),Z_Param_Out_ChildCount,Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniIsInitialized)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniIsInitialized(Z_Param_HoudiniSession);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniCloseSession)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCustomHEnginePluginBPLibrary::HoudiniCloseSession(Z_Param_HoudiniSession);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniCleanupSession)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCustomHEnginePluginBPLibrary::HoudiniCleanupSession(Z_Param_HoudiniSession);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniSaveHIPFile)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_UBOOL(Z_Param_bLockNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniSaveHIPFile(Z_Param_HoudiniSession,Z_Param_FilePath,Z_Param_bLockNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniCookNode)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_STRUCT_REF(FHoudiniCookOptions,Z_Param_Out_HoudiniCookOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCustomHEnginePluginBPLibrary::HoudiniCookNode(Z_Param_HoudiniSession,Z_Param_NodeId,Z_Param_Out_HoudiniCookOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniCreateNode)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FStrProperty,Z_Param_OperatorName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NodeId);
		P_GET_PROPERTY(FIntProperty,Z_Param_ParentNodeId);
		P_GET_UBOOL(Z_Param_bCookOnCreation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniCreateNode(Z_Param_HoudiniSession,Z_Param_OperatorName,Z_Param_Label,Z_Param_Out_NodeId,Z_Param_ParentNodeId,Z_Param_bCookOnCreation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniGetAssetOperatorName)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FIntProperty,Z_Param_AssetLibraryId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FullOpName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Label);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniGetAssetOperatorName(Z_Param_HoudiniSession,Z_Param_AssetLibraryId,Z_Param_Out_FullOpName,Z_Param_Out_Label);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniLoadAssetLibraryFromFile)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_PROPERTY(FStrProperty,Z_Param_OtlFilePath);
		P_GET_UBOOL(Z_Param_bAllowOverWrite);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AssetLibraryId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniLoadAssetLibraryFromFile(Z_Param_HoudiniSession,Z_Param_OtlFilePath,Z_Param_bAllowOverWrite,Z_Param_Out_AssetLibraryId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniIsSessionValid)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEnginePluginBPLibrary::HoudiniIsSessionValid(Z_Param_HoudiniSession);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execHoudiniInitialize)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_GET_STRUCT_REF(FHoudiniCookOptions,Z_Param_Out_HoudiniCookOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCustomHEnginePluginBPLibrary::HoudiniInitialize(Z_Param_HoudiniSession,Z_Param_Out_HoudiniCookOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execCreateHoudiniCookOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHoudiniCookOptions*)Z_Param__Result=UCustomHEnginePluginBPLibrary::CreateHoudiniCookOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEnginePluginBPLibrary::execStartServerAndCreateSession)
	{
		P_GET_STRUCT(FHoudiniSession,Z_Param_HoudiniSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHoudiniSession*)Z_Param__Result=UCustomHEnginePluginBPLibrary::StartServerAndCreateSession(Z_Param_HoudiniSession);
		P_NATIVE_END;
	}
	void UCustomHEnginePluginBPLibrary::StaticRegisterNativesUCustomHEnginePluginBPLibrary()
	{
		UClass* Class = UCustomHEnginePluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateHoudiniCookOptions", &UCustomHEnginePluginBPLibrary::execCreateHoudiniCookOptions },
			{ "HoudiniAddAndSetFloatAttribute", &UCustomHEnginePluginBPLibrary::execHoudiniAddAndSetFloatAttribute },
			{ "HoudiniAddAndSetIntAttribute", &UCustomHEnginePluginBPLibrary::execHoudiniAddAndSetIntAttribute },
			{ "HoudiniAddAndSetStringAttribute", &UCustomHEnginePluginBPLibrary::execHoudiniAddAndSetStringAttribute },
			{ "HoudiniCleanupSession", &UCustomHEnginePluginBPLibrary::execHoudiniCleanupSession },
			{ "HoudiniCloseSession", &UCustomHEnginePluginBPLibrary::execHoudiniCloseSession },
			{ "HoudiniCommitGeo", &UCustomHEnginePluginBPLibrary::execHoudiniCommitGeo },
			{ "HoudiniComposeChildNodeList", &UCustomHEnginePluginBPLibrary::execHoudiniComposeChildNodeList },
			{ "HoudiniConnectNodeInput", &UCustomHEnginePluginBPLibrary::execHoudiniConnectNodeInput },
			{ "HoudiniCookNode", &UCustomHEnginePluginBPLibrary::execHoudiniCookNode },
			{ "HoudiniCreateAttributeInfo", &UCustomHEnginePluginBPLibrary::execHoudiniCreateAttributeInfo },
			{ "HoudiniCreateInputNode", &UCustomHEnginePluginBPLibrary::execHoudiniCreateInputNode },
			{ "HoudiniCreateNode", &UCustomHEnginePluginBPLibrary::execHoudiniCreateNode },
			{ "HoudiniCreatePartInfo", &UCustomHEnginePluginBPLibrary::execHoudiniCreatePartInfo },
			{ "HoudiniDeleteNode", &UCustomHEnginePluginBPLibrary::execHoudiniDeleteNode },
			{ "HoudiniDisconnectNodeInput", &UCustomHEnginePluginBPLibrary::execHoudiniDisconnectNodeInput },
			{ "HoudiniGetAssetOperatorName", &UCustomHEnginePluginBPLibrary::execHoudiniGetAssetOperatorName },
			{ "HoudiniGetAttributeFloatData", &UCustomHEnginePluginBPLibrary::execHoudiniGetAttributeFloatData },
			{ "HoudiniGetAttributeInfo", &UCustomHEnginePluginBPLibrary::execHoudiniGetAttributeInfo },
			{ "HoudiniGetAttributeIntData", &UCustomHEnginePluginBPLibrary::execHoudiniGetAttributeIntData },
			{ "HoudiniGetAttributeStringData", &UCustomHEnginePluginBPLibrary::execHoudiniGetAttributeStringData },
			{ "HoudiniGetComposedChildNodeList", &UCustomHEnginePluginBPLibrary::execHoudiniGetComposedChildNodeList },
			{ "HoudiniGetPartInfo", &UCustomHEnginePluginBPLibrary::execHoudiniGetPartInfo },
			{ "HoudiniGetPartInfoSubData", &UCustomHEnginePluginBPLibrary::execHoudiniGetPartInfoSubData },
			{ "HoudiniGetVertexList", &UCustomHEnginePluginBPLibrary::execHoudiniGetVertexList },
			{ "HoudiniInitialize", &UCustomHEnginePluginBPLibrary::execHoudiniInitialize },
			{ "HoudiniIsInitialized", &UCustomHEnginePluginBPLibrary::execHoudiniIsInitialized },
			{ "HoudiniIsSessionValid", &UCustomHEnginePluginBPLibrary::execHoudiniIsSessionValid },
			{ "HoudiniLoadAssetLibraryFromFile", &UCustomHEnginePluginBPLibrary::execHoudiniLoadAssetLibraryFromFile },
			{ "HoudiniQueryNodeInput", &UCustomHEnginePluginBPLibrary::execHoudiniQueryNodeInput },
			{ "HoudiniSaveHIPFile", &UCustomHEnginePluginBPLibrary::execHoudiniSaveHIPFile },
			{ "HoudiniSetPartInfo", &UCustomHEnginePluginBPLibrary::execHoudiniSetPartInfo },
			{ "HoudiniSetVertexListAndFaceCounts", &UCustomHEnginePluginBPLibrary::execHoudiniSetVertexListAndFaceCounts },
			{ "StartServerAndCreateSession", &UCustomHEnginePluginBPLibrary::execStartServerAndCreateSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_CreateHoudiniCookOptions_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventCreateHoudiniCookOptions_Parms
		{
			FHoudiniCookOptions ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_CreateHoudiniCookOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventCreateHoudiniCookOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FHoudiniCookOptions, METADATA_PARAMS(nullptr, 0) }; // 928176404
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_CreateHoudiniCookOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_CreateHoudiniCookOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_CreateHoudiniCookOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Helpers" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Creates and initialize cook options." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_CreateHoudiniCookOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "CreateHoudiniCookOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_CreateHoudiniCookOptions_Statics::CustomHEnginePluginBPLibrary_eventCreateHoudiniCookOptions_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_CreateHoudiniCookOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_CreateHoudiniCookOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_CreateHoudiniCookOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_CreateHoudiniCookOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_CreateHoudiniCookOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_CreateHoudiniCookOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetFloatAttribute_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			FString AttributeName;
			FHoudiniAttributeInfo AttributeInfo;
			TArray<float> DataArray;
			int32 Count;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeInfo;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DataArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataArray;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetFloatAttribute_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetFloatAttribute_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetFloatAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_AttributeInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_AttributeInfo = { "AttributeInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetFloatAttribute_Parms, AttributeInfo), Z_Construct_UScriptStruct_FHoudiniAttributeInfo, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_AttributeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_AttributeInfo_MetaData)) }; // 1630230711
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_DataArray_Inner = { "DataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_DataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_DataArray = { "DataArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetFloatAttribute_Parms, DataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_DataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_DataArray_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetFloatAttribute_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetFloatAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetFloatAttribute_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_AttributeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_DataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_DataArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Attributes" },
		{ "Comment", "//\x09  Add and set a float attribute.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Add and set a float attribute." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniAddAndSetFloatAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetFloatAttribute_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetIntAttribute_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			FString AttributeName;
			FHoudiniAttributeInfo AttributeInfo;
			TArray<int32> DataArray;
			int32 Count;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeInfo;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DataArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataArray;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetIntAttribute_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetIntAttribute_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetIntAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_AttributeInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_AttributeInfo = { "AttributeInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetIntAttribute_Parms, AttributeInfo), Z_Construct_UScriptStruct_FHoudiniAttributeInfo, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_AttributeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_AttributeInfo_MetaData)) }; // 1630230711
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_DataArray_Inner = { "DataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_DataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_DataArray = { "DataArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetIntAttribute_Parms, DataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_DataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_DataArray_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetIntAttribute_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetIntAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetIntAttribute_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_AttributeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_DataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_DataArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Attributes" },
		{ "Comment", "//\x09  Add and set a int attribute.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Add and set a int attribute." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniAddAndSetIntAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetIntAttribute_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetStringAttribute_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			FString AttributeName;
			FHoudiniAttributeInfo AttributeInfo;
			TArray<FString> DataArray;
			int32 Count;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataArray;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetStringAttribute_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetStringAttribute_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetStringAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_AttributeInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_AttributeInfo = { "AttributeInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetStringAttribute_Parms, AttributeInfo), Z_Construct_UScriptStruct_FHoudiniAttributeInfo, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_AttributeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_AttributeInfo_MetaData)) }; // 1630230711
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_DataArray_Inner = { "DataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_DataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_DataArray = { "DataArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetStringAttribute_Parms, DataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_DataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_DataArray_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetStringAttribute_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetStringAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetStringAttribute_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_AttributeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_DataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_DataArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Attributes" },
		{ "Comment", "//\x09  Add and set a string attribute.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Add and set a string attribute." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniAddAndSetStringAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::CustomHEnginePluginBPLibrary_eventHoudiniAddAndSetStringAttribute_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCleanupSession_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniCleanupSession_Parms
		{
			FHoudiniSession HoudiniSession;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCleanupSession_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCleanupSession_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCleanupSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCleanupSession_Statics::NewProp_HoudiniSession,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCleanupSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Sessions" },
		{ "Comment", "//    Clean up memory. This will unload all assets and you will need to call HAPI_Initialize() again to be able to use any HAPI methods again.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Clean up memory. This will unload all assets and you will need to call HAPI_Initialize() again to be able to use any HAPI methods again." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCleanupSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniCleanupSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCleanupSession_Statics::CustomHEnginePluginBPLibrary_eventHoudiniCleanupSession_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCleanupSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCleanupSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCleanupSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCleanupSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCleanupSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCleanupSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCloseSession_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniCloseSession_Parms
		{
			FHoudiniSession HoudiniSession;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCloseSession_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCloseSession_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCloseSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCloseSession_Statics::NewProp_HoudiniSession,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCloseSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Sessions" },
		{ "Comment", "//    Closes a session. If the session has been established using RPC, then the RPC connection is closed.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Closes a session. If the session has been established using RPC, then the RPC connection is closed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCloseSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniCloseSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCloseSession_Statics::CustomHEnginePluginBPLibrary_eventHoudiniCloseSession_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCloseSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCloseSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCloseSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCloseSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCloseSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCloseSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniCommitGeo_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCommitGeo_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCommitGeo_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniCommitGeo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniCommitGeo_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Geometry Setters" },
		{ "Comment", "//    Commit the current input geometry to the cook engine. Nodes that use this geometry node will re-cook using the input geometry given through the geometry setter API calls.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Commit the current input geometry to the cook engine. Nodes that use this geometry node will re-cook using the input geometry given through the geometry setter API calls." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniCommitGeo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::CustomHEnginePluginBPLibrary_eventHoudiniCommitGeo_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniComposeChildNodeList_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 ParentNodeId;
			EHoudiniNodeType NodeType;
			EHoudiniNodeFlags NodeFlags;
			int32 ChildCount;
			bool bRecursive;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ParentNodeId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NodeType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NodeFlags_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeFlags;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ChildCount;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniComposeChildNodeList_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_ParentNodeId = { "ParentNodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniComposeChildNodeList_Parms, ParentNodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_NodeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_NodeType = { "NodeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniComposeChildNodeList_Parms, NodeType), Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeType, METADATA_PARAMS(nullptr, 0) }; // 362357899
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_NodeFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_NodeFlags = { "NodeFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniComposeChildNodeList_Parms, NodeFlags), Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeFlags, METADATA_PARAMS(nullptr, 0) }; // 2840242248
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_ChildCount = { "ChildCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniComposeChildNodeList_Parms, ChildCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniComposeChildNodeList_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniComposeChildNodeList_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniComposeChildNodeList_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniComposeChildNodeList_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_ParentNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_NodeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_NodeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_NodeFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_NodeFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_ChildCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Nodes" },
		{ "Comment", "//    Compose a list of child nodes based on given filters.\n" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Compose a list of child nodes based on given filters." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniComposeChildNodeList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::CustomHEnginePluginBPLibrary_eventHoudiniComposeChildNodeList_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniConnectNodeInput_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			int32 IputIndex;
			int32 NodeIdToConnect;
			int32 OutputIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IputIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeIdToConnect;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OutputIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniConnectNodeInput_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniConnectNodeInput_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::NewProp_IputIndex = { "IputIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniConnectNodeInput_Parms, IputIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::NewProp_NodeIdToConnect = { "NodeIdToConnect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniConnectNodeInput_Parms, NodeIdToConnect), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::NewProp_OutputIndex = { "OutputIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniConnectNodeInput_Parms, OutputIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniConnectNodeInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniConnectNodeInput_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::NewProp_IputIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::NewProp_NodeIdToConnect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::NewProp_OutputIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Nodes" },
		{ "Comment", "//    Connect two nodes together.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Connect two nodes together." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniConnectNodeInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::CustomHEnginePluginBPLibrary_eventHoudiniConnectNodeInput_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniCookNode_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			FHoudiniCookOptions HoudiniCookOptions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniCookOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniCookOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCookNode_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCookNode_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::NewProp_HoudiniCookOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::NewProp_HoudiniCookOptions = { "HoudiniCookOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCookNode_Parms, HoudiniCookOptions), Z_Construct_UScriptStruct_FHoudiniCookOptions, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::NewProp_HoudiniCookOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::NewProp_HoudiniCookOptions_MetaData)) }; // 928176404
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::NewProp_HoudiniCookOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Nodes" },
		{ "Comment", "//    Initiate a cook on this node. Note that this may trigger cooks on other nodes if they are connected.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Initiate a cook on this node. Note that this may trigger cooks on other nodes if they are connected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniCookNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::CustomHEnginePluginBPLibrary_eventHoudiniCookNode_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniCreateAttributeInfo_Parms
		{
			int32 Count;
			int32 TupleSize;
			bool bExists;
			EHoudiniAttributeOwner AttributeOwner;
			EHoudiniStorageType StorageType;
			FHoudiniAttributeInfo ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TupleSize;
		static void NewProp_bExists_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExists;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeOwner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeOwner;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StorageType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StorageType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreateAttributeInfo_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_TupleSize = { "TupleSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreateAttributeInfo_Parms, TupleSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_bExists_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniCreateAttributeInfo_Parms*)Obj)->bExists = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_bExists = { "bExists", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniCreateAttributeInfo_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_bExists_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_AttributeOwner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_AttributeOwner = { "AttributeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreateAttributeInfo_Parms, AttributeOwner), Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner, METADATA_PARAMS(nullptr, 0) }; // 1294589256
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_StorageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_StorageType = { "StorageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreateAttributeInfo_Parms, StorageType), Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniStorageType, METADATA_PARAMS(nullptr, 0) }; // 2678336404
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreateAttributeInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FHoudiniAttributeInfo, METADATA_PARAMS(nullptr, 0) }; // 1630230711
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_TupleSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_bExists,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_AttributeOwner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_AttributeOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_StorageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_StorageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Helpers" },
		{ "Comment", "//\x09  Creates a attribute info struct.\n" },
		{ "CPP_Default_AttributeOwner", "HOUDINI_ATTROWNER_POINT" },
		{ "CPP_Default_bExists", "true" },
		{ "CPP_Default_StorageType", "HOUDINI_STORAGETYPE_FLOAT" },
		{ "CPP_Default_TupleSize", "1" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Creates a attribute info struct." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniCreateAttributeInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::CustomHEnginePluginBPLibrary_eventHoudiniCreateAttributeInfo_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniCreateInputNode_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			FString Label;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreateInputNode_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreateInputNode_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreateInputNode_Parms, Label), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniCreateInputNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniCreateInputNode_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Nodes" },
		{ "Comment", "//    Creates a simple geometry SOP node that can accept geometry input. \n//    This will create a dummy OBJ node with a Null SOP inside that you can set the geometry of using the geometry SET APIs. \n//    You can then connect this node to any other node as a geometry input.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Creates a simple geometry SOP node that can accept geometry input.\nThis will create a dummy OBJ node with a Null SOP inside that you can set the geometry of using the geometry SET APIs.\nYou can then connect this node to any other node as a geometry input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniCreateInputNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::CustomHEnginePluginBPLibrary_eventHoudiniCreateInputNode_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniCreateNode_Parms
		{
			FHoudiniSession HoudiniSession;
			FString OperatorName;
			FString Label;
			int32 NodeId;
			int32 ParentNodeId;
			bool bCookOnCreation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperatorName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ParentNodeId;
		static void NewProp_bCookOnCreation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookOnCreation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreateNode_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_OperatorName = { "OperatorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreateNode_Parms, OperatorName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreateNode_Parms, Label), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreateNode_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_ParentNodeId = { "ParentNodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreateNode_Parms, ParentNodeId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_bCookOnCreation_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniCreateNode_Parms*)Obj)->bCookOnCreation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_bCookOnCreation = { "bCookOnCreation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniCreateNode_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_bCookOnCreation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniCreateNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniCreateNode_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_OperatorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_ParentNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_bCookOnCreation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Nodes" },
		{ "Comment", "//    Create a node inside a node network. Nodes created this way will have their HAPI_NodeInfo::createdPostAssetLoad set to true.\n" },
		{ "CPP_Default_bCookOnCreation", "false" },
		{ "CPP_Default_ParentNodeId", "-1" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Create a node inside a node network. Nodes created this way will have their HAPI_NodeInfo::createdPostAssetLoad set to true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniCreateNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::CustomHEnginePluginBPLibrary_eventHoudiniCreateNode_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniCreatePartInfo_Parms
		{
			int32 FaceCount;
			int32 VertexCount;
			int32 PointCount;
			EHoudiniPartType HoudiniPartType;
			FHoudiniPartInfo ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FaceCount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexCount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PointCount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HoudiniPartType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HoudiniPartType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::NewProp_FaceCount = { "FaceCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreatePartInfo_Parms, FaceCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::NewProp_VertexCount = { "VertexCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreatePartInfo_Parms, VertexCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::NewProp_PointCount = { "PointCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreatePartInfo_Parms, PointCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::NewProp_HoudiniPartType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::NewProp_HoudiniPartType = { "HoudiniPartType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreatePartInfo_Parms, HoudiniPartType), Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniPartType, METADATA_PARAMS(nullptr, 0) }; // 2879515889
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniCreatePartInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FHoudiniPartInfo, METADATA_PARAMS(nullptr, 0) }; // 961480838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::NewProp_FaceCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::NewProp_VertexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::NewProp_PointCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::NewProp_HoudiniPartType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::NewProp_HoudiniPartType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Helpers" },
		{ "Comment", "//\x09  Creates a part info struct\n" },
		{ "CPP_Default_HoudiniPartType", "HOUDINI_PARTTYPE_MESH" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Creates a part info struct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniCreatePartInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::CustomHEnginePluginBPLibrary_eventHoudiniCreatePartInfo_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniDeleteNode_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniDeleteNode_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniDeleteNode_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniDeleteNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniDeleteNode_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Nodes" },
		{ "Comment", "//    Delete a node from a node network. Only nodes with their HAPI_NodeInfo::createdPostAssetLoad set to true can be deleted this way.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Delete a node from a node network. Only nodes with their HAPI_NodeInfo::createdPostAssetLoad set to true can be deleted this way." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniDeleteNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::CustomHEnginePluginBPLibrary_eventHoudiniDeleteNode_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniDisconnectNodeInput_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			int32 InputIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InputIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniDisconnectNodeInput_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniDisconnectNodeInput_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::NewProp_InputIndex = { "InputIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniDisconnectNodeInput_Parms, InputIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniDisconnectNodeInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniDisconnectNodeInput_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::NewProp_InputIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Nodes" },
		{ "Comment", "//    Disconnect a node input.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Disconnect a node input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniDisconnectNodeInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::CustomHEnginePluginBPLibrary_eventHoudiniDisconnectNodeInput_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniGetAssetOperatorName_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 AssetLibraryId;
			FString FullOpName;
			FString Label;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AssetLibraryId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullOpName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAssetOperatorName_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_AssetLibraryId = { "AssetLibraryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAssetOperatorName_Parms, AssetLibraryId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_FullOpName = { "FullOpName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAssetOperatorName_Parms, FullOpName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAssetOperatorName_Parms, Label), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniGetAssetOperatorName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniGetAssetOperatorName_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_AssetLibraryId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_FullOpName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Assets" },
		{ "Comment", "//    Get the number of assets contained in an asset library. You should call HAPI_LoadAssetLibraryFromFile() prior to get a library_id.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Get the number of assets contained in an asset library. You should call HAPI_LoadAssetLibraryFromFile() prior to get a library_id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniGetAssetOperatorName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::CustomHEnginePluginBPLibrary_eventHoudiniGetAssetOperatorName_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeFloatData_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			int32 PartId;
			FString AttributeName;
			FHoudiniAttributeInfo AttributeInfo;
			TArray<float> DataArray;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeInfo;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DataArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeFloatData_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeFloatData_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeFloatData_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeFloatData_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_AttributeInfo = { "AttributeInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeFloatData_Parms, AttributeInfo), Z_Construct_UScriptStruct_FHoudiniAttributeInfo, METADATA_PARAMS(nullptr, 0) }; // 1630230711
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_DataArray_Inner = { "DataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_DataArray = { "DataArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeFloatData_Parms, DataArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeFloatData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeFloatData_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_AttributeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_DataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_DataArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Attributes" },
		{ "Comment", "//    Get attribute float data.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Get attribute float data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniGetAttributeFloatData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeFloatData_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeInfo_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			int32 PartId;
			FString AttributeName;
			FHoudiniAttributeInfo AttributeInfo;
			EHoudiniAttributeOwner AttributeOwner;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeOwner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeOwner;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeInfo_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeInfo_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeInfo_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeInfo_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_AttributeInfo = { "AttributeInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeInfo_Parms, AttributeInfo), Z_Construct_UScriptStruct_FHoudiniAttributeInfo, METADATA_PARAMS(nullptr, 0) }; // 1630230711
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_AttributeOwner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_AttributeOwner = { "AttributeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeInfo_Parms, AttributeOwner), Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner, METADATA_PARAMS(nullptr, 0) }; // 1294589256
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeInfo_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_AttributeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_AttributeOwner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_AttributeOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Attributes" },
		{ "Comment", "//    Get the attribute info struct for the attribute specified by name.\n" },
		{ "CPP_Default_AttributeOwner", "HOUDINI_ATTROWNER_POINT" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Get the attribute info struct for the attribute specified by name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniGetAttributeInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeInfo_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeIntData_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			int32 PartId;
			FString AttributeName;
			FHoudiniAttributeInfo AttributeInfo;
			TArray<int32> DataArray;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeInfo;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DataArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeIntData_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeIntData_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeIntData_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeIntData_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_AttributeInfo = { "AttributeInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeIntData_Parms, AttributeInfo), Z_Construct_UScriptStruct_FHoudiniAttributeInfo, METADATA_PARAMS(nullptr, 0) }; // 1630230711
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_DataArray_Inner = { "DataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_DataArray = { "DataArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeIntData_Parms, DataArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeIntData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeIntData_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_AttributeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_DataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_DataArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Attributes" },
		{ "Comment", "//    Get attribute integer data.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Get attribute integer data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniGetAttributeIntData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeIntData_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeStringData_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			int32 PartId;
			FString AttributeName;
			FHoudiniAttributeInfo AttributeInfo;
			TArray<FString> DataArray;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeStringData_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeStringData_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeStringData_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeStringData_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_AttributeInfo = { "AttributeInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeStringData_Parms, AttributeInfo), Z_Construct_UScriptStruct_FHoudiniAttributeInfo, METADATA_PARAMS(nullptr, 0) }; // 1630230711
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_DataArray_Inner = { "DataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_DataArray = { "DataArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeStringData_Parms, DataArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeStringData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeStringData_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_AttributeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_DataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_DataArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Attributes" },
		{ "Comment", "//    Get attribute string data.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Get attribute string data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniGetAttributeStringData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::CustomHEnginePluginBPLibrary_eventHoudiniGetAttributeStringData_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniGetComposedChildNodeList_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 ParentNodeId;
			TArray<int32> ChildNodeIdList;
			int32 ChildCount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ParentNodeId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ChildNodeIdList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildNodeIdList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ChildCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetComposedChildNodeList_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::NewProp_ParentNodeId = { "ParentNodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetComposedChildNodeList_Parms, ParentNodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::NewProp_ChildNodeIdList_Inner = { "ChildNodeIdList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::NewProp_ChildNodeIdList = { "ChildNodeIdList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetComposedChildNodeList_Parms, ChildNodeIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::NewProp_ChildCount = { "ChildCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetComposedChildNodeList_Parms, ChildCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniGetComposedChildNodeList_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniGetComposedChildNodeList_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::NewProp_ParentNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::NewProp_ChildNodeIdList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::NewProp_ChildNodeIdList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::NewProp_ChildCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Nodes" },
		{ "Comment", "//    Get the composed list of child node ids from the previous call to HAPI_ComposeChildNodeList().\x09\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Get the composed list of child node ids from the previous call to HAPI_ComposeChildNodeList()." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniGetComposedChildNodeList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::CustomHEnginePluginBPLibrary_eventHoudiniGetComposedChildNodeList_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniGetPartInfo_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			int32 PartId;
			FHoudiniPartInfo PartInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PartInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetPartInfo_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetPartInfo_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetPartInfo_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::NewProp_PartInfo = { "PartInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetPartInfo_Parms, PartInfo), Z_Construct_UScriptStruct_FHoudiniPartInfo, METADATA_PARAMS(nullptr, 0) }; // 961480838
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniGetPartInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniGetPartInfo_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::NewProp_PartInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Geometry Getters" },
		{ "Comment", "//\x09  Get a particular part info struct.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Get a particular part info struct." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniGetPartInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::CustomHEnginePluginBPLibrary_eventHoudiniGetPartInfo_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniGetPartInfoSubData_Parms
		{
			FHoudiniPartInfo PartInfo;
			int32 FaceCount;
			int32 PointCount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PartInfo;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FaceCount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PointCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::NewProp_PartInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::NewProp_PartInfo = { "PartInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetPartInfoSubData_Parms, PartInfo), Z_Construct_UScriptStruct_FHoudiniPartInfo, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::NewProp_PartInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::NewProp_PartInfo_MetaData)) }; // 961480838
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::NewProp_FaceCount = { "FaceCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetPartInfoSubData_Parms, FaceCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::NewProp_PointCount = { "PointCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetPartInfoSubData_Parms, PointCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::NewProp_PartInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::NewProp_FaceCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::NewProp_PointCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Geometry Getters" },
		{ "Comment", "//    Get geo info from part info.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Get geo info from part info." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniGetPartInfoSubData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::CustomHEnginePluginBPLibrary_eventHoudiniGetPartInfoSubData_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniGetVertexList_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			int32 PartId;
			TArray<int32> VertexList;
			int32 Count;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetVertexList_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetVertexList_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetVertexList_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_VertexList_Inner = { "VertexList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_VertexList = { "VertexList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetVertexList_Parms, VertexList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniGetVertexList_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniGetVertexList_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniGetVertexList_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_VertexList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_VertexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Geometry Getters" },
		{ "Comment", "//    Get array containing the vertex-point associations where the ith element in the array is the point index the ith vertex associates with.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Get array containing the vertex-point associations where the ith element in the array is the point index the ith vertex associates with." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniGetVertexList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::CustomHEnginePluginBPLibrary_eventHoudiniGetVertexList_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniInitialize_Parms
		{
			FHoudiniSession HoudiniSession;
			FHoudiniCookOptions HoudiniCookOptions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniCookOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniCookOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniInitialize_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::NewProp_HoudiniCookOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::NewProp_HoudiniCookOptions = { "HoudiniCookOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniInitialize_Parms, HoudiniCookOptions), Z_Construct_UScriptStruct_FHoudiniCookOptions, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::NewProp_HoudiniCookOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::NewProp_HoudiniCookOptions_MetaData)) }; // 928176404
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::NewProp_HoudiniCookOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Sessions" },
		{ "Comment", "//    Create the asset manager, set up environment variables, and initialize the main Houdini scene. \n//    No license check is done during this step. Only when you try to load an asset library (OTL) do we actually check for licenses.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Create the asset manager, set up environment variables, and initialize the main Houdini scene.\nNo license check is done during this step. Only when you try to load an asset library (OTL) do we actually check for licenses." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniInitialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::CustomHEnginePluginBPLibrary_eventHoudiniInitialize_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniIsInitialized_Parms
		{
			FHoudiniSession HoudiniSession;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniIsInitialized_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniIsInitialized_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Sessions" },
		{ "Comment", "//    Check whether the runtime has been initialized yet using HAPI_Initialize(). \n//    Function will return HAPI_RESULT_SUCCESS if the runtime has been initialized and HAPI_RESULT_NOT_INITIALIZED otherwise.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Check whether the runtime has been initialized yet using HAPI_Initialize().\nFunction will return HAPI_RESULT_SUCCESS if the runtime has been initialized and HAPI_RESULT_NOT_INITIALIZED otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniIsInitialized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::CustomHEnginePluginBPLibrary_eventHoudiniIsInitialized_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniIsSessionValid_Parms
		{
			FHoudiniSession HoudiniSession;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniIsSessionValid_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniIsSessionValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniIsSessionValid_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Sessions" },
		{ "Comment", "//    Checks whether the session identified by HAPI_Session::id is a valid session opened in the implementation identified by HAPI_Session::type.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Checks whether the session identified by HAPI_Session::id is a valid session opened in the implementation identified by HAPI_Session::type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniIsSessionValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::CustomHEnginePluginBPLibrary_eventHoudiniIsSessionValid_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms
		{
			FHoudiniSession HoudiniSession;
			FString OtlFilePath;
			bool bAllowOverWrite;
			int32 AssetLibraryId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OtlFilePath;
		static void NewProp_bAllowOverWrite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowOverWrite;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AssetLibraryId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_OtlFilePath = { "OtlFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms, OtlFilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_bAllowOverWrite_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms*)Obj)->bAllowOverWrite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_bAllowOverWrite = { "bAllowOverWrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_bAllowOverWrite_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_AssetLibraryId = { "AssetLibraryId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms, AssetLibraryId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_OtlFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_bAllowOverWrite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_AssetLibraryId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Assets" },
		{ "Comment", "//    Loads a Houdini asset library (OTL) from a .otl file. It does NOT create anything inside the Houdini scene.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Loads a Houdini asset library (OTL) from a .otl file. It does NOT create anything inside the Houdini scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniLoadAssetLibraryFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::CustomHEnginePluginBPLibrary_eventHoudiniLoadAssetLibraryFromFile_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniQueryNodeInput_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			int32 IputIndex;
			int32 ConnectedNodeId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IputIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ConnectedNodeId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniQueryNodeInput_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniQueryNodeInput_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::NewProp_IputIndex = { "IputIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniQueryNodeInput_Parms, IputIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::NewProp_ConnectedNodeId = { "ConnectedNodeId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniQueryNodeInput_Parms, ConnectedNodeId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniQueryNodeInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniQueryNodeInput_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::NewProp_IputIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::NewProp_ConnectedNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Nodes" },
		{ "Comment", "//    Query which node is connected to another node's input.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Query which node is connected to another node's input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniQueryNodeInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::CustomHEnginePluginBPLibrary_eventHoudiniQueryNodeInput_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniSaveHIPFile_Parms
		{
			FHoudiniSession HoudiniSession;
			FString FilePath;
			bool bLockNodes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_bLockNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockNodes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniSaveHIPFile_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniSaveHIPFile_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_bLockNodes_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniSaveHIPFile_Parms*)Obj)->bLockNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_bLockNodes = { "bLockNodes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniSaveHIPFile_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_bLockNodes_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniSaveHIPFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniSaveHIPFile_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_bLockNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Hip Files" },
		{ "Comment", "//    Saves a .hip file of the current Houdini scene.\n" },
		{ "CPP_Default_bLockNodes", "false" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Saves a .hip file of the current Houdini scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniSaveHIPFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::CustomHEnginePluginBPLibrary_eventHoudiniSaveHIPFile_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniSetPartInfo_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			FHoudiniPartInfo HoudiniPartIndfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniPartIndfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniPartIndfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniSetPartInfo_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniSetPartInfo_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::NewProp_HoudiniPartIndfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::NewProp_HoudiniPartIndfo = { "HoudiniPartIndfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniSetPartInfo_Parms, HoudiniPartIndfo), Z_Construct_UScriptStruct_FHoudiniPartInfo, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::NewProp_HoudiniPartIndfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::NewProp_HoudiniPartIndfo_MetaData)) }; // 961480838
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniSetPartInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniSetPartInfo_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::NewProp_HoudiniPartIndfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Geometry Setters" },
		{ "Comment", "//\x09  Set the main part info struct (HAPI_PartInfo).\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Set the main part info struct (HAPI_PartInfo)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniSetPartInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::CustomHEnginePluginBPLibrary_eventHoudiniSetPartInfo_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventHoudiniSetVertexListAndFaceCounts_Parms
		{
			FHoudiniSession HoudiniSession;
			int32 NodeId;
			TArray<int32> VertexDataArray;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexDataArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexDataArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexDataArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniSetVertexListAndFaceCounts_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniSetVertexListAndFaceCounts_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_VertexDataArray_Inner = { "VertexDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_VertexDataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_VertexDataArray = { "VertexDataArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventHoudiniSetVertexListAndFaceCounts_Parms, VertexDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_VertexDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_VertexDataArray_MetaData)) };
	void Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEnginePluginBPLibrary_eventHoudiniSetVertexListAndFaceCounts_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEnginePluginBPLibrary_eventHoudiniSetVertexListAndFaceCounts_Parms), &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_VertexDataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_VertexDataArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Geometry Setters" },
		{ "Comment", "//    Set array containing the vertex-point associations where the ith element in the array is the point index the ith vertex associates with.\n//    Set the array of faces where the nth integer in the array is the number of vertices the nth face has.\n" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Set array containing the vertex-point associations where the ith element in the array is the point index the ith vertex associates with.\nSet the array of faces where the nth integer in the array is the number of vertices the nth face has." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "HoudiniSetVertexListAndFaceCounts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::CustomHEnginePluginBPLibrary_eventHoudiniSetVertexListAndFaceCounts_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics
	{
		struct CustomHEnginePluginBPLibrary_eventStartServerAndCreateSession_Parms
		{
			FHoudiniSession HoudiniSession;
			FHoudiniSession ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniSession;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventStartServerAndCreateSession_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventStartServerAndCreateSession_Parms, ReturnValue), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 2140469190
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Sessions" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Creates a Thrift RPC session using a Windows named pipe or a Unix domain socket as transport." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEnginePluginBPLibrary, nullptr, "StartServerAndCreateSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::CustomHEnginePluginBPLibrary_eventStartServerAndCreateSession_Parms), Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomHEnginePluginBPLibrary);
	UClass* Z_Construct_UClass_UCustomHEnginePluginBPLibrary_NoRegister()
	{
		return UCustomHEnginePluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCustomHEnginePluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomHEnginePluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomHEnginePluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_CreateHoudiniCookOptions, "CreateHoudiniCookOptions" }, // 3315879395
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetFloatAttribute, "HoudiniAddAndSetFloatAttribute" }, // 1696020611
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetIntAttribute, "HoudiniAddAndSetIntAttribute" }, // 2032856163
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniAddAndSetStringAttribute, "HoudiniAddAndSetStringAttribute" }, // 2779377088
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCleanupSession, "HoudiniCleanupSession" }, // 1433471074
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCloseSession, "HoudiniCloseSession" }, // 2836044931
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCommitGeo, "HoudiniCommitGeo" }, // 2454640635
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniComposeChildNodeList, "HoudiniComposeChildNodeList" }, // 2113395611
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniConnectNodeInput, "HoudiniConnectNodeInput" }, // 1511950336
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCookNode, "HoudiniCookNode" }, // 399444105
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateAttributeInfo, "HoudiniCreateAttributeInfo" }, // 3730345505
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateInputNode, "HoudiniCreateInputNode" }, // 1010690762
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreateNode, "HoudiniCreateNode" }, // 3455641773
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniCreatePartInfo, "HoudiniCreatePartInfo" }, // 4026477130
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDeleteNode, "HoudiniDeleteNode" }, // 1353505902
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniDisconnectNodeInput, "HoudiniDisconnectNodeInput" }, // 3235084935
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAssetOperatorName, "HoudiniGetAssetOperatorName" }, // 1456219962
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeFloatData, "HoudiniGetAttributeFloatData" }, // 2668605334
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeInfo, "HoudiniGetAttributeInfo" }, // 376736412
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeIntData, "HoudiniGetAttributeIntData" }, // 2620648542
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetAttributeStringData, "HoudiniGetAttributeStringData" }, // 2809523961
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetComposedChildNodeList, "HoudiniGetComposedChildNodeList" }, // 3765870664
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfo, "HoudiniGetPartInfo" }, // 1554859774
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetPartInfoSubData, "HoudiniGetPartInfoSubData" }, // 592884979
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniGetVertexList, "HoudiniGetVertexList" }, // 3595536484
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniInitialize, "HoudiniInitialize" }, // 3357079420
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsInitialized, "HoudiniIsInitialized" }, // 2311358626
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniIsSessionValid, "HoudiniIsSessionValid" }, // 3816103131
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniLoadAssetLibraryFromFile, "HoudiniLoadAssetLibraryFromFile" }, // 1097871286
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniQueryNodeInput, "HoudiniQueryNodeInput" }, // 3647246778
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSaveHIPFile, "HoudiniSaveHIPFile" }, // 2477449441
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetPartInfo, "HoudiniSetPartInfo" }, // 3734068564
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_HoudiniSetVertexListAndFaceCounts, "HoudiniSetVertexListAndFaceCounts" }, // 2686272280
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession, "StartServerAndCreateSession" }, // 1549443428
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomHEnginePluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "CustomHEnginePluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomHEnginePluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomHEnginePluginBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomHEnginePluginBPLibrary_Statics::ClassParams = {
		&UCustomHEnginePluginBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomHEnginePluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomHEnginePluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomHEnginePluginBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UCustomHEnginePluginBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomHEnginePluginBPLibrary.OuterSingleton, Z_Construct_UClass_UCustomHEnginePluginBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomHEnginePluginBPLibrary.OuterSingleton;
	}
	template<> CUSTOMHENGINEPLUGIN_API UClass* StaticClass<UCustomHEnginePluginBPLibrary>()
	{
		return UCustomHEnginePluginBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomHEnginePluginBPLibrary);
	UCustomHEnginePluginBPLibrary::~UCustomHEnginePluginBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomHEnginePluginBPLibrary, UCustomHEnginePluginBPLibrary::StaticClass, TEXT("UCustomHEnginePluginBPLibrary"), &Z_Registration_Info_UClass_UCustomHEnginePluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomHEnginePluginBPLibrary), 3016715725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_3737429889(TEXT("/Script/CustomHEnginePlugin"),
		Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
