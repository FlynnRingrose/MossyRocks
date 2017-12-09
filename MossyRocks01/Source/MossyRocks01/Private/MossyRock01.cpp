// Flynn's Rad Copyright.

#include "MossyRock01.h"


// Sets default values
AMossyRock01::AMossyRock01()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    OnClicked.AddDynamic(this, &AMossyRock01::OnSelected);
    
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
    GrowClicked();
}

// Called to bind functionality to input
void AMossyRock01::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
    //Execute SpinRock() every frame and pass it current axis value (-1 to 1).
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

void AMossyRock01::OnSelected(AActor* ClickedActor, FKey ButtonPressed)
{
    UE_LOG(LogTemp, Warning, TEXT("Pawn selected"));
}

void AMossyRock01::GrowClicked()
{
    APlayerController* ThisRocksController = Cast<APlayerController>(GetController());
    if (ThisRocksController != nullptr)
    {
        float LocationX;
        float LocationY;
        ThisRocksController->GetMousePosition(LocationX, LocationY);
        FVector2D MousePosition(LocationX, LocationY);
        FHitResult HitResult;
        const bool bTraceComplex = false;

        if (ThisRocksController->GetHitResultAtScreenPosition(MousePosition, ECC_Visibility, bTraceComplex, HitResult) == true)
        {
            UMossyStaticMesh01* TouchedMoss = Cast<UMossyStaticMesh01>(HitResult.GetComponent());
            if(TouchedMoss != nullptr && TouchedMoss->bHiddenInGame == true)
            {
                UE_LOG(LogTemp, Warning, TEXT("We touched the moss clump."));
                TouchedMoss->SetHiddenInGame(false);
            }
            
        }
        
    }
}
