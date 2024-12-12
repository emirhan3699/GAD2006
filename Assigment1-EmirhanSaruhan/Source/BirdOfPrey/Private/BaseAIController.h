// Add your copyright details in the Project Settings Description page.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BasePlayerController.h"
#include "BaseGameAgent.h"
#include "BaseAIController.generated.h"

/**
 * AI Controller for managing agent behavior.
 */
UCLASS()
class ABaseAIController : public AAIController
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float TimeSinceLastFire;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bCurrentlyFiring;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float FireCooldown;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bNeedsAimUpdate;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABasePlayerController* CurrentTarget;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseGameAgent* AgentControlled;

public:

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void DetermineTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustAim(FVector TargetLocation);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EvaluateFireCondition();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void RefreshAim();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool CanStartFiring();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool CanCeaseFiring();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InitiateFiring();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CeaseFiring();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool NeedsAimUpdate();
};
