#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<easyx.h>
#include"tools.h"
#include<time.h>
int main()
{
	initgraph(480, 800, EX_SHOWCONSOLE);
	setbkcolor(RGB(204, 153, 204));
	cleardevice();

	//动画
	IMAGE img_enemy[4];
	char path[100] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		sprintf(path, "asserts/enemy1_down%d.png", i + 1);
		loadimage(img_enemy + i,path);
	}
	
	//帧率
	const int framedelay = 1000 / 60;
	int frameStart = 0;
	int frameTime = 0;
	int frame = 4;
	int index = 0;
	int speed = 200;
	while (1)
	{
		frameStart = clock();
		BeginBatchDraw();

		cleardevice();
		drawImg(0, 0, img_enemy + index);

		EndBatchDraw();

		index = (clock()/speed) % frame;//防止越界

		frameTime = clock() - frameStart;
		if (frameTime < framedelay)
		{
			Sleep(framedelay - frameTime);
		}
	}

	getchar();
	return 0;
}