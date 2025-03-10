// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FightingTemplateV2 : ModuleRules
{
	public FightingTemplateV2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
