// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC_ActorComponent_Human.h"

// Sets default values for this component's properties
UNBC_ActorComponent_Human::UNBC_ActorComponent_Human()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNBC_ActorComponent_Human::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UNBC_ActorComponent_Human::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

