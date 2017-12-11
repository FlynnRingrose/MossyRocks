// Flynn's Rad Copyright.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MossyStaticMesh01.h"
#include "MossyInstancedStaticMesh01.h"
#include "MossyPoint01.h"
#include "MossyRock01.generated.h"

class UMossyPoint01;

UCLASS()
class MOSSYROCKS01_API AMossyRock01 : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMossyRock01();
    
    // Called every frame
    virtual void Tick(float DeltaTime) override;
    
    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    
    UFUNCTION()
    void OnSelected(AActor* ClickedActor, FKey ButtonPressed);
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UStaticMeshComponent* Rock;
    
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
    FVector MovementInput;
    FVector RockInput;

    void SpinRock(float AxisValue);
    void EnableMovement();
    void GrowClicked();
};
