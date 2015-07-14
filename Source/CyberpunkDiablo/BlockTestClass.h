// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "BlockTestClass.generated.h"

UCLASS()
class CYBERPUNKDIABLO_API ABlockTestClass : public AActor
{
	GENERATED_BODY()
	
public:	
	ABlockTestClass(const class FObjectInitializer& PCIP);
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

	TSubobjectPtr<UStaticMeshComponent> MyBlock;
	
};
