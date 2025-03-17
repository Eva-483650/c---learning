#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"tools.h"
#include<time.h>
int main()
{
	initgraph(480, 800, EX_SHOWCONSOLE);
	setbkcolor(RGB(204, 153, 204));
	cleardevice();

	//����
	IMAGE img_sheet;
	loadimage(&img_sheet,"asserts/pikachu.png");
	
	//֡��
	int imgSize = 32;//ÿ֡�ĳߴ�
	const int framedelay = 1000 / 60;
	int frameStart = 0;
	int frameTime = 0;
	int frame = 7;//�ܹ��ж���֡
	int index = 0;//����һ��ͼ
	int speed = 200;//���ٺ��뻻һ��ͼ
	while (1)
	{
		frameStart = clock();
		BeginBatchDraw();
		cleardevice();

		drawImg(250, 250, imgSize, imgSize, &img_sheet, imgSize * index, 0);

		EndBatchDraw();

		index = (clock() / speed) % frame;//��ֹԽ��

		frameTime = clock() - frameStart;
		if (frameTime < framedelay)
		{
			Sleep(framedelay - frameTime);
		}
	}

	getchar();
	return 0;
}