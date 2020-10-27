// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SpherePawnBase.generated.h"

UCLASS()
class GOGOBALL_API ASpherePawnBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASpherePawnBase();

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SceneComp")
		//class USceneComponent* SceneComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SphereMeshComp")
		class UStaticMeshComponent* SphereMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpringArmComp")
		class USpringArmComponent* SpringArmComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraComp")
		class UCameraComponent* CameraComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ParticleSystemComp");
		class UParticleSystemComponent* ParticleSystemComp;

public:

	FVector PlayerStartLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsInput;

	FVector BallForceForward;
	FVector BallForceRight;
	float UserPitch;
	float UserYaw;

	float SphereForce;
	float SphereMinForce;
	float SphereMaxForce;

	bool CanDestroyObject;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
		void MoveForward(float AxisValue);

	UFUNCTION(BlueprintCallable)
		void MoveRight(float AxisValue);

	UFUNCTION(BlueprintCallable)
		void LookUp(float AxisValue);

	UFUNCTION(BlueprintCallable)
		void Turn(float AxisValue);

	UFUNCTION(BlueprintCallable)
		void CameraZoom(float AxisValue);

	UFUNCTION(BlueprintCallable)
		void SpeedUp();

	UFUNCTION(BlueprintCallable)
		void SpeedDown();

	void ResetSpeed();

};
