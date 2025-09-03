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
    FVector2D CurrentPos;   // ���� ��ǥ (x,y)

    int32 Step();           // 0 �Ǵ� 1 ��ȯ
    void Move();            // 10�� ���� �̵�
};
