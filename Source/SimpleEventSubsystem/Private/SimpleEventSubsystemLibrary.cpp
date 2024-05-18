// Gentle Giants reserves All rights.


#include "SimpleEventSubsystemLibrary.h"
#include "SimpleEventBase.h"

void USimpleEventSubsystemLibrary::MakeSimpleEvent(const TSubclassOf<USimpleEventBase> Event, USimpleEventBase*& CreatedEventInstance)
{
	CreatedEventInstance = NewObject<USimpleEventBase>(GetTransientPackage(), Event.Get());
}
