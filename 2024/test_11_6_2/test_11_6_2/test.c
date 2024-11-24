#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("******* 1.play  0.exit *******\n");
	printf("******************************\n");
}
void game()
{
	char board[ROW][COL] = {0};
	char ret = 0;
	//初始化棋盘
	init_board(board, ROW, COL);
	//打印棋盘
	display_board(board, ROW, COL);
	//下棋
	while (1)
	{
		player_move(board, ROW, COL);
		//判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		display_board(board, ROW, COL);
		computer_move(board, ROW, COL);
		//判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		display_board(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("恭喜你赢得比赛！\n");
	}
	else if (ret == '$')
	{
		printf("很遗憾电脑比你聪明......\n");
	}
	else
	{
		printf("平局\n");
	}
	display_board(board, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
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