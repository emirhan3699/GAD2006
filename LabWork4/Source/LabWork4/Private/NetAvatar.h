#pragma once

#include "CoreMinimal.h"
#include "NetBaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "NetAvatar.generated.h"

UCLASS()
class ANetAvatar : public ANetBaseCharacter
{
	GENERATED_BODY()

public:

	ANetAvatar();

	UPROPERTY(EditAnywhere)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_CanInv)
	bool CanInv;

	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_UpdateMovementParams)
	bool bHoldingRunKey;

	UPROPERTY(BlueprintReadWrite)
	float MovementScale;

	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	UFUNCTION(Server, Reliable)
	void ServerStartRunning();

	UFUNCTION(Server, Reliable)
	void ServerStopRunning();

private:
	UFUNCTION()
	void OnRep_UpdateMovementParams();

	UFUNCTION()
	void OnRep_CanInv();

	void MoveForward(float Amount);
	void MoveRight(float Amount);
	void RunPressed();
	void RunReleased();
	void CollectItem(FString ItemName);
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
