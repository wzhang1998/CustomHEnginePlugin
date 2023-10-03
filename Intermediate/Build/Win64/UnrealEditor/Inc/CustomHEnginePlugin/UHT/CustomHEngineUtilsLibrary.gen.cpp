// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../CustomHEngineUtilsLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomHEngineUtilsLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	CUSTOMHENGINEPLUGIN_API UClass* Z_Construct_UClass_UCustomHEngineUtilsLibrary();
	CUSTOMHENGINEPLUGIN_API UClass* Z_Construct_UClass_UCustomHEngineUtilsLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomHEnginePlugin();
// End Cross Module References
	DEFINE_FUNCTION(UCustomHEngineUtilsLibrary::execVector2DListToFloatList)
	{
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Vector2DList);
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatList);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplication);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEngineUtilsLibrary::Vector2DListToFloatList(Z_Param_Out_Vector2DList,Z_Param_Out_FloatList,Z_Param_Multiplication);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEngineUtilsLibrary::execVectorListToFloatList)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VectorList);
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatList);
		P_GET_UBOOL(Z_Param_bSwitchYZAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplication);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEngineUtilsLibrary::VectorListToFloatList(Z_Param_Out_VectorList,Z_Param_Out_FloatList,Z_Param_bSwitchYZAxis,Z_Param_Multiplication);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomHEngineUtilsLibrary::execGetUnrealMeshData)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PositionList);
		P_GET_TARRAY_REF(int32,Z_Param_Out_VertexList);
		P_GET_TARRAY_REF(int32,Z_Param_Out_FaceList);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_NormalList);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_TangentList);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVList);
		P_GET_TARRAY_REF(int32,Z_Param_Out_SectionIndexList);
		P_GET_TARRAY_REF(UMaterialInterface*,Z_Param_Out_MaterialList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomHEngineUtilsLibrary::GetUnrealMeshData(Z_Param_StaticMesh,Z_Param_Out_PositionList,Z_Param_Out_VertexList,Z_Param_Out_FaceList,Z_Param_Out_NormalList,Z_Param_Out_TangentList,Z_Param_Out_UVList,Z_Param_Out_SectionIndexList,Z_Param_Out_MaterialList);
		P_NATIVE_END;
	}
	void UCustomHEngineUtilsLibrary::StaticRegisterNativesUCustomHEngineUtilsLibrary()
	{
		UClass* Class = UCustomHEngineUtilsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUnrealMeshData", &UCustomHEngineUtilsLibrary::execGetUnrealMeshData },
			{ "Vector2DListToFloatList", &UCustomHEngineUtilsLibrary::execVector2DListToFloatList },
			{ "VectorListToFloatList", &UCustomHEngineUtilsLibrary::execVectorListToFloatList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics
	{
		struct CustomHEngineUtilsLibrary_eventGetUnrealMeshData_Parms
		{
			UStaticMesh* StaticMesh;
			TArray<FVector> PositionList;
			TArray<int32> VertexList;
			TArray<int32> FaceList;
			TArray<FVector> NormalList;
			TArray<FVector> TangentList;
			TArray<FVector2D> UVList;
			TArray<int32> SectionIndexList;
			TArray<UMaterialInterface*> MaterialList;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PositionList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FaceList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FaceList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NormalList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TangentList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SectionIndexList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionIndexList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventGetUnrealMeshData_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_PositionList_Inner = { "PositionList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_PositionList = { "PositionList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventGetUnrealMeshData_Parms, PositionList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_VertexList_Inner = { "VertexList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_VertexList = { "VertexList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventGetUnrealMeshData_Parms, VertexList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_FaceList_Inner = { "FaceList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_FaceList = { "FaceList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventGetUnrealMeshData_Parms, FaceList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_NormalList_Inner = { "NormalList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_NormalList = { "NormalList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventGetUnrealMeshData_Parms, NormalList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_TangentList_Inner = { "TangentList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_TangentList = { "TangentList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventGetUnrealMeshData_Parms, TangentList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_UVList_Inner = { "UVList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventGetUnrealMeshData_Parms, UVList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_SectionIndexList_Inner = { "SectionIndexList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_SectionIndexList = { "SectionIndexList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventGetUnrealMeshData_Parms, SectionIndexList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_MaterialList_Inner = { "MaterialList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_MaterialList = { "MaterialList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventGetUnrealMeshData_Parms, MaterialList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEngineUtilsLibrary_eventGetUnrealMeshData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEngineUtilsLibrary_eventGetUnrealMeshData_Parms), &Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_PositionList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_PositionList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_VertexList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_VertexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_FaceList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_FaceList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_NormalList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_NormalList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_TangentList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_TangentList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_UVList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_SectionIndexList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_SectionIndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_MaterialList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_MaterialList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Mesh" },
		{ "ModuleRelativePath", "Public/CustomHEngineUtilsLibrary.h" },
		{ "ToolTip", "Get mesh data drom unreal engine." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEngineUtilsLibrary, nullptr, "GetUnrealMeshData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::CustomHEngineUtilsLibrary_eventGetUnrealMeshData_Parms), Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics
	{
		struct CustomHEngineUtilsLibrary_eventVector2DListToFloatList_Parms
		{
			TArray<FVector2D> Vector2DList;
			TArray<float> FloatList;
			float Multiplication;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2DList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector2DList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector2DList;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatList;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplication;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_Vector2DList_Inner = { "Vector2DList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_Vector2DList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_Vector2DList = { "Vector2DList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventVector2DListToFloatList_Parms, Vector2DList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_Vector2DList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_Vector2DList_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_FloatList_Inner = { "FloatList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_FloatList = { "FloatList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventVector2DListToFloatList_Parms, FloatList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_Multiplication = { "Multiplication", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventVector2DListToFloatList_Parms, Multiplication), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEngineUtilsLibrary_eventVector2DListToFloatList_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEngineUtilsLibrary_eventVector2DListToFloatList_Parms), &Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_Vector2DList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_Vector2DList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_FloatList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_FloatList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_Multiplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Mesh" },
		{ "CPP_Default_Multiplication", "1.000000" },
		{ "ModuleRelativePath", "Public/CustomHEngineUtilsLibrary.h" },
		{ "ToolTip", "Convert vector 2D list to float list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEngineUtilsLibrary, nullptr, "Vector2DListToFloatList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::CustomHEngineUtilsLibrary_eventVector2DListToFloatList_Parms), Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics
	{
		struct CustomHEngineUtilsLibrary_eventVectorListToFloatList_Parms
		{
			TArray<FVector> VectorList;
			TArray<float> FloatList;
			bool bSwitchYZAxis;
			float Multiplication;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatList;
		static void NewProp_bSwitchYZAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwitchYZAxis;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplication;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_VectorList_Inner = { "VectorList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_VectorList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventVectorListToFloatList_Parms, VectorList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_VectorList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_VectorList_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_FloatList_Inner = { "FloatList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_FloatList = { "FloatList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventVectorListToFloatList_Parms, FloatList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_bSwitchYZAxis_SetBit(void* Obj)
	{
		((CustomHEngineUtilsLibrary_eventVectorListToFloatList_Parms*)Obj)->bSwitchYZAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_bSwitchYZAxis = { "bSwitchYZAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEngineUtilsLibrary_eventVectorListToFloatList_Parms), &Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_bSwitchYZAxis_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_Multiplication = { "Multiplication", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEngineUtilsLibrary_eventVectorListToFloatList_Parms, Multiplication), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomHEngineUtilsLibrary_eventVectorListToFloatList_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomHEngineUtilsLibrary_eventVectorListToFloatList_Parms), &Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_VectorList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_FloatList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_FloatList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_bSwitchYZAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_Multiplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary | Mesh" },
		{ "CPP_Default_bSwitchYZAxis", "true" },
		{ "CPP_Default_Multiplication", "0.010000" },
		{ "ModuleRelativePath", "Public/CustomHEngineUtilsLibrary.h" },
		{ "ToolTip", "Convert vector list to float list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomHEngineUtilsLibrary, nullptr, "VectorListToFloatList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::CustomHEngineUtilsLibrary_eventVectorListToFloatList_Parms), Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomHEngineUtilsLibrary);
	UClass* Z_Construct_UClass_UCustomHEngineUtilsLibrary_NoRegister()
	{
		return UCustomHEngineUtilsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCustomHEngineUtilsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomHEngineUtilsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomHEngineUtilsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomHEngineUtilsLibrary_GetUnrealMeshData, "GetUnrealMeshData" }, // 2014840347
		{ &Z_Construct_UFunction_UCustomHEngineUtilsLibrary_Vector2DListToFloatList, "Vector2DListToFloatList" }, // 1027958748
		{ &Z_Construct_UFunction_UCustomHEngineUtilsLibrary_VectorListToFloatList, "VectorListToFloatList" }, // 1975842914
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomHEngineUtilsLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CustomHEngineUtilsLibrary.h" },
		{ "ModuleRelativePath", "Public/CustomHEngineUtilsLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomHEngineUtilsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomHEngineUtilsLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomHEngineUtilsLibrary_Statics::ClassParams = {
		&UCustomHEngineUtilsLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomHEngineUtilsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomHEngineUtilsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomHEngineUtilsLibrary()
	{
		if (!Z_Registration_Info_UClass_UCustomHEngineUtilsLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomHEngineUtilsLibrary.OuterSingleton, Z_Construct_UClass_UCustomHEngineUtilsLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomHEngineUtilsLibrary.OuterSingleton;
	}
	template<> CUSTOMHENGINEPLUGIN_API UClass* StaticClass<UCustomHEngineUtilsLibrary>()
	{
		return UCustomHEngineUtilsLibrary::StaticClass();
	}
	UCustomHEngineUtilsLibrary::UCustomHEngineUtilsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomHEngineUtilsLibrary);
	UCustomHEngineUtilsLibrary::~UCustomHEngineUtilsLibrary() {}
	struct Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEngineUtilsLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEngineUtilsLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomHEngineUtilsLibrary, UCustomHEngineUtilsLibrary::StaticClass, TEXT("UCustomHEngineUtilsLibrary"), &Z_Registration_Info_UClass_UCustomHEngineUtilsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomHEngineUtilsLibrary), 242848712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEngineUtilsLibrary_h_52257102(TEXT("/Script/CustomHEnginePlugin"),
		Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEngineUtilsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEngineUtilsLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
