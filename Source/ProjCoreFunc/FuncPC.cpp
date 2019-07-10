#include "FuncPC.h"
#include "Logging/LogMacros.h"

DECLARE_LOG_CATEGORY_EXTERN(LogFunc, Display, All);
DEFINE_LOG_CATEGORY(LogFunc);

void AFuncPC::BeginPlay()
{
	UE_LOG(LogFunc, Display, TEXT("AFuncPC::BeginPlay"));
}

void AFuncPC::TestFuncBPCallable()
{
	UE_LOG(LogFunc, Display, TEXT("AFuncPC::TestFunc"));
}

void AFuncPC::TestFuncVirtualBPCallable()
{
	UE_LOG(LogFunc, Display, TEXT("AFuncPC::TestFuncVirtualBPCallable"));
}

void AFuncPC::TestFuncStatic()
{
	UE_LOG(LogFunc, Display, TEXT("AFuncPC::TestFuncStatic"));
}

void AFuncPC::TestFuncBPCallableStatic()
{
	UE_LOG(LogFunc, Display, TEXT("AFuncPC::TestFuncBPCallableStatic"));
}

void AFuncPC::TestNativeEvent_Implementation()
{
	UE_LOG(LogFunc, Display, TEXT("AFuncPC::TestNativeEvent_Implementation"));
}

int32 AFuncPC::GetTestNativeEventConst_Implementation() const
{
	return 4;
}


void AFuncPC::TestNativeEventProtected_Implementation()
{
	UE_LOG(LogFunc, Display, TEXT("AFuncPC::TestNativeEventProtected_Implementation"));
}

// It seams like static function cannot be BlueprintNativEvent:
//void AFuncPC::TestNativeEventStatic_Implementation()
//{
//	UE_LOG(LogFunc, Display, TEXT("AFuncPC::TestNativeEventStatic_implementation"));
//}

void AFuncPC::TestStringRef(FString& StrRef)
{
	UE_LOG(LogFunc, Display, TEXT("AFuncPC::AFuncPC"));
}
