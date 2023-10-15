// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../HAPI_To_Unreal_Common_Bridge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHAPI_To_Unreal_Common_Bridge() {}
// Cross Module References
	CUSTOMHENGINEPLUGIN_API UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner();
	CUSTOMHENGINEPLUGIN_API UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeFlags();
	CUSTOMHENGINEPLUGIN_API UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeType();
	CUSTOMHENGINEPLUGIN_API UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniPartType();
	CUSTOMHENGINEPLUGIN_API UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType();
	CUSTOMHENGINEPLUGIN_API UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniStorageType();
	CUSTOMHENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAttributeInfo();
	CUSTOMHENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCookOptions();
	CUSTOMHENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniNodeInfo();
	CUSTOMHENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPartInfo();
	CUSTOMHENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSession();
	CUSTOMHENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniTransform();
	CUSTOMHENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniTransformEuler();
	CUSTOMHENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexListStruct();
	UPackage* Z_Construct_UPackage__Script_CustomHEnginePlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniSessionType;
	static UEnum* EHoudiniSessionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniSessionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniSessionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType, (UObject*)Z_Construct_UPackage__Script_CustomHEnginePlugin(), TEXT("EHoudiniSessionType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniSessionType.OuterSingleton;
	}
	template<> CUSTOMHENGINEPLUGIN_API UEnum* StaticEnum<EHoudiniSessionType>()
	{
		return EHoudiniSessionType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType_Statics::Enumerators[] = {
		{ "EHoudiniSessionType::HOUDINI_SESSION_INPROCESS", (int64)EHoudiniSessionType::HOUDINI_SESSION_INPROCESS },
		{ "EHoudiniSessionType::HOUDINI_SESSION_THRIFT", (int64)EHoudiniSessionType::HOUDINI_SESSION_THRIFT },
		{ "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM1", (int64)EHoudiniSessionType::HOUDINI_SESSION_CUSTOM1 },
		{ "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM2", (int64)EHoudiniSessionType::HOUDINI_SESSION_CUSTOM2 },
		{ "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM3", (int64)EHoudiniSessionType::HOUDINI_SESSION_CUSTOM3 },
		{ "EHoudiniSessionType::HOUDINI_SESSION_MAX", (int64)EHoudiniSessionType::HOUDINI_SESSION_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////\n" },
		{ "HOUDINI_SESSION_CUSTOM1.Comment", "/////////////////////////////////////////////////////////////////////////////\n" },
		{ "HOUDINI_SESSION_CUSTOM1.Name", "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM1" },
		{ "HOUDINI_SESSION_CUSTOM2.Comment", "/////////////////////////////////////////////////////////////////////////////\n" },
		{ "HOUDINI_SESSION_CUSTOM2.Name", "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM2" },
		{ "HOUDINI_SESSION_CUSTOM3.Comment", "/////////////////////////////////////////////////////////////////////////////\n" },
		{ "HOUDINI_SESSION_CUSTOM3.Name", "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM3" },
		{ "HOUDINI_SESSION_INPROCESS.Comment", "/////////////////////////////////////////////////////////////////////////////\n" },
		{ "HOUDINI_SESSION_INPROCESS.Name", "EHoudiniSessionType::HOUDINI_SESSION_INPROCESS" },
		{ "HOUDINI_SESSION_MAX.Comment", "/////////////////////////////////////////////////////////////////////////////\n" },
		{ "HOUDINI_SESSION_MAX.Name", "EHoudiniSessionType::HOUDINI_SESSION_MAX" },
		{ "HOUDINI_SESSION_THRIFT.Comment", "/////////////////////////////////////////////////////////////////////////////\n" },
		{ "HOUDINI_SESSION_THRIFT.Name", "EHoudiniSessionType::HOUDINI_SESSION_THRIFT" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
		nullptr,
		"EHoudiniSessionType",
		"EHoudiniSessionType",
		Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniSessionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniSessionType.InnerSingleton, Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniSessionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniNodeType;
	static UEnum* EHoudiniNodeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniNodeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniNodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeType, (UObject*)Z_Construct_UPackage__Script_CustomHEnginePlugin(), TEXT("EHoudiniNodeType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniNodeType.OuterSingleton;
	}
	template<> CUSTOMHENGINEPLUGIN_API UEnum* StaticEnum<EHoudiniNodeType>()
	{
		return EHoudiniNodeType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeType_Statics::Enumerators[] = {
		{ "EHoudiniNodeType::HOUDINI_NODETYPE_ANY", (int64)EHoudiniNodeType::HOUDINI_NODETYPE_ANY },
		{ "EHoudiniNodeType::HOUDINI_NODETYPE_NONE", (int64)EHoudiniNodeType::HOUDINI_NODETYPE_NONE },
		{ "EHoudiniNodeType::HOUDINI_NODETYPE_OBJ", (int64)EHoudiniNodeType::HOUDINI_NODETYPE_OBJ },
		{ "EHoudiniNodeType::HOUDINI_NODETYPE_SOP", (int64)EHoudiniNodeType::HOUDINI_NODETYPE_SOP },
		{ "EHoudiniNodeType::HOUDINI_NODETYPE_CHOP", (int64)EHoudiniNodeType::HOUDINI_NODETYPE_CHOP },
		{ "EHoudiniNodeType::HOUDINI_NODETYPE_ROP", (int64)EHoudiniNodeType::HOUDINI_NODETYPE_ROP },
		{ "EHoudiniNodeType::HOUDINI_NODETYPE_SHOP", (int64)EHoudiniNodeType::HOUDINI_NODETYPE_SHOP },
		{ "EHoudiniNodeType::HOUDINI_NODETYPE_COP", (int64)EHoudiniNodeType::HOUDINI_NODETYPE_COP },
		{ "EHoudiniNodeType::HOUDINI_NODETYPE_VOP", (int64)EHoudiniNodeType::HOUDINI_NODETYPE_VOP },
		{ "EHoudiniNodeType::HOUDINI_NODETYPE_DOP", (int64)EHoudiniNodeType::HOUDINI_NODETYPE_DOP },
		{ "EHoudiniNodeType::HOUDINI_NODETYPE_TOP", (int64)EHoudiniNodeType::HOUDINI_NODETYPE_TOP },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HOUDINI_NODETYPE_ANY.Name", "EHoudiniNodeType::HOUDINI_NODETYPE_ANY" },
		{ "HOUDINI_NODETYPE_CHOP.Name", "EHoudiniNodeType::HOUDINI_NODETYPE_CHOP" },
		{ "HOUDINI_NODETYPE_COP.Name", "EHoudiniNodeType::HOUDINI_NODETYPE_COP" },
		{ "HOUDINI_NODETYPE_DOP.Name", "EHoudiniNodeType::HOUDINI_NODETYPE_DOP" },
		{ "HOUDINI_NODETYPE_NONE.Name", "EHoudiniNodeType::HOUDINI_NODETYPE_NONE" },
		{ "HOUDINI_NODETYPE_OBJ.Name", "EHoudiniNodeType::HOUDINI_NODETYPE_OBJ" },
		{ "HOUDINI_NODETYPE_ROP.Name", "EHoudiniNodeType::HOUDINI_NODETYPE_ROP" },
		{ "HOUDINI_NODETYPE_SHOP.Name", "EHoudiniNodeType::HOUDINI_NODETYPE_SHOP" },
		{ "HOUDINI_NODETYPE_SOP.Name", "EHoudiniNodeType::HOUDINI_NODETYPE_SOP" },
		{ "HOUDINI_NODETYPE_TOP.Name", "EHoudiniNodeType::HOUDINI_NODETYPE_TOP" },
		{ "HOUDINI_NODETYPE_VOP.Name", "EHoudiniNodeType::HOUDINI_NODETYPE_VOP" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
		nullptr,
		"EHoudiniNodeType",
		"EHoudiniNodeType",
		Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniNodeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniNodeType.InnerSingleton, Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniNodeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniNodeFlags;
	static UEnum* EHoudiniNodeFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniNodeFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniNodeFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeFlags, (UObject*)Z_Construct_UPackage__Script_CustomHEnginePlugin(), TEXT("EHoudiniNodeFlags"));
		}
		return Z_Registration_Info_UEnum_EHoudiniNodeFlags.OuterSingleton;
	}
	template<> CUSTOMHENGINEPLUGIN_API UEnum* StaticEnum<EHoudiniNodeFlags>()
	{
		return EHoudiniNodeFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeFlags_Statics::Enumerators[] = {
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_ANY", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_ANY },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_NONE", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_NONE },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_DISPLAY", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_DISPLAY },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_RENDER", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_RENDER },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_TEMPLATED", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_TEMPLATED },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_LOCKED", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_LOCKED },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_EDITABLE", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_EDITABLE },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_BYPASS", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_BYPASS },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_NETWORK", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_NETWORK },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_GEOMETRY", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_GEOMETRY },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_CAMERA", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_CAMERA },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_LIGHT", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_LIGHT },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_SUBNET", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_SUBNET },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_SOP_CURVE", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_SOP_CURVE },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_SOP_GUIDE", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_SOP_GUIDE },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_TOP_NONSCHEDULER", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_TOP_NONSCHEDULER },
		{ "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_NON_BYPASS", (int64)EHoudiniNodeFlags::HOUDINI_NODEFLAGS_NON_BYPASS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeFlags_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HOUDINI_NODEFLAGS_ANY.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_ANY" },
		{ "HOUDINI_NODEFLAGS_BYPASS.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_BYPASS" },
		{ "HOUDINI_NODEFLAGS_DISPLAY.Comment", "/// Recursive Flag\n" },
		{ "HOUDINI_NODEFLAGS_DISPLAY.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_DISPLAY" },
		{ "HOUDINI_NODEFLAGS_DISPLAY.ToolTip", "Recursive Flag" },
		{ "HOUDINI_NODEFLAGS_EDITABLE.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_EDITABLE" },
		{ "HOUDINI_NODEFLAGS_LOCKED.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_LOCKED" },
		{ "HOUDINI_NODEFLAGS_NETWORK.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_NETWORK" },
		{ "HOUDINI_NODEFLAGS_NON_BYPASS.Comment", "/// Nodes that are not bypassed\n" },
		{ "HOUDINI_NODEFLAGS_NON_BYPASS.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_NON_BYPASS" },
		{ "HOUDINI_NODEFLAGS_NON_BYPASS.ToolTip", "Nodes that are not bypassed" },
		{ "HOUDINI_NODEFLAGS_NONE.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_NONE" },
		{ "HOUDINI_NODEFLAGS_OBJ_CAMERA.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_CAMERA" },
		{ "HOUDINI_NODEFLAGS_OBJ_GEOMETRY.Comment", "/// OBJ Node Specific Flags\n" },
		{ "HOUDINI_NODEFLAGS_OBJ_GEOMETRY.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_GEOMETRY" },
		{ "HOUDINI_NODEFLAGS_OBJ_GEOMETRY.ToolTip", "OBJ Node Specific Flags" },
		{ "HOUDINI_NODEFLAGS_OBJ_LIGHT.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_LIGHT" },
		{ "HOUDINI_NODEFLAGS_OBJ_SUBNET.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_OBJ_SUBNET" },
		{ "HOUDINI_NODEFLAGS_RENDER.Comment", "/// Recursive Flag\n" },
		{ "HOUDINI_NODEFLAGS_RENDER.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_RENDER" },
		{ "HOUDINI_NODEFLAGS_RENDER.ToolTip", "Recursive Flag" },
		{ "HOUDINI_NODEFLAGS_SOP_CURVE.Comment", "/// SOP Node Specific Flags\n/// Looks for \"curve\"\n" },
		{ "HOUDINI_NODEFLAGS_SOP_CURVE.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_SOP_CURVE" },
		{ "HOUDINI_NODEFLAGS_SOP_CURVE.ToolTip", "SOP Node Specific Flags\nLooks for \"curve\"" },
		{ "HOUDINI_NODEFLAGS_SOP_GUIDE.Comment", "/// Looks for Guide Geometry\n" },
		{ "HOUDINI_NODEFLAGS_SOP_GUIDE.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_SOP_GUIDE" },
		{ "HOUDINI_NODEFLAGS_SOP_GUIDE.ToolTip", "Looks for Guide Geometry" },
		{ "HOUDINI_NODEFLAGS_TEMPLATED.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_TEMPLATED" },
		{ "HOUDINI_NODEFLAGS_TOP_NONSCHEDULER.Comment", "/// TOP Node Specific Flags\n/// All TOP nodes except schedulers\n" },
		{ "HOUDINI_NODEFLAGS_TOP_NONSCHEDULER.Name", "EHoudiniNodeFlags::HOUDINI_NODEFLAGS_TOP_NONSCHEDULER" },
		{ "HOUDINI_NODEFLAGS_TOP_NONSCHEDULER.ToolTip", "TOP Node Specific Flags\nAll TOP nodes except schedulers" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
		nullptr,
		"EHoudiniNodeFlags",
		"EHoudiniNodeFlags",
		Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeFlags()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniNodeFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniNodeFlags.InnerSingleton, Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniNodeFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniNodeFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPartType;
	static UEnum* EHoudiniPartType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPartType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniPartType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniPartType, (UObject*)Z_Construct_UPackage__Script_CustomHEnginePlugin(), TEXT("EHoudiniPartType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniPartType.OuterSingleton;
	}
	template<> CUSTOMHENGINEPLUGIN_API UEnum* StaticEnum<EHoudiniPartType>()
	{
		return EHoudiniPartType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniPartType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniPartType_Statics::Enumerators[] = {
		{ "EHoudiniPartType::HOUDINI_PARTTYPE_INVALID", (int64)EHoudiniPartType::HOUDINI_PARTTYPE_INVALID },
		{ "EHoudiniPartType::HOUDINI_PARTTYPE_MESH", (int64)EHoudiniPartType::HOUDINI_PARTTYPE_MESH },
		{ "EHoudiniPartType::HOUDINI_PARTTYPE_CURVE", (int64)EHoudiniPartType::HOUDINI_PARTTYPE_CURVE },
		{ "EHoudiniPartType::HOUDINI_PARTTYPE_VOLUME", (int64)EHoudiniPartType::HOUDINI_PARTTYPE_VOLUME },
		{ "EHoudiniPartType::HOUDINI_PARTTYPE_INSTANCER", (int64)EHoudiniPartType::HOUDINI_PARTTYPE_INSTANCER },
		{ "EHoudiniPartType::HOUDINI_PARTTYPE_BOX", (int64)EHoudiniPartType::HOUDINI_PARTTYPE_BOX },
		{ "EHoudiniPartType::HOUDINI_PARTTYPE_SPHERE", (int64)EHoudiniPartType::HOUDINI_PARTTYPE_SPHERE },
		{ "EHoudiniPartType::HOUDINI_PARTTYPE_MAX", (int64)EHoudiniPartType::HOUDINI_PARTTYPE_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniPartType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HOUDINI_PARTTYPE_BOX.Name", "EHoudiniPartType::HOUDINI_PARTTYPE_BOX" },
		{ "HOUDINI_PARTTYPE_CURVE.Name", "EHoudiniPartType::HOUDINI_PARTTYPE_CURVE" },
		{ "HOUDINI_PARTTYPE_INSTANCER.Name", "EHoudiniPartType::HOUDINI_PARTTYPE_INSTANCER" },
		{ "HOUDINI_PARTTYPE_INVALID.Name", "EHoudiniPartType::HOUDINI_PARTTYPE_INVALID" },
		{ "HOUDINI_PARTTYPE_MAX.Name", "EHoudiniPartType::HOUDINI_PARTTYPE_MAX" },
		{ "HOUDINI_PARTTYPE_MESH.Name", "EHoudiniPartType::HOUDINI_PARTTYPE_MESH" },
		{ "HOUDINI_PARTTYPE_SPHERE.Name", "EHoudiniPartType::HOUDINI_PARTTYPE_SPHERE" },
		{ "HOUDINI_PARTTYPE_VOLUME.Name", "EHoudiniPartType::HOUDINI_PARTTYPE_VOLUME" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniPartType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
		nullptr,
		"EHoudiniPartType",
		"EHoudiniPartType",
		Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniPartType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniPartType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniPartType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniPartType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniPartType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPartType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPartType.InnerSingleton, Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniPartType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniPartType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniStorageType;
	static UEnum* EHoudiniStorageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniStorageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniStorageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniStorageType, (UObject*)Z_Construct_UPackage__Script_CustomHEnginePlugin(), TEXT("EHoudiniStorageType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniStorageType.OuterSingleton;
	}
	template<> CUSTOMHENGINEPLUGIN_API UEnum* StaticEnum<EHoudiniStorageType>()
	{
		return EHoudiniStorageType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniStorageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniStorageType_Statics::Enumerators[] = {
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_INVALID", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_INVALID },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_INT },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT64", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_INT64 },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT64", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT64 },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_STRING", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_STRING },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_UINT8", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_UINT8 },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT8", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_INT8 },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT16", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_INT16 },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT_ARRAY", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_INT_ARRAY },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT64_ARRAY", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_INT64_ARRAY },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT_ARRAY", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT_ARRAY },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT64_ARRAY", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT64_ARRAY },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_STRING_ARRAY", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_STRING_ARRAY },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_UINT8_ARRAY", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_UINT8_ARRAY },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT8_ARRAY", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_INT8_ARRAY },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT16_ARRAY", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_INT16_ARRAY },
		{ "EHoudiniStorageType::HOUDINI_STORAGETYPE_MAX", (int64)EHoudiniStorageType::HOUDINI_STORAGETYPE_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniStorageType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HOUDINI_STORAGETYPE_FLOAT.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT" },
		{ "HOUDINI_STORAGETYPE_FLOAT64.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT64" },
		{ "HOUDINI_STORAGETYPE_FLOAT64_ARRAY.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT64_ARRAY" },
		{ "HOUDINI_STORAGETYPE_FLOAT_ARRAY.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_FLOAT_ARRAY" },
		{ "HOUDINI_STORAGETYPE_INT.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT" },
		{ "HOUDINI_STORAGETYPE_INT16.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT16" },
		{ "HOUDINI_STORAGETYPE_INT16_ARRAY.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT16_ARRAY" },
		{ "HOUDINI_STORAGETYPE_INT64.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT64" },
		{ "HOUDINI_STORAGETYPE_INT64_ARRAY.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT64_ARRAY" },
		{ "HOUDINI_STORAGETYPE_INT8.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT8" },
		{ "HOUDINI_STORAGETYPE_INT8_ARRAY.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT8_ARRAY" },
		{ "HOUDINI_STORAGETYPE_INT_ARRAY.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_INT_ARRAY" },
		{ "HOUDINI_STORAGETYPE_INVALID.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_INVALID" },
		{ "HOUDINI_STORAGETYPE_MAX.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_MAX" },
		{ "HOUDINI_STORAGETYPE_STRING.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_STRING" },
		{ "HOUDINI_STORAGETYPE_STRING_ARRAY.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_STRING_ARRAY" },
		{ "HOUDINI_STORAGETYPE_UINT8.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_UINT8" },
		{ "HOUDINI_STORAGETYPE_UINT8_ARRAY.Name", "EHoudiniStorageType::HOUDINI_STORAGETYPE_UINT8_ARRAY" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniStorageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
		nullptr,
		"EHoudiniStorageType",
		"EHoudiniStorageType",
		Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniStorageType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniStorageType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniStorageType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniStorageType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniStorageType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniStorageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniStorageType.InnerSingleton, Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniStorageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniStorageType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniAttributeOwner;
	static UEnum* EHoudiniAttributeOwner_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniAttributeOwner.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniAttributeOwner.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner, (UObject*)Z_Construct_UPackage__Script_CustomHEnginePlugin(), TEXT("EHoudiniAttributeOwner"));
		}
		return Z_Registration_Info_UEnum_EHoudiniAttributeOwner.OuterSingleton;
	}
	template<> CUSTOMHENGINEPLUGIN_API UEnum* StaticEnum<EHoudiniAttributeOwner>()
	{
		return EHoudiniAttributeOwner_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner_Statics::Enumerators[] = {
		{ "EHoudiniAttributeOwner::HOUDINI_ATTROWNER_INVALID", (int64)EHoudiniAttributeOwner::HOUDINI_ATTROWNER_INVALID },
		{ "EHoudiniAttributeOwner::HOUDINI_ATTROWNER_VERTEX", (int64)EHoudiniAttributeOwner::HOUDINI_ATTROWNER_VERTEX },
		{ "EHoudiniAttributeOwner::HOUDINI_ATTROWNER_POINT", (int64)EHoudiniAttributeOwner::HOUDINI_ATTROWNER_POINT },
		{ "EHoudiniAttributeOwner::HOUDINI_ATTROWNER_PRIM", (int64)EHoudiniAttributeOwner::HOUDINI_ATTROWNER_PRIM },
		{ "EHoudiniAttributeOwner::HOUDINI_ATTROWNER_DETAIL", (int64)EHoudiniAttributeOwner::HOUDINI_ATTROWNER_DETAIL },
		{ "EHoudiniAttributeOwner::HOUDINI_ATTROWNER_MAX", (int64)EHoudiniAttributeOwner::HOUDINI_ATTROWNER_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HOUDINI_ATTROWNER_DETAIL.Name", "EHoudiniAttributeOwner::HOUDINI_ATTROWNER_DETAIL" },
		{ "HOUDINI_ATTROWNER_INVALID.Name", "EHoudiniAttributeOwner::HOUDINI_ATTROWNER_INVALID" },
		{ "HOUDINI_ATTROWNER_MAX.Name", "EHoudiniAttributeOwner::HOUDINI_ATTROWNER_MAX" },
		{ "HOUDINI_ATTROWNER_POINT.Name", "EHoudiniAttributeOwner::HOUDINI_ATTROWNER_POINT" },
		{ "HOUDINI_ATTROWNER_PRIM.Name", "EHoudiniAttributeOwner::HOUDINI_ATTROWNER_PRIM" },
		{ "HOUDINI_ATTROWNER_VERTEX.Name", "EHoudiniAttributeOwner::HOUDINI_ATTROWNER_VERTEX" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
		nullptr,
		"EHoudiniAttributeOwner",
		"EHoudiniAttributeOwner",
		Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniAttributeOwner.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniAttributeOwner.InnerSingleton, Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniAttributeOwner_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniAttributeOwner.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniSession;
class UScriptStruct* FHoudiniSession::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniSession.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniSession.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniSession, (UObject*)Z_Construct_UPackage__Script_CustomHEnginePlugin(), TEXT("HoudiniSession"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniSession.OuterSingleton;
}
template<> CUSTOMHENGINEPLUGIN_API UScriptStruct* StaticStruct<FHoudiniSession>()
{
	return FHoudiniSession::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_HoudiniSessionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniSessionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HoudiniSessionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SessionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSession_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "////////////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniSession>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType_MetaData[] = {
		{ "Category", "Houdini Session Info" },
		{ "Comment", "/// The type of session determines the which implementation will be  \n/// used to communicate with the Houdini Engine library.\n" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
		{ "ToolTip", "The type of session determines the which implementation will be\nused to communicate with the Houdini Engine library." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType = { "HoudiniSessionType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniSession, HoudiniSessionType), Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType_MetaData)) }; // 528415951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Houdini Session Info" },
		{ "Comment", "/// Some session types support multiple simultaneous sessions. This means\n/// that each session needs to have a unique identifier.\n" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
		{ "ToolTip", "Some session types support multiple simultaneous sessions. This means\nthat each session needs to have a unique identifier." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniSession, SessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_SessionId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_SessionId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniSession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
		nullptr,
		&NewStructOps,
		"HoudiniSession",
		sizeof(FHoudiniSession),
		alignof(FHoudiniSession),
		Z_Construct_UScriptStruct_FHoudiniSession_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSession_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSession()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniSession.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniSession.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniSession_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniSession.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniCookOptions;
class UScriptStruct* FHoudiniCookOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniCookOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniCookOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniCookOptions, (UObject*)Z_Construct_UPackage__Script_CustomHEnginePlugin(), TEXT("HoudiniCookOptions"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniCookOptions.OuterSingleton;
}
template<> CUSTOMHENGINEPLUGIN_API UScriptStruct* StaticStruct<FHoudiniCookOptions>()
{
	return FHoudiniCookOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniCookOptions>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
		nullptr,
		&NewStructOps,
		"HoudiniCookOptions",
		sizeof(FHoudiniCookOptions),
		alignof(FHoudiniCookOptions),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCookOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniCookOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniCookOptions.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniCookOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPartInfo;
class UScriptStruct* FHoudiniPartInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPartInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPartInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPartInfo, (UObject*)Z_Construct_UPackage__Script_CustomHEnginePlugin(), TEXT("HoudiniPartInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPartInfo.OuterSingleton;
}
template<> CUSTOMHENGINEPLUGIN_API UScriptStruct* StaticStruct<FHoudiniPartInfo>()
{
	return FHoudiniPartInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPartInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
		nullptr,
		&NewStructOps,
		"HoudiniPartInfo",
		sizeof(FHoudiniPartInfo),
		alignof(FHoudiniPartInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPartInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniPartInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPartInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniPartInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniAttributeInfo;
class UScriptStruct* FHoudiniAttributeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniAttributeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniAttributeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniAttributeInfo, (UObject*)Z_Construct_UPackage__Script_CustomHEnginePlugin(), TEXT("HoudiniAttributeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniAttributeInfo.OuterSingleton;
}
template<> CUSTOMHENGINEPLUGIN_API UScriptStruct* StaticStruct<FHoudiniAttributeInfo>()
{
	return FHoudiniAttributeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniAttributeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniAttributeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniAttributeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniAttributeInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniAttributeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
		nullptr,
		&NewStructOps,
		"HoudiniAttributeInfo",
		sizeof(FHoudiniAttributeInfo),
		alignof(FHoudiniAttributeInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniAttributeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAttributeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAttributeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniAttributeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniAttributeInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniAttributeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniAttributeInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexListStruct;
class UScriptStruct* FVertexListStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexListStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexListStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexListStruct, (UObject*)Z_Construct_UPackage__Script_CustomHEnginePlugin(), TEXT("VertexListStruct"));
	}
	return Z_Registration_Info_UScriptStruct_VertexListStruct.OuterSingleton;
}
template<> CUSTOMHENGINEPLUGIN_API UScriptStruct* StaticStruct<FVertexListStruct>()
{
	return FVertexListStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexListStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexListStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexListStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexListStruct>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVertexListStruct_Statics::NewProp_VertexList_Inner = { "VertexList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexListStruct_Statics::NewProp_VertexList_MetaData[] = {
		{ "Category", "Houdini Common" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVertexListStruct_Statics::NewProp_VertexList = { "VertexList", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVertexListStruct, VertexList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexListStruct_Statics::NewProp_VertexList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexListStruct_Statics::NewProp_VertexList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexListStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexListStruct_Statics::NewProp_VertexList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexListStruct_Statics::NewProp_VertexList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexListStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
		nullptr,
		&NewStructOps,
		"VertexListStruct",
		sizeof(FVertexListStruct),
		alignof(FVertexListStruct),
		Z_Construct_UScriptStruct_FVertexListStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexListStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexListStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexListStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexListStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexListStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexListStruct.InnerSingleton, Z_Construct_UScriptStruct_FVertexListStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexListStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniNodeInfo;
class UScriptStruct* FHoudiniNodeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniNodeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniNodeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniNodeInfo, (UObject*)Z_Construct_UPackage__Script_CustomHEnginePlugin(), TEXT("HoudiniNodeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniNodeInfo.OuterSingleton;
}
template<> CUSTOMHENGINEPLUGIN_API UScriptStruct* StaticStruct<FHoudiniNodeInfo>()
{
	return FHoudiniNodeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniNodeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniNodeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniNodeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniNodeInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniNodeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
		nullptr,
		&NewStructOps,
		"HoudiniNodeInfo",
		sizeof(FHoudiniNodeInfo),
		alignof(FHoudiniNodeInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniNodeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniNodeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniNodeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniNodeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniNodeInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniNodeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniNodeInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniTransform;
class UScriptStruct* FHoudiniTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniTransform, (UObject*)Z_Construct_UPackage__Script_CustomHEnginePlugin(), TEXT("HoudiniTransform"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniTransform.OuterSingleton;
}
template<> CUSTOMHENGINEPLUGIN_API UScriptStruct* StaticStruct<FHoudiniTransform>()
{
	return FHoudiniTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniTransform>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
		nullptr,
		&NewStructOps,
		"HoudiniTransform",
		sizeof(FHoudiniTransform),
		alignof(FHoudiniTransform),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniTransform.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniTransformEuler;
class UScriptStruct* FHoudiniTransformEuler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniTransformEuler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniTransformEuler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniTransformEuler, (UObject*)Z_Construct_UPackage__Script_CustomHEnginePlugin(), TEXT("HoudiniTransformEuler"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniTransformEuler.OuterSingleton;
}
template<> CUSTOMHENGINEPLUGIN_API UScriptStruct* StaticStruct<FHoudiniTransformEuler>()
{
	return FHoudiniTransformEuler::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniTransformEuler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniTransformEuler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniTransformEuler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniTransformEuler>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniTransformEuler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomHEnginePlugin,
		nullptr,
		&NewStructOps,
		"HoudiniTransformEuler",
		sizeof(FHoudiniTransformEuler),
		alignof(FHoudiniTransformEuler),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniTransformEuler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniTransformEuler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniTransformEuler()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniTransformEuler.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniTransformEuler.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniTransformEuler_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniTransformEuler.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_Statics::EnumInfo[] = {
		{ EHoudiniSessionType_StaticEnum, TEXT("EHoudiniSessionType"), &Z_Registration_Info_UEnum_EHoudiniSessionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 528415951U) },
		{ EHoudiniNodeType_StaticEnum, TEXT("EHoudiniNodeType"), &Z_Registration_Info_UEnum_EHoudiniNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 362357899U) },
		{ EHoudiniNodeFlags_StaticEnum, TEXT("EHoudiniNodeFlags"), &Z_Registration_Info_UEnum_EHoudiniNodeFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2840242248U) },
		{ EHoudiniPartType_StaticEnum, TEXT("EHoudiniPartType"), &Z_Registration_Info_UEnum_EHoudiniPartType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2879515889U) },
		{ EHoudiniStorageType_StaticEnum, TEXT("EHoudiniStorageType"), &Z_Registration_Info_UEnum_EHoudiniStorageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2678336404U) },
		{ EHoudiniAttributeOwner_StaticEnum, TEXT("EHoudiniAttributeOwner"), &Z_Registration_Info_UEnum_EHoudiniAttributeOwner, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1294589256U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniSession::StaticStruct, Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewStructOps, TEXT("HoudiniSession"), &Z_Registration_Info_UScriptStruct_HoudiniSession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniSession), 2140469190U) },
		{ FHoudiniCookOptions::StaticStruct, Z_Construct_UScriptStruct_FHoudiniCookOptions_Statics::NewStructOps, TEXT("HoudiniCookOptions"), &Z_Registration_Info_UScriptStruct_HoudiniCookOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniCookOptions), 928176404U) },
		{ FHoudiniPartInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics::NewStructOps, TEXT("HoudiniPartInfo"), &Z_Registration_Info_UScriptStruct_HoudiniPartInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPartInfo), 961480838U) },
		{ FHoudiniAttributeInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniAttributeInfo_Statics::NewStructOps, TEXT("HoudiniAttributeInfo"), &Z_Registration_Info_UScriptStruct_HoudiniAttributeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniAttributeInfo), 1630230711U) },
		{ FVertexListStruct::StaticStruct, Z_Construct_UScriptStruct_FVertexListStruct_Statics::NewStructOps, TEXT("VertexListStruct"), &Z_Registration_Info_UScriptStruct_VertexListStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexListStruct), 1477708915U) },
		{ FHoudiniNodeInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniNodeInfo_Statics::NewStructOps, TEXT("HoudiniNodeInfo"), &Z_Registration_Info_UScriptStruct_HoudiniNodeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniNodeInfo), 2901690084U) },
		{ FHoudiniTransform::StaticStruct, Z_Construct_UScriptStruct_FHoudiniTransform_Statics::NewStructOps, TEXT("HoudiniTransform"), &Z_Registration_Info_UScriptStruct_HoudiniTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniTransform), 364164492U) },
		{ FHoudiniTransformEuler::StaticStruct, Z_Construct_UScriptStruct_FHoudiniTransformEuler_Statics::NewStructOps, TEXT("HoudiniTransformEuler"), &Z_Registration_Info_UScriptStruct_HoudiniTransformEuler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniTransformEuler), 2028057573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_2556293543(TEXT("/Script/CustomHEnginePlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Efiles_Unreal_Projects_20230924_customEngineTest_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
