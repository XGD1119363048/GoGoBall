// Fill out your copyright notice in the Description page of Project Settings.


#include "SpherePawnBase.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Camera/CameraComponent.h"
//#include "Components/SceneComponent.h"
//#include "Engine.h"

// Sets default values
ASpherePawnBase::ASpherePawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereMinForce = 30000.f;
	SphereMaxForce = 60000.f;
	SphereForce = SphereMinForce;

	//SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
	//RootComponent = SceneComp;

	SphereMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMeshComp"));
	RootComponent = SphereMeshComp;
	//SphereMeshComp->SetupAttachment(RootComponent);
	SphereMeshComp->SetSimulatePhysics(true);

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->SetupAttachment(SphereMeshComp);
	SpringArmComp->SetRelativeLocation(FVector(0, 0, 50.f));
	SpringArmComp->SetRelativeRotation(FRotator(-20.f, 0, 0));
	SpringArmComp->TargetArmLength = 700.f;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);

	ParticleSystemComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComp"));
	ParticleSystemComp->SetupAttachment(SphereMeshComp);
	ParticleSystemComp->SetRelativeLocation(FVector(0, 0, 50.f));
	ParticleSystemComp->bAutoActivate = false;

	UserPitch = SpringArmComp->GetRelativeRotation().Pitch;

	CanDestroyObject = false;

}

// Called when the game starts or when spawned
void ASpherePawnBase::BeginPlay()
{
	Super::BeginPlay();

	PlayerStartLocation = this->GetActorLocation();
	IsInput = true;
	
}

// Called every frame
void ASpherePawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsInput && (!BallForceForward.IsZero() || !BallForceRight.IsZero())) {
		//GEngine->AddOnScreenDebugMessage(0, 1.f, FColor::Red, TEXT("test2"));
		SphereMeshComp->AddForce(BallForceForward + BallForceRight);
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, BallForce.ToString());
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::SanitizeFloat(CameraComp->GetComponentRotation().Yaw));
	//FRotator CameraRotation = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraRotation();
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, SpringArmComp->GetRelativeRotation().ToString());

}

// Called to bind functionality to input
void ASpherePawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("SpeedUp", IE_Pressed, this, &ASpherePawnBase::SpeedUp);
	PlayerInputComponent->BindAction("SpeedUp", IE_Released, this, &ASpherePawnBase::SpeedDown);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASpherePawnBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASpherePawnBase::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ASpherePawnBase::LookUp);
	PlayerInputComponent->BindAxis("Turn", this, &ASpherePawnBase::Turn);

	PlayerInputComponent->BindAxis("CameraZoom", this, &ASpherePawnBase::CameraZoom);

}

void ASpherePawnBase::MoveForward(float AxisValue)
{
	if (AxisValue != 0) {
		const FRotator Rotation = CameraComp->GetComponentRotation();	
		const FRotator YawRotation(0, Rotation.Yaw + 90.f - 90.f * AxisValue, 0);
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		//BallForce.Y = FMath::Sin(CameraComp->GetComponentRotation().Yaw);
		//BallForce.X = FMath::Cos(CameraComp->GetComponentRotation().Yaw);
		//FMath::SinCos(&BallForce.Y, &BallForce.X, CameraComp->GetComponentRotation().Yaw);
		//BallForce.X = SphereForce * AxisValue;
		BallForceForward = ForwardDirection * SphereForce;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, BallForceForward.ToString());
	}
	else
		BallForceForward = FVector(0, 0, 0);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, BallForce.ToString());
}

void ASpherePawnBase::MoveRight(float AxisValue)
{
	if (AxisValue != 0) {
		const FRotator Rotation = CameraComp->GetComponentRotation();
		const FRotator YawRotation(0, Rotation.Yaw + 90.f * AxisValue, 0);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		//BallForce.X = FMath::Sin(CameraComp->GetComponentRotation().Yaw);
		//BallForce.Y = FMath::Cos(CameraComp->GetComponentRotation().Yaw);
		//FMath::SinCos(BallForce.Y, BallForce.X, CameraComp->GetComponentRotation().Yaw);
		//BallForce.Y = SphereForce * AxisValue;
		//BallForce *= SphereForce * AxisValue;
		BallForceRight = RightDirection * SphereForce;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, BallForceRight.ToString());
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, BallForce.ToString());
	}
	else
		BallForceRight = FVector(0, 0, 0);

}

void ASpherePawnBase::LookUp(float AxisValue)
{
	UserPitch += AxisValue;
	UserPitch = FMath::Clamp(UserPitch, -89.f, -15.f);
	SpringArmComp->SetRelativeRotation(FRotator(UserPitch, UserYaw, 0));
}

void ASpherePawnBase::Turn(float AxisValue)
{
	UserYaw += AxisValue;
	SpringArmComp->SetRelativeRotation(FRotator(UserPitch, UserYaw, 0));
}

void ASpherePawnBase::CameraZoom(float AxisValue)
{
	SpringArmComp->TargetArmLength += AxisValue * 10;
	float TempTargetLength = FMath::Clamp(SpringArmComp->TargetArmLength, 300.f, 800.f);
	SpringArmComp->TargetArmLength = TempTargetLength;
}

void ASpherePawnBase::SpeedUp()
{
	SphereForce = SphereMaxForce;
	CanDestroyObject = true;
	ParticleSystemComp->ActivateSystem(true);//true?
}

void ASpherePawnBase::SpeedDown()
{
	SphereForce = SphereMinForce;
	CanDestroyObject = false;
	ParticleSystemComp->DeactivateSystem();
}

void ASpherePawnBase::ResetSpeed()
{
	SphereMeshComp->SetPhysicsAngularVelocity(FVector(0, 0, 0));
	SphereMeshComp->SetPhysicsLinearVelocity(FVector(0, 0, 0));
}

