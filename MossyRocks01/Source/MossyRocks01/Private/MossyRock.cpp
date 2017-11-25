// Flynn's Rad Copyright.

#include "MossyRock.h"


// Sets default values
AMossyRock::AMossyRock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    Rock = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RockMesh"));
}

// Called when the game starts or when spawned
void AMossyRock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMossyRock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

