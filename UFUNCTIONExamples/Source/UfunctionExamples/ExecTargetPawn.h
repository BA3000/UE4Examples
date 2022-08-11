// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ExecTargetPawn.generated.h"

UCLASS()
class UFUNCTIONEXAMPLES_API AExecTargetPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AExecTargetPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(Exec)
	void RetargetExecFunc(float Num);
};
