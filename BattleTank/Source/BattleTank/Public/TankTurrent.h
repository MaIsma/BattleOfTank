// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTurrent.generated.h"

/**
 * 
 */
UCLASS(meta=(BlueprintSpawnableComponent))//,hidecategories =  ("Collision"))
class BATTLETANK_API UTankTurrent : public UStaticMeshComponent
{
	GENERATED_BODY()
	
	
public:
    void Rotate(float RelativeSpeed);

private:
    UPROPERTY(EditDefaultsOnly,Category = "Setup") float MaxDegreePerSecond = 25 ;
    
};
