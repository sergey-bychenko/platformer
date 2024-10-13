// Fill out your copyright notice in the Description page of Project Settings.


#include "wind_trap.h"

// Sets default values
Awind_trap::Awind_trap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Awind_trap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Awind_trap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

