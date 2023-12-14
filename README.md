<<注意>>
開発途中のプロジェクトのため動作保証がありません。安定バージョンのアップデートをお待ちください

<Caution>>
This project is still under development, so there is no guarantee that it will work. Please wait for stable version update.

<br>
<br>

<h1 align="center">SimpleEventSubsystem</h1>

## 概要 OverView
UnrealENgine5上で動作するシンプルなイベント送受信システムです。イベント送受信するクラス間の依存関係はありません。

イベントを送る側と受け取る側は 1:N の関係で、受信側は複数の存在が可能です。

【UE5】Systems that can send and receive events without dependencies.The sender and receiver of an event have a 1:N relationship, and the receiver can have multiple entities.

<br>
<br>

## 変更履歴
- v1.0.0 BP上で動作するシステムの作成.  Creating a system that runs on BP

## 導入手順 Installation Procedure
1. Clone or Download 
2. プロジェクトのPlugin配下に追加してください。Please add it to your project's Plugin
3. プロジェクトの Build.cs に "SimpleEventSubsystem" を追加する必要があります。 You need to add "SimpleEventSubsystem" to your project's Build.cs



```C++
PrivateDependencyModuleNames.AddRange(new string[] { .... "SimpleEventSubsystem" });
```

4. 送受信するイベントクラスの定義が必要です。 `SimpleEventBase` クラスを継承してください。

   例えば、プレイヤーがダメージを受けた時に発行されるイベント。

   You need to define an event class to send and receive events. Extend the `SimpleEventBase` class. For example, an event issued when a player takes damage

```C++
#include "CoreMinimal.h"
#include "SimpleEventBase.h"

#include "PlayerDamageEvent.generated.h"

/**
 * Event issued when a player is damaged.
 */
UCLASS(BlueprintType)
class XXXX_API UPlayerDamageEvent : public USimpleEventBase
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite)
	int32 Damage;
};

```

これで事前準備は完了です

That's it.


## BP上でイベントを送受信する方法　 How to send and receive events on BP

あるActorでイベントを受け取りたい場合、 "AddActorListener" が利用できます。

イベントを購読する場合、自身が消える時に破棄が必要です。 Actorの場合 "AddActorListener" を利用することで "OnDestroy" に合わせてシステムが自動的にイベントを破棄を行います。


If you want an Actor to receive events, you can use "AddActorListener".

When subscribing to an event, it must be destroyed when the event itself disappears. In the case of Actor, by using "AddActorListener", the system will automatically destroy the event upon "OnDestroy".

<br>
受け取りたいイベントを `Event Type` に指定してください

Specify the event you want to receive in the `Event Type` field.

<img width="732" alt="image" src="https://github.com/Toshiki-Sakamoto/SimpleEventSubsystem/assets/9328751/2d41e5ab-04fc-4a19-922f-e587b4c843ef">


そして Delegate でイベントの受信処理を書きます

Then, in Delegate, write the event reception process

<img width="917" alt="image" src="https://github.com/Toshiki-Sakamoto/SimpleEventSubsystem/assets/9328751/ab001ba2-130e-4824-a685-ac915cb671ca">

次にイベントの送信処理を書きます。イベントを作成し、Triggerノードを呼び出すだけです。 

Next, write the process of sending the event. Simply create an event and call the Trigger node.

<img width="992" alt="image" src="https://github.com/Toshiki-Sakamoto/SimpleEventSubsystem/assets/9328751/471ee93f-0ba5-45a1-94b7-1de3d47ec0b8">

Triggerが呼び出されると、デリゲートが呼び出されたことが確認できます。
Damage変数も値が渡ってきていることが確認できます

When Trigger is called, you will see that the delegate has been called.
We can see that the value of the Damage variable is also being passed across.

<img width="976" alt="image" src="https://github.com/Toshiki-Sakamoto/SimpleEventSubsystem/assets/9328751/4c082bfb-70dc-4222-9cc8-891dcb9f3633">


これでイベントの送受信の方法は以上です。２クラス間に依存しているものは `SimpleEventManager` だけです。

This is all there is to sending and receiving events.
The only dependency between the two classes is `SimpleEventManager`.

## その他

- よく使うイベントを変数にキャッシュしておくと、再利用できて便利です。
It is useful to cache frequently used events in a variable so that they can be reused.

- `Plugin Downloader` にも対応する予定です
We will also support `Plugin Downloader`.

https://www.unrealengine.com/id/logout?lang=ja&redirectUrl=https%3A%2F%2Fwww.unrealengine.com%2Fmarketplace%2Fja%2Fproduct%2Fplugin-downloader&lang=ja


