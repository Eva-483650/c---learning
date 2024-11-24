#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <string.h>

//go to语句
//不能跨函数跳转
//用于终止深度嵌套


//关机程序
//1、电脑运行起来后一分钟内关机
//2、如果输入：我是主任，就取消关机

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("你的电脑在60秒后关机，如取消，请输入我是主人");
//	scanf("%s", input);
//	if (strcmp(input, "我是主人") == 0)
//	{	//返回0说明两字符串相等
//		system("shutdown -a");
//		printf("取消关机");
//	}
//	else
//	{
//		printf("请重试");
//		goto again;
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int arm = 0;
//	int a = 0, b = 0, c = 0;
//	for (arm = 100; arm < 999; arm++)
//	{
//		a = arm / 100;
//		b = (arm - 100 * a) / 10;
//		c = arm % 10;
//		if (arm == pow(a, 3) + pow(b, 3) + pow(c, 3))
//			printf("%d ", arm);
//		else
//			continue;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	long long arr[92] = { 0 };
//	arr[0] = 1;
//	arr[1] = 1;
//	for (i = 2; i <= 91; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	int n = 0;
//	scanf("%d", &n);
//	printf("%lld", arr[n]);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	for (num = 0;; num++)
//	{
//		if (num % 2 == 1 && num % 3 == 2 && num % 5 == 4 && num % 7 == 0)
//			break;
//	}
//	printf("%d", num);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	double x = 0.0;
//	double y = 0.0;
//	double arr[21] = { 0 };
//	int i = 0;
//	arr[0] = 1;
//	scanf("%lf %d", &x, &n);
//	arr[1] = x;
//	if (n == 0)
//		y = 1;
//	if (n == 1)
//		y = x;
//	if (n > 1)
//	{
//		for (i = 2; i <= n; i++)
//		{
//			arr[i] = ((2.0 * (double)i - 1) / (double)i) * x * arr[i - 1] - (((double)i - 1) / (double)i) * arr[i - 2];
//		}
//		y = arr[n];
//	}
//	printf("%.2lf", y);
//	return 0;
//}


//#include <stdio.h>
//double fenmu(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return 1.0/n * fenmu(n - 1);
//}
//double mi(double a,int b)
//{
//	int i = 0;
//	double y = 1.0;
//	for (i = 0; i < b; i++)
//	{
//		y = y * a;
//	}
//	return y;
//}
//int main()
//{
//	double x = 0.0;
//	double result = 0.0;
//	double arr[101] = { 0.0 };
//	int i = 0;
//	scanf("%lf", &x);
//	arr[0] = mi(x, 0) * fenmu(0);
//	for (i = 1; i <= 100; i++)
//	{
//		arr[i] = arr[i - 1] + mi(x, i) * fenmu(i);
//		result = arr[i];
//	}
//	printf("%.2lf", result);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	long int n = 0;
//	long int i = 0;
//	double y = 1.0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		y = y * ((2 * i / (double)(2 * i - 1)) * (2 * i / (double)(2 * i + 1)));
//	}	
//	printf("%.10lf", y*2);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	int num = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (k = 0; k < n - i; k++)
//		{
//			printf("  ");
//		}
//		for (num = 1; num < i; num++)
//		{
//			printf(" %d", num);
//		
//		}
//		for (num = i; num >=1; num--)
//		{
//			if (num == 10)
//				printf(" 0");
//			else
//				printf(" %d", num);
//		}
//		printf("\n");
//	}
//	return 0;
//}