// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
//#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
//#include "CableComponent.h"
#include "Components/BoxComponent.h"

#include "mainPlayer.generated.h"

UCLASS()
class STACKINGBUILDINGGAME_API AmainPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AmainPlayer();
    
   // UPROPERTY(EditAnywhere)
   // class USpringArmComponent *springArm;
    
   UPROPERTY(EditAnywhere)
   class UCameraComponent *mainCamera;
    
    

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
/*
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	*/
	
};
