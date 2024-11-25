#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//打印菱形
//int main()
//{
//	int line = 0;//上半部分的行数
//	scanf("%d", &line);//7
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//空格
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
//	//下
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

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以
//喝多少汽水？
int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;
	int empty = money;

	//置换
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