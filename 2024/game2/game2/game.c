#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void init_board(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 1;
	int j = 1;
	printf("--------扫雷游戏--------\n\n");
	printf("   ");
	for (j = 1; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	printf("   ");
	for (j = 1; j <= col; j++)
	{
		printf("--");
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d |", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("| %d\n",i);
	}
	printf("   ");
	for (j = 1; j <= col; j++)
	{
		printf("--");
	}
	printf("\n");
	printf("   ");
	for (j = 1; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n\n");
	printf("--------扫雷游戏--------\n");
}

void set_mine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-row
		int y = rand() % col + 1;//1-col
		if (board[x][y] == '0')//无雷
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char board[ROWS][COLS],int x, int y)
{
	return (board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][ y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1] - 8*'0');
}

int better_count_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int count = 0;
	// 检查边界条件和当前位置是否需要处理
	if (1 <= x && x <= ROW && 1 <= y && y <= COL && show[x][y] == '*')
	{
		int ret;
		ret = get_mine_count(mine, x, y);
		// 如果当前位置是空白区域，递归检查周围区域
		if (ret==0)//八个格子都为0
		{
			show[x][y] = ' ';// 更新为空格
			count++;
			// 递归检查周围的八个位置
			// 递归调用周围的格子，累计返回值到 count
			count += better_count_mine(mine, show, x - 1, y);
			count += better_count_mine(mine, show, x - 1, y - 1);
			count += better_count_mine(mine, show, x, y - 1);
			count += better_count_mine(mine, show, x + 1, y + 1);
			count += better_count_mine(mine, show, x + 1, y);
			count += better_count_mine(mine, show, x + 1, y + 1);
			count += better_count_mine(mine, show, x, y + 1);
			count += better_count_mine(mine, show, x - 1, y + 1);
		}
		else//如果八个格子中有一个不为0，跳出递归
		{
			show[x][y] = ret + '0';// 更新为相应的数字
			count++;
		}

	}
	//追踪在递归过程中一共检查了多少个格子
	return count;
}

int is_win(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
				count++;
		}
	}
	return count;
}

void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int ret = 0;
	while (1)
	{
		printf("请输入要排查的坐标(x，y),仅输入数字，中间用空格隔开:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("不允许重复输入坐标，请重新输入\n");
			}
			else
			{
				if (mine[x][y] == '1')//如果是雷
				{
					printf("很遗憾，你被炸死了\n");
					display_board(mine, ROW, COL);
					break;
				}
				else//不是雷，统计
				{
					int count = better_count_mine(mine, show, x, y);
					printf("恭喜你！本轮成功排查了%d个格子\n",count);
					//函数的返回值被直接丢弃（相当于主函数“忽略”了它）
					display_board(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("输入坐标不合法，请重新输入\n");
		}
		ret = is_win(show, ROW, COL);
		if (ret == EASY_COUNT)
		{
			printf("恭喜你，排完了！\n");
			display_board(mine, ROW, COL);
			break;
		}
	}
}

