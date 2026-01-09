// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameAbilitySystemEnums.generated.h"

// 어트리뷰트 Getter/Setter/Initializer를 쉽게 만들어주는 매크로
UENUM(BlueprintType)
enum class EAbilityInputID : uint8
{
	Haste,
};