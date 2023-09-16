// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Cell.generated.h"

UCLASS(Abstract)
class LIFEGOING_API ACell : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACell();

	UPROPERTY(EditAnywhere)
		float HP;
		float speed;
		float hunger;

	UFUNCTION(BlueprintCallable)
		void ChangeHP(float hp);
		void ChangeSpeed();
		void ChangeHunger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
