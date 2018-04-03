// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

class ATank;
/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
    private :
    ATank* GetControlledTank() const ;
    virtual void BeginPlay() override;
    virtual void Tick( float DeltaTime ) override;
    void AimTowardsCrosshair();
    bool GetSightRayHitLocation(FVector& OutHitLocation) const;
    UPROPERTY(EditDefaultsOnly) float CrossHairXLocation = 0.5;
    UPROPERTY(EditDefaultsOnly) float CrossHairYLocation = 0.3333;

    bool GetLoocDirection(FVector2D ScreenLocation,FVector& lookDirection) const;
    bool GetLookVectorHitLocation(FVector lookDirection ,FVector& OutHitLocation) const;
    UPROPERTY(EditDefaultsOnly) float LineTraceRange = 1000000;

};
