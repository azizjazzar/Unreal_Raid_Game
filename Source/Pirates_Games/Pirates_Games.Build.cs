// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Pirates_Games : ModuleRules
{
	public Pirates_Games(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
