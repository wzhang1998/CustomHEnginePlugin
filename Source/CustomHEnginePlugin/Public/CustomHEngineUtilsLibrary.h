// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProceduralMeshComponent.h"
#include "HAPI_To_Unreal_Common_Bridge.h"
#include "CustomHEngineUtilsLibrary.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMHENGINEPLUGIN_API UCustomHEngineUtilsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Get mesh data drom unreal engine."), Category = "CustomHEnginePluginBPLibrary | Mesh")
	static bool GetUnrealMeshData(UStaticMesh* StaticMesh, TArray<FVector>& PositionList, TArray<int>& VertexList, TArray<int>& FaceList, TArray<FVector>& NormalList, TArray<FVector>& TangentList, TArray<FVector2D>& UVList, TArray<int>& SectionIndexList, TArray<UMaterialInterface*>& MaterialList);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Convert vector list to float list."), Category = "CustomHEnginePluginBPLibrary | Mesh")
	static bool VectorListToFloatList(const TArray<FVector>& VectorList, TArray<float>& FloatList, bool bSwitchYZAxis = true, float Multiplication = 0.01f);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Convert float list to vector list."), Category = "CustomHEnginePluginBPLibrary | Mesh")
	static bool FloatListToVectorList(const TArray<float>& FloatList,TArray<FVector>& VectorList, bool bSwitchYZAxis = true, float Multiplication = 100.f);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Convert float list to procmeshtangent list."), Category = "CustomHEnginePluginBPLibrary | Mesh")
	static bool FloatListToProcMeshTangentList(const TArray<float>& FloatList, TArray<FProcMeshTangent>& ProcMeshTangentList, bool bSwitchYZAxis = true, bool bFlipTangentY = false);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Convert vector 2D list to float list."), Category = "CustomHEnginePluginBPLibrary | Mesh")
	static bool Vector2DListToFloatList(const TArray<FVector2D>& Vector2DList, TArray<float>& FloatList, bool bFlipY = true);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Convert float list to vector 2D list."), Category = "CustomHEnginePluginBPLibrary | Mesh")
	static bool FloatListToVector2DList(const TArray<float>& FloatList, TArray<FVector2D>& Vector2DList, bool bFlipY = true);

	UFUNCTION(BlueprintCallable,meta = (ToolTip = "Reverse vertex list."), Category = "CustomHEnginePluginBPLibrary | Mesh")
	static bool ReverseVertexListOrder(UPARAM(ref) TArray<int>& VertexList);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Split vertex list into multiple vertex lists by prim section index attributes."), Category = "CustomHEnginePluginBPLibrary | Mesh")
	static bool SplitVertexList(const TArray<int>& VertexList, const TArray<int>& SectionIndexList, TArray<FVertexListStruct>& SplittedVertexLists);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Split vertex list into multiple vertex lists by prim string attribute."), Category = "CustomHEnginePluginBPLibrary | Mesh")
	static bool SplitVertexListByStringAttributes(const TArray<int>& VertexList, const TArray<FString>& StringAttributeList, TArray<FVertexListStruct>& SplittedVertexLists);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Convert a unreal transform to houdini transform"), Category = "CustomHEnginePluginBPLibrary | Utilities")
	static FHoudiniTransform UnrealTransfromToHoudiniTransform(const FTransform& UnrealTransform);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Convert a unreal transform to houdini transform euler"), Category = "CustomHEnginePluginBPLibrary | Utilities")
	static FHoudiniTransformEuler UnrealTransfromToHoudiniTransformEuler(const FTransform& UnrealTransform);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Convert a Houdini transform to Unreal transform"), Category = "CustomHEnginePluginBPLibrary | Utilities")
	static FTransform HoudiniTransfromToUnrealTransform(const FHoudiniTransform& HoudiniTransform);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Convert a Houdini transform euler to Unreal transform"), Category = "CustomHEnginePluginBPLibrary | Utilities")
	static FTransform HouidniTransformEulerToUnrealTransform(FHoudiniSession HoudiniSession, const FHoudiniTransformEuler& HoudiniTransformEuler);





};
