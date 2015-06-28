// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "CyberpunkDiablo.h"
#include "CyberpunkDiabloCharacter.h"

// Sets default values
ACyberpunkDiabloCharacter::ACyberpunkDiabloCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACyberpunkDiabloCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACyberpunkDiabloCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACyberpunkDiabloCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}
