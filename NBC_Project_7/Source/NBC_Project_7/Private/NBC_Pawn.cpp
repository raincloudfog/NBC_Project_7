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
	fDownDisTance = 89; // 캡슐 컴포넌트 의 사이즈 보다 길게 해줬지만 캡슐 컴포넌트의 길이를 알수 있는 함수 변수 가 있다면 사용 해도 좋아보임
	fAirMoveSpeed = 0.3f;

	Acceleration = 5.0f;
	MaxSpeed = 5000.0f;

	//현재위치 저장해주기
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
	//Super::SetupPlayerInputComponent(PlayerInputComponent); 액터는 없음

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

	//값에서 사용할 값들만 가져오기 
	const FVector2D MoveInput = value.Get<FVector2D>();
	
	FVector MoveVelocity = FVector::ZeroVector;

	if (!FMath::IsNearlyZero(MoveInput.X))
	{		
		//AddActorLocalOffset(MoveInput.X * FVector::ForwardVector * GetWorld()->DeltaTimeSeconds * fNormalSpeed);

		//MoveVelocity += MoveInput.X * FVector::ForwardVector;
		MoveVelocity += MoveInput.X * GetActorForwardVector(); // FVector정면은 월드좌표!! , 액터 정면이 로컬좌표!!
		
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

	//공중에서는 감속
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

			//점프 
			FVelocity.Z = fJumpForce;

			//수평 가속도 
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
		//FVelocity.Z = GetActorLocation().Z; // 점프를 놓는 순간 더이상 점프되지 않도록 하기 // 도중에 멈추는 느낌나서 제외
		bPressedJump = false;
	}
}

void ANBC_Pawn::Look(const FInputActionValue& value)
{
	FVector2D  LookInput = value.Get<FVector2D>();
	
	
	//이 회전은 컨트롤러 회전으로 캐릭터일 경우 동기화 된다고 한다.
	AddControllerYawInput(LookInput.X);
	AddControllerPitchInput(LookInput.Y);


	//하지만 폰에서는 동기화하려면 수동으로 동기화 해주어야 한다고 한다.
	FRotator ControllerRotation = GetController()->GetControlRotation();
	FRotator NewRotation = FRotator(0.0f, ControllerRotation.Yaw, 0.0f); // Yaw만 동기화
	SetActorRotation(NewRotation);
}

void ANBC_Pawn::Jump()
{
	//점프 눌린상태에서 액터더해주기
	// 1. 점프시는 중력 제거 2. 중력 있는상태에서 점프 힘을 높게 주기	
	
}



void ANBC_Pawn::Gravity()
{

	//가속도를 계속  더해준다.
	FVelocity += FVector(0,0, fGravity);

	//가속도 구하는공식  가속도 = 속도의 변화량  / 시간의 변화량 

	//점프 아직 안끝남
	//공중인데도 체크가 된다..
	IsAir = !CheckGround(); // ! 값으로 값 반대로 주기
	if (IsAir == false)  // 공중이 아니라면 중력 0
	{
		//땅이므로 0으로 바꿔주기
		//계속 이렇게 체크 하게 되서 고민
		FVelocity.Z =  0;
	}	
}

//지형 감지
bool ANBC_Pawn::CheckGround()
{	
	//충돌 감지
	//FVector Location = RootCapsuleComp->GetComponentLocation();
	FVector Location = GetActorLocation();
	FVector EndLocation = Location + FVector(0, 0, -1) * fDownDisTance; // 아래 방향 지정

	FHitResult HitResult;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this); // 현재 객체 무시

	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Location, EndLocation, ECC_Visibility, CollisionParams); //현재 객체 무시 꼭 넣어주기..
	/*bool bHit = GetWorld()->SweepSingleByChannel(HitResult, Location, EndLocation, FQuat::Identity,
		ECC_Visibility,
		FCollisionShape::MakeSphere(1));*/


	return bHit;

}

void ANBC_Pawn::Movement()
{
	//무브먼트에서 Target이 계속 증가하게 된거 확인
	FVector NewLocation;
	if (IsAir)
	{

		/*const FRotator Rotation = GetActorRotation();
		const FVector ForwardVector = FRotationMatrix(Rotation).GetUnitAxis(EAxis::X);
		const FVector RightVector = FRotationMatrix(Rotation).GetUnitAxis(EAxis::Y);

		FVector FMovement = ForwardVector * FAccelFVector.X + RightVector * FAccelFVector.Y;
		FMovement.Z = FVelocity.Z;

		NewLocation = FMovement * GetWorld()->DeltaTimeSeconds;*/

		// 다음 위치 지정
		NewLocation = FVelocity * GetWorld()->DeltaTimeSeconds;
		//x, y 축 이동에 가속도 추가
		NewLocation.X += FAccelFVector.X * GetWorld()->DeltaTimeSeconds;
		NewLocation.Y += FAccelFVector.Y * GetWorld()->DeltaTimeSeconds; // 추가로 현재 가속도 더해주기

		//월드 좌표로 이동
		//AddMovementInput(For) // 하나 건진 코드
		
	}
	else {
		NewLocation = FVelocity * GetWorld()->DeltaTimeSeconds;
		//AddActorLocalOffset(NewLocation, true);

	}
	SetActorLocation(GetActorLocation() + NewLocation, true);

	//SetActorLocation(NewLocation, true);//스윕 설정해주기	 // SetActorLocation 월드 방식으로 움직인다는걸 까먹음
	
}





