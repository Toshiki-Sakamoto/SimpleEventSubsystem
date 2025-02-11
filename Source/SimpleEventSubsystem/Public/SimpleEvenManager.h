// Gentle Giants reserves All rights.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SimpleEvenManager.generated.h"

class USimpleEventBase;

// Event Delegate : Only one parameter
DECLARE_DYNAMIC_DELEGATE_OneParam(FSimpleEventManagetDelegate, UObject*, Payload);

/** Simple interface to wrap event delegates. */
struct FEventUnifiedDelegate
{
	FEventUnifiedDelegate() {};
	FEventUnifiedDelegate(FSimpleEventManagetDelegate const& Delegate) : FuncDynamicDelegate(Delegate) {};


	inline void Execute(UObject* Payload)
	{
		FuncDynamicDelegate.ExecuteIfBound(Payload);
	}

	inline bool IsBound() const
	{
		return (FuncDynamicDelegate.IsBound());
	}

	inline const void* GetBoundObject() const
	{
		if (FuncDynamicDelegate.IsBound())
		{
			return FuncDynamicDelegate.GetUObject();
		}

		return nullptr;
	}

	inline void Unbind()
	{
		FuncDynamicDelegate.Unbind();
	}


	// Movable only
	FEventUnifiedDelegate(FEventUnifiedDelegate&&) = default;
	FEventUnifiedDelegate(const FEventUnifiedDelegate&) = delete;
	FEventUnifiedDelegate& operator=(FEventUnifiedDelegate&&) = default;
	FEventUnifiedDelegate& operator=(const FEventUnifiedDelegate&) = delete;


private:

	FSimpleEventManagetDelegate FuncDynamicDelegate;
};

/**
 * Subsystem that calls events with class as type.
 * Zero dependencies between classes
 *
 * [[IMPORTANT]]
 * You are responsible for your own destruction of subscriptions.
 * Access violations will not be considered. Better to drop it.
 */
UCLASS()
class SIMPLEEVENTSUBSYSTEM_API USimpleEventManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "SimpleEvent", meta = (WorldContext = "WorldContextObject", DisplayName = "Get SimpleEventManager Instance"))
	static USimpleEventManager* Get(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "SimpleEvent")
	bool Trigger(USimpleEventBase* Payload);

	UFUNCTION(BlueprintCallable, Category = "SimpleEvent", meta = (DefaultToSelf = "Listener"))
	void AddListener(UObject* Listener, TSubclassOf<USimpleEventBase> EventType, FSimpleEventManagetDelegate Delegate);

	// "OnDestroy" automatically calls Remove.
	UFUNCTION(BlueprintCallable, Category = "SimpleEvent", meta = (DefaultToSelf = "Listener"))
	void AddActorListener(AActor* Listener, TSubclassOf<USimpleEventBase> EventType, FSimpleEventManagetDelegate Delegate);

	UFUNCTION(BlueprintCallable, Category = "SimpleEvent", meta = (DefaultToSelf = "Listener"))
	void RemoveListener(UObject* Listener);

private:

	bool ExistsListener(FString EventName, UObject* Listener);

	UFUNCTION()
	void OnActorListenerDestroy(AActor* Actor);


private:

	using FListenerPair = std::pair<UObject*, FEventUnifiedDelegate>;
	using FListeners = TArray<FListenerPair>;

	TMap<FString, FListeners> ListenersMap;
};
