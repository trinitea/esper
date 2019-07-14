// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "EsperGameMode.h"
#include "EsperHUD.h"
#include "EsperCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEsperGameMode::AEsperGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEsperHUD::StaticClass();
}
