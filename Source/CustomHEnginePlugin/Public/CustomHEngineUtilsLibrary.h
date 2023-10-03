// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProceduralMeshComponent.h"
#include "CustomHEngineUtilsLibrary.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMHENGINEPLUGIN_API UCustomHEngineUtilsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Get mesh data drom unreal engine."), Category = "CustomHEnginePluginBPLibrary | Mesh")
	static bool GetUnrealMeshData(UStaticMesh* StaticMesh, TArray<FVector>& PositionList, TArray<int>& VertexList, TArray<int>& FaceList, TArray<FVector>& NormalList, TArray<FVector>& TangentList, TArray<FVector2D>& UVList, TArray<int>& SectionIndexList, TArray<UMaterialInterface*>& MaterialList);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Convert vector list to float list."), Category = "CustomHEnginePluginBPLibrary | Mesh")
	static bool VectorListToFloatList(const TArray<FVector>& VectorList, TArray<float>& FloatList, bool bSwitchYZAxis = true, float Multiplication = 0.01f);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "Convert vector 2D list to float list."), Category = "CustomHEnginePluginBPLibrary | Mesh")
	static bool Vector2DListToFloatList(const TArray<FVector2D>& Vector2DList, TArray<float>& FloatList, float Multiplication = 1.f);

};
