// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "CyberpunkDiablo.h"
#include "CyberpunkDiabloCharacter.h"

// Sets default values
ACyberpunkDiabloPlayer::ACyberpunkDiabloPlayer()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACyberpunkDiabloPlayer::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACyberpunkDiabloPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACyberpunkDiabloPlayer::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}
