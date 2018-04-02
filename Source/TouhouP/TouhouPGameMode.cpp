// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TouhouPGameMode.h"
#include "TouhouPCharacter.h"

ATouhouPGameMode::ATouhouPGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATouhouPCharacter::StaticClass();	
}
