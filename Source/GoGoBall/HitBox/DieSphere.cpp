// Fill out your copyright notice in the Description page of Project Settings.


#include "DieSphere.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "../GameMode/GoGoBallGameModeBase.h"

ADieSphere::ADieSphere()
{
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = SceneComp;

	BoxComp->SetupAttachment(SceneComp);
}

void ADieSphere::OnHitSphere(class ASpherePawnBase* SpherePawn)
{
	AGoGoBallGameModeBase* GameMode = Cast<AGoGoBallGameModeBase>(GetWorld()->GetAuthGameMode());
	GameMode->AddDieNum();
	GameMode->SetPlayerLocation();
	GEngine->AddOnScreenDebugMessage(0, 1.f, FColor::Red, TEXT("Die!"));
}

