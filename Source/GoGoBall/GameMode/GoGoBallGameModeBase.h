// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GoGoBallGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class GOGOBALL_API AGoGoBallGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	AGoGoBallGameModeBase();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerPawn")
		class ASpherePawnBase* PlayerSpherePawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurrentStart")
		FVector CurrentStartLocation;

	UPROPERTY(BlueprintReadOnly)
		int32 PlayerDieNum;

	UPROPERTY(BlueprintReadOnly)
		bool isEnd;

protected:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

public:

	void SetPlayerLocation();
	void SetPlayerLocation(FVector Start);

	void SetCurrentStart(FVector startLocation);

	void SetGameEnd(bool EndGame);

	void AddDieNum();
	
};
