#pragma once

#include "FuncPC.h"
#include "DerivedFuncPC.generated.h"

UCLASS()
class ADerivedFuncPC : public AFuncPC
{
	GENERATED_BODY()

public:
	/**
	* Implementable events.
	*
	* WARNING!!! We do NOT implement the event in cpp, just in blueprint.
	*/
	//virtual void TestImplementableEvent_Implementation() override;

protected:

private:
};