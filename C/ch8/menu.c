/*
* 
*/
#include "menu.h"
#pragma once

int weaponLv = 1;
int baseAttackPower = 10;
int weight = 5;
int currentAttackPower = 0;

void SelectMenu()
{
	

	//ctrl, k, s 누르고 감싸는 거임
	while (true)
	{
		printf("1_강화한다\n");
		printf("2_취소한다\n");
		printf("3_종료한다\n");

		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n'); //character 입력 버퍼

		// Alt, 키보드 위 아래 방향


		if (inputNumber == 1)
		{
			printf("강화를 진행합니다.\n");
			weaponLv = weaponLv + 1;
			currentAttackPower = baseAttackPower + weaponLv * weight;
			printf("현재 공격력 : %d, 무기레벨 : %d\n", currentAttackPower, weaponLv);
		}
		else if (inputNumber == 2)
		{
			printf("강화를 취소합니다.\n");
		}
		else if (inputNumber == 3)
		{
			printf("프로그램을 종료합니다.\n");
		}
		else
		{
			printf("잘못된 값을 입력했습니다.\n");
		}
		//플레이어가 특정 키 아무 키를 입력했을 때 넘어가도록 하고 싶다.



		_getch(); // 입력 값을 받아오는 명령어

	}
}
