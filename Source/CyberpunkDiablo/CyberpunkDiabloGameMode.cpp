// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "CyberpunkDiablo.h"
#include "CyberpunkDiabloGameMode.h"
#include "CyberpunkDiabloPlayerController.h"
#include "CyberpunkDiabloCharacter.h"

ACyberpunkDiabloGameMode::ACyberpunkDiabloGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACyberpunkDiabloPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}