// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Character.h"
#include "CyberpunkDiabloCharacter.generated.h"

UCLASS(Blueprintable)
class ACyberpunkDiabloCharacter : public ACharacter
{
public:
	GENERATED_BODY()
	ACyberpunkDiabloCharacter();

	virtual void BeginPlay();

	virtual void Tick(float DeltaTime);

	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent);
	
};

