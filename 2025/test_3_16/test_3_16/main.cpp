#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <easyx.h>
#include <ctime>
//����
//˫����
//֡�ʿ���

int main()
{
	initgraph(640, 480, EX_SHOWCONSOLE);
	setbkcolor(RGB(239, 193, 206));
	cleardevice();
	setbkmode(TRANSPARENT);// �����ı�����ģʽΪ͸��

	//FPS 60f
	const clock_t FPS = 1000 / 60; //1s/60֡ = 16.6 ÿһ֡��ʱ��
	int startTime = 0;
	int freamTime = 0;//��ǰ֡ʵ��ִ��ʱ��

	int score = 0;
	char str[100] = "";//�˴�Խ�粻��������
	while (1)
	{
		startTime = clock();//��ȡ��ǰʱ�� ����50ms

		sprintf(str, "Score:%d", score++);
		settextcolor(BLACK);

		//˫�����ֹ����
		BeginBatchDraw();

		cleardevice();//�����õı���ɫ�����������
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