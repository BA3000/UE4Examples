#pragma once
#include "ExampleBPFuncLibrary.generated.h"

UCLASS()
class UFUNCTIONEXAMPLES_API UExampleBPFuncLibrary final : public  UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void BPCallableExampleFunc();

	UFUNCTION(BlueprintPure)
	static int BPPureExampleFunc(int L, int R);
};
