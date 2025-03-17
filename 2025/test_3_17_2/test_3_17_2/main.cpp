#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"tools.h"
#include<time.h>
int main()
{
	initgraph(480, 800, EX_SHOWCONSOLE);
	setbkcolor(RGB(204, 153, 204));
	cleardevice();

	//动画
	IMAGE img_sheet;
	loadimage(&img_sheet,"asserts/pikachu.png");
	
	//帧率
	int imgSize = 32;//每帧的尺寸
	const int framedelay = 1000 / 60;
	int frameStart = 0;
	int frameTime = 0;
	int frame = 7;//总共有多少帧
	int index = 0;//贴哪一张图
	int speed = 200;//多少毫秒换一张图
	while (1)
	{
		frameStart = clock();
		BeginBatchDraw();
		cleardevice();

		drawImg(250, 250, imgSize, imgSize, &img_sheet, imgSize * index, 0);

		EndBatchDraw();

		index = (clock() / speed) % frame;//防止越界

		frameTime = clock() - frameStart;
		if (frameTime < framedelay)
		{
			Sleep(framedelay - frameTime);
		}
	}

	getchar();
	return 0;
}