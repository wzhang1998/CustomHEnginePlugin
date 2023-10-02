// Copyright Epic Games, Inc. All Rights Reserved.

#include "CustomHEnginePlugin.h"

#define LOCTEXT_NAMESPACE "FCustomHEnginePluginModule"

void FCustomHEnginePluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FString HAPIDLLLocation = LR"(C:\Program Files\Side Effects Software\Houdini19.5.682\bin)";
	const TCHAR* PathDelimiter = FPlatformMisc::GetPathVarDelimiter();
	FString OrigPathVar = FPlatformMisc::GetEnvironmentVariable(TEXT("PATH"));
	FString ModifiedPathVar = HAPIDLLLocation + PathDelimiter + OrigPathVar;
	FPlatformMisc::SetEnvironmentVar(TEXT("PATH"), *ModifiedPathVar);
	

}

void FCustomHEnginePluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCustomHEnginePluginModule, CustomHEnginePlugin)