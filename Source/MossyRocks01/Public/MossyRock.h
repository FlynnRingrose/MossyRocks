// Flynn's Rad Copyright.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MossyClump.h"
#include "MossyPoint.h"
#include "MossyRock.generated.h"

struct TouchedMoss //For returning moss component and instance.
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
    
    //An event for animating a completed rock.
    UFUNCTION(BlueprintImplementableEvent, Category = "Setup")
    void VictorySequence();
    
    int32 GetCurrentMossCount() const { return CurrentMossCount; };
    
    int32 GetMaximumMossCount() const { return MaximumMossCount; };
    
    int32 GetTimerDefault() const { return TimerDefault; };
    
protected:
    virtual void BeginPlay() override;
    
    //The bare rock actor to be assigned in editor.
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Setup")
    UStaticMeshComponent* Rock;
    
    //Moss clump actors to be assigned in editor.
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Setup")
    TSubclassOf<class UMossyClump> bpMossyClump;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Setup")
    int32 MaximumMossCount = 2;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Setup")
    int32 TimerDefault = 10;
    
private:
    void UpdateRockRotation(float AxisValue); //Adds axis input to RockInput value.
    void SetRockRotation(); //Adds axis input to actor's rotation.
    
    TouchedMoss GetMossyPointUnderCursor(APlayerController*) const; //Checks if cursor is over mossy point.
    
    APlayerController* GetPlayerController() const;
    
    void GrowMoss(UMossyPoint*); //Remove mossy point instance and spawn mossy clump component.
    
    UMossyClump* SpawnNewComponent(UClass* ComponentClassToSpawn, FTransform& SpawnLocation); //Adds mossy clump component.
    
    FVector MovementInput;
    FVector RockInput;
    
    TouchedMoss PlayerHoveredMoss {nullptr, 0}; //Instance of struct declared above.
    
    int32 CurrentMossCount = 0;
};
