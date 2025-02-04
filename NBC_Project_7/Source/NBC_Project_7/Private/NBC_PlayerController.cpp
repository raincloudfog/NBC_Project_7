#include "NBC_PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include <EnhancedInputComponent.h>

ANBC_PlayerController::ANBC_PlayerController()
{
}

void ANBC_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	

}

void ANBC_PlayerController::SetupInputComponent()
{
	//Pawn과는 다르게 Controller에 Super에는 있나보다 이거 없어서 실행이 안된것
	Super::SetupInputComponent(); 

	if (!InputComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("InputComponent is NULL"));
		return;
	}

	//게임모드에서 로컬 플레이어 가져오기
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				//로컬 플레이어에 우선 순위설정
				Subsystem->AddMappingContext(InputMappingContext, 0);
				IsHuman = true;
			}
			if (InputChangeContext)
			{
				Subsystem->AddMappingContext(InputChangeContext, 2);
			}
		}
	}

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		if (MappingChangeAction)
		{
			EnhancedInputComponent->BindAction(
				MappingChangeAction,
				ETriggerEvent::Triggered,
				this,
				&ANBC_PlayerController::Change
			);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("EnhancedInputComponent is NULL"));
	}
}

void ANBC_PlayerController::Change()
{
	UE_LOG(LogTemp, Warning, TEXT("NBC_PlayerController::Input P"));
	APawn* CurrentPawn = GetPawn();

	
	TSubclassOf<APawn> NewPawnClass = IsHuman ? DronePawn : HumanPawn;
	UInputMappingContext* NewIMC = IsHuman ? InputDronMappingContext : InputMappingContext;

	//컨텍스트 삭제 및 추가
	if (UEnhancedInputLocalPlayerSubsystem* InputSubsystem = GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
	{
		if (IsHuman && InputMappingContext)
		{
			//서브시스템에서 삭제해준다는 것 매개변수는 그대로 있음
			InputSubsystem->RemoveMappingContext(InputMappingContext);
		}
		else if (!IsHuman && InputDronMappingContext)
		{
			InputSubsystem->RemoveMappingContext(InputDronMappingContext);
		}

		if (NewIMC)
		{
			InputSubsystem->AddMappingContext(NewIMC, 0);
		}
	}
	

	if (NewPawnClass && CurrentPawn)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;

		/*APawn* NewPawn = GetWorld()->SpawnActor<APawn>(NewPawnClass, CurrentPawn->GetActorLocation(), CurrentPawn->GetActorRotation(), SpawnParams);*/

		APawn* NewPawn = GetWorld()->SpawnActor<APawn>(NewPawnClass, CurrentPawn->GetActorLocation(), FRotator(0,0,0), SpawnParams);



		if (NewPawn)
		{
			Possess(NewPawn);

			CurrentPawn->Destroy();
		}
	}

	

	IsHuman = !IsHuman;
}
