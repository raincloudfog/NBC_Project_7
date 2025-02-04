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
	

	//�������Ʈ Ŭ�������� ������Ʈ �߰��� ��Ŭ���ؼ� ������� ã��.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	UCapsuleComponent* RootCapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	USkeletalMeshComponent* SkelMeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	UCameraComponent* CameraComp;

	//�÷��̾�� �󸶳� �Ʒ��� ������ �ؾߵǴ���
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VALUE")
	float fDownDisTance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VALUE")
	float fJumpForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VALUE")
	float Acceleration; // ���ӵ�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VALUE")
	float MaxSpeed; // �ִ�ӵ�

	//��ǥ�� �����Ÿ����� ������ �ٷ� �̵�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VALUE")
	float LerpValue;

	// �𸮾� ĳ���� Ŭ������ ���� bool������ ������ �տ� �ҹ��� b�� �ٴ� �� Ȯ��
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VALUE")
	bool bPressedJump;

	//���� ���ӵ��� ����� ����
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

	//�߷������� �ѹ��� �߻�
	void Movement();
	
	

private:
	float fNormalSpeed;
	float fAirMoveSpeed;

	//�����Ҷ� �̵� ���ӵ�
	FVector FAccelFVector;

	bool IsAir;

	//�߷�
	const float fGravity = -9.8f;

	

	//���� ������ "������"���� ������ "�߷�"��ŭ ���ӵ� ����
	//�׸��� ���� �� ���ӵ��� �̿��ؼ� �Է� ������ ĳ���Ͱ� Velocity��ŭ õõ�� �̵��ϰ� �ϴ¹��
	//�ƴϸ� �����ϰ� �׳� �߷¸� ���� �ص� �ɵ��ϴ�.


	//���� ��� 1�� ��� ���������� ���� Ű �������� �����ϵ��� bool�� �ֱ�
	//��� 2�� �ڵ鷯 ? ����غ��� Ÿ�̸ӵ� ����÷��̿��� ����ǰ� �������� ���� ������ ������� ����Ǿ���.
};
