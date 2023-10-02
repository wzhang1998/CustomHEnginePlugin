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
	CUSTOMHENGINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniSession();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CustomHEnginePlugin();
// End Cross Module References
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
			{ "StartServerAndCreateSession", &UCustomHEnginePluginBPLibrary::execStartServerAndCreateSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::NewProp_HoudiniSession = { "HoudiniSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventStartServerAndCreateSession_Parms, HoudiniSession), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 1286162583
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomHEnginePluginBPLibrary_eventStartServerAndCreateSession_Parms, ReturnValue), Z_Construct_UScriptStruct_FHoudiniSession, METADATA_PARAMS(nullptr, 0) }; // 1286162583
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::NewProp_HoudiniSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomHEnginePluginBPLibrary" },
		{ "ModuleRelativePath", "Public/CustomHEnginePluginBPLibrary.h" },
		{ "ToolTip", "Creates a Thrift RPC session using a TCP socket as transport." },
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
		{ &Z_Construct_UFunction_UCustomHEnginePluginBPLibrary_StartServerAndCreateSession, "StartServerAndCreateSession" }, // 1261899502
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
	struct Z_CompiledInDeferFile_FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomHEnginePluginBPLibrary, UCustomHEnginePluginBPLibrary::StaticClass, TEXT("UCustomHEnginePluginBPLibrary"), &Z_Registration_Info_UClass_UCustomHEnginePluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomHEnginePluginBPLibrary), 3844869175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_4147268001(TEXT("/Script/CustomHEnginePlugin"),
		Z_CompiledInDeferFile_FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_customEngine_Plugins_CustomHEnginePlugin_Source_CustomHEnginePlugin_Public_CustomHEnginePluginBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
