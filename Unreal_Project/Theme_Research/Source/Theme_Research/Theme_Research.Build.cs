// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Theme_Research : ModuleRules
{
	public Theme_Research(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "HTTP", "Json", "AudioCapture", "SignalProcessing" });
	}
}
