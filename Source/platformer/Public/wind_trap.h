// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "wind_trap.generated.h"

UCLASS()
class PLATFORMER_API Awind_trap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Awind_trap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
