/*
�ۼ����� : 2025-02-21
�ۼ��� : �ּ�ȯ
���� : �ڵ��� �帧 ���� - �ݺ���
- for �ݺ���, while �ݺ���
*/

/*
*  - 1+1+1+1+1 => 1*5
*/

/*
* �ݺ���
* - 1+1+1+1+1 => 1*100
*  
* for, while
* 
* for(int i=0; i<10; )
* ���ǿ��� ��, ����
* 
*/

#include <stdio.h>

int main()
{
	printf("�ݺ��� ����1\n");
	//A�̸��� �������� ȹ�� - ����
	int ACount = 0;
	printf("A�������� �� : %d\n", ACount);
	// ������ 1�� ȹ���ߴ�.
	
	for (int i = 0; i < 100; i++)
	{
		ACount = ACount + 1;
	}

	printf("A�������� �� : %d\n", ACount);
	
	printf("�ݺ��� ����2\n");
	
	int BCount = 0;

	for (int i = 0; i < 10; i++)
	{
		BCount = BCount + i;
	}
	printf("B�������� �� : %d\n", ACount);

	printf("�ݺ��� ����2\n");
	
	for (int reverseI = 10; reverseI > 0; reverseI-- )
	{
		printf("���� I�� �� : %d\n", reverseI);
	}
	
	// ������ �̾߱⸦ ������ ǥ���غ����� �սô�.

	for (;;)
	{
		//���� ��ȭ�ϴ� step
		//1. ������ stat ǥ�����ִ� �ܰ�
		// �����̸�


		printf("��ȭ�� �����Ͻðڽ��ϱ�?( Y / N)\n");
		char check = ' ';
		scanf_s("%c", check, 1);
		if (check == 'Y')
		{
			pirntf("��ȭ�� �����մϴ�.\n");
		}
		else if (check == 'N')
		{
			pirntf("��ȭ�� �׸��ΰڽ��ϴ�.\n");
		}
		else 
		{
			pirntf("�߸��� ���� �Է��߽��ϴ�.\n");
			scanf_s("%c", check, 1);
			while (getchar() != '\n');
			if (check == 'Y')
			{
				pirntf("��ȭ�� �����մϴ�.\n");
			}
			else if (check == 'N')
			{
				pirntf("��ȭ�� �׸��ΰڽ��ϴ�.\n");
			}
			else
			{
				pirntf("�߸��� ���� �Է��߽��ϴ�.\n");
			}
		
		
		
		
		
		
		}




	}
	break;



#include <stdbool.h>

}