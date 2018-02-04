// Flynn's Rad Copyright.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MossyClump.h"
#include "MossyPoint.h"
#include "MossyRock.generated.h"

struct TouchedMoss
{
    UMossyPoint* Moss;
    int32 TouchedItem;
};

UCLASS()
class MOSSYROCKS01_API AMossyRock : public APawn
{
    GENERATED_BODY()
    
public:
    AMossyRock();
    
    virtual void Tick(float DeltaTime) override;
    
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Setup")
    void VictorySequence();
    
    int32 GetCurrentMossCount() const { return CurrentMossCount; };
    
    int32 GetMaximumMossCount() const { return MaximumMossCount; };
    
    int32 GetTimerDefault() const { return TimerDefault; };
    
protected:
    virtual void BeginPlay() override;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Setup")
    UStaticMeshComponent* Rock;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Setup")
    TSubclassOf<class UMossyClump> bpMossyClump;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Setup")
    int32 MaximumMossCount = 2;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Setup")
    int32 TimerDefault = 10;
    
private:
    void UpdateRockRotation(float AxisValue);
    void SetRockRotation();
    
    TouchedMoss GetPlayerHoverMossyPoint(APlayerController*) const;
    
    APlayerController* GetPlayerController() const;
    
    void GrowMoss(UMossyPoint*);
    
    UMossyClump* SpawnNewComponent(UClass* ComponentClassToSpawn, FTransform& SpawnLocation);
    
    FVector MovementInput;
    FVector RockInput;
    
    TouchedMoss PlayerHoveredMoss {nullptr, 0};
    
    int32 CurrentMossCount = 0;
};
