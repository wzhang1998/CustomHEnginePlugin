// Copyright Epic Games, Inc. All Rights Reserved.

#include "CustomHEnginePluginBPLibrary.h"
#include "CustomHEnginePlugin.h"


UCustomHEnginePluginBPLibrary::UCustomHEnginePluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}



FHoudiniSession UCustomHEnginePluginBPLibrary::StartServerAndCreateSession(FHoudiniSession HoudiniSession)
{
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result Result = HAPI_CreateThriftNamedPipeSession(&OrigSession, "hapi");
	if (Result != HAPI_RESULT_SUCCESS)
	{
		// Start and connect to an out of process session
		HAPI_ThriftServerOptions serverOptions{ 0 };
		serverOptions.autoClose = true;
		serverOptions.timeoutMs = 3000.0f;
		HAPI_StartThriftNamedPipeServer(&serverOptions, "hapi", nullptr, nullptr);
		UE_LOG(LogTemp, Log, TEXT("Houdini named pipe server has been successfully started!"));
		HAPI_CreateThriftNamedPipeSession(&OrigSession, "hapi");
	}
	UE_LOG(LogTemp, Log, TEXT("Houdini named pipe session has been successfully created!"));
	return FHoudiniSession::FromHAPI_Session(OrigSession);

}

FHoudiniCookOptions UCustomHEnginePluginBPLibrary::CreateHoudiniCookOptions()
{
	HAPI_CookOptions CookOptions;
	CookOptions = HAPI_CookOptions_Create();
	FHoudiniCookOptions HoudiniCookOptions;
	HoudiniCookOptions.HAPICookOptions = CookOptions;
	return HoudiniCookOptions;
}

void UCustomHEnginePluginBPLibrary::HoudiniInitialize(FHoudiniSession HoudiniSession, const FHoudiniCookOptions& HoudiniCookOptions)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Initialize(&OrigSession, &HoudiniCookOptions.HAPICookOptions, true, -1, nullptr, nullptr, nullptr, nullptr, nullptr);

}

bool UCustomHEnginePluginBPLibrary::HoudiniIsSessionValid(FHoudiniSession HoudiniSession)
{
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result Result = HAPI_IsSessionValid(&OrigSession);
	return Result == HAPI_RESULT_SUCCESS;
}

bool UCustomHEnginePluginBPLibrary::HoudiniLoadAssetLibraryFromFile(FHoudiniSession HoudiniSession, FString OtlFilePath, bool bAllowOverWrite, int& AssetLibraryId)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_AssetLibraryId LibraryId = -1;
	HAPI_Result Result = HAPI_LoadAssetLibraryFromFile(&OrigSession, TCHAR_TO_UTF8(*OtlFilePath), (HAPI_Bool)bAllowOverWrite, &LibraryId);
	AssetLibraryId = (int)LibraryId;
	return Result == HAPI_RESULT_SUCCESS || Result == HAPI_RESULT_ASSET_DEF_ALREADY_LOADED;
}

bool UCustomHEnginePluginBPLibrary::HoudiniGetAssetOperatorName(FHoudiniSession HoudiniSession, int AssetLibraryId, FString& FullOpName, FString& Label)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_AssetLibraryId Id = (HAPI_AssetLibraryId)AssetLibraryId;
	int AssetCount = INDEX_NONE;
	HAPI_GetAvailableAssetCount(&OrigSession, Id, &AssetCount);
	check(AssetCount == 1);
	HAPI_StringHandle AssetSH;
	HAPI_Result Result = HAPI_GetAvailableAssets(&OrigSession, Id, &AssetSH, AssetCount);
	FullOpName = ToString(HoudiniSession, AssetSH);
	TArray<FString> OutStringArray;
	FullOpName.ParseIntoArray(OutStringArray, TEXT("/"), true);
	Label = OutStringArray[OutStringArray.Num() - 1];

	return Result == HAPI_RESULT_SUCCESS;

}

bool UCustomHEnginePluginBPLibrary::HoudiniCreateNode(FHoudiniSession HoudiniSession, FString OperatorName, FString Label, int& NodeId, int ParentNodeId, bool bCookOnCreation)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_NodeId OrigNodeId;
	HAPI_Result Result = HAPI_CreateNode(&OrigSession, (HAPI_NodeId)ParentNodeId, TCHAR_TO_UTF8(*OperatorName), TCHAR_TO_UTF8(*Label), (HAPI_Bool)bCookOnCreation, &OrigNodeId);
	NodeId = (int)OrigNodeId;

	return Result == HAPI_RESULT_SUCCESS;
}

void UCustomHEnginePluginBPLibrary::HoudiniCookNode(FHoudiniSession HoudiniSession, int NodeId, const FHoudiniCookOptions& HoudiniCookOptions)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_CookNode(&OrigSession, (HAPI_NodeId)NodeId, &HoudiniCookOptions.HAPICookOptions);
}

bool UCustomHEnginePluginBPLibrary::HoudiniSaveHIPFile(FHoudiniSession HoudiniSession, FString FilePath, bool bLockNodes)
{

	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result Result = HAPI_SaveHIPFile(&OrigSession, TCHAR_TO_UTF8(*FilePath), (HAPI_Bool)bLockNodes);
	return Result == HAPI_RESULT_SUCCESS;
}

void UCustomHEnginePluginBPLibrary::HoudiniCleanupSession(FHoudiniSession HoudiniSession)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Cleanup(&OrigSession);
}

void UCustomHEnginePluginBPLibrary::HoudiniCloseSession(FHoudiniSession HoudiniSession)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_CloseSession(&OrigSession);
}

bool UCustomHEnginePluginBPLibrary::HoudiniIsInitialized(FHoudiniSession HoudiniSession)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result Result = HAPI_IsInitialized(&OrigSession);
	return Result == HAPI_RESULT_SUCCESS;
}

bool UCustomHEnginePluginBPLibrary::HoudiniComposeChildNodeList(FHoudiniSession HoudiniSession, int ParentNodeId, EHoudiniNodeType NodeType, EHoudiniNodeFlags NodeFlags, int& ChildCount, bool bRecursive)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	int ChildListCount;
	FEnumParser<HAPI_NodeType> EnumNodeTypePraser;
	FEnumParser<HAPI_NodeFlags> EnumNodeFlagsPraser;
	HAPI_Result Result = HAPI_ComposeChildNodeList(&OrigSession, (HAPI_NodeId)ParentNodeId, (HAPI_NodeTypeBits)EnumNodeTypePraser.ParseEnum(HoudiniEnumToString(NodeType)), (HAPI_NodeFlags)EnumNodeFlagsPraser.ParseEnum(HoudiniEnumToString(NodeFlags)), (HAPI_Bool)bRecursive, &ChildCount);
	ChildListCount = ChildCount;
	return Result == HAPI_RESULT_SUCCESS;
}

bool UCustomHEnginePluginBPLibrary::HoudiniGetComposedChildNodeList(FHoudiniSession HoudiniSession, int ParentNodeId, TArray<int>& ChildNodeIdList, int ChildCount)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	ChildNodeIdList.SetNumUninitialized(ChildCount);
	HAPI_Result Result = HAPI_GetComposedChildNodeList(&OrigSession, (HAPI_NodeId)ParentNodeId, ChildNodeIdList.GetData(), ChildCount);
	return Result == HAPI_RESULT_SUCCESS;
}

bool UCustomHEnginePluginBPLibrary::HoudiniConnectNodeInput(FHoudiniSession HoudiniSession, int NodeId, int InputIndex, int NodeIdToConnect, int OutputIndex)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result Result = HAPI_ConnectNodeInput(&OrigSession, (HAPI_NodeId)NodeId, InputIndex, (HAPI_NodeId)NodeIdToConnect, OutputIndex);
	return Result == HAPI_RESULT_SUCCESS;
}

bool UCustomHEnginePluginBPLibrary::HoudiniQueryNodeInput(FHoudiniSession HoudiniSession, int NodeId, int IputIndex, int& ConnectedNodeId)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_NodeId Id;
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result Result = HAPI_QueryNodeInput(&OrigSession, (HAPI_NodeId)NodeId, IputIndex, &Id);
	ConnectedNodeId = (int)Id;
	return Result == HAPI_RESULT_SUCCESS;
}

bool UCustomHEnginePluginBPLibrary::HoudiniDisconnectNodeInput(FHoudiniSession HoudiniSession, int NodeId, int InputIndex)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result Result = HAPI_DisconnectNodeInput(&OrigSession, (HAPI_NodeId)NodeId, InputIndex);
	return Result == HAPI_RESULT_SUCCESS;
}

bool UCustomHEnginePluginBPLibrary::HoudiniDeleteNode(FHoudiniSession HoudiniSession, int NodeId)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result Result = HAPI_DeleteNode(&OrigSession, (HAPI_NodeId)NodeId);
	return Result == HAPI_RESULT_SUCCESS;
}


bool UCustomHEnginePluginBPLibrary::HoudiniCreateInputNode(FHoudiniSession HoudiniSession, int& NodeId, FString Label)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_NodeId Id;
	HAPI_Result Result = HAPI_CreateInputNode(&OrigSession, &Id, TCHAR_TO_UTF8(*Label));
	NodeId = (int)Id;
	return Result == HAPI_RESULT_SUCCESS;
}

FHoudiniPartInfo UCustomHEnginePluginBPLibrary::HoudiniCreatePartInfo(int FaceCount, int VertexCount, int PointCount, EHoudiniPartType HoudiniPartType)
{
	HAPI_PartInfo PartInfo = HAPI_PartInfo_Create();
	PartInfo.faceCount = FaceCount;
	PartInfo.vertexCount = VertexCount;
	PartInfo.pointCount = PointCount;
	FEnumParser<HAPI_PartType> EnumParser;
	PartInfo.type = EnumParser.ParseEnum(HoudiniEnumToString(HoudiniPartType));
	FHoudiniPartInfo HoudiniPartInfo;
	HoudiniPartInfo.HAPIPartInfo = PartInfo;
	return HoudiniPartInfo;
}

bool UCustomHEnginePluginBPLibrary::HoudiniSetPartInfo(FHoudiniSession HoudiniSession, int NodeId, const FHoudiniPartInfo& HoudiniPartIndfo)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result Result = HAPI_SetPartInfo(&OrigSession, (HAPI_NodeId)NodeId, 0, &HoudiniPartIndfo.HAPIPartInfo);
	return Result == HAPI_RESULT_SUCCESS;
}

FHoudiniAttributeInfo UCustomHEnginePluginBPLibrary::HoudiniCreateAttributeInfo(int Count, int TupleSize, bool bExists, EHoudiniAttributeOwner AttributeOwner, EHoudiniStorageType StorageType)
{
	HAPI_AttributeInfo AttributeInfo = HAPI_AttributeInfo_Create();
	AttributeInfo.count = Count;
	AttributeInfo.exists = (HAPI_Bool)bExists;
	AttributeInfo.tupleSize = TupleSize;

	FEnumParser<HAPI_AttributeOwner> AttributeOwnerEnumParser;
	FEnumParser<HAPI_StorageType> StorageTypeEnumParser;

	AttributeInfo.owner = AttributeOwnerEnumParser.ParseEnum(HoudiniEnumToString(AttributeOwner));
	AttributeInfo.storage = StorageTypeEnumParser.ParseEnum(HoudiniEnumToString(StorageType));
	FHoudiniAttributeInfo HoudiniAttributeInfo;
	HoudiniAttributeInfo.HAPIAttributeInfo = AttributeInfo;
	return HoudiniAttributeInfo;
}

bool UCustomHEnginePluginBPLibrary::HoudiniAddAndSetFloatAttribute(FHoudiniSession HoudiniSession, int NodeId, FString AttributeName, const FHoudiniAttributeInfo& AttributeInfo, const TArray<float>& DataArray, int Count)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result AddResult = HAPI_AddAttribute(&OrigSession, (HAPI_NodeId)NodeId, 0, TCHAR_TO_UTF8(*AttributeName), &AttributeInfo.HAPIAttributeInfo);
	HAPI_Result SetResult = HAPI_SetAttributeFloatData(&OrigSession, (HAPI_NodeId)NodeId, 0, TCHAR_TO_UTF8(*AttributeName), &AttributeInfo.HAPIAttributeInfo, DataArray.GetData(), 0, Count);
	return AddResult == HAPI_RESULT_SUCCESS && SetResult == HAPI_RESULT_SUCCESS;
}

bool UCustomHEnginePluginBPLibrary::HoudiniAddAndSetStringAttribute(FHoudiniSession HoudiniSession, int NodeId, FString AttributeName, const FHoudiniAttributeInfo& AttributeInfo, const TArray<FString>& DataArray, int Count)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result AddResult = HAPI_AddAttribute(&OrigSession, (HAPI_NodeId)NodeId, 0, TCHAR_TO_UTF8(*AttributeName), &AttributeInfo.HAPIAttributeInfo);

	char ** strs = new char *[DataArray.Num()];
	for (int i = 0; i < DataArray.Num(); i++) 
	{
		strs[i] = _strdup(TCHAR_TO_UTF8(*DataArray[i]));
	}

	HAPI_Result SetResult = HAPI_SetAttributeStringData(&OrigSession, (HAPI_NodeId)NodeId, 0, TCHAR_TO_UTF8(*AttributeName), &AttributeInfo.HAPIAttributeInfo, (const char**)strs, 0, Count);
	for (int j = 0; j < DataArray.Num(); j++)
	{
		delete strs[j];
		strs[j] = nullptr;
	}
	delete[] strs;
	return AddResult == HAPI_RESULT_SUCCESS && SetResult == HAPI_RESULT_SUCCESS;
}

bool UCustomHEnginePluginBPLibrary::HoudiniAddAndSetIntAttribute(FHoudiniSession HoudiniSession, int NodeId, FString AttributeName, const FHoudiniAttributeInfo& AttributeInfo, const TArray<int>& DataArray, int Count)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result AddResult = HAPI_AddAttribute(&OrigSession, (HAPI_NodeId)NodeId, 0, TCHAR_TO_UTF8(*AttributeName), &AttributeInfo.HAPIAttributeInfo);
	HAPI_Result SetResult = HAPI_SetAttributeIntData(&OrigSession, (HAPI_NodeId)NodeId, 0, TCHAR_TO_UTF8(*AttributeName), &AttributeInfo.HAPIAttributeInfo, DataArray.GetData(), 0, Count);
	return AddResult == HAPI_RESULT_SUCCESS && SetResult == HAPI_RESULT_SUCCESS;
}

bool UCustomHEnginePluginBPLibrary::HoudiniGetAttributeInfo(FHoudiniSession HoudiniSession, int NodeId, int PartId, FString AttributeName, FHoudiniAttributeInfo& AttributeInfo, EHoudiniAttributeOwner AttributeOwner)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();

	FEnumParser<HAPI_AttributeOwner> EnumParser;
	HAPI_Result Result = HAPI_GetAttributeInfo(&OrigSession, (HAPI_NodeId)NodeId, (HAPI_PartId)PartId, TCHAR_TO_UTF8(*AttributeName), EnumParser.ParseEnum(HoudiniEnumToString(AttributeOwner)), &AttributeInfo.HAPIAttributeInfo);
	return Result == HAPI_RESULT_SUCCESS;
}

bool UCustomHEnginePluginBPLibrary::HoudiniGetAttributeIntData(FHoudiniSession HoudiniSession, int NodeId, int PartId, FString AttributeName, FHoudiniAttributeInfo AttributeInfo, TArray<int>& DataArray)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	DataArray.SetNumUninitialized(AttributeInfo.HAPIAttributeInfo.tupleSize * AttributeInfo.HAPIAttributeInfo.count);
	HAPI_Result Result = HAPI_GetAttributeIntData(&OrigSession, (HAPI_NodeId)NodeId, (HAPI_PartId)PartId, TCHAR_TO_UTF8(*AttributeName), &AttributeInfo.HAPIAttributeInfo, -1, DataArray.GetData(), 0, AttributeInfo.HAPIAttributeInfo.count);
	return Result == HAPI_RESULT_SUCCESS;
}

bool UCustomHEnginePluginBPLibrary::HoudiniGetAttributeFloatData(FHoudiniSession HoudiniSession, int NodeId, int PartId, FString AttributeName, FHoudiniAttributeInfo AttributeInfo, TArray<float>& DataArray)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	DataArray.SetNumUninitialized(AttributeInfo.HAPIAttributeInfo.tupleSize * AttributeInfo.HAPIAttributeInfo.count);
	HAPI_Result Result = HAPI_GetAttributeFloatData(&OrigSession, (HAPI_NodeId)NodeId, (HAPI_PartId)PartId, TCHAR_TO_UTF8(*AttributeName), &AttributeInfo.HAPIAttributeInfo, -1, DataArray.GetData(), 0, AttributeInfo.HAPIAttributeInfo.count);
	return Result == HAPI_RESULT_SUCCESS;
}


bool UCustomHEnginePluginBPLibrary::HoudiniGetAttributeStringData(FHoudiniSession HoudiniSession, int NodeId, int PartId, FString AttributeName, FHoudiniAttributeInfo AttributeInfo, TArray<FString>& DataArray)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();

	TArray<HAPI_StringHandle> StringHandleList;
	int StringCount = AttributeInfo.HAPIAttributeInfo.tupleSize * AttributeInfo.HAPIAttributeInfo.count;
	StringHandleList.SetNumUninitialized(StringCount);
	HAPI_Result Result = HAPI_GetAttributeStringData(&OrigSession, (HAPI_NodeId)NodeId, (HAPI_PartId)PartId, TCHAR_TO_UTF8(*AttributeName), &AttributeInfo.HAPIAttributeInfo, StringHandleList.GetData(), 0, StringCount);
	if (Result != HAPI_RESULT_SUCCESS)
	{
		return false;
	}

	TMap<HAPI_StringHandle, FString> HandleToStringMap;
	DataArray.SetNum(StringCount);
	for (int i = 0; i < StringCount; i++)
	{
		if (i > 0 && StringHandleList[i] == StringHandleList[i - 1])
		{
			DataArray[i] = DataArray[i - 1];
		}

		const FString* FoundString = HandleToStringMap.Find(StringHandleList[i]);
		if (FoundString)
		{
			DataArray[i] = *FoundString;
		}
		else
		{
			DataArray[i] = ToString(HoudiniSession, StringHandleList[i]);
			HandleToStringMap.Add(StringHandleList[i], DataArray[i]);
		}
	}
	return true;
	
}


bool UCustomHEnginePluginBPLibrary::HoudiniSetVertexListAndFaceCounts(FHoudiniSession HoudiniSession, int NodeId, const TArray<int>& VertexDataArray)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result VertexResult = HAPI_SetVertexList(&OrigSession, (HAPI_NodeId)NodeId, 0, VertexDataArray.GetData(), 0, VertexDataArray.Num());

	TArray<int> FaceDataArray;
	FaceDataArray.Init(3, VertexDataArray.Num() / 3);
	HAPI_Result FaceResult = HAPI_SetFaceCounts(&OrigSession, (HAPI_NodeId)NodeId, 0, FaceDataArray.GetData(), 0, FaceDataArray.Num());
	return VertexResult == HAPI_RESULT_SUCCESS && FaceResult == HAPI_RESULT_SUCCESS;
}

bool UCustomHEnginePluginBPLibrary::HoudiniCommitGeo(FHoudiniSession HoudiniSession, int NodeId)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return false;
	}
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	HAPI_Result Result = HAPI_CommitGeo(&OrigSession, (HAPI_NodeId)NodeId);
	return Result == HAPI_RESULT_SUCCESS;
}

FString UCustomHEnginePluginBPLibrary::ToString(FHoudiniSession HoudiniSession, HAPI_StringHandle InStringHandle)
{
	if (!HoudiniIsSessionValid(HoudiniSession))
	{
		return FString("");
	}
	check(InStringHandle >= 0);
	HAPI_Session OrigSession = HoudiniSession.ToHAPI_Session();
	int32 StringLength = 0;
	HAPI_Result Result = HAPI_GetStringBufLength(&OrigSession, InStringHandle, &StringLength);
	check(Result == HAPI_RESULT_SUCCESS);
	check(StringLength > 0); 
	TArray<ANSICHAR> StringBuffer;
	StringBuffer.SetNumUninitialized(StringLength);
	StringBuffer.Last() = 0;

	Result = HAPI_GetString(&OrigSession, InStringHandle, StringBuffer.GetData(), StringLength);
	check(Result == HAPI_RESULT_SUCCESS);

	FString FinalString = UTF8_TO_TCHAR(StringBuffer.GetData());
	return FinalString;  

}

template <typename T>
FString UCustomHEnginePluginBPLibrary::HoudiniEnumToString(const T EnumValue)
{
	FString Name = StaticEnum<T>()->GetNameStringByValue(static_cast<__underlying_type(T)>(EnumValue));
	check(Name.Len() != 0);
	return Name;
}