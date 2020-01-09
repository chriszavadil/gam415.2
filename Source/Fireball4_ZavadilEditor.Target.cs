// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Fireball4_ZavadilEditorTarget : TargetRules
{
	public Fireball4_ZavadilEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Fireball4_Zavadil");
	}
}
