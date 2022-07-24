// Fill out your copyright notice in the Description page of Project Settings.


#include "buildingpart.h"


// Sets default values
Abuildingpart::Abuildingpart()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    

}

// Called when the game starts or when spawned
void Abuildingpart::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Abuildingpart::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

