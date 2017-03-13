// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "BerserkFear.h"
#include "BerserkFearGameMode.h"
#include "BerserkFearCharacter.h"

ABerserkFearGameMode::ABerserkFearGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
