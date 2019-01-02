// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank() const
{
	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}

// Called when the game starts or when spawned
void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	auto PossessedTank = GetControlledTank();
	if (!PossessedTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController not possessing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController Begin Play %s"), *(PossessedTank->GetName()));
		auto AimmedTank = GetPlayerTank();
		if (!AimmedTank)
		{
			UE_LOG(LogTemp, Warning, TEXT("AIController not aiming at player"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("AIController aiming at player"));
		}
	}
}


