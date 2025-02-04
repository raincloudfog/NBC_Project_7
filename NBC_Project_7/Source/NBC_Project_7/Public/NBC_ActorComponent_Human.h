// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NBC_ActorComponent_Human.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NBC_PROJECT_7_API UNBC_ActorComponent_Human : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNBC_ActorComponent_Human();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
