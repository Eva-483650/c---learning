#include<stdio.h>
#include<easyx.h>
#include"tool.h"

int main()
{
	initgraph(500,750,EX_SHOWCONSOLE);//1000*1500
	setbkcolor(RGB(111, 60, 137));
	cleardevice();
	
	//����ͼƬ
	IMAGE img_nb;
	//����ͼƬ  D:\\code\\c---learning\\2025\\test_3_16_2\\test_3_16_2\\asserts
	//����·��
	loadimage(&img_nb, "asserts/nb.jpg",500,750);
	//���ͼƬ
	putimage(0, 0, &img_nb);

	//����ͼ͸����ͼ
	//IMAGE img_plane[2];
	//loadimage(img_plane + 0, "asserts/plane.jpg");
	//loadimage(img_plane + 1, "asserts/plane.jpg");
	//putimage(50, 100, imag_plane + 0, NOTSRCERASE);//�Ȼ�����
	//putimage(50, 100, imag_plane + 1, SRCINVERT);//�ٻ�ͼ��

	//png͸����ͼ
	IMAGE img_fire;
	loadimage(&img_fire, "asserts/fire.png",160,160);
	drawImg(160, 480, &img_fire);
	getchar();
	return 0;
}