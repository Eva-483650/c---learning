#include<stdio.h>
#include<easyx.h>
#include"tool.h"

int main()
{
	initgraph(500,750,EX_SHOWCONSOLE);//1000*1500
	setbkcolor(RGB(111, 60, 137));
	cleardevice();
	
	//¶¨ÒåÍ¼Æ¬
	IMAGE img_nb;
	//¼ÓÔØÍ¼Æ¬  D:\\code\\c---learning\\2025\\test_3_16_2\\test_3_16_2\\asserts
	//¾ø¶ÔÂ·¾¶
	loadimage(&img_nb, "asserts/nb.jpg",500,750);
	//Êä³öÍ¼Æ¬
	putimage(0, 0, &img_nb);

	//ÑÚÂëÍ¼Í¸Ã÷ÌùÍ¼
	//IMAGE img_plane[2];
	//loadimage(img_plane + 0, "asserts/plane.jpg");
	//loadimage(img_plane + 1, "asserts/plane.jpg");
	//putimage(50, 100, imag_plane + 0, NOTSRCERASE);//ÏÈ»­ÑÚÂë
	//putimage(50, 100, imag_plane + 1, SRCINVERT);//ÔÙ»­Í¼Ïñ

	//pngÍ¸Ã÷ÌùÍ¼
	IMAGE img_fire;
	loadimage(&img_fire, "asserts/fire.png",160,160);
	drawImg(160, 480, &img_fire);
	getchar();
	return 0;
}