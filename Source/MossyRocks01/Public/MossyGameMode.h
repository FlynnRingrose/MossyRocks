// Flynn's Rad Copyright.

#pragma once

#include "MossyRock.h"
#include "RockController.h"
#include "GameFramework/Pawn.h"

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MossyGameMode.generated.h"

/**
 * 
 */

UCLASS()
class MOSSYROCKS01_API AMossyGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    
    UFUNCTION(BlueprintCallable, Category = "Setup")
    int32 GetMossCountCurrent() { return MossCountCurrent; };
    
    void SetMossCountCurrent() { MossCountCurrent++; };
    
    AMossyRock* SpawnRock();
    
    void PossessRock(AMossyRock* RockToPossess);
    
    void CompleteRock(AMossyRock* RockToComplete);
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bTimerEnabled = true;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Rock Array")
    TArray<TSubclassOf<AMossyRock>> RockArray; //No asterisks.
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 RemainingTime = 31;
    
    int32 NextRockIndex = 0;
    
    
    
private:
    int32 MossCountCurrent = 0;

    const FVector StartLocation {300,-60,80};
    const FRotator StartRotation {0,0,0};
};
