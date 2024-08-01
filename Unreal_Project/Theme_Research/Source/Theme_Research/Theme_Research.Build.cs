// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Theme_Research : ModuleRules
{
	public Theme_Research(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput", 
			"HTTP", 
			"Json", 
			"JsonUtilities", 
			"RHI",
            "RenderCore",
            "UMG",
            "Slate",
            "SlateCore" 
		});

		PrivateDependencyModuleNames.AddRange(new string[] {  });

        if (Target.Platform == UnrealTargetPlatform.Win64 || Target.Platform == UnrealTargetPlatform.Mac)
        {
            PublicDependencyModuleNames.AddRange(new string[] {
                "DesktopPlatform"
            });
        }

        if (Target.Platform == UnrealTargetPlatform.Android)
        {
            PrivateIncludePaths.Add("Theme_Research/Private/Android");
            PublicDependencyModuleNames.Add("Launch");

            string APLPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", System.IO.Path.Combine(APLPath, "Theme_Research_APL.xml"));
        }

        if (Target.Platform == UnrealTargetPlatform.IOS)
        {
            PrivateIncludePaths.Add("Theme_Research/Private/IOS");

            PublicAdditionalFrameworks.Add(new Framework("MobileCoreServices", string.Empty, string.Empty));
            PublicAdditionalFrameworks.Add(new Framework("CoreServices", string.Empty, string.Empty));
        }

        // Enable IWYU
        IWYUSupport = IWYUSupport.Full;

        // Enable exceptions
        bEnableExceptions = true;

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
