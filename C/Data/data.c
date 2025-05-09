/*
작성일자 : 2025-02-20
작성자 : 최수환
주제 : 데이터 표현방식
*/

/*
* 2가지의 타입 : 정수, 실수 + 문자(숫자)
* int, char, short, long, longlong - 정수
* float, duble, decimal - 실수
* 
* (사람 - 사람) (컴퓨터 - 사람) int 어떻게 이해를 할까?
* int 변수이름; 변수이름 녀석이 정수형태의 값을 받을 수 있다. + 데이터 저장
*/

/*
* 정수를 표현하는 방법
* - 표현하는 키워드가 많다
* - 이유 : 최선의 메모리를 사용하기 위해서
* - 컴퓨터 정보를 읽는 기본 단위 : 바이트 = 8비트
* - 비트 ㅁ(0,1)
* 
*  char(1), short(2),int(4) 
*  10진수 2진수
*  16          0000 0000 2^8 = 256
*  127         0000000(2)
*              00111111
*  int attackPower; 00000000 00000000 00000000;
*  char ch1;                          00000000;
* 
*/

/*
* 뺄셈 : A - B            A + B
* 정수 : 음수를 표현하는 방법
* MSB : Most Signmant Bit
* 데이터 표방식에서 가장 왼쪽끝에 있는 비트에 할당한다.
* 
* 5 양수  00000101 2^2 * 1 +2^0 = 4+1 = 5
* - 5 비트로 어떻게 표현
* 
* 2보수법
*              00000101
*              10000101 -> 뒤집는다 => 11111010
*              11111111
*                     1
*          1   00000000
* 
* 
* 5+ (-5) = 0  10001010
* 
* 
*
*/


/*
* 컴퓨터는데이터 타입이 다르면 문제가 생길수도 있구나.
* 문제가 생겼을 때 어떻게 해결하면될까?
* 
*/

/*
* 실수를 표현하는 방식
* 
* 2바이트           00000000 00000000
* 8 8 (절반은 정수, 절반은 실수)
* 00000101 00000101 -> 5.5
* 
*/


/* 
* int attackpower = 10 + 1 * 0.3;
* 
* 리터럴 상수
* int, double - int 형 정의, double 형 정의
* 1 * 0.3; 0.3
* int 정의 => 0
* double 정의 => 0.3
* 반드시 손실이 발생. .-> 날라간다
* 이유 -> double 11 + 0.3
* 
*/

/*
* 데이터 형 -> 스스로 형태를 바꾸고 있다.
* 형 변환 
*  - 자동 : 묵시적 변환
*  - 수동 : 명시적 변환
*/

#include <stdio.h>

int main()
{
	int attackPower = 10 + 1 * 0.3;
	double attackPower2 = 10 + 1 * 0.3;
	printf("값 : %lf\n", attackPower2); // %d = 정수표현 방식의 값으로 읽어온다.
	printf("정수의 표현 방식 실습\n");

	char num1 = 129;          // 0000 0000
	                          // 0011 1111 127
	                          // 1100 0001 -127

	int num2 = 129;
	char num3 = num2;

	printf("값 : %d\n", num1);

}