// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC_GameMode.h"
#include "NBC_Pawn.h"
#include "NBC_PlayerController.h"

ANBC_GameMode::ANBC_GameMode()
{
	DefaultPawnClass = ANBC_Pawn::StaticClass();
	PlayerControllerClass = ANBC_PlayerController::StaticClass();
}
