// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "CyberpunkDiabloCharacter.h"
#include "CyberpunkWeaponClass.h"
#include "CyberpunkDiabloPlayer.generated.h"

UCLASS()
class CYBERPUNKDIABLO_API ACyberpunkDiabloPlayer : public ACyberpunkDiabloCharacter
{
	GENERATED_BODY()
public:
	ACyberpunkDiabloPlayer();
	virtual void Tick(float DeltaTime);
	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

protected:

	

	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	ACyberpunkWeaponClass *CurrentWeapon;
	
};
