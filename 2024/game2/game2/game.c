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
	printf("--------ɨ����Ϸ--------\n\n");
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
	printf("--------ɨ����Ϸ--------\n");
}

void set_mine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-row
		int y = rand() % col + 1;//1-col
		if (board[x][y] == '0')//����
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
	// ���߽������͵�ǰλ���Ƿ���Ҫ����
	if (1 <= x && x <= ROW && 1 <= y && y <= COL && show[x][y] == '*')
	{
		int ret;
		ret = get_mine_count(mine, x, y);
		// �����ǰλ���ǿհ����򣬵ݹ�����Χ����
		if (ret==0)//�˸����Ӷ�Ϊ0
		{
			show[x][y] = ' ';// ����Ϊ�ո�
			count++;
			// �ݹ�����Χ�İ˸�λ��
			// �ݹ������Χ�ĸ��ӣ��ۼƷ���ֵ�� count
			count += better_count_mine(mine, show, x - 1, y);
			count += better_count_mine(mine, show, x - 1, y - 1);
			count += better_count_mine(mine, show, x, y - 1);
			count += better_count_mine(mine, show, x + 1, y + 1);
			count += better_count_mine(mine, show, x + 1, y);
			count += better_count_mine(mine, show, x + 1, y + 1);
			count += better_count_mine(mine, show, x, y + 1);
			count += better_count_mine(mine, show, x - 1, y + 1);
		}
		else//����˸���������һ����Ϊ0�������ݹ�
		{
			show[x][y] = ret + '0';// ����Ϊ��Ӧ������
			count++;
		}

	}
	//׷���ڵݹ������һ������˶��ٸ�����
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
		printf("������Ҫ�Ų������(x��y),���������֣��м��ÿո����:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("�������ظ��������꣬����������\n");
			}
			else
			{
				if (mine[x][y] == '1')//�������
				{
					printf("���ź����㱻ը����\n");
					display_board(mine, ROW, COL);
					break;
				}
				else//�����ף�ͳ��
				{
					int count = better_count_mine(mine, show, x, y);
					printf("��ϲ�㣡���ֳɹ��Ų���%d������\n",count);
					//�����ķ���ֵ��ֱ�Ӷ������൱�������������ԡ�������
					display_board(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("�������겻�Ϸ�������������\n");
		}
		ret = is_win(show, ROW, COL);
		if (ret == EASY_COUNT)
		{
			printf("��ϲ�㣬�����ˣ�\n");
			display_board(mine, ROW, COL);
			break;
		}
	}
}

