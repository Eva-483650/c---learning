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
	//��ʼ������
	init_board(board, ROW, COL);
	//��ӡ����
	display_board(board, ROW, COL);
	//����
	while (1)
	{
		player_move(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		display_board(board, ROW, COL);
		computer_move(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		display_board(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("��ϲ��Ӯ�ñ�����\n");
	}
	else if (ret == '$')
	{
		printf("���ź����Ա������......\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	display_board(board, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}