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
	

	//ctrl, k, s ������ ���δ� ����
	while (true)
	{
		printf("1_��ȭ�Ѵ�\n");
		printf("2_����Ѵ�\n");
		printf("3_�����Ѵ�\n");

		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n'); //character �Է� ����

		// Alt, Ű���� �� �Ʒ� ����


		if (inputNumber == 1)
		{
			printf("��ȭ�� �����մϴ�.\n");
			weaponLv = weaponLv + 1;
			currentAttackPower = baseAttackPower + weaponLv * weight;
			printf("���� ���ݷ� : %d, ���ⷹ�� : %d\n", currentAttackPower, weaponLv);
		}
		else if (inputNumber == 2)
		{
			printf("��ȭ�� ����մϴ�.\n");
		}
		else if (inputNumber == 3)
		{
			printf("���α׷��� �����մϴ�.\n");
		}
		else
		{
			printf("�߸��� ���� �Է��߽��ϴ�.\n");
		}
		//�÷��̾ Ư�� Ű �ƹ� Ű�� �Է����� �� �Ѿ���� �ϰ� �ʹ�.



		_getch(); // �Է� ���� �޾ƿ��� ��ɾ�

	}
}
