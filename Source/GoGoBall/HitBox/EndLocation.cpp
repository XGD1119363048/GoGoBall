// Fill out your copyright notice in the Description page of Project Settings.


#include "EndLocation.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "../GameMode/GoGoBallGameModeBase.h"

AEndLocation::AEndLocation()
{
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	RootComponent = StaticMeshComp;

	BoxComp->SetupAttachment(StaticMeshComp);
}

void AEndLocation::OnHitSphere(ASpherePawnBase* SpherePawn)
{
	AGoGoBallGameModeBase* GameMode = Cast<AGoGoBallGameModeBase>(GetWorld()->GetAuthGameMode());

	GameMode->SetGameEnd(true);
}
