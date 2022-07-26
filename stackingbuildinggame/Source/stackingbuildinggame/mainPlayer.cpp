// Fill out your copyright notice in the Description page of Project Settings.


#include "mainPlayer.h"


// Sets default values
AmainPlayer::AmainPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    //create components
    RootComponent = CreateDefaultSubobject<UPrimitiveComponent>(TEXT("Root Component"));
   //springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
    mainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
    
    //attach components
    
   
    //springArm->SetupAttachment(RootComponent);
   mainCamera->SetupAttachment(RootComponent);
    
    

}

// Called when the game starts or when spawned
void AmainPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AmainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/*
// Called to bind functionality to input
void AmainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

*/
