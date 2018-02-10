// Flynn's Rad Copyright.

#include "MossyRock.h"

AMossyRock::AMossyRock()
{
    PrimaryActorTick.bCanEverTick = true;
    
    Rock = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RockMesh"));
    RootComponent = Rock;
}

void AMossyRock::BeginPlay()
{
    Super::BeginPlay();
}

void AMossyRock::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    SetRockRotation();
    
    if(GetPlayerController() != nullptr)
    {
        PlayerHoveredMoss = GetMossyPointUnderCursor(GetPlayerController());
    }
    
    if(PlayerHoveredMoss.Moss != nullptr && PlayerHoveredMoss.TouchedItem == 0)
    {
        GrowMoss(PlayerHoveredMoss.Moss);
    }
}

void AMossyRock::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    //Execute SpinRock() every frame and pass it the current axis value (-1 to 1).
    InputComponent->BindAxis("Rotate", this, &AMossyRock::UpdateRockRotation);
}

//Set actor's rotation every frame to its current rotation plus current value of RockInput.X.
void AMossyRock::SetRockRotation()
{
    FRotator NewRotation = GetActorRotation();
    NewRotation.Yaw += RockInput.X;
    SetActorRotation(NewRotation);
}

//Executed every frame by SetupPlayerInputComponent(). AxisValue is -1 to 1.
void AMossyRock::UpdateRockRotation(float AxisValue)
{
    RockInput.X = AxisValue;
}

APlayerController* AMossyRock::GetPlayerController() const
{
    APlayerController* ThisRocksController = Cast<APlayerController>(GetController()); //Creates a pointer to the current controller.
    if (ThisRocksController != nullptr) { return ThisRocksController; }
    else { UE_LOG(LogTemp, Warning, TEXT("No player controller!")); }
    return nullptr;
}

TouchedMoss AMossyRock::GetMossyPointUnderCursor(APlayerController* ThisRocksController) const
{
    float LocationX;
    float LocationY;
    ThisRocksController->GetMousePosition(LocationX, LocationY);
    FVector2D MousePosition(LocationX, LocationY);
    FHitResult HitResult;
    const bool bTraceComplex = false;
    
    ThisRocksController->GetHitResultAtScreenPosition(MousePosition, ECC_Visibility, bTraceComplex, HitResult);
    
    UMossyPoint* TouchedMossPoint = Cast<UMossyPoint>(HitResult.GetComponent());
    
    return TouchedMoss {TouchedMossPoint, HitResult.Item};
}

void AMossyRock::GrowMoss (UMossyPoint* TouchedMossPoint)
{
    FTransform OutInstanceTransform;
    
    TouchedMossPoint->GetInstanceTransform(0, OutInstanceTransform);
    
    UE_LOG(LogTemp, Warning, TEXT("Touched moss location is: %s"), *OutInstanceTransform.GetTranslation().ToString());
    
    TouchedMossPoint->RemoveInstance(0);
    SpawnNewComponent(bpMossyClump, OutInstanceTransform);
}

UMossyClump* AMossyRock::SpawnNewComponent(UClass* ComponentClassToSpawn, FTransform& SpawnLocation)
{
    check(ComponentClassToSpawn->IsChildOf(UMossyClump::StaticClass()));
    
    UMossyClump* SpawnedMoss = NewObject<UMossyClump>(this, ComponentClassToSpawn);
    
    SpawnedMoss->AttachToComponent(Rock, FAttachmentTransformRules::KeepRelativeTransform);
    SpawnedMoss->SetRelativeTransform(SpawnLocation);
    SpawnedMoss->RegisterComponentWithWorld(GetWorld());
    
    CurrentMossCount++;
    
    return SpawnedMoss;
}
