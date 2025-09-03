#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class HOMEWORK55_API AMyActor : public AActor
{
    GENERATED_BODY()

public:
    AMyActor();

protected:
    virtual void BeginPlay() override;

private:
    FVector2D CurrentPos;   // 현재 좌표 (x,y)

    int32 Step();           // 0 또는 1 반환
    void Move();            // 10번 랜덤 이동
};
