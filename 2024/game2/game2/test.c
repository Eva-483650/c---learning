#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("**********  1.play  **********\n");
	printf("**********  0.exit  **********\n");
	printf("******************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	//初始化数组的内容为指定的内容
	//mine数组在没有布置的数组的时候。都是'0'
	init_board(mine,ROWS,COLS,'0');
	//show数组在没有排查雷的时候，都是'*'
	init_board(show, ROWS, COLS,'*');
	//设置雷
	set_mine(mine, ROW, COL);
	//打印棋盘
	//display_board(mine, ROW, COL);
	display_board(show, ROW, COL);
	//排查雷
	find_mine(mine, show, ROW, COL);

}
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
			printf("扫雷\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}