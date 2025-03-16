#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <easyx.h>

//定义消息结构体变量
ExMessage msg = { 0 };

void drawshape()
{
	//绘制点
	putpixel(50, 50, RED);

	//设置线条颜色
	setlinecolor(BLUE);
	//设置线条的样式
	setlinestyle(PS_SOLID, 3);
	//绘制线
	line(0, 0, getwidth(), getheight());

	//绘制矩形
	rectangle(100,0,150,50); //无填充矩形
	//设置填充颜色
	setfillcolor(YELLOW);
	fillrectangle(200, 0, 250, 50); //有填充矩形
	solidrectangle(100, 200, 150, 150);//无边框矩形

	//绘制圆角矩形
	roundrect(100, 200, 200,300, 40, 40); //无填充圆角矩形
	fillroundrect(300, 200, 400, 300, 40, 40); //有填充圆角矩形
	solidroundrect(500, 200, 600, 300, 40, 40); //无边框圆角矩形

	//绘制圆形
	setfillcolor(WHITE);
	circle(100, 400, 50); //无填充圆形
	fillcircle(200, 400, 50); //有填充圆形
	solidcircle(300, 400, 50); //无边框圆形

	//绘制椭圆
	ellipse(400, 400, 500, 450); //无填充椭圆
	fillellipse(500, 400, 600, 450); //有填充椭圆
	solidellipse(600, 400, 700, 450); //无边框椭圆

	//绘制折线条
	POINT points[] = { {100, 500}, {200, 500}, {150, 550}, {250, 550} };
	polyline(points, 4);
}
void drawText()
{
	//设置字体大小
	settextstyle(30, 0, _T("苹方"));
	//设置字体颜色
	settextcolor(YELLOW);
	//设置背景模式
	setbkmode(TRANSPARENT);
	//绘制文本
	outtextxy(50, 50, _T("Hello, EasyX!"));

	//现在有一个int的分数，需要输出到图形界面
	int score = 100;
	char str[10];
	sprintf(str, "Score:%d", score);
	outtextxy(50, 100, str);
}
void centerText()//居中文本
{
	//矩形
	int rx = 30;
	int ry = 380;
	int rw = 200;
	int rh = 60;
	int rr = 20;
	setfillcolor(RGB(255, 222, 145));
	solidroundrect(rx, ry, rx + rw, ry + rh,rr,rr);
	//文本
	char str[] = "Center Text";
	int hspace = (rw - textwidth(str)) / 2;
	int vspace = (rh - textheight(str)) / 2;
	settextstyle(30, 0, _T("苹方"));
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	outtextxy(rx+hspace, ry+vspace, _T(str));
}

//mx,my是否在指定的矩形区域
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
	//判断鼠标是否在按钮区域
	if (inArea(msg.x, msg.y, x, y, w, h))
	{
		setfillcolor(RGB(31, 31, 31));
	}
	else
	{
		setfillcolor(RGB(51, 51, 51));
	}
	//绘制按钮
	solidroundrect(x, y, x + w, y + h, 10, 10);
	//绘制按钮文本
	int hSpace = (w - textwidth(text)) / 2;
	int vSpace = (h - textheight(text)) / 2;
	settextstyle(12, 0, _T("苹方"));
	settextcolor(WHITE);
	outtextxy(x + hSpace, y + vSpace, _T(text));
	//判断按钮是否被点击
	if (msg.message == WM_LBUTTONDOWN && inArea(msg.x, msg.y, x, y, w, h))
	{
		return true;
	}
	return false;
}

int main()
{
	//创建图形窗口 宽度*高度
	initgraph(800, 600,EX_SHOWCONSOLE|EX_DBLCLKS);
	//设置窗口颜色
	setbkcolor(RGB(204, 153, 190));
	//用设置的背景颜色填充整个窗口
	cleardevice();
	//窗口的坐标体系:窗口左上角是坐标原点，y向下增大
	//设置背景模式
	setbkmode(TRANSPARENT);
	/*drawshape();
	drawText();
	centerText();*/
	
	//定义小球的属性
	int x = 200;
	int y = 200;
	int r = 20;

	int speed = 3;//移动速度
	int vx = 0;
	int vy = 0;

	//获取消息
	while (1)
	{
		//获取鼠标消息和按键消息
		if (peekmessage(&msg, EX_MOUSE | EX_KEY))
		{

		}
		//双缓冲绘图:所有绘图操作都在内存中进行，绘图完成后再一次性绘制到屏幕上
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
		//判断案件消息
		if (msg.message == WM_KEYDOWN)
		{
			//具体判断是那个键按下
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
			case 'A'://对于字母按键，必须写大写的字符
				printf("AAAAA\n");
				break;
			}
		}
		else if (msg.message == WM_KEYUP)
		{
			//具体判断是那个键按下
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
		//绘制小球
		setfillcolor(RGB(220, 220, 220));
		solidcircle(x, y, r);
		//更新小球的位置
		x += speed * vx;
		y += speed * vy;
		EndBatchDraw();
		Sleep(10);//睡10毫秒
		//把消息结构体清空
		msg.message = 0;
	}

	//防止窗口一闪而过
	getchar();
	return 0;
}