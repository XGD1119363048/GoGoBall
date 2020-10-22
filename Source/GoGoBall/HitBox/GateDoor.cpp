// Fill out your copyright notice in the Description page of Project Settings.


#include "GateDoor.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/BoxComponent.h"
#include "../Player/SpherePawnBase.h"
#include "Kismet/GameplayStatics.h"

AGateDoor::AGateDoor()
{
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	RootComponent = StaticMeshComp;

	ParticleSystemComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComp"));
	ParticleSystemComp->SetupAttachment(StaticMeshComp);

	TextRenderComp = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRenderComp"));
	TextRenderComp->SetupAttachment(StaticMeshComp);

	BoxComp->SetupAttachment(StaticMeshComp);

	//ParticleSystemComp->SetVisibility(false);
}

void AGateDoor::OnHitSphere(class ASpherePawnBase* SpherePawn)
{
	SpherePawn->ResetSpeed();

	UGameplayStatics::OpenLevel(GetWorld(), NextLevelName);

}