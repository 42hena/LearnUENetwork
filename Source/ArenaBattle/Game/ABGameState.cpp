// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ABGameState.h"

#include "ArenaBattle.h"

// 로컬의 로직이므로 서버에서만 호출
void AABGameState::HandleBeginPlay()
{
	AB_LOG(LogABNetwork, Log, TEXT("%s"), TEXT("Begin"));
	// Gamemode가 StartPlay() 시 현재 월드에 있는 모든 Actor에게 BeginPlay 호출 후 명령 요청
	Super::HandleBeginPlay();
	AB_LOG(LogABNetwork, Log, TEXT("%s"), TEXT("End"));
}

// bReplicatedHasBegunPlay프로퍼티가 서버로부터 전송되어 변경 감지 시 호출
void AABGameState::OnRep_ReplicatedHasBegunPlay()
{
	AB_LOG(LogABNetwork, Log, TEXT("%s"), TEXT("Begin"));
	Super::OnRep_ReplicatedHasBegunPlay();
	AB_LOG(LogABNetwork, Log, TEXT("%s"), TEXT("End"));
}
