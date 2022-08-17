#include "ExampleBPFuncLibrary.h"

void UExampleBPFuncLibrary::BPCallableExampleFunc()
{
	UE_LOG(LogTemp, Display, TEXT("=== Info: Print from BPCallableExampleFunc ==="));
}

int UExampleBPFuncLibrary::BPPureExampleFunc(const int L, const int R)
{
	UE_LOG(LogTemp, Display, TEXT("=== Info: BPPureExampleFunc Called! ==="));
	return L + R;
}
