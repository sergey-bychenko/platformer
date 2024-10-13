#include "wind_zone.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AWindZone::AWindZone()
{
    PrimaryActorTick.bCanEverTick = true;

    WindBox = CreateDefaultSubobject<UBoxComponent>(TEXT("WindBox"));
    WindBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    WindBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
    WindBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
    RootComponent = WindBox;

    WindDirection = FVector(1, 0, 0);
    WindStrength = 1500.0f; 
}

void AWindZone::BeginPlay()
{
    Super::BeginPlay();

    
    WindBox->OnComponentBeginOverlap.AddDynamic(this, &AWindZone::OnOverlapBegin);
    WindBox->OnComponentEndOverlap.AddDynamic(this, &AWindZone::OnOverlapEnd);
}

void AWindZone::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{
    //ACharacter* Character = Cast<ACharacter>(OtherActor);
    //if (Character)
    //{
    //   
    //    FVector Force = WindDirection * WindStrength;
    //    Character->LaunchCharacter(Force, true, true);
    //}
}

void AWindZone::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}


