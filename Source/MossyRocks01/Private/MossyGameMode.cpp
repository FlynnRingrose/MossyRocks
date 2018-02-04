// Flynn's Rad Copyright.

#include "MossyGameMode.h"

void AMossyGameMode::BeginPlay()
{
    bTimerEnabled = true;
}

void AMossyGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    AMossyRock* ControlledRock = Cast<AMossyRock>(GetWorld()->GetFirstPlayerController()->GetPawn());
    
    if(ControlledRock == nullptr) { return; }
    
    if ((ControlledRock->GetCurrentMossCount()) >= (ControlledRock->GetMaximumMossCount()))
    {
        CompleteRock(ControlledRock);
    }
}

AMossyRock* AMossyGameMode::SpawnRock() const
{
    AMossyRock* NextRock = GetWorld()->SpawnActor<AMossyRock>(RockArray[NextRockIndex], StartLocation, StartRotation);
    return NextRock;
}

void AMossyGameMode::PossessRock(AMossyRock* RockToPossess) const
{
    ARockController* RockController = Cast<ARockController>(GetWorld()->GetFirstPlayerController());
    RockController->UnPossess();
    RockController->Possess(RockToPossess);
}

void AMossyGameMode::CompleteRock(AMossyRock* RockToComplete)
{
    RockToComplete->VictorySequence();
    NextRockIndex++;
    AMossyRock* NewRock = SpawnRock();
    PossessRock(NewRock);
    RemainingTime = NewRock->GetTimerDefault();
}
