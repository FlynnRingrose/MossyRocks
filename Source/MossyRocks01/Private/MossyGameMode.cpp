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
    
    else if((ControlledRock->GetCurrentMossCount()) >= (ControlledRock->MaximumMossCount)/* && bTimerEnabled == true*/)
    {
        //bTimerEnabled = false;
        ControlledRock->VictorySequence();
        NextRockIndex++;
        
        AMossyRock01* NewRock = GetWorld()->SpawnActor<AMossyRock01>(RockArray[NextRockIndex], StartLocation, StartRotation);
        
        ARockController* RockController = Cast<ARockController>(GetWorld()->GetFirstPlayerController());
        RockController->UnPossess();
        RockController->Possess(NewRock);
        
        RemainingTime = NewRock->GetTimerDefault();
    }
}
