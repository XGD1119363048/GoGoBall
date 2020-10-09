// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HitBoxBase.h"
#include "DieSphere.generated.h"

/**
 * 
 */
UCLASS()
class GOGOBALL_API ADieSphere : public AHitBoxBase
{
	GENERATED_BODY()

public:

	ADieSphere();

public:

	UPROPERTY(BlueprintReadOnly)
		class USceneComponent* SceneComp;

public:

	virtual void OnHitSphere(class ASpherePawnBase* SpherePawn) override;
	
};
