#include "MyActor.h"
#include "Math/UnrealMathUtility.h"   

AMyActor::AMyActor()
{
    PrimaryActorTick.bCanEverTick = false; 
    CurrentPos = FVector2D(0, 0);          // 시작점 (0,0)
}

void AMyActor::BeginPlay()
{
    Super::BeginPlay();

    Move(); 
}

int32 AMyActor::Step()
{
    return FMath::RandRange(0, 1);
}

void AMyActor::Move()
{
    UE_LOG(LogTemp, Warning, TEXT("=== Move Start ==="));

    for (int32 i = 0; i < 10; i++)
    {
        int32 dx = Step();
        int32 dy = Step();

        CurrentPos.X += dx;
        CurrentPos.Y += dy;

        FVector NewLocation(CurrentPos.X * 100.0f, CurrentPos.Y * 100.0f, 0.0f);
        SetActorLocation(NewLocation);

        // 정수 좌표 출력
        UE_LOG(LogTemp, Warning, TEXT("Step %d: Current Position = (%d, %d)"),
            i + 1,
            FMath::RoundToInt(CurrentPos.X),
            FMath::RoundToInt(CurrentPos.Y));
    }

    UE_LOG(LogTemp, Warning, TEXT("=== Move End ==="));
}


