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
    
    if(ControlledRock == nullptr)
    {
        return;
    }
    else if((ControlledRock->GetCurrentMossCount()) >= (ControlledRock->MaximumMossCount) && bTimerEnabled == true)
    {
        UE_LOG(LogTemp, Warning, TEXT("Game mode is tick iffing."));
        bTimerEnabled = false;
        ControlledRock->VictorySequence();
    }
}

