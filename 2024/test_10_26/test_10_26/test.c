#define _CRT_SECURE_NO_WARNINGS

//每调用一次这个函数，num增加1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	Add(&num);
//	printf("%d\n", num);//4
//	return 0;
//}


//int Add(int n)
//{
//	return n + 1;
//}
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);//1
//	num = Add(num);
//	printf("%d\n", num);//2
//	num = Add(num);
//	printf("%d\n", num);//3
//	num = Add(num);
//	printf("%d\n", num);//4
//	return 0;
//}



//函数的嵌套调用

//链式访问

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}



//#include "add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//程序从上往下执行，程序定义要在main函数之前



#include <stdio.h>
long long jiechen(int n)
{
	long long ret = 1;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		ret = i * ret;
	}
	return ret;
}
int main()
{
	int m = 0;
	int n = 0;
	int f = 0.0;
	scanf("%d %d", &m, &n);
	if (m < n && m>0 && n > 0)
	{
		f = 0;
	}
	else if (m == n && m > 0 && n > 0)
	{
		f = 1;
	}
	else if (m > n && m > 0 && n > 0)
	{
		f = jiechen(m) / (double)jiechen(m - n) / (double)jiechen(n);
	}
	else
	{
		f = -1;
	}
	printf("%d", f);
	return 0;
}