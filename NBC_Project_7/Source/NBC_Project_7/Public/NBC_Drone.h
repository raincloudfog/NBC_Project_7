// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "NBC_Drone.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UCapsuleComponent;
struct FInputActionValue;

UCLASS()
class NBC_PROJECT_7_API ANBC_Drone : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ANBC_Drone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:	
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCapsuleComponent* Capsule;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* Camera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* SkelMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Value")
	float fSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Value")
	float fDecelerationRate;

private:

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

	FVector FVelocity;

};
