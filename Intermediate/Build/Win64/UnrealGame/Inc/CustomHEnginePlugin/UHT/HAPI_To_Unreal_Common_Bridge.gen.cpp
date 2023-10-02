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
	CUSTOMHENGINEPLUGIN_API UEnum* Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType();
	CUSTOMHENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSession();
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
		{ "HOUDINI_SESSION_CUSTOM1.Name", "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM1" },
		{ "HOUDINI_SESSION_CUSTOM2.Name", "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM2" },
		{ "HOUDINI_SESSION_CUSTOM3.Name", "EHoudiniSessionType::HOUDINI_SESSION_CUSTOM3" },
		{ "HOUDINI_SESSION_INPROCESS.Name", "EHoudiniSessionType::HOUDINI_SESSION_INPROCESS" },
		{ "HOUDINI_SESSION_MAX.Name", "EHoudiniSessionType::HOUDINI_SESSION_MAX" },
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
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HoudiniSessionType_Underlying;
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType_MetaData[] = {
		{ "Category", "Houdini Session Info" },
		{ "Comment", "/// The type of session determines the which implementation will be\n/// used to communicate with the Houdini Engine library.\n" },
		{ "ModuleRelativePath", "Public/HAPI_To_Unreal_Common_Bridge.h" },
		{ "ToolTip", "The type of session determines the which implementation will be\nused to communicate with the Houdini Engine library." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType = { "HoudiniSessionType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniSession, HoudiniSessionType), Z_Construct_UEnum_CustomHEnginePlugin_EHoudiniSessionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewProp_HoudiniSessionType_MetaData)) }; // 2403844782
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
	struct Z_CompiledInDeferFile_FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_Statics::EnumInfo[] = {
		{ EHoudiniSessionType_StaticEnum, TEXT("EHoudiniSessionType"), &Z_Registration_Info_UEnum_EHoudiniSessionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2403844782U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniSession::StaticStruct, Z_Construct_UScriptStruct_FHoudiniSession_Statics::NewStructOps, TEXT("HoudiniSession"), &Z_Registration_Info_UScriptStruct_HoudiniSession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniSession), 1286162583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_862423612(TEXT("/Script/CustomHEnginePlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_HAPI_To_Unreal_Common_Bridge_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
