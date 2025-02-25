/*
작성일자 : 2025-02-21
작성자 : 최수환
주제 : 코드의 흐름 제어 - 반복문
- for 반복문, while 반복문
*/

/*
*  - 1+1+1+1+1 => 1*5
*/

/*
* 반복문
* - 1+1+1+1+1 => 1*100
*  
* for, while
* 
* for(int i=0; i<10; )
* 조건에는 참, 거짓
* 
*/

#include <stdio.h>

int main()
{
	printf("반복문 예제1\n");
	//A이름의 아이템을 획득 - 갯수
	int ACount = 0;
	printf("A아이템의 수 : %d\n", ACount);
	// 아이템 1개 획득했다.
	
	for (int i = 0; i < 100; i++)
	{
		ACount = ACount + 1;
	}

	printf("A아이템의 수 : %d\n", ACount);
	
	printf("반복문 예제2\n");
	
	int BCount = 0;

	for (int i = 0; i < 10; i++)
	{
		BCount = BCount + i;
	}
	printf("B아이템의 수 : %d\n", ACount);

	printf("반복문 예제2\n");
	
	for (int reverseI = 10; reverseI > 0; reverseI-- )
	{
		printf("현재 I의 값 : %d\n", reverseI);
	}
	
	// 게임의 이야기를 입혀서 표현해보도록 합시다.

	for (;;)
	{
		//무기 강화하는 step
		//1. 무기의 stat 표현해주는 단계
		// 무기이름


		printf("강화를 진행하시겠습니까?( Y / N)\n");
		char check = ' ';
		scanf_s("%c", check, 1);
		if (check == 'Y')
		{
			pirntf("강화를 진행합니다.\n");
		}
		else if (check == 'N')
		{
			pirntf("강화를 그만두겠습니다.\n");
		}
		else 
		{
			pirntf("잘못된 값을 입력했습니다.\n");
			scanf_s("%c", check, 1);
			while (getchar() != '\n');
			if (check == 'Y')
			{
				pirntf("강화를 진행합니다.\n");
			}
			else if (check == 'N')
			{
				pirntf("강화를 그만두겠습니다.\n");
			}
			else
			{
				pirntf("잘못된 값을 입력했습니다.\n");
			}
		
		
		
		
		
		
		}




	}
	break;



#include <stdbool.h>

}