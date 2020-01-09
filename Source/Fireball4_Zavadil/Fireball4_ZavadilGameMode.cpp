// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Fireball4_ZavadilGameMode.h"
#include "Fireball4_ZavadilHUD.h"
#include "Fireball4_ZavadilCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFireball4_ZavadilGameMode::AFireball4_ZavadilGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFireball4_ZavadilHUD::StaticClass();
}
