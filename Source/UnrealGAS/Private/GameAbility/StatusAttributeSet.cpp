// Fill out your copyright notice in the Description page of Project Settings.


#include "GameAbility/StatusAttributeSet.h"
#include "GameplayEffectExtension.h"

UStatusAttributeSet::UStatusAttributeSet()
{
	InitHealth(100.0f);
	InitMaxHealth(100.0f);
	InitMana(100.0f);
	InitMaxMana(100.0f);
}

void UStatusAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	//값 검증 및 제한 용도, 순수한 수학적 처리 용도
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetHealthAttribute())//이 함수가 health attribute가 변경되어서 호출된 함수이면
	{
		//if (NewValue <= 0.0f)
		//{
		//	NewValue = 0.0f;
		//}
		//if (NewValue >= GetMaxHealth())
		//{
		//	NewValue = GetMaxHealth();
		//}

		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
		//UE_LOG(LogTemp, Log, TEXT("Health가 변경되었다 %.1f -> %.1f"), GetHealth(), NewValue);

		//최대 체력을 넘지 않게 하기
		//체력이 음수가 되지 않게 하기
	}
}

void UStatusAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	//게임 로직 실행, 이벤트 발생, 다른 시스템과의 상호작용 용도
	Super::PostGameplayEffectExecute(Data);
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		UE_LOG(LogTemp, Log, TEXT("현재 Health %.1f"), GetHealth());
		if (GetHealth() <= 0.0f)
		{
			UE_LOG(LogTemp, Log, TEXT("사망"));

		}
	}
}
