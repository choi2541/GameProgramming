/*
작성일자 : 2025-02-18
작성자 : 최수환
주제 : 변수에 대한 이해
*/

/*
*변수
*(변수)선언
*(데이터형)(변수의 이름)
*(변수) 초기화
* 주의해야할점
* 
* 변수를 사용하려면 선언해야한다. 
* 선언 후 초기화를 해야한다.
* 이미 선언한 변수에 다시 선언할 수 없다.
* 
*/

/* 
* 변수의 이름규칙
* 1. 변수의 시작 이름에 숫자가 들어가면 안된다.
* 2. 이름에 특수기호가 들어가면 안된다.
* 3. 언더바, 알파벳, 숫자
* 4. 이름 사이에 공백문자가 들어갈 수 없다.
* 5. 키워드는 이름으로 사용할수 없다.
*/








/* 
* 연산자
* 사칙연산 : +,-,*,/
* 나머지, 몫: 
* 0,1 bit 연산자
* a>b, a<b, a == b 관계연산자
*/



/* 공격
*/

#include <stdio.h>

int main()
{
	int attackPower;

	int basicPower = 10;
	int weaponLevel = 0;
	int growthPower = 3;

	attackPower = basicPower + weaponLevel * growthPower;

	float _attackfloatPower;
	_attackfloatPower = 10.5;
	printf("무기의 이름: %s, 무기의 레벨 : %d, 무기 성공 확률 : %f\n ","롱소드", 1, 0.8);
	printf("강화가  성공하였습니다. 무기의 공격력이 증가하였습니다.\n");
	printf("강화 후 무기의 공격력이 %d이 되었습니다.\n", attackPower);


	printf("\n");


	// 예제문제
	// 사각형의 넓이를 구하는 문제를 만들어 봅시다.


	printf("예제 문제1 : 사각형의 넓이를 출력하는 내용을 콘솔창에 줄력해보세요\n");
	int width, height, extent;
	width = 123;
	height = 417;
	extent = width * height;



	printf("직사각형의 넓이를 구합니다.\n");
	printf("가로와 세로를 곱합니다. 넓이 = %d * %d\n", width, height);
	printf("사각형의 넓이는 %d입니다.\n", extent);




	// 정수형 데이터를 선언, width, height
	// 넓이 = 가로 * 세로

	// 사각형의 넓이를 구합니다.
	// 가로와 세로를 곱합니다.
	// 사각형의 넓이는 N입니다.

	int widtht, heightt, extentt;


	printf("가로의 길이를 입력해주세요\n");
	scanf("%d", &widtht);
	printf("세로의 길이를 입력해주세요\n");
	scanf("%d", &heightt);

	extentt = widtht * heightt;

	printf("사각형의 넓이는 %d입니다.\n", extentt);
}

	
