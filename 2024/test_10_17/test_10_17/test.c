#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//电脑产生一个随机数 1-100
//猜数字
//猜大了 猜小了
//直到猜对

#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*****************************\n");
	printf("**********  1.play  *********\n");
	printf("**********  0.exit  *********\n");
	printf("*****************************\n");

}

// rand生成随机数，0--RAND_MAX(32767)

void game()
{
	int num = 0;
	//1.生成随机数
	int ret = rand()%100 + 1;
	//2.猜数字
	while (1)
	{
		printf("请猜数字");
		scanf("%d", &num);
		if (num > ret)
			printf("猜大了\n");
		else if (num < ret)
			printf("猜小了\n");
		else
		{
			printf("回答正确\n");
			break;
		}
	}
	

}

//指针
//int *p = NULL;
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
