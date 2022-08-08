// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DelegateExamplePawn.generated.h"

UCLASS()
class UFUNCTIONEXAMPLES_API ADelegateExampleActor : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADelegateExampleActor();

	// event without params
	UFUNCTION(BlueprintImplementableEvent)
	void BPImpEventFunc();

	// event with params
	UFUNCTION(BlueprintImplementableEvent)
	void BPImpEventFunc2(float& NumRef);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BPNativeEventFunc(const FString& Str2Print);

	UFUNCTION(Exec)
	void ExecFunc(float Num);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
