#pragma once

#include "GameFramework/PlayerController.h"
#include "FuncPC.generated.h"

UCLASS()
class AFuncPC : public APlayerController
{
	GENERATED_BODY()

public:
	/**
	* Callable
	*/
	UFUNCTION(BlueprintCallable)
	void TestFuncBPCallable();

	// Static blueprint-pure
	UFUNCTION(BlueprintPure)
	int32 TestFuncBPPure() const { return 1; }

	// Virtual callable function
	UFUNCTION(BlueprintCallable)
	virtual void TestFuncVirtualBPCallable();

	// Virtual pure function
	UFUNCTION(BlueprintPure)
	virtual int32 TestFuncVirtualBPPure() const { return 2; }

	// Fails to compile: blueprint native events must be non-virtual
	//UFUNCTION(BlueprintNativeEvent)
	//virtual void TestFuncVirtualNative();

	// Fails to compile: blueprint implementable events must be non-virtual
	//UFUNCTION(BlueprintImplementableEvent)
	//virtual void TestFuncVirtualImplementable();

	/**
	* Static functions.
	*/
	UFUNCTION()
	static void TestFuncStatic();
	
	// Static blueprint-callable
	UFUNCTION(BlueprintCallable)
	static void TestFuncBPCallableStatic();

	// Static blueprint-pure
	UFUNCTION(BlueprintPure)
	static int32 TestFuncBPPureStatic() { return 3; }

	/**
	* Native events.
	*/
	UFUNCTION(BlueprintNativeEvent)
	void TestNativeEvent();

	UFUNCTION(BlueprintNativeEvent)
	int32 GetTestNativeEventConst() const;

	// Fails to compile: It seams like static function cannoy be BlueprintNativeEvent
	//UFUNCTION(BlueprintNativeEvent)
	//static void TestNativeEventStatic();

	/**
	* Implementable events.
	*
	* WARNING!!! We do NOT implement the event in cpp, just in blueprint.
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void TestImplementableEvent();

	/**
	* Taking references
	*
	*/
	// Fails to compile: Error: Missing '*' in expected a pointer type
	//UFUNCTION()
	//void TestTakeActorConstRef(const AActor& ActorRef);

	// Fails to compile: Error: Missing '*' in expected a pointer type
	//UFUNCTION()
	//void TestTakeActorRef(AActor& ActorRef);

	UFUNCTION()
	void TestStringRef(FString& StrRef);

	virtual void BeginPlay() override;

protected:
	// Virtual callable function
	UFUNCTION(BlueprintCallable)
	virtual void TestFuncVirtualBPCallableProtected() {}

	// Virtual pure function
	UFUNCTION(BlueprintPure)
	virtual int32 TestFuncVirtualBPPureProtected() const { return 2; }

	UFUNCTION(BlueprintNativeEvent)
	void TestNativeEventProtected();

	UFUNCTION(BlueprintImplementableEvent)
	void TestImplementableEventProtected();


private:
	/**
	* Callable
	*/
	UFUNCTION(BlueprintCallable)
	void TestFuncBPCallablePrivate() {}

	// Static blueprint-pure
	UFUNCTION(BlueprintPure)
	int32 TestFuncBPPurePrivate() const { return 1; }

	UFUNCTION(BlueprintCallable, Meta = (AllowPrivateAccess = true))
	void TestFuncWithPrivateAccess() {}

};