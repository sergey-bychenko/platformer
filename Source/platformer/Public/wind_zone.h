#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "wind_zone.generated.h"

UCLASS()
class PLATFORMER_API AWindZone : public AActor
{
    GENERATED_BODY()

public:
    AWindZone();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Wind")
    class UBoxComponent* WindBox;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wind")
    FVector WindDirection;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wind")
    float WindStrength;

    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};

