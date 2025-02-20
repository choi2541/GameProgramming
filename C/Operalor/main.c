/*
작성일자 : 2025-02-19
작성자 : 최수환
주제 : 연산자 실습
*/

/*
* 
* 사칙연산 : +,-,*,/
* 
* 단항 연산자
*	부호 : +, - 음수, 양수 -10, +10
* 
* 
* 이항 연산자
* num1 + num2
* 
* 삼항연산자
* ? 1항 = 2항 : 3항
* 
*/


/*
* 연산자의 쓰임새
* 산술 연산자 +, -, *, / 
* 비교 연산자 >, <, ===
* 비트 연산자 (data type)
* 관계 연산자 (or, and, ||, &&)
*/

/*
* 비교 연산자
* 1, 0 : 1 + 0 = 1;
*/

/*
* 
* ""커스텀
* 
* #include <>
* #include ""
*/

#include <stdio.h>
#include <stdbool.h>
#include "test.h"
int main()
{ 
	printf("연산자 실습\n");

	int num1 = 10;
	int num2 = 3;

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d 나머지 %d = %d\n", num1, num2, num1 % num2);

	printf("실습 2 \n");
	printf("비교결과 num1 > num2 : %d\n", num1 > num2); //참
	printf("비교결과 num1 > num2 : %d\n", num1 < num2); //거짓

	printf("실습 3 : 삼항 연산자 \n");
	bool isTrue = true;
	bool isFalse = false;

	int result1 = num1 > num2;

	printf("삼항 연산자 결과 출력 : %s \n", result1 ? "true" : "false");
	printf("삼항 연산자 결과 출력 : %d \n", result1 ? 1 : 0);

	printf("실습 4 : 관계 연산자 \n");

	// !num2 : num2가 아니다. false -> true // true -> false

	printf("관계 연산자 : %d \n",(num1 != num2) || (num1 < num2)); // num1!= num2 두 수가 다를 때
	printf("관계 연산자 : %d \n", (num1 != num2) && (num1 < num2)); // num1!= num2 두 수가 다를 때


	printf("실습 5 : 복합 연산자 \n");

	int num3 = 2;
	int num4 = 5;
	num3 != num4; //num3 = num3 + num4; // num3 <- 2 + 5 = 7
	

	// T= T + A;
	// T += A;
	printf("num3+ num4의 값 : %d \n", num3);

	printf("실습 6 : 후위 연산자, 전위 연산자 \n");

	printf("num3의 값 : %d \n", num3++);
	printf("num3의 값 : %d \n", num3);
	printf("num4의 값 : %d \n", ++num4);
	printf("num4의 값 : %d \n", num4);

	// |, &, <<, >>

	// 게임 스토리 1
	//무기 강화할때
	//n강일 때의 무기, n+1 무기의 정보화면에 출력하는 스토리를 작성해보세요
	
	int basePower = 10;
	int weaponLv = 1;
	int weight = 2;

	int attackPower = basePower + weaponLv * weight;

	printf("무기레벨 : %d, 무기의 공격력 : %d \n", weaponLv++, attackPower);
	attackPower = basePower + weaponLv * weight;
	printf("무기레벨 : %d, 무기의 공격력 : %d \n", weaponLv, attackPower);


	//게임스토리 2

	//아이템 인벤토리. Slot. 기타 아이템 수집. Stack x 갯수
	// Slot 최대 갯수 : 변수
	// Stack 최대 갯수 : 변수
	// A 아이템을 n개 획득, B 아이템 m개 획득
	// 현재 인벤토리의 갯수가 가득 찼는지 안찼는지 표현하는 결과를 표현해보세요.

	int maxInventorySlot = 10;
	int AStackCount = 200;
	int BStackCount = 200;
	int ADrop = 555;
	int BDrop = 555;
	printf("1시간 동안 사냥을 해서 아이템을 획득을 했다. \n");
	printf("A아이템 : %d, B아이템 : %d 획득했다.\n", ADrop, BDrop);

	// 나머지

	int AInventoryCount = (ADrop % AStackCount) == 0 ? (ADrop / AStackCount) : (ADrop / AStackCount) + 1;
	int BInventoryCount = (BDrop % BStackCount) == 0 ? (BDrop / BStackCount) : (BDrop / BStackCount) + 1;

	printf(" A의 갯수 :%d B의 갯수 : %d\n", AInventoryCount, BInventoryCount);
	printf("결과 :  %s\n", maxInventorySlot <= (AInventoryCount + BInventoryCount) ? "가득참" : "가득안참");


	//3항 연산자.



	//게임 스토리3. 작성해보세요.


}