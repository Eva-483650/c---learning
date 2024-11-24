#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//递归

//接受一个无符号整型值，按照顺序打印它的每一位
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//123
//	}
//	printf("%d ", n % 10);//4
//}
////print(1234)
////print(123) 4
////print(12) 3 4
////print(1) 2 3 4
////1 2 3 4
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	print(num);//接受一个无符号整型值，按照顺序打印它的每一位
//	//1 2 3 4
//	return 0;
//}



//编写函数不允许创建临时变量，求字符串长度

//模拟实现strlen
//int my_strlen(char* str)
//{
//	int count = 0;//计数，临时变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;//找下一个字符
//	}
//	return count;
//}

//递归求解
//my_strlen("abc");
//1+my_strlen("bc");
//1+1+my_strlen("c");
//1+1+1+my_strlen("\0");
//1+1+1+0

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//递归与迭代
//求n的阶乘
//int fac(int n)
//{
//	if (n > 1)
//	{
//		return n * fac(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fac(num);
//	printf("%d\n", ret);
//	return 0;
//}


//求第n个斐波那契额数列
//1 1 2 3 5 7
//递归
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//迭代
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("ret = %d\n", ret);
	return 0;
}