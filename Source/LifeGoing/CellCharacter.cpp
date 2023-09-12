// Fill out your copyright notice in the Description page of Project Settings.


#include "CellCharacter.h"

// Sets default values
ACellCharacter::ACellCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACellCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACellCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACellCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACellCharacter::SpawnActor(FTransform spawnPos)
{
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	GetWorld()->SpawnActor<AActor>(actorBPToSpawn, spawnPos, spawnParams);
}