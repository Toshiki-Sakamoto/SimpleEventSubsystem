// Gentle Giants reserves All rights.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SimpleEventSubsystemLibrary.generated.h"

class USimpleEventBase;

/**
 * Simple Event BP Function Library
 */
UCLASS()
class SIMPLEEVENTSUBSYSTEM_API USimpleEventSubsystemLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/** Creates a FSimpleEventBase */
	UFUNCTION(BlueprintPure, Category = "SimpleEvent", meta = (BlueprintThreadSafe))
	static void MakeSimpleEvent(const TSubclassOf<USimpleEventBase> Event, USimpleEventBase*& CreatedEventInstance);
};
