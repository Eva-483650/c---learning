#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��ӡ����
//int main()
//{
//	int line = 0;//�ϰ벿�ֵ�����
//	scanf("%d", &line);//7
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)//6 5 4 3 2 1 0
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");//1 3 5
//		}
//		printf("\n");
//	}
//	//��
//	for (i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i+1; j++)//1 2 3 4 5 6
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)//11 9 8
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ������
//�ȶ�����ˮ��
int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;
	int empty = money;

	//�û�
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
	if (money > 0)
	{
		printf("%d\n", 2*money-1);
	}
	else
	{
		printf("%d\n",0);
	}
	return 0;
}