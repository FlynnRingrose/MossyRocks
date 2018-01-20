// Flynn's Rad Copyright.

#pragma once

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
    UFUNCTION(BlueprintCallable, Category = "Setup")
    int32 GetMossCountCurrent() { return MossCountCurrent; };
    
    void SetMossCountCurrent() { MossCountCurrent++; };
    
    //UPROPERTY(EditAnywhere, BlueprintReadWrite)
    //bool bTimerEnabled = false;
    
private:
    int32 MossCountCurrent = 0;
};
