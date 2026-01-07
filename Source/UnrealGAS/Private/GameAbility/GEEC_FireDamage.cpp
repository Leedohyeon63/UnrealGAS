// Fill out your copyright notice in the Description page of Project Settings.


#include "GameAbility/GEEC_FireDamage.h"
#include "GameAbility/StatusAttributeSet.h"
#include "GameAbility/CharacterAttributeSet.h"
//execution calculation 실습 해야함
struct FFireDamageStatics
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Health);
	DECLARE_ATTRIBUTE_CAPTUREDEF(AttackPower);
	FFireDamageStatics()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UStatusAttributeSet, Health, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UCharacterAttributeSet, AttackPower, Source, true);
		
	}

};

static FFireDamageStatics& FireDamageStatics()
{
	static FFireDamageStatics Statics;
	return Statics;
}

UGEEC_FireDamage::UGEEC_FireDamage()
{
	RelevantAttributesToCapture.Add(FireDamageStatics().HealthDef);
	RelevantAttributesToCapture.Add(FireDamageStatics().AttackPowerDef);
	Tag_DebuffBurn = FGameplayTag::RequestGameplayTag(FName("State.Debuff.Burn"));;
	Tag_ElementFire = FGameplayTag::RequestGameplayTag(FName("Element.Fire"));
	Tag_DataDamage = FGameplayTag::RequestGameplayTag(FName("Data.Damage"));
}

void UGEEC_FireDamage::Execute_Implementation(
	const FGameplayEffectCustomExecutionParameters& ExecutionParams, 
	FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	UAbilitySystemComponent* TargetASC = ExecutionParams.GetTargetAbilitySystemComponent();
	UAbilitySystemComponent* SourceASC = ExecutionParams.GetSourceAbilitySystemComponent();

	if (TargetASC && SourceASC)
	{
		const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();
		const FGameplayTagContainer* SourceTag = Spec.CapturedSourceTags.GetAggregatedTags();
		const FGameplayTagContainer* Targetag = Spec.CapturedTargetTags.GetAggregatedTags();

		float Damage = MinimumDamage;
		if (DamageTable)
		{
			float EffectLevel = Spec.GetLevel();
			FRealCurve* DamageCurve = DamageTable->FindCurve(FName("Damage"), TEXT("UGEEC_FireDamage"));
			if (DamageCurve)
			{
				Damage = DamageCurve->Eval(EffectLevel);
			}
		}
		FAggregatorEvaluateParameters EvalueParams;
		EvalueParams.SourceTags = SourceTag;
		EvalueParams.TargetTags = Targetag;
		float AttackPower = 0.0f;
		bool Result = ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(
			FireDamageStatics().AttackPowerDef,
			EvalueParams,
			AttackPower
		);

		if (Result)
		{
			Damage += AttackPower;
		}
		else
		{

		}
		//Damage = Spec.GetSetByCallerMagnitude(Tag_DataDamage, false, 1.0f);
		//if (Damage <= 0)
		//{
		//	Damage = 1.0f;
		//}

		if (SourceTag && SourceTag->HasTag(Tag_ElementFire) &&
			Targetag && Targetag->HasTag(Tag_DebuffBurn))
		{
			Damage *= Multiplier;
		}

		if (Damage > 0.0f)
		{
			OutExecutionOutput.AddOutputModifier(
			FGameplayModifierEvaluatedData(
				FireDamageStatics().HealthProperty,
				EGameplayModOp::Additive,
				-Damage
			)
			);
		}
	}
}
