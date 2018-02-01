// Flynn's Rad Copyright.

#include "MossyRock.h"


// Sets default values
AMossyRock::AMossyRock()
{
    // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    
    Rock = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RockMesh"));
    RootComponent = Rock;
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
    EnableMovement();
    
    if(GetPlayerController() != nullptr)
    {
        PlayerHoveredMoss = GetPlayerHoverMossyPoint(GetPlayerController());
    }
    
    if(PlayerHoveredMoss.Moss != nullptr && PlayerHoveredMoss.TouchedItem == 0)
    {
        GrowMoss(PlayerHoveredMoss.Moss);
    }
}

// Called to bind functionality to input
void AMossyRock::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    //Execute SpinRock() every frame and pass it the current axis value (-1 to 1).
    InputComponent->BindAxis("Rotate", this, &AMossyRock::SpinRock);
}

//Set actor's rotation every frame to its current rotation plus current value of RockInput.X.
void AMossyRock::EnableMovement()
{
    FRotator NewRotation = GetActorRotation();
    NewRotation.Yaw += RockInput.X;
    SetActorRotation(NewRotation);
}

//Executed every frame. AxisValue is -1 to 1.
void AMossyRock::SpinRock(float AxisValue)
{
    RockInput.X = AxisValue;
}

APlayerController* AMossyRock::GetPlayerController()
{
    APlayerController* ThisRocksController = Cast<APlayerController>(GetController()); //Creates a pointer to the current controller.
    if (ThisRocksController != nullptr) { return ThisRocksController; }
    else { UE_LOG(LogTemp, Warning, TEXT("No player controller!")); }
    return nullptr;
}

TouchedMoss AMossyRock::GetPlayerHoverMossyPoint(APlayerController* ThisRocksController)
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
