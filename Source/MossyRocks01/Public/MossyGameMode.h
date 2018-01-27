// Flynn's Rad Copyright.

#pragma once

#include "MossyRock01.h"

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
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bTimerEnabled = true;
    
    void SetMossCountCurrent() { MossCountCurrent++; };
    
private:
    int32 MossCountCurrent = 0;
};
