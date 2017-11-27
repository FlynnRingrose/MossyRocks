// Flynn's Rad Copyright.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MossyRock01.generated.h"

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
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UStaticMeshComponent * Rock;
    
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
    //float DeltaSeconds = 0.f;
    //float CurrentSpeed = 0.f;
    //float RotationDirection = 0.f;
    
    FVector MovementInput;
    FVector RockInput;
    
    
    void SpinRock(float AxisValue);
    void EnableMovement();
    //float GetRotationDirection(float Speed, float Direction);

};
