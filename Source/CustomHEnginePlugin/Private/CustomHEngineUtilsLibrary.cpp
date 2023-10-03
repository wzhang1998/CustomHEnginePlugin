// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomHEngineUtilsLibrary.h"

bool UCustomHEngineUtilsLibrary::GetUnrealMeshData(UStaticMesh* StaticMesh, TArray<FVector>& PositionList, TArray<int>& VertexList, TArray<int>& FaceList, TArray<FVector>& NormalList, TArray<FVector>& TangentList, TArray<FVector2D>& UVList, TArray<int>& SectionIndexList, TArray<UMaterialInterface*>& MaterialList)
{
	if (!StaticMesh)
	{
		UE_LOG(LogTemp, Warning, TEXT("The static mesh is none"));
		return false;
	}
	if (!StaticMesh->IsValidLowLevel())
	{
		UE_LOG(LogTemp, Warning, TEXT("The static mesh is not valid"));
		return false;
	}
	if (!StaticMesh->GetRenderData() || StaticMesh->GetRenderData()->LODResources.Num() <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("The static mesh has empty data."));
		return false;
	}

	FPositionVertexBuffer* PositionVertexBuffer = &StaticMesh->GetRenderData()->LODResources[0].VertexBuffers.PositionVertexBuffer;
	auto VertexBuffer = &StaticMesh->GetRenderData()->LODResources[0].VertexBuffers;
	int NumberOfPoints = PositionVertexBuffer->GetNumVertices();
	int NumIndices = StaticMesh->GetRenderData()->LODResources[0].IndexBuffer.GetNumIndices();
	FIndexArrayView IndexArray = StaticMesh->GetRenderData()->LODResources[0].IndexBuffer.GetArrayView();
	int FaceCount = StaticMesh->GetRenderData()->LODResources[0].GetNumTriangles();

	auto Sections = StaticMesh->GetRenderData()->LODResources[0].Sections;

	PositionList.SetNumUninitialized(NumberOfPoints);
	VertexList.SetNumUninitialized(NumIndices);
	UVList.SetNumUninitialized(NumberOfPoints);
	NormalList.SetNumUninitialized(NumberOfPoints);
	TangentList.SetNumUninitialized(NumberOfPoints);
	MaterialList.SetNumUninitialized(Sections.Num());
	SectionIndexList.SetNumUninitialized(FaceCount);
	FaceList.Init(3, FaceCount);

//  Position list and UV list and normal list
	for (int i = 0; i < NumberOfPoints; i++)
	{
		PositionList[i] = FVector(PositionVertexBuffer->VertexPosition(i));
		UVList[i] = FVector2D(VertexBuffer->StaticMeshVertexBuffer.GetVertexUV(i, 0));
		NormalList[i] = FVector(VertexBuffer->StaticMeshVertexBuffer.VertexTangentZ(i));
		TangentList[i] = FVector(VertexBuffer->StaticMeshVertexBuffer.VertexTangentX(i));
	}

//  Vertex list 
	for (int j = 0; j < NumIndices; j++)
	{
		VertexList[j] = IndexArray[j];
		
	}

	for (int k = 0; k < Sections.Num(); k++)
	{
		MaterialList[k] = StaticMesh->GetMaterial(Sections[k].MaterialIndex);
		int NumTriangles = Sections[k].NumTriangles;
		for (int tri = 0; tri < NumTriangles; tri++)
		{
			int FirstIndex = Sections[k].FirstIndex;
			SectionIndexList[tri + FirstIndex / 3] = k;
		}
	}

	return true;
}

bool UCustomHEngineUtilsLibrary::VectorListToFloatList(const TArray<FVector>& VectorList, TArray<float>& FloatList, bool bSwitchYZAxis, float Multiplication)
{
	if (VectorList.Num() == 0)
	{
		return false;
	}

	for (int i = 0; i < VectorList.Num(); i++)
	{
		FloatList.Add(VectorList[i].X * Multiplication);
		bSwitchYZAxis ? FloatList.Add(VectorList[i].Z * Multiplication) : FloatList.Add(VectorList[i].Y * Multiplication);
		bSwitchYZAxis ? FloatList.Add(VectorList[i].Y * Multiplication) : FloatList.Add(VectorList[i].Z * Multiplication);
	}
	return true;
}

bool UCustomHEngineUtilsLibrary::Vector2DListToFloatList(const TArray<FVector2D>& Vector2DList, TArray<float>& FloatList, float Multiplication)
{
	if (Vector2DList.Num() == 0)
	{
		return false;
	}

	for (int i = 0; i < Vector2DList.Num(); i++)
	{
		FloatList.Add(Vector2DList[i].X * Multiplication);
		FloatList.Add(Vector2DList[i].Y * Multiplication);
		FloatList.Add(0.f);
	}
	return true;
}
