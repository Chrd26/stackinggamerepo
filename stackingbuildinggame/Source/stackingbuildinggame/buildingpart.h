// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "buildingpart.generated.h"

UCLASS()
class STACKINGBUILDINGGAME_API Abuildingpart : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Abuildingpart();
   UPROPERTY(EditAnywhere)
    UBoxComponent* collision;
    
    

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
