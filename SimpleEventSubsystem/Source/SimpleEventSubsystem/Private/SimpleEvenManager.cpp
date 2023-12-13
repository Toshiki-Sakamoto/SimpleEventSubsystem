// Gentle Giants reserves All rights.


#include "SimpleEvenManager.h"
#include "SimpleEventBase.h"


DECLARE_LOG_CATEGORY_EXTERN(WarningSimpleEventManager, Warning, All);
DEFINE_LOG_CATEGORY(WarningSimpleEventManager);


bool USimpleEventManager::Trigger(USimpleEventBase* Payload)
{
	const auto Name = Payload->GetFName().GetPlainNameString(); // Use PlainNameString since it comes with Number when it is instantiated.

	FListeners* Listeners = ListenersMap.Find(Name);
	if (!Listeners) return false;

	for (auto It = Listeners->CreateIterator(); It; ++It)
	{
		It->second.Execute(Payload);
	}

	return true;
}


void USimpleEventManager::AddListener(UObject* Listener, TSubclassOf<USimpleEventBase> EventType, FSimpleEventManagetDelegate Delegate)
{
	const auto Name = EventType.Get()->GetFName().GetPlainNameString();

	// You will be searched twice, but it is safer than double registration.
	if (ExistsListener(Name, Listener))
	{
		UE_LOG(WarningSimpleEventManager, Warning, TEXT("Listener already exists. ListenerName: [%s] EventName: [%s]"), *Listener->GetName(), *EventType->GetName());
		return;
	}

	FEventUnifiedDelegate UnifiedDelegate(Delegate);
	FListeners* Listeners = ListenersMap.Find(Name);

	if (Listeners == nullptr)
	{
		ListenersMap.Add(Name, FListeners());
		Listeners = ListenersMap.Find(Name);
	}

	Listeners->Add({ Listener, MoveTemp(UnifiedDelegate) });
}

void USimpleEventManager::AddActorListener(AActor* Listener, TSubclassOf<USimpleEventBase> EventType,
	FSimpleEventManagetDelegate Delegate)
{
	Listener->OnDestroyed.AddDynamic(this, &USimpleEventManager::OnActorListenerDestroy);

	AddListener(static_cast<UObject*>(Listener), EventType, Delegate);
}

void USimpleEventManager::RemoveListener(UObject* Listener)
{
	for (auto& Element : ListenersMap)
	{
		FListeners& Listeners = Element.Value;

		Listeners.RemoveAll([&Listener](const FListenerPair& Pair)
			{
				return Pair.first == Listener;
			});
	}
}


bool USimpleEventManager::ExistsListener(FString EventName, UObject* Listener)
{
	const FListeners* Listeners = ListenersMap.Find(EventName);

	if (!Listeners) return false;

	const FListenerPair* Pair = Listeners->FindByPredicate([&Listener](const FListenerPair& Element)
		{
			return Element.first == Listener;
		});

	return Pair != nullptr;
}


void USimpleEventManager::OnActorListenerDestroy(AActor* Actor)
{
	RemoveListener(Actor);
}
