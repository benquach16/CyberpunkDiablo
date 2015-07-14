// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "CyberpunkDiablo.h"
#include "CyberpunkDiabloPlayerController.h"
#include "AI/Navigation/NavigationSystem.h"

ACyberpunkDiabloPlayerController::ACyberpunkDiabloPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ACyberpunkDiabloPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// keep updating the destination every tick while desired
	if (bMoveToMouseCursor)
	{
		MoveToMouseCursor();
	}
}

void ACyberpunkDiabloPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAction("SetDestination", IE_Pressed, this, &ACyberpunkDiabloPlayerController::OnSetDestinationPressed);
	InputComponent->BindAction("SetDestination", IE_Released, this, &ACyberpunkDiabloPlayerController::OnSetDestinationReleased);

	// support touch devices 
	InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ACyberpunkDiabloPlayerController::MoveToTouchLocation);
	InputComponent->BindTouch(EInputEvent::IE_Repeat, this, &ACyberpunkDiabloPlayerController::MoveToTouchLocation);
}

void ACyberpunkDiabloPlayerController::MoveToMouseCursor()
{
	// Trace to see what is under the mouse cursor
	FHitResult Hit;
	GetHitResultUnderCursor(ECC_Visibility, false, Hit);

	if (Hit.bBlockingHit)
	{
		// We hit something, move there
		SetNewMoveDestination(Hit.ImpactPoint);
	}
}

void ACyberpunkDiabloPlayerController::MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	FVector2D ScreenSpaceLocation(Location);

	// Trace to see what is under the touch location
	FHitResult HitResult;
	GetHitResultAtScreenPosition(ScreenSpaceLocation, CurrentClickTraceChannel, true, HitResult);
	if (HitResult.bBlockingHit)
	{
		// We hit something, move there
		SetNewMoveDestination(HitResult.ImpactPoint);
	}
}

void ACyberpunkDiabloPlayerController::SetNewMoveDestination(const FVector DestLocation)
{
	APawn* const Pawn = GetPawn();
	if (Pawn)
	{
		UNavigationSystem* const NavSys = GetWorld()->GetNavigationSystem();
		float const Distance = FVector::Dist(DestLocation, Pawn->GetActorLocation());

		// We need to issue move command only if far enough in order for walk animation to play correctly
		if (NavSys && (Distance > 120.0f))
		{
			NavSys->SimpleMoveToLocation(this, DestLocation);
		}
	}
}

void ACyberpunkDiabloPlayerController::OnSetDestinationPressed()
{
	// set flag to keep updating destination until released
	bMoveToMouseCursor = true;
}

void ACyberpunkDiabloPlayerController::OnSetDestinationReleased()
{
	// clear flag to indicate we should stop updating the destination
	bMoveToMouseCursor = false;
}

void ACyberpunkDiabloPlayerController::FireWeapon()
{
	//if the player has a weapon, fire it
}
