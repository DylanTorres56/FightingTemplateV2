// Copyright Epic Games, Inc. All Rights Reserved.

#include "FightingTemplateV2GameMode.h"
#include "FightingTemplateV2Character.h"
#include "UObject/ConstructorHelpers.h"

AFightingTemplateV2GameMode::AFightingTemplateV2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
