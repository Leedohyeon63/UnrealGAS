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
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
	}
	if (Attribute == GetMaxHealthAttribute())	// MaxHealth가 변경되었는데
	{
		if (NewValue < GetHealth())	// Health가 MaxHealth의 새 값보다 크다면
		{
			UAbilitySystemComponent* AlilityComp = GetOwningAbilitySystemComponentChecked();
			AlilityComp->ApplyModToAttribute(GetHealthAttribute(), EGameplayModOp::Override, NewValue);
		}
	}
}

void UStatusAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	//게임 로직 실행, 이벤트 발생, 다른 시스템과의 상호작용 용도
	Super::PostGameplayEffectExecute(Data);

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())	// Health를 변경시키는 이팩트가 실행된 후에 호출되었는지 확인
	{
		UE_LOG(LogTemp, Log, TEXT("현재 Health : %.1f"), GetHealth());
		// 체력 변화 로직 호출
		SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));

		if (GetHealth() <= 0.0f)
		{
			UE_LOG(LogTemp, Log, TEXT("사망"));
			// 캐릭터 사망처리 로직 호출
		}
	}

	if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		SetMana(FMath::Clamp(GetMana(), 0.0f, GetMaxMana()));
	}
}
