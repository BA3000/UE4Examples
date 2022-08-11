// Fill out your copyright notice in the Description page of Project Settings.


#include "ExecTargetPawn.h"


// Sets default values
AExecTargetPawn::AExecTargetPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AExecTargetPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExecTargetPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AExecTargetPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AExecTargetPawn::RetargetExecFunc(const float Num)
{
	UE_LOG(LogTemp, Display, TEXT("Retarget Exec Func Called! Got Num: %f"), Num);
}

