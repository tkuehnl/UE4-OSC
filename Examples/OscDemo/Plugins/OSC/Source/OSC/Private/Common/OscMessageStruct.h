#pragma once

#include "OscDataElemStruct.h"
#include "OscMessageStruct.generated.h"


USTRUCT(BlueprintType)
struct FOscMessageStruct
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=OSC)
    FName Address;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=OSC)
    TArray<FOscDataElemStruct> Data;
};
