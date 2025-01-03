// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class BirdOfPreyEditorTarget : TargetRules
{
	public BirdOfPreyEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_4;

        BuildEnvironment = TargetBuildEnvironment.Unique;

        ExtraModuleNames.AddRange( new string[] { "BirdOfPrey" } );
	}
}
