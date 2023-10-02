// Some copyright should be here...

using UnrealBuildTool;
using System;
using System.IO;


public class CustomHEnginePlugin : ModuleRules
{
	public CustomHEnginePlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		CppStandard = CppStandardVersion.Cpp17;
		bUseUnity = false;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
				Path.Combine(ModuleDirectory, "Public/HAPI")
            }
			);


		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
				
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"ProceduralMeshComponent"
				// ... add private dependencies that you statically link with here ...	
			}
			);

        PublicSystemLibraryPaths.Add("C:/Program Files/Side Effects Software/Houdini19.5.682/bin");
		PublicDelayLoadDLLs.Add("libHAPIL.dll");

		PublicAdditionalLibraries.Add("C:/Program Files/Side Effects Software/Houdini19.5.682/custom/houdini/dsolib/libHAPIL.lib");



		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
