// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pirates_GamesGameMode.h"
#include "Pirates_GamesCharacter.h"
#include "UObject/ConstructorHelpers.h"

APirates_GamesGameMode::APirates_GamesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
