// Fill out your copyright notice in the Description page of Project Settings.


#include "HitBoxBase.h"
#include "Components/BoxComponent.h"
#include "../Player/SpherePawnBase.h"

// Sets default values
AHitBoxBase::AHitBoxBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &AHitBoxBase::BeginHitSphere);

}

// Called when the game starts or when spawned
void AHitBoxBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHitBoxBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHitBoxBase::BeginHitSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (ASpherePawnBase* spherePawn = Cast<ASpherePawnBase>(OtherActor))
	{
		OnHitSphere(spherePawn);
	}
}

void AHitBoxBase::OnHitSphere(ASpherePawnBase* SpherePawn)
{

}

