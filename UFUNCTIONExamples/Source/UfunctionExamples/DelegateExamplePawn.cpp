// Fill out your copyright notice in the Description page of Project Settings.


#include "DelegateExamplePawn.h"

// Sets default values
ADelegateExampleActor::ADelegateExampleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ADelegateExampleActor::BPNativeEventFunc_Implementation(const FString& Str2Print)
{
	UE_LOG(LogTemp, Display, TEXT(" [%s], Got String: %s"), *FString(__FUNCTION__), *Str2Print);
}

void ADelegateExampleActor::ExecFunc(float Num)
{
	UE_LOG(LogTemp, Display, TEXT("[%s], Got Str: %f"), *FString(__FUNCTION__), Num);
}

// Called when the game starts or when spawned
void ADelegateExampleActor::BeginPlay()
{
	Super::BeginPlay();

	BPImpEventFunc();
	float Test = 0.0f;
	BPImpEventFunc2(Test);
	UE_LOG(LogTemp, Log, TEXT("Got Value from BPImpEventFunc2, %f"), Test);
	
	// BPNativeEventFunc("TESTTESTTEST");
}

// Called every frame
void ADelegateExampleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

