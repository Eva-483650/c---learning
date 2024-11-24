#define _CRT_SECURE_NO_WARNINGS

//for循环
//for(表达式1-初始化循环变量;表达式2-判断循环终止时间;表达式3-调整)
//循环语句;
//for循环的判断部分省略意味这判断会恒成立，死循环

//int i = 5;
//int j = ++i;  // i 先增加到 6，然后 j 赋值为 6
//int i = 5;
//int j = i++;  // j 先赋值为 5，然后 i 增加到 6



//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	 
//	return 0;
//}


//do...while循环
//先做后判断

//int main()
//{
//	int i = 1;
//
//	do
//	{
//		if (i == 5)
//			break;
//		//在 if 语句中，不能直接使用 break。
//		// break 语句通常用于循环结构
//		// （如 for、while 或 do-while 循环）
//		// 以及 switch 语句中，用来提前退出循环或 switch 代码块。
//		//但是，你可以在循环中使用 if 语句来控制
//		// 何时使用 break。
//		printf("%d", i);
//		i++;
//	} 
//	while (i <= 10);
//
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//
//	return 0;
//}

////计算阶乘之和
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = ret + sum;
//	}
//	printf("%d %d", ret,sum);
//
//	return 0;
//}

//在一个有序数组中查找数n
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("没找到");
//
//	return 0;
//}


//二分查找
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 17;
	
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
//		int mid = (left + right) / 2;
			int mid = left + (left - right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] = k)
		{
			printf("找到了，下标是%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}

	return 0;
}


