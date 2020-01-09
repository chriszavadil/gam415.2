// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Fireball4_ZavadilHUD.generated.h"

UCLASS()
class AFireball4_ZavadilHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFireball4_ZavadilHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

