/*
�ۼ����� : 2025-02-19
�ۼ��� : �ּ�ȯ
���� : ������ �ǽ�
*/

/*
* 
* ��Ģ���� : +,-,*,/
* 
* ���� ������
*	��ȣ : +, - ����, ��� -10, +10
* 
* 
* ���� ������
* num1 + num2
* 
* ���׿�����
* ? 1�� = 2�� : 3��
* 
*/


/*
* �������� ���ӻ�
* ��� ������ +, -, *, / 
* �� ������ >, <, ===
* ��Ʈ ������ (data type)
* ���� ������ (or, and, ||, &&)
*/

/*
* �� ������
* 1, 0 : 1 + 0 = 1;
*/

/*
* 
* ""Ŀ����
* 
* #include <>
* #include ""
*/

#include <stdio.h>
#include <stdbool.h>
#include "test.h"
int main()
{ 
	printf("������ �ǽ�\n");

	int num1 = 10;
	int num2 = 3;

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d ������ %d = %d\n", num1, num2, num1 % num2);

	printf("�ǽ� 2 \n");
	printf("�񱳰�� num1 > num2 : %d\n", num1 > num2); //��
	printf("�񱳰�� num1 > num2 : %d\n", num1 < num2); //����

	printf("�ǽ� 3 : ���� ������ \n");
	bool isTrue = true;
	bool isFalse = false;

	int result1 = num1 > num2;

	printf("���� ������ ��� ��� : %s \n", result1 ? "true" : "false");
	printf("���� ������ ��� ��� : %d \n", result1 ? 1 : 0);

	printf("�ǽ� 4 : ���� ������ \n");

	// !num2 : num2�� �ƴϴ�. false -> true // true -> false

	printf("���� ������ : %d \n",(num1 != num2) || (num1 < num2)); // num1!= num2 �� ���� �ٸ� ��
	printf("���� ������ : %d \n", (num1 != num2) && (num1 < num2)); // num1!= num2 �� ���� �ٸ� ��


	printf("�ǽ� 5 : ���� ������ \n");

	int num3 = 2;
	int num4 = 5;
	num3 != num4; //num3 = num3 + num4; // num3 <- 2 + 5 = 7
	

	// T= T + A;
	// T += A;
	printf("num3+ num4�� �� : %d \n", num3);

	printf("�ǽ� 6 : ���� ������, ���� ������ \n");

	printf("num3�� �� : %d \n", num3++);
	printf("num3�� �� : %d \n", num3);
	printf("num4�� �� : %d \n", ++num4);
	printf("num4�� �� : %d \n", num4);

	// |, &, <<, >>

	// ���� ���丮 1
	//���� ��ȭ�Ҷ�
	//n���� ���� ����, n+1 ������ ����ȭ�鿡 ����ϴ� ���丮�� �ۼ��غ�����
	//���ӽ��丮 2

	//������ �κ��丮. Slot. ��Ÿ ������ ����. Stack x ����
	// Slot �ִ� ���� : ����
	// Stack �ִ� ���� : ����
	// A �������� n�� ȹ��, B ������ m�� ȹ��
	// ���� �κ��丮�� ������ ���� á���� ��á���� ǥ���ϴ� ����� ǥ���غ�����.

	//3�� ������.

	//���� ���丮3. �ۼ��غ�����.


}