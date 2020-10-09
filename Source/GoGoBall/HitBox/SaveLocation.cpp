// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveLocation.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "../GameMode/GoGoBallGameModeBase.h"

ASaveLocation::ASaveLocation()
{
	SaveMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SaveMeshComp"));
	RootComponent = SaveMeshComp;
	BoxComp->SetupAttachment(SaveMeshComp);
}

void ASaveLocation::OnHitSphere(ASpherePawnBase* SpherePawn)
{
	AGoGoBallGameModeBase* GameModeBase = Cast<AGoGoBallGameModeBase>(GetWorld()->GetAuthGameMode());
	GameModeBase->SetCurrentStart(BoxComp->GetComponentLocation());
}
