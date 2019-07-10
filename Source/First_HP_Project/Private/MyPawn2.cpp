// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn2.h"

// Sets default values
AMyPawn2::AMyPawn2()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn2::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

