// Copyright Epic Games, Inc. All Rights Reserved.

#include "UfunctionExamplesGameMode.h"
#include "UfunctionExamplesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUfunctionExamplesGameMode::AUfunctionExamplesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
