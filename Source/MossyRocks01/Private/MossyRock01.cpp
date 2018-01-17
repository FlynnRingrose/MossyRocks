// Flynn's Rad Copyright.

#include "MossyRock01.h"


// Sets default values
AMossyRock01::AMossyRock01()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    Rock = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RockMesh"));
    RootComponent = Rock;
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
    
    TouchedMoss PlayerHoveredMoss = GetPlayerHoverMossyPoint(GetPlayerController());
    if(PlayerHoveredMoss.Moss != nullptr && PlayerHoveredMoss.TouchedItem == 0)
    {
        GrowMoss(PlayerHoveredMoss.Moss);
    }
}

// Called to bind functionality to input
void AMossyRock01::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
    //Execute SpinRock() every frame and pass it the current axis value (-1 to 1).
    InputComponent->BindAxis("Rotate", this, &AMossyRock01::SpinRock);
}

//Set actor's rotation every frame to its current rotation plus current value of RockInput.X.
void AMossyRock01::EnableMovement()
{
    FRotator NewRotation = GetActorRotation();
    NewRotation.Yaw += RockInput.X;
    SetActorRotation(NewRotation);
}

//Executed every frame. AxisValue is -1 to 1.
void AMossyRock01::SpinRock(float AxisValue)
{
    RockInput.X = AxisValue;
}

APlayerController* AMossyRock01::GetPlayerController()
{
    APlayerController* ThisRocksController = Cast<APlayerController>(GetController()); //Creates a pointer to the current controller.
    if (ThisRocksController != nullptr) { return ThisRocksController; }
    else { UE_LOG(LogTemp, Warning, TEXT("No player controller!")); }
    return nullptr;
}

TouchedMoss AMossyRock01::GetPlayerHoverMossyPoint(APlayerController* ThisRocksController)
{
    float LocationX;
    float LocationY;
    ThisRocksController->GetMousePosition(LocationX, LocationY);
    FVector2D MousePosition(LocationX, LocationY);
    FHitResult HitResult;
    const bool bTraceComplex = false;

    ThisRocksController->GetHitResultAtScreenPosition(MousePosition, ECC_Visibility, bTraceComplex, HitResult);
        
    UMossyPoint01* TouchedMossPoint = Cast<UMossyPoint01>(HitResult.GetComponent());
    
    return TouchedMoss {TouchedMossPoint, HitResult.Item};
}

void AMossyRock01::GrowMoss (UMossyPoint01* TouchedMossPoint)
{
    FTransform OutInstanceTransform;
        
    TouchedMossPoint->GetInstanceTransform(0, OutInstanceTransform);
        
    UE_LOG(LogTemp, Warning, TEXT("Touched moss location is: %s"), *OutInstanceTransform.GetTranslation().ToString());
        
    TouchedMossPoint->RemoveInstance(0);
    SpawnNewComponent(bpMossyStaticMesh, OutInstanceTransform);
}

UMossyStaticMesh01* AMossyRock01::SpawnNewComponent(UClass* ComponentClassToSpawn, FTransform& SpawnLocation)
{
    check(ComponentClassToSpawn->IsChildOf(UMossyStaticMesh01::StaticClass()));
    
    UMossyStaticMesh01* SpawnedMoss = NewObject<UMossyStaticMesh01>(GetTransientPackage(), ComponentClassToSpawn);
    
    SpawnedMoss->AttachToComponent(Rock, FAttachmentTransformRules::KeepRelativeTransform);
    SpawnedMoss->SetWorldTransform(SpawnLocation);
    SpawnedMoss->RegisterComponentWithWorld(GetWorld());
    
    UE_LOG(LogTemp, Warning, TEXT("Spawning moss."));
    
    return SpawnedMoss;
}

void AMossyRock01::SpawnNewMoss(FTransform& SpawnLocation)
{
    
}








