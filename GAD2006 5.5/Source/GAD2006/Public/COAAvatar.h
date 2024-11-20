// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "COABaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "COAAvatar.generated.h"


/**
 *
 */
	UCLASS()
	class GAD2006_API ACOAAvatar : public ACOABaseCharacter
{
	GENERATED_BODY()

public:
	ACOAAvatar();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "COA")
	UCameraComponent* mCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "COA")
	USpringArmComponent* mSpringArm;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "COA")
	float RunSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "stats")
	float Stamina;

	UPROPERTY(EditAnywhere, Category = "stats")
	float MaxStamina;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "stats")
	float SGR;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "stats")
	float SDR;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "stats")
	float SRR;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "COA")
	bool bStaminaDrained;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "COA")
	bool bRunning;

private:
	void RunPressed();
	void RunReleased();
	void MoveForward(float value);
	void MoveRight(float value);
	void UpdateMovement();



};
