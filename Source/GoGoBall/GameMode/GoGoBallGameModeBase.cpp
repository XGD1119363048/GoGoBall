// Copyright Epic Games, Inc. All Rights Reserved.


#include "GoGoBallGameModeBase.h"
#include "../Player/SpherePawnBase.h"

AGoGoBallGameModeBase::AGoGoBallGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	PlayerDieNum = 0;
	isEnd = false;
}

void AGoGoBallGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (ASpherePawnBase* SpherePawn = Cast<ASpherePawnBase>(GetWorld()->GetFirstPlayerController()->GetPawn()))
	{
		PlayerSpherePawn = SpherePawn;
		CurrentStartLocation = PlayerSpherePawn->GetActorLocation();
	}
}

void AGoGoBallGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AGoGoBallGameModeBase::SetPlayerLocation()
{
	PlayerSpherePawn->SetActorLocation(CurrentStartLocation);

	PlayerSpherePawn->ResetSpeed();
}

void AGoGoBallGameModeBase::SetPlayerLocation(FVector Start)
{
	PlayerSpherePawn->SetActorLocation(Start);

	PlayerSpherePawn->ResetSpeed();
}

void AGoGoBallGameModeBase::SetCurrentStart(FVector startLocation)
{
	if (!startLocation.IsZero())
		CurrentStartLocation = startLocation;
}

void AGoGoBallGameModeBase::SetGameEnd(bool EndGame)
{
	PlayerSpherePawn->IsInput = !EndGame;
	isEnd = true;
}

void AGoGoBallGameModeBase::AddDieNum()
{
	if (!isEnd)
		PlayerDieNum++;
}
