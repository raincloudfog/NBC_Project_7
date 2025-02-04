// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC_Drone.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "NBC_PlayerController.h"

// Sets default values
ANBC_Drone::ANBC_Drone()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RootComponent"));
	SetRootComponent(Capsule);

	SkelMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkelMesh->SetupAttachment(Capsule);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(Capsule);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	fSpeed = 300.0f;
	fDecelerationRate = 0.1f;
	FVelocity = FVector::ZeroVector;
}

// Called when the game starts or when spawned
void ANBC_Drone::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void ANBC_Drone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVelocity *= (1 - fDecelerationRate);
	//FVelocity = FMath::Max(FVelocity, 0.0f); 
	//FVector.SizeSquared() : FVector에서 크기를 제곱한 값을 반환 x^2 + Y^2 + Z^2
	//KINDA_SMALL_NUMBER : 언리얼 매크로 로써 매우 작은 플로트 값을 나타냄 IsNearlyZero의 FVector버전
	if (FVelocity.SizeSquared() < KINDA_SMALL_NUMBER)
	{
		FVelocity = FVector::ZeroVector;
	}

	FVector NewVec = GetActorLocation() + FVelocity;
	SetActorLocation(NewVec, true);
}

// Called to bind functionality to input
void ANBC_Drone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (ANBC_PlayerController* PlayerController =
			Cast<ANBC_PlayerController>(GetController()))
		{
			if (PlayerController->MoveAction)
			{
				EnhancedInput->BindAction(
					PlayerController->MoveAction,
					ETriggerEvent::Triggered,
					this,
					&ANBC_Drone::Move
				);
			}

			if (PlayerController->LookAction)
			{
				EnhancedInput->BindAction(
					PlayerController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&ANBC_Drone::Look
				);
			}
		}

	}
}

void ANBC_Drone::Move(const FInputActionValue& Value)
{
	const FVector MoveInput = Value.Get<FVector>();

	FVector MoveVec = FVector::ZeroVector;

	if (!FMath::IsNearlyZero(MoveInput.X))
	{
		//MoveVec += MoveInput.X * GetActorForwardVector();
		//MoveVec += MoveInput.X * GetActorForwardVector() * GetWorld()->DeltaTimeSeconds * fSpeed;
	}
	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		//MoveVec += MoveInput.Y * GetActorRightVector();
		//AddActorLocalRotation(FRotator(0,45,0) * GetWorld()->DeltaTimeSeconds * -MoveInput.Y) ;
		SetActorRotation(GetActorRotation() + FRotator(0, 45, 0) * GetWorld()->DeltaTimeSeconds * -MoveInput.Y);
	}
	if (!FMath::IsNearlyZero(MoveInput.Z))
	{
		//MoveVec += MoveInput.Z * GetActorUpVector();
		AddActorLocalRotation(FRotator(45,0,0) * GetWorld()->DeltaTimeSeconds * MoveInput.Z);
	}

	MoveVec += MoveInput.X * GetActorForwardVector() * GetWorld()->DeltaTimeSeconds * fSpeed;

	UE_LOG(LogTemp, Warning, TEXT("%f , %f , %f"), MoveInput.X, MoveInput.Y, MoveInput.Z);
	FVelocity += MoveVec;
}

void ANBC_Drone::Look(const FInputActionValue& Value)
{
}

