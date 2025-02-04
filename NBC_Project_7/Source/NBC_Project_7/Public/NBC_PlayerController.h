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

	//사람 용
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* JumpAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* LookAction;
	

	//드론 용
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputDronMappingContext;

	//연습겸 인풋 맵핑 컨텍스트 교체용
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Change")
	UInputMappingContext* InputChangeContext;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input|Change")
	UInputAction* MappingChangeAction;


	//캐릭터 교체용
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn")
	TSubclassOf<APawn> HumanPawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn")
	TSubclassOf<APawn> DronePawn;



	
protected:
	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

private:

	//휴먼인지 아닌지 확인
	bool IsHuman;
	//맵핑 교체 
	void Change();

};
