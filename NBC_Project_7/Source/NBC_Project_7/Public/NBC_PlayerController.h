// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NBC_PlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
/**
 * 
 */
UCLASS()
class NBC_PROJECT_7_API ANBC_PlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:
	ANBC_PlayerController();

	//��� ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* JumpAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* LookAction;
	

	//��� ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputDronMappingContext;

	//������ ��ǲ ���� ���ؽ�Ʈ ��ü��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Change")
	UInputMappingContext* InputChangeContext;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Change")
	UInputAction* MappingChangeAction;


	//ĳ���� ��ü��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn")
	TSubclassOf<APawn> HumanPawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn")
	TSubclassOf<APawn> DronePawn;



	
protected:
	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

private:

	//�޸����� �ƴ��� Ȯ��
	bool IsHuman;
	//���� ��ü 
	void Change();

};
