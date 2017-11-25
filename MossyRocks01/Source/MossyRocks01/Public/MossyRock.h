// Flynn's Rad Copyright.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MossyRock.generated.h"

UCLASS()
class MOSSYROCKS01_API AMossyRock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMossyRock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UStaticMeshComponent * Rock;

	
	
};
