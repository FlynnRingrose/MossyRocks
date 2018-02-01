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
    // Sets default values for this pawn's properties
    AMossyRock();
    
    // Called every frame
    virtual void Tick(float DeltaTime) override;
    
    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    
    UFUNCTION(BlueprintCallable, Category = "Setup")
    int32 GetCurrentMossCount() { return CurrentMossCount; };
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Setup")
    void VictorySequence();
    
    int32 GetTimerDefault() { return TimerDefault; };
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UStaticMeshComponent* Rock;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="MyBPForCPP")
    TSubclassOf<class UMossyClump> bpMossyClump;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaximumMossCount = 0;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 TimerDefault = 10;
    
    int32 CurrentMossCount = 0;
    
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    
private:
    FVector MovementInput;
    FVector RockInput;
    
    TouchedMoss PlayerHoveredMoss {nullptr, 0};
    
    void SpinRock(float AxisValue);
    void EnableMovement();
    
    TouchedMoss GetPlayerHoverMossyPoint(APlayerController*);
    
    void GrowMoss(UMossyPoint*);
    
    APlayerController* GetPlayerController();
    
    UMossyClump* SpawnNewComponent(UClass* ComponentClassToSpawn, FTransform& SpawnLocation);
};
