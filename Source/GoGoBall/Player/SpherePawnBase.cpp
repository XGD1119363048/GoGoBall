// Fill out your copyright notice in the Description page of Project Settings.


#include "SpherePawnBase.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Camera/CameraComponent.h"
//#include "Engine.h"

// Sets default values
ASpherePawnBase::ASpherePawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereMinForce = 30000.f;
	SphereMaxForce = 60000.f;
	SphereForce = SphereMinForce;

	SphereMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMeshComp"));
	RootComponent = SphereMeshComp;
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

	if (IsInput && !BallForce.IsZero()) {
		//GEngine->AddOnScreenDebugMessage(0, 1.f, FColor::Red, TEXT("test2"));
		SphereMeshComp->AddForce(BallForce);
	}

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

}

void ASpherePawnBase::MoveForward(float AxisValue)
{
	BallForce.X = SphereForce * AxisValue;
}

void ASpherePawnBase::MoveRight(float AxisValue)
{
	BallForce.Y = SphereForce * AxisValue;
}

void ASpherePawnBase::LookUp(float AxisValue)
{
	UserPitch += AxisValue;
	//clamp
	if (UserPitch < -90.f)
		UserPitch = -90.f;
	if (UserPitch > -30.f)
		UserPitch = -30.f;
	SpringArmComp->SetRelativeRotation(FRotator(UserPitch, 0, 0));
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

