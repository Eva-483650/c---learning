#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <easyx.h>

//������Ϣ�ṹ�����
ExMessage msg = { 0 };

void drawshape()
{
	//���Ƶ�
	putpixel(50, 50, RED);

	//����������ɫ
	setlinecolor(BLUE);
	//������������ʽ
	setlinestyle(PS_SOLID, 3);
	//������
	line(0, 0, getwidth(), getheight());

	//���ƾ���
	rectangle(100,0,150,50); //��������
	//���������ɫ
	setfillcolor(YELLOW);
	fillrectangle(200, 0, 250, 50); //��������
	solidrectangle(100, 200, 150, 150);//�ޱ߿����

	//����Բ�Ǿ���
	roundrect(100, 200, 200,300, 40, 40); //�����Բ�Ǿ���
	fillroundrect(300, 200, 400, 300, 40, 40); //�����Բ�Ǿ���
	solidroundrect(500, 200, 600, 300, 40, 40); //�ޱ߿�Բ�Ǿ���

	//����Բ��
	setfillcolor(WHITE);
	circle(100, 400, 50); //�����Բ��
	fillcircle(200, 400, 50); //�����Բ��
	solidcircle(300, 400, 50); //�ޱ߿�Բ��

	//������Բ
	ellipse(400, 400, 500, 450); //�������Բ
	fillellipse(500, 400, 600, 450); //�������Բ
	solidellipse(600, 400, 700, 450); //�ޱ߿���Բ

	//����������
	POINT points[] = { {100, 500}, {200, 500}, {150, 550}, {250, 550} };
	polyline(points, 4);
}
void drawText()
{
	//���������С
	settextstyle(30, 0, _T("ƻ��"));
	//����������ɫ
	settextcolor(YELLOW);
	//���ñ���ģʽ
	setbkmode(TRANSPARENT);
	//�����ı�
	outtextxy(50, 50, _T("Hello, EasyX!"));

	//������һ��int�ķ�������Ҫ�����ͼ�ν���
	int score = 100;
	char str[10];
	sprintf(str, "Score:%d", score);
	outtextxy(50, 100, str);
}
void centerText()//�����ı�
{
	//����
	int rx = 30;
	int ry = 380;
	int rw = 200;
	int rh = 60;
	int rr = 20;
	setfillcolor(RGB(255, 222, 145));
	solidroundrect(rx, ry, rx + rw, ry + rh,rr,rr);
	//�ı�
	char str[] = "Center Text";
	int hspace = (rw - textwidth(str)) / 2;
	int vspace = (rh - textheight(str)) / 2;
	settextstyle(30, 0, _T("ƻ��"));
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	outtextxy(rx+hspace, ry+vspace, _T(str));
}

//mx,my�Ƿ���ָ���ľ�������
bool inArea(int mx, int my, int x, int y, int w, int h)
{
	if (mx > x && mx < x + w && my>y && my < y + h)
	{
		return true;
	}
	return false;
}
bool button(int x, int y,int w,int h,const char* text)
{
	//�ж�����Ƿ��ڰ�ť����
	if (inArea(msg.x, msg.y, x, y, w, h))
	{
		setfillcolor(RGB(31, 31, 31));
	}
	else
	{
		setfillcolor(RGB(51, 51, 51));
	}
	//���ư�ť
	solidroundrect(x, y, x + w, y + h, 10, 10);
	//���ư�ť�ı�
	int hSpace = (w - textwidth(text)) / 2;
	int vSpace = (h - textheight(text)) / 2;
	settextstyle(12, 0, _T("ƻ��"));
	settextcolor(WHITE);
	outtextxy(x + hSpace, y + vSpace, _T(text));
	//�жϰ�ť�Ƿ񱻵��
	if (msg.message == WM_LBUTTONDOWN && inArea(msg.x, msg.y, x, y, w, h))
	{
		return true;
	}
	return false;
}

int main()
{
	//����ͼ�δ��� ���*�߶�
	initgraph(800, 600,EX_SHOWCONSOLE|EX_DBLCLKS);
	//���ô�����ɫ
	setbkcolor(RGB(204, 153, 190));
	//�����õı�����ɫ�����������
	cleardevice();
	//���ڵ�������ϵ:�������Ͻ�������ԭ�㣬y��������
	//���ñ���ģʽ
	setbkmode(TRANSPARENT);
	/*drawshape();
	drawText();
	centerText();*/
	
	//����С�������
	int x = 200;
	int y = 200;
	int r = 20;

	int speed = 3;//�ƶ��ٶ�
	int vx = 0;
	int vy = 0;

	//��ȡ��Ϣ
	while (1)
	{
		//��ȡ�����Ϣ�Ͱ�����Ϣ
		if (peekmessage(&msg, EX_MOUSE | EX_KEY))
		{

		}
		//˫�����ͼ:���л�ͼ���������ڴ��н��У���ͼ��ɺ���һ���Ի��Ƶ���Ļ��
		BeginBatchDraw();
		cleardevice();

		if (button(20, 20, 150, 35, "START GAME"))
		{
			printf("START GAME!\n");
		}

		if (button(240, 20, 150, 35, "END GAME"))
		{
			printf("END GAME!\n");
		}
		//�жϰ�����Ϣ
		if (msg.message == WM_KEYDOWN)
		{
			//�����ж����Ǹ�������
			switch (msg.vkcode)
			{
			case VK_UP:
				vy = -1;
				break;
			case VK_DOWN:
				vy = 1;
				break;
			case VK_LEFT:
				vx = -1;
				break;
			case VK_RIGHT:
				vx = 1;
				break;
			case VK_SPACE:
				printf("SPACE\n");
				break;
			case 'A'://������ĸ����������д��д���ַ�
				printf("AAAAA\n");
				break;
			}
		}
		else if (msg.message == WM_KEYUP)
		{
			//�����ж����Ǹ�������
			switch (msg.vkcode)
			{
			case VK_UP:
				vy = 0;
				break;
			case VK_DOWN:
				vy = 0;
				break;
			case VK_LEFT:
				vx = 0;
				break;
			case VK_RIGHT:
				vx = 0;
				break;
			}
		}
		//����С��
		setfillcolor(RGB(220, 220, 220));
		solidcircle(x, y, r);
		//����С���λ��
		x += speed * vx;
		y += speed * vy;
		EndBatchDraw();
		Sleep(10);//˯10����
		//����Ϣ�ṹ�����
		msg.message = 0;
	}

	//��ֹ����һ������
	getchar();
	return 0;
}