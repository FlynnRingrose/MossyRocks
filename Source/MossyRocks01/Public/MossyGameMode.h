// Flynn's Rad Copyright.

#pragma once

#include "MossyRock.h"
#include "RockController.h"
#include "GameFramework/Pawn.h"

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MossyGameMode.generated.h"

UCLASS()
class MOSSYROCKS01_API AMossyGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
    virtual void Tick(float DeltaTime) override;
    
protected:
    virtual void BeginPlay() override;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category= "Setup")
    TArray<TSubclassOf<AMossyRock>> RockArray; //No asterisks.
    
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite)
    int32 RemainingTime = 31;
    
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
    bool bTimerEnabled = true;
    
private:
    AMossyRock* SpawnRock() const;
    
    void PossessRock(AMossyRock* RockToPossess) const;
    
    void CompleteRock(AMossyRock* RockToComplete);
    
    int32 NextRockIndex = 0;

    const FVector StartLocation {300,-60,80};
    const FRotator StartRotation {0,0,0};
};
