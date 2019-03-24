// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "RobotRicochetGameMode.h"
#include "RobotRicochetPlayerController.h"
#include "RobotRicochetCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARobotRicochetGameMode::ARobotRicochetGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARobotRicochetPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}