// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HitBoxBase.h"
#include "EndLocation.generated.h"

/**
 * 
 */
UCLASS()
class GOGOBALL_API AEndLocation : public AHitBoxBase
{
	GENERATED_BODY()

public:

	AEndLocation();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* StaticMeshComp;

public:

	virtual void OnHitSphere(class ASpherePawnBase* SpherePawn) override;
	
};
