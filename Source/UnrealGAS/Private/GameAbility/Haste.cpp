// Fill out your copyright notice in the Description page of Project Settings.


#include "GameAbility/Haste.h"
#include "AbilitySystemComponent.h"

UHaste::UHaste()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void UHaste::ActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	if (!EffectClass)
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);	// ����Ʈ Ŭ������ ��� ���� ó��
		return;
	}

	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);	// ��Ÿ���� �ȵǾ��ų� �ڽ�Ʈ�� �����ϴ�.
		return;
	}

	UAbilitySystemComponent* ASC = ActorInfo->AbilitySystemComponent.Get();
	FGameplayEffectContextHandle EffectContext = ASC->MakeEffectContext();
	EffectContext.AddSourceObject(this);	// �ҽ��� ��

	FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(
		EffectClass, GetAbilityLevel(), EffectContext);

	if (SpecHandle.IsValid())
	{
		ASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
	}

	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);	// ���������� ������.
}