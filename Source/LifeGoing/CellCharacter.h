// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CellCharacter.generated.h"

UCLASS()
class LIFEGOING_API ACellCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACellCharacter();

	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void SpawnActor(FTransform spawnPos);

	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor>	actorBPToSpawn;

	//UPROPERTY(EditAnywhere)
	//	FTransform spawnPos;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
