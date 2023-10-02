// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "HAPI_To_Unreal_Common_Bridge.h"
#include "CustomHEnginePluginBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UCustomHEnginePluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Creates a Thrift RPC session using a Windows named pipe or a Unix domain socket as transport."), Category = "CustomHEnginePluginBPLibrary | Sessions")
	static FHoudiniSession StartServerAndCreateSession(FHoudiniSession HoudiniSession);

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Creates and initialize cook options."), Category = "CustomHEnginePluginBPLibrary | Helpers")
	static FHoudiniCookOptions CreateHoudiniCookOptions();

//    Create the asset manager, set up environment variables, and initialize the main Houdini scene. 
//    No license check is done during this step. Only when you try to load an asset library (OTL) do we actually check for licenses.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Sessions")
	static void HoudiniInitialize(FHoudiniSession HoudiniSession, const FHoudiniCookOptions& HoudiniCookOptions);

//    Checks whether the session identified by HAPI_Session::id is a valid session opened in the implementation identified by HAPI_Session::type.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CustomHEnginePluginBPLibrary | Sessions")
	static bool HoudiniIsSessionValid(FHoudiniSession HoudiniSession);

//    Loads a Houdini asset library (OTL) from a .otl file. It does NOT create anything inside the Houdini scene.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Assets")
	static bool HoudiniLoadAssetLibraryFromFile(FHoudiniSession HoudiniSession, FString OtlFilePath, bool bAllowOverWrite, int& AssetLibraryId);

//    Get the number of assets contained in an asset library. You should call HAPI_LoadAssetLibraryFromFile() prior to get a library_id.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Assets")
	static bool HoudiniGetAssetOperatorName(FHoudiniSession HoudiniSession, int AssetLibraryId, FString& FullOpName, FString& Label);

//    Create a node inside a node network. Nodes created this way will have their HAPI_NodeInfo::createdPostAssetLoad set to true.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Nodes")
	static bool HoudiniCreateNode(FHoudiniSession HoudiniSession, FString OperatorName, FString Label, int& NodeId, int ParentNodeId = -1, bool bCookOnCreation = false);


//    Initiate a cook on this node. Note that this may trigger cooks on other nodes if they are connected.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Nodes")
	static void HoudiniCookNode(FHoudiniSession HoudiniSession, int NodeId, const FHoudiniCookOptions& HoudiniCookOptions);

//    Saves a .hip file of the current Houdini scene.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Hip Files")
	static bool HoudiniSaveHIPFile(FHoudiniSession HoudiniSession, FString FilePath, bool bLockNodes = false);

//    Clean up memory. This will unload all assets and you will need to call HAPI_Initialize() again to be able to use any HAPI methods again.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Sessions")
	static void HoudiniCleanupSession(FHoudiniSession HoudiniSession);

//    Closes a session. If the session has been established using RPC, then the RPC connection is closed.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Sessions")
	static void HoudiniCloseSession(FHoudiniSession HoudiniSession);

//    Check whether the runtime has been initialized yet using HAPI_Initialize(). 
//    Function will return HAPI_RESULT_SUCCESS if the runtime has been initialized and HAPI_RESULT_NOT_INITIALIZED otherwise.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CustomHEnginePluginBPLibrary | Sessions")
	static bool HoudiniIsInitialized(FHoudiniSession HoudiniSession);

//    Compose a list of child nodes based on given filters.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Nodes")
	static bool HoudiniComposeChildNodeList(FHoudiniSession HoudiniSession, int ParentNodeId, EHoudiniNodeType NodeType, EHoudiniNodeFlags NodeFlags, int& ChildCount, bool bRecursive = false);

//    Get the composed list of child node ids from the previous call to HAPI_ComposeChildNodeList().	
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Nodes")
	static bool HoudiniGetComposedChildNodeList(FHoudiniSession HoudiniSession, int ParentNodeId, TArray<int>& ChildNodeIdList, int ChildCount);

//    Connect two nodes together.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Nodes")
	static bool HoudiniConnectNodeInput(FHoudiniSession HoudiniSession, int NodeId, int IputIndex, int NodeIdToConnect, int OutputIndex);

//    Query which node is connected to another node's input.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Nodes")
	static bool HoudiniQueryNodeInput(FHoudiniSession HoudiniSession, int NodeId, int IputIndex, int& ConnectedNodeId);
	 
//    Disconnect a node input.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Nodes")
	static bool HoudiniDisconnectNodeInput(FHoudiniSession HoudiniSession, int NodeId, int InputIndex);

//    Delete a node from a node network. Only nodes with their HAPI_NodeInfo::createdPostAssetLoad set to true can be deleted this way.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Nodes")
	static bool HoudiniDeleteNode(FHoudiniSession HoudiniSession, int NodeId);


////    Determine if your instance of the node actually still exists inside the Houdini scene. 
////    This is what can be used to determine when the Houdini scene needs to be re-populated using the host application's instances of the nodes. 
////    Note that this function will ALWAYS return HAPI_RESULT_SUCCESS.
//	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Nodes")
//	static bool HoudiniIsNodeValid(FHoudiniSession HoudiniSession, int NodeId, int UniqueNodeId);


//    Creates a simple geometry SOP node that can accept geometry input. 
//    This will create a dummy OBJ node with a Null SOP inside that you can set the geometry of using the geometry SET APIs. 
//    You can then connect this node to any other node as a geometry input.

	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Nodes")
	static bool HoudiniCreateInputNode(FHoudiniSession HoudiniSession, int& NodeId, FString Label);

//	  Creates a part info struct
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CustomHEnginePluginBPLibrary | Helpers")
	static FHoudiniPartInfo HoudiniCreatePartInfo(int FaceCount, int VertexCount, int PointCount, EHoudiniPartType HoudiniPartType = EHoudiniPartType::HOUDINI_PARTTYPE_MESH);

//	  Set the main part info struct (HAPI_PartInfo).
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Geometry Setters")
	static bool HoudiniSetPartInfo(FHoudiniSession HoudiniSession, int NodeId, const FHoudiniPartInfo& HoudiniPartIndfo);

//	  Creates a attribute info struct.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CustomHEnginePluginBPLibrary | Helpers")
	static FHoudiniAttributeInfo HoudiniCreateAttributeInfo(int Count, int TupleSize = 1, bool bExists = true, EHoudiniAttributeOwner AttributeOwner = EHoudiniAttributeOwner::HOUDINI_ATTROWNER_POINT, EHoudiniStorageType StorageType = EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT);

//	  Add and set a float attribute.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Attributes")
	static bool HoudiniAddAndSetFloatAttribute(FHoudiniSession HoudiniSession, int NodeId, FString AttributeName, const FHoudiniAttributeInfo& AttributeInfo, const TArray<float>& DataArray, int Count);

//	  Add and set a string attribute.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Attributes")
	static bool HoudiniAddAndSetStringAttribute(FHoudiniSession HoudiniSession, int NodeId, FString AttributeName, const FHoudiniAttributeInfo& AttributeInfo, const TArray<FString>& DataArray, int Count);

//	  Add and set a int attribute.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Attributes")
	static bool HoudiniAddAndSetIntAttribute(FHoudiniSession HoudiniSession, int NodeId, FString AttributeName, const FHoudiniAttributeInfo& AttributeInfo, const TArray<int>& DataArray, int Count);



//    Set array containing the vertex-point associations where the ith element in the array is the point index the ith vertex associates with.
//    Set the array of faces where the nth integer in the array is the number of vertices the nth face has.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Geometry Setters")
	static bool HoudiniSetVertexListAndFaceCounts(FHoudiniSession HoudiniSession, int NodeId, const TArray<int>& VertexDataArray);

//    Commit the current input geometry to the cook engine. Nodes that use this geometry node will re-cook using the input geometry given through the geometry setter API calls.
	UFUNCTION(BlueprintCallable, Category = "CustomHEnginePluginBPLibrary | Geometry Setters")
	static bool HoudiniCommitGeo(FHoudiniSession HoudiniSession, int NodeId);

private:

	static FString ToString(FHoudiniSession HoudiniSession, HAPI_StringHandle InStringHandle);

	template<typename T>
	static FString HoudiniEnumToString(const T EnumValue);
};
                           