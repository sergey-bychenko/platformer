// Fill out your copyright notice in the Description page of Project Settings.


#include "damege_trap.h"

// Sets default values
Adamege_trap::Adamege_trap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Adamege_trap::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Damege trap is working"));
}

// Called every frame
void Adamege_trap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

