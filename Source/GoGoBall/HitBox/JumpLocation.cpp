// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpLocation.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "../Player/SpherePawnBase.h"

AJumpLocation::AJumpLocation()
{
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	RootComponent = SceneComp;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticMeshComp->SetupAttachment(SceneComp);

	ParticleSystemComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComp"));
	BoxComp->SetupAttachment(SceneComp);
	ParticleSystemComp->SetupAttachment(SceneComp);

	UpSpeed = 800.f;
}

void AJumpLocation::OnHitSphere(class ASpherePawnBase* SpherePawn)
{
	FVector UpSpeedVector = FVector(0, 0, UpSpeed);
	FVector NowVelocity = SpherePawn->SphereMeshComp->GetPhysicsLinearVelocity();
	NowVelocity += UpSpeedVector;
	SpherePawn->SphereMeshComp->SetPhysicsLinearVelocity(NowVelocity);
}

