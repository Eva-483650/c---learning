#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <easyx.h>
#include <ctime>
//清屏
//双缓冲
//帧率控制

int main()
{
	initgraph(640, 480, EX_SHOWCONSOLE);
	setbkcolor(RGB(239, 193, 206));
	cleardevice();
	setbkmode(TRANSPARENT);// 设置文本背景模式为透明

	//FPS 60f
	const clock_t FPS = 1000 / 60; //1s/60帧 = 16.6 每一帧的时间
	int startTime = 0;
	int freamTime = 0;//当前帧实际执行时间

	int score = 0;
	char str[100] = "";//此处越界不报错！！！
	while (1)
	{
		startTime = clock();//获取当前时间 毫秒50ms

		sprintf(str, "Score:%d", score++);
		settextcolor(BLACK);

		//双缓冲防止闪屏
		BeginBatchDraw();

		cleardevice();//用设置的背景色填充整个窗口
		outtextxy(20, 20, str);

		EndBatchDraw();

		freamTime = clock() - startTime;//56-50=6ms
		if (freamTime < FPS)
		{
			Sleep(FPS - freamTime);
		}
	}
	return 0;
}