// Flynn's Rad Copyright.

#include "MossyGameMode.h"

void AMossyGameMode::BeginPlay()
{
    bTimerEnabled = true;
}

void AMossyGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    AMossyRock01* ControlledRock = Cast<AMossyRock01>(GetWorld()->GetFirstPlayerController()->GetPawn());
    
    if(ControlledRock == nullptr) { return; }
    
    if ((ControlledRock->GetCurrentMossCount()) >= (ControlledRock->MaximumMossCount))
    {
        CompleteRock(ControlledRock);
    }
}

AMossyRock01* AMossyGameMode::SpawnRock()
{
    AMossyRock01* NextRock = GetWorld()->SpawnActor<AMossyRock01>(RockArray[NextRockIndex], StartLocation, StartRotation);
    return NextRock;
}

void AMossyGameMode::PossessRock(AMossyRock01* RockToPossess)
{
    ARockController* RockController = Cast<ARockController>(GetWorld()->GetFirstPlayerController());
    RockController->UnPossess();
    RockController->Possess(RockToPossess);
}

void AMossyGameMode::CompleteRock(AMossyRock01* RockToComplete)
{
    RockToComplete->VictorySequence();
    NextRockIndex++;
    AMossyRock01* NewRock = SpawnRock();
    PossessRock(NewRock);
    RemainingTime = NewRock->GetTimerDefault();
}
