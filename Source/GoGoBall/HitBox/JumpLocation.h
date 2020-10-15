// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HitBoxBase.h"
#include "JumpLocation.generated.h"

/**
 * 
 */
UCLASS()
class GOGOBALL_API AJumpLocation : public AHitBoxBase
{
	GENERATED_BODY()

public:

	AJumpLocation();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USceneComponent* SceneComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UParticleSystemComponent* ParticleSystemComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UpSpeed")
		float UpSpeed;

public:

	virtual void OnHitSphere(class ASpherePawnBase* SpherePawn) override;
	
};
