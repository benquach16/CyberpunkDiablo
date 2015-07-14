// Fill out your copyright notice in the Description page of Project Settings.

#include "CyberpunkDiablo.h"
#include "BlockTestClass.h"

ABlockTestClass::ABlockTestClass(const class FObjectInitializer& PCIP)
{
	MyBlock = PCIP.CreateAbstractDefaultSubobject<UStaticMeshComponent>(this, TEXT("SolidBlock"));

	//static ConstructorHelpers::FObjectFinder <UStaticMesh>StaticMesh(TEXT("StaticMesh'/Game/Meshes/CubeMesh"));
	//static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("MaterialInstanceConstant'/Game/Materials/M_Basic_Floor.M_Basic_Floor'"));

	//MyBlock->SetStaticMesh(StaticMesh.Object);
	//MyBlock->SetMaterial(0, Material.Object);
}

// Called when the game starts or when spawned
void ABlockTestClass::BeginPlay()
{
	Super::BeginPlay();
	
}

