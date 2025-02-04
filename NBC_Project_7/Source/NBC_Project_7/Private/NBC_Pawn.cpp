// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC_Pawn.h"
#include "Components/CapsuleComponent.h" 
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include <NBC_PlayerController.h>

// Sets default values
ANBC_Pawn::ANBC_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootCapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollision"));	
	SetRootComponent(RootCapsuleComp);

	RootCapsuleComp->SetCollisionProfileName(TEXT("BlockAllDynamic"));

	SkelMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkelMeshComp->SetupAttachment(RootCapsuleComp);

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(RootCapsuleComp);
	SpringArmComp->TargetArmLength = 400.0f;
	SpringArmComp->bUsePawnControlRotation = true;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp);
	CameraComp->bUsePawnControlRotation = false;

	
	fJumpForce = 500.0f;
	fNormalSpeed = 300.0f;
	fDownDisTance = 89; // ĸ�� ������Ʈ �� ������ ���� ��� �������� ĸ�� ������Ʈ�� ���̸� �˼� �ִ� �Լ� ���� �� �ִٸ� ��� �ص� ���ƺ���
	fAirMoveSpeed = 0.3f;

	Acceleration = 5.0f;
	MaxSpeed = 5000.0f;

	//������ġ �������ֱ�
	FVelocity = GetActorLocation();

	FAccelFVector = FVector::ZeroVector;

}

// Called when the game starts or when spawned
void ANBC_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
		
}

// Called every frame
void ANBC_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Movement();
	Gravity();
}

// Called to bind functionality to input
void ANBC_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent); ���ʹ� ����

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
					&ANBC_Pawn::Move
				);
			}

			if (PlayerController->MoveAction)
			{
				EnhancedInput->BindAction(
					PlayerController->MoveAction,
					ETriggerEvent::Completed,
					this,
					&ANBC_Pawn::StopMoving

				);
			}

			if (PlayerController->JumpAction)
			{
				EnhancedInput->BindAction(
					PlayerController->JumpAction,
					ETriggerEvent::Triggered,
					this,
					&ANBC_Pawn::StartJump
				);
			}
			if (PlayerController->JumpAction)
			{
				EnhancedInput->BindAction(
					PlayerController->JumpAction,
					ETriggerEvent::Completed,
					this,
					&ANBC_Pawn::StopJump
				);
			}
			if (PlayerController->LookAction)
			{
				EnhancedInput->BindAction(
					PlayerController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&ANBC_Pawn::Look
				);
			}
		}
	}

}

void ANBC_Pawn::Move(const FInputActionValue& value)
{
	if (!Controller) return;

	//������ ����� ���鸸 �������� 
	const FVector2D MoveInput = value.Get<FVector2D>();
	
	FVector MoveVelocity = FVector::ZeroVector;

	if (!FMath::IsNearlyZero(MoveInput.X))
	{		
		//AddActorLocalOffset(MoveInput.X * FVector::ForwardVector * GetWorld()->DeltaTimeSeconds * fNormalSpeed);

		//MoveVelocity += MoveInput.X * FVector::ForwardVector;
		MoveVelocity += MoveInput.X * GetActorForwardVector(); // FVector������ ������ǥ!! , ���� ������ ������ǥ!!
		
	}
	else {
		FVelocity.X = 0;
	}

	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		//AddActorLocalOffset(MoveInput.Y * FVector::RightVector * GetWorld()->DeltaTimeSeconds * fNormalSpeed);

		//MoveVelocity += MoveInput.Y * FVector::RightVector;
		MoveVelocity += MoveInput.Y * GetActorRightVector();

	}
	else {
		FVelocity.Y = 0;
	}

	//���߿����� ����
	if (IsAir)
	{
		MoveVelocity *= fAirMoveSpeed;
	}

	FVelocity.X = MoveVelocity.X * fNormalSpeed;
	FVelocity.Y = MoveVelocity.Y * fNormalSpeed;
	
}

void ANBC_Pawn::StopMoving(const FInputActionValue& value)
{
	FVelocity.X = 0; 
	FVelocity.Y = 0;
}

void ANBC_Pawn::StartJump(const FInputActionValue& value)
{
	if (value.Get<bool>())  
	{
		if (CheckGround())
		{
			UE_LOG(LogTemp, Warning, TEXT("CheckGround"));
			bPressedJump = true;

			//���� 
			FVelocity.Z = fJumpForce;

			//���� ���ӵ� 
			FAccelFVector = FVector(FVelocity.X, FVelocity.Y, 0);

			UE_LOG(LogTemp, Warning, TEXT("Jump   x : %f , y : %f"), FAccelFVector.X, FAccelFVector.Y);
		}
		else {
			bPressedJump = false;
			//UE_LOG(LogTemp, Warning, TEXT("NOGround"));
		}
	}
}

void ANBC_Pawn::StopJump(const FInputActionValue& value)
{
	if (!value.Get<bool>())
	{ 
		//FVelocity.Z = GetActorLocation().Z; // ������ ���� ���� ���̻� �������� �ʵ��� �ϱ� // ���߿� ���ߴ� �������� ����
		bPressedJump = false;
	}
}

void ANBC_Pawn::Look(const FInputActionValue& value)
{
	FVector2D  LookInput = value.Get<FVector2D>();
	
	
	//�� ȸ���� ��Ʈ�ѷ� ȸ������ ĳ������ ��� ����ȭ �ȴٰ� �Ѵ�.
	AddControllerYawInput(LookInput.X);
	AddControllerPitchInput(LookInput.Y);


	//������ �������� ����ȭ�Ϸ��� �������� ����ȭ ���־�� �Ѵٰ� �Ѵ�.
	FRotator ControllerRotation = GetController()->GetControlRotation();
	FRotator NewRotation = FRotator(0.0f, ControllerRotation.Yaw, 0.0f); // Yaw�� ����ȭ
	SetActorRotation(NewRotation);
}

void ANBC_Pawn::Jump()
{
	//���� �������¿��� ���ʹ����ֱ�
	// 1. �����ô� �߷� ���� 2. �߷� �ִ»��¿��� ���� ���� ���� �ֱ�	
	
}



void ANBC_Pawn::Gravity()
{

	//���ӵ��� ���  �����ش�.
	FVelocity += FVector(0,0, fGravity);

	//���ӵ� ���ϴ°���  ���ӵ� = �ӵ��� ��ȭ��  / �ð��� ��ȭ�� 

	//���� ���� �ȳ���
	//�����ε��� üũ�� �ȴ�..
	IsAir = !CheckGround(); // ! ������ �� �ݴ�� �ֱ�
	if (IsAir == false)  // ������ �ƴ϶�� �߷� 0
	{
		//���̹Ƿ� 0���� �ٲ��ֱ�
		//��� �̷��� üũ �ϰ� �Ǽ� ���
		FVelocity.Z =  0;
	}	
}

//���� ����
bool ANBC_Pawn::CheckGround()
{	
	//�浹 ����
	//FVector Location = RootCapsuleComp->GetComponentLocation();
	FVector Location = GetActorLocation();
	FVector EndLocation = Location + FVector(0, 0, -1) * fDownDisTance; // �Ʒ� ���� ����

	FHitResult HitResult;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this); // ���� ��ü ����

	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Location, EndLocation, ECC_Visibility, CollisionParams); //���� ��ü ���� �� �־��ֱ�..
	/*bool bHit = GetWorld()->SweepSingleByChannel(HitResult, Location, EndLocation, FQuat::Identity,
		ECC_Visibility,
		FCollisionShape::MakeSphere(1));*/


	return bHit;

}

void ANBC_Pawn::Movement()
{
	//�����Ʈ���� Target�� ��� �����ϰ� �Ȱ� Ȯ��
	FVector NewLocation;
	if (IsAir)
	{

		/*const FRotator Rotation = GetActorRotation();
		const FVector ForwardVector = FRotationMatrix(Rotation).GetUnitAxis(EAxis::X);
		const FVector RightVector = FRotationMatrix(Rotation).GetUnitAxis(EAxis::Y);

		FVector FMovement = ForwardVector * FAccelFVector.X + RightVector * FAccelFVector.Y;
		FMovement.Z = FVelocity.Z;

		NewLocation = FMovement * GetWorld()->DeltaTimeSeconds;*/

		// ���� ��ġ ����
		NewLocation = FVelocity * GetWorld()->DeltaTimeSeconds;
		//x, y �� �̵��� ���ӵ� �߰�
		NewLocation.X += FAccelFVector.X * GetWorld()->DeltaTimeSeconds;
		NewLocation.Y += FAccelFVector.Y * GetWorld()->DeltaTimeSeconds; // �߰��� ���� ���ӵ� �����ֱ�

		//���� ��ǥ�� �̵�
		//AddMovementInput(For) // �ϳ� ���� �ڵ�
		
	}
	else {
		NewLocation = FVelocity * GetWorld()->DeltaTimeSeconds;
		//AddActorLocalOffset(NewLocation, true);

	}
	SetActorLocation(GetActorLocation() + NewLocation, true);

	//SetActorLocation(NewLocation, true);//���� �������ֱ�	 // SetActorLocation ���� ������� �����δٴ°� �����
	
}





