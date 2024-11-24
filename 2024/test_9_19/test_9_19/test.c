#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, h, m, s;
	scanf("%d", &x);
	h = x / 3600;
	x %= 3600;
	m = x / 60;
	x %= 60;
	s = x;
	//满24h变为0
	while (h > 23)
	{
		h -= 24;
	}
	printf("%02d:%02d:%02d\n", h, m, s);
	return 0;
}







//int main()
//{
//	char a;
//	scanf("%c", &a);
//	printf("%c%c%c\n", a - 1, a, a + 1);
//
//	return 0;
//}













//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	if (x > 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//	printf("%d\n", y);
//
//	return 0;
//}


//操作符
//算数操作符
//除号的两端都是整数的时候，执行的是整数除法，出现一个浮点数就执行浮点数的除法
// float a = 7 / 2.0;
//取模（求余数）的两端只能是整数
//赋值操作符
//=赋值
//a += 3 >> a = a + 3
//单目操作符
//!--逻辑反操作

//int main()
//{
//	/*int flag = 0;
//	if (!flag)
//	{
//		printf("hehe\n");
//	}*/
//
//	int a = -10;
//	int b = -a;
//	printf("%d", b);
//
//	return 0;
//}

//sizeof是单目操作符

//int main()
//{
//	//int a = 0;
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof a);//4，此处可省略括号
//
//	//int arr[10] = { 0 };//每个整型占4个字节
//	//printf("%d\n", sizeof(arr));//40，计算整个数组的大小，单位是字节
//	//printf("%d\n", sizeof(arr[0]));//4
//	//printf("%d\n", sizeof(arr) / sizeof[0]);//10--数组的元素个数
//
//
//	return 0;
//}

