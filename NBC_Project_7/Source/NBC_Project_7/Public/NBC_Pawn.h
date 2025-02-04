// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "NBC_Pawn.generated.h"

class UCapsuleComponent;
class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;


UCLASS()
class NBC_PROJECT_7_API ANBC_Pawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ANBC_Pawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:	
	

	//블루프린트 클래스에서 컴포넌트 추가후 우클릭해서 헤더파일 찾음.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	UCapsuleComponent* RootCapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	USkeletalMeshComponent* SkelMeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	UCameraComponent* CameraComp;

	//플레이어보다 얼마나 아래에 감지를 해야되는지
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VALUE")
	float fDownDisTance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VALUE")
	float fJumpForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VALUE")
	float Acceleration; // 가속도
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VALUE")
	float MaxSpeed; // 최대속도

	//목표가 일정거리보다 가까울시 바로 이동
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VALUE")
	float LerpValue;

	// 언리얼 캐릭터 클래스를 보니 bool변수의 변수명 앞에 소문자 b가 붙는 걸 확인
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VALUE")
	bool bPressedJump;

	//현재 가속도가 적용된 벡터
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VALUE")
	FVector FVelocity;

	

protected:
	UFUNCTION()
	void Move(const FInputActionValue& value);
	UFUNCTION()
	void StopMoving(const FInputActionValue& value);
	UFUNCTION()
	void StartJump(const FInputActionValue& value);
	UFUNCTION()
	void StopJump(const FInputActionValue& value);
	UFUNCTION()
	void Look(const FInputActionValue& value);
	UFUNCTION()
	void Jump();
	UFUNCTION()
	void Gravity();
	UFUNCTION()
	bool CheckGround();

	//중력적용이 한번에 발생
	void Movement();
	
	

private:
	float fNormalSpeed;
	float fAirMoveSpeed;

	//점프할때 이동 가속도
	FVector FAccelFVector;

	bool IsAir;

	//중력
	const float fGravity = -9.8f;

	

	//현재 폰에서 "프레임"마다 폰에게 "중력"만큼 가속도 적용
	//그리고 현재 이 가속도를 이용해서 입력 받으면 캐릭터가 Velocity만큼 천천히 이동하게 하는방식
	//아니면 간단하게 그냥 중력만 적용 해도 될듯하다.


	//점프 방식 1번 계속 점프되지만 점프 키 누를때만 가능하도록 bool값 주기
	//방식 2번 핸들러 ? 사용해보기 타이머도 비긴플레이에서 실행되고 다음에도 실행 가능한 방식으로 진행되었다.
};
