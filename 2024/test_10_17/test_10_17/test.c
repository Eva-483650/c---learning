#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���Բ���һ������� 1-100
//������
//�´��� ��С��
//ֱ���¶�

#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*****************************\n");
	printf("**********  1.play  *********\n");
	printf("**********  0.exit  *********\n");
	printf("*****************************\n");

}

// rand�����������0--RAND_MAX(32767)

void game()
{
	int num = 0;
	//1.���������
	int ret = rand()%100 + 1;
	//2.������
	while (1)
	{
		printf("�������");
		scanf("%d", &num);
		if (num > ret)
			printf("�´���\n");
		else if (num < ret)
			printf("��С��\n");
		else
		{
			printf("�ش���ȷ\n");
			break;
		}
	}
	

}

//ָ��
//int *p = NULL;
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//������
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
