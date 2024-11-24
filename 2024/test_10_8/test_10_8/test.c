#define _CRT_SECURE_NO_WARNINGS

//int main()
//{
//	printf(""printf(\"Hello world\\n\");\n");
//	printf("count<<\"Hello world\\n\"<<end;\n")
//
//	return 0;
//}




//int main()
//{
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	scanf("%d", &max);
//	//假设第一个元素就是最大值
//	
//	//找最大
//	//逐个对比
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()
//{
//	//输入存储
//	int arr[4] = { 0 };
//	//0 1 2 3
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//
//	//找最大
//	//假设第一个元素就是最大值
//	int max = arr[0];
//	i = 1;//没有int，不能多次初始化
//	//逐个对比
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}




//int main()
//{
//	//输入
//	double V = 0.0;
// //0.0默认是double类型
//	double r = 0.0;
//	scanf("%lf", &r);
//
//	//计算
//	V = 4 / 3.0 * 3.1415926 * r * r * r;
//	//若想得到小数，除数和被除数之间必须有一个为小数
//	//输出
//	printf("%.3lf\n", V);
//
//	return 0;
//}



//int main()
//{
//	int weight = 0;
//	int height = 0;
//	double bmi = 0.0;
//	scanf("%d %d", &weight, &height);
//	bmi = weight / (height/100.0 * height/100.0);
//	printf("%.2lf", bmi);
//	return 0;
//}



//for循环
//for(表达式1-初始化循环变量;表达式2-判断循环终止时间;表达式3-调整)
//循环语句;

//打印1-10
//int main()
//{
//	int i = 0;
//	for(i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}



//递增排序
#include <stdio.h>
int main()
{
	float arr[3] = { 0 };
	int i = 0;
	while (i < 3)
	{
		scanf("%f", &arr[i]);
		i++;
	}
	float max = arr[0];
	i = 1;
	while (i < 3)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	float min = arr[0];
	i = 1;
	while (i < 3)
	{
		if (arr[i] < min)
			min = arr[i];
		i++;
	}
	i = 0;
	float a = arr[i];
	while (i <= 3)
	{
		if (max > arr[i] && min < arr[i])
		{
			a = arr[i];
		}
		i++;
	}
	printf("%.1f %.1f %.1f", min,a,max);
	return 0;
}