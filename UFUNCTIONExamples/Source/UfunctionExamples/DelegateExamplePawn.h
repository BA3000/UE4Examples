// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ExecTargetPawn.h"
#include "DelegateExamplePawn.generated.h"

UCLASS()
class UFUNCTIONEXAMPLES_API ADelegateExampleActor : public APawn
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ADelegateExampleActor();

	UPROPERTY(BlueprintReadWrite)
	AExecTargetPawn* ExecTarget;

	// BlueprintImplementableEvent examples
	// event without params
	UFUNCTION(BlueprintImplementableEvent)
	void BPImpEventFunc();

	// event with params
	UFUNCTION(BlueprintImplementableEvent)
	void BPImpEventFunc2(float& NumRef);

	// BlueprintNativeEvent examples
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BPNativeEventFunc(const FString& Str2Print);

	// Exec examples
	UFUNCTION(Exec)
	void ExecFunc(float Num);

	virtual bool ProcessConsoleExec(const TCHAR* Cmd, FOutputDevice& Ar, UObject* Executor) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
