// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank_Warzone.h"
#include "TankPlayerController.h"

ATank* ATankPlayerController::GetControlledTank() const
{
   return Cast<ATank>(GetPawn());
}