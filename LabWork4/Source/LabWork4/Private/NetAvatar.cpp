#include "NetAvatar.h"
#include "GameFrameWork/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Net/UnrealNetwork.h"

ANetAvatar::ANetAvatar() :
	MovementScale(1.0f)
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
}

void ANetAvatar::BeginPlay()
{
	Super::BeginPlay();

	if (GetCapsuleComponent())
	{
		GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ANetAvatar::OnOverlapBegin);
	}

	Camera->bUsePawnControlRotation = false;
	SpringArm->bUsePawnControlRotation = true;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
}

void ANetAvatar::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ANetAvatar, bHoldingRunKey);
	DOREPLIFETIME(ANetAvatar, CanInv);
}

void ANetAvatar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &ACharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Lookup", this, &ACharacter::AddControllerPitchInput);

	PlayerInputComponent->BindAxis("MoveForward", this, &ANetAvatar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ANetAvatar::MoveRight);
	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Pressed, this, &ANetAvatar::RunPressed);
	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Released, this, &ANetAvatar::RunReleased);

}

void ANetAvatar::MoveForward(float Scale)
{
	FRotator Rotation = GetController()->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
	FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(ForwardDirection, MovementScale * Scale);
}

void ANetAvatar::MoveRight(float Scale)
{
	FRotator Rotation = GetController()->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
	FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(ForwardDirection, MovementScale * Scale);
}

void ANetAvatar::OnRep_UpdateMovementParams()
{
	if (bHoldingRunKey)
	{
		GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = 300.0f;
	}
}

void ANetAvatar::OnRep_CanInv()
{
	// CanInv deðiþkeni deðiþtiðinde yapýlacak iþlemler
}

void ANetAvatar::RunPressed()
{
	if (HasAuthority())
	{
		bHoldingRunKey = true;
		OnRep_UpdateMovementParams();
	}
	else
	{
		ServerStartRunning();
	}
}

void ANetAvatar::RunReleased()
{
	if (HasAuthority())
	{
		bHoldingRunKey = false;
		OnRep_UpdateMovementParams();
	}
	else
	{
		ServerStopRunning();
	}
}

void ANetAvatar::CollectItem(FString ItemName)
{
	if (ItemName == "Cape")
	{
		CanInv = true;
	}
}

void ANetAvatar::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		FString ItemName = OtherActor->GetName();
		CollectItem(ItemName);
	}
}

void ANetAvatar::ServerStartRunning_Implementation()
{
	RunPressed();
}

void ANetAvatar::ServerStopRunning_Implementation()
{
	RunReleased();
}
