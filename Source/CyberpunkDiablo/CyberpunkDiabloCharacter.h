// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Character.h"
#include "CyberpunkDiabloCharacter.generated.h"

UCLASS(Blueprintable)
class ACyberpunkDiabloCharacter : public ACharacter
{
	GENERATED_BODY()
	ACyberpunkDiabloCharacter();

	void BeginPlay();

	void Tick(float DeltaTime);
};

