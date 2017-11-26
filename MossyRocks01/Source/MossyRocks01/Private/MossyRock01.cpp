// Flynn's Rad Copyright.

#include "MossyRock01.h"


// Sets default values
AMossyRock01::AMossyRock01()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    Rock = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RockMesh"));

}

// Called when the game starts or when spawned
void AMossyRock01::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMossyRock01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    EnableMovement();

}

// Called to bind functionality to input
void AMossyRock01::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
    InputComponent->BindAxis("Rotate", this, &AMossyRock01::SpinRock);
}

void AMossyRock01::EnableMovement()
{
    RotationDirection = GetRotationDirection(RotationDirection, MovementInput.Y);
    
    SetActorRotation(FMath::RInterpTo(GetActorRotation(), FRotator(0, RotationDirection, 0), (GetWorld()->GetDeltaSeconds()), 160));
}

float AMossyRock01::GetRotationDirection(float Speed, float Direction)
{
    float NewDirection = (GetWorld()->GetDeltaSeconds()) * (Direction * MovementSpeed);
    float InterpolatedDirection = FMath::FInterpTo(Speed, NewDirection, (GetWorld()->GetDeltaSeconds()), 4.0);
    
    CurrentSpeed = InterpolatedDirection;
    return InterpolatedDirection;
}

void AMossyRock01::SpinRock(float AxisValue)
{
    MovementInput.Y = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}

