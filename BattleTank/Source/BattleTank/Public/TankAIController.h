// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	ATank* GetControlledTank() const;

	ATank* GetPlayerTank() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	
};
