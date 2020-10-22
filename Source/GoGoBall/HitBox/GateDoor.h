// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HitBoxBase.h"
#include "GateDoor.generated.h"

/**
 * 
 */
UCLASS()
class GOGOBALL_API AGateDoor : public AHitBoxBase
{
	GENERATED_BODY()

public:

	AGateDoor();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UParticleSystemComponent* ParticleSystemComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NextLevel")
		FName NextLevelName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NextLevelText")
		class UTextRenderComponent* TextRenderComp;

public:

	virtual void OnHitSphere(class ASpherePawnBase* SpherePawn) override;

};
