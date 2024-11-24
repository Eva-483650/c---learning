#define _CRT_SECURE_NO_WARNINGS


//将三个整数从大到小输出
//void swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//打印1-100之间所有3的倍数

//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//给定两个数，求两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	int n = min;
//	while (1)
//	{
//		if (a % n == 0 && b % n == 0)
//		{
//			break;
//		}
//		n--;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//
//#include <stdio.h>
//int digit(long long n)
//{
//	int count = 0;
//	while(1)
//	{
//		n = n / 10;
//		count++;
//		if (n % 10 == 0)
//			break;
//	}
//	return count;
//}
//int breakup(long long a)
//{
//	return a % 10;
//}
//void swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	long long num = 0;
//	scanf("%lld", &num);
//	if (num < 0)
//	{
//		printf("NULL");
//	}
//	else
//	{
//		int arr[19] = { 0 };
//		int i = 0;
//		int n = digit(num);
//		for (i = 0; i <= n - 1; i++)
//		{
//			arr[i] = breakup(num);
//			num = num / 10;
//		}
//		for (i = 0; i <= n - 2; i++)
//		{
//			if (arr[i] < arr[i + 1])
//				swap(&arr[i], &arr[i + 1]);
//		}
//		i = 0;
//		while (1)
//		{
//			printf("%d", arr[i]);
//			i++;
//			if (arr[i] == 0)
//				break;
//		}
//	}
//	return 0;
//}

#include<stdio.h>
long long f(long long n)
{
	long long t = 0;
	while (n)
	{
		t = t * 10 + n % 10;
		n = n / 10;
	}
	return t;
}
int main()
{
	long long num = 0;
	scanf("%lld", &num);
	if (num < 0)
	{
		printf("NULL");
	}
	else 
	{
		printf("%lld", f(num));
	}
	return 0;
}

