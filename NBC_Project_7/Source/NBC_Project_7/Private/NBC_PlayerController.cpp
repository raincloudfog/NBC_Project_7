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
	//Pawn���� �ٸ��� Controller�� Super���� �ֳ����� �̰� ��� ������ �ȵȰ�
	Super::SetupInputComponent(); 

	if (!InputComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("InputComponent is NULL"));
		return;
	}

	//���Ӹ�忡�� ���� �÷��̾� ��������
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				//���� �÷��̾ �켱 ��������
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

	//���ؽ�Ʈ ���� �� �߰�
	if (UEnhancedInputLocalPlayerSubsystem* InputSubsystem = GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
	{
		if (IsHuman && InputMappingContext)
		{
			//����ý��ۿ��� �������شٴ� �� �Ű������� �״�� ����
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
