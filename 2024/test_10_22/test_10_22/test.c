#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//函数

//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m =get_max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

////x,y叫形式参数
//void change(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
////当实参传递给形参，形参是实参的一份临时拷贝
////对形参的修改不会影响实参
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前:a=%d b=%d", a, b);
//	//a和b叫实参
//	change(a, b);
//	printf("交换后:a=%d b=%d", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//&取地址引用符,*解地址引用符
//
//	a = 30;//直接改
//	*p = 30;//间接改
//	return 0;
//}


//void change(int* px, int* py)
//{
//	int z = *px;//a            z = a
//	*px = *py;//b赋值给a       a = b
//	*py = z;//z存的a赋值给b    b = z
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前:a=%d b=%d", a, b);
//	//a和b叫实参
//	change(&a,&b);
//	printf("交换后:a=%d b=%d", a, b);
//	return 0;
//}


//传值调用
//传址调用


//打印100-200之间的质数
//质数是只能被1和它本身整除的数

//#include <math.h>
////是质数就返回1，不是素数返回0
//int is_prime(int x)
//{
//	int k = 0;
//	for (k = 2; k <= sqrt(x); k++)
//	{
//		if (x % k == 0)
//			return 0;
//	}
//	return 1;
//}
////return一出现就直接跳出当前函数
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


//打印1000-2000之间的闰年
//闰年的判断规则
//1、能被4整除，并且不能被100整除
//2、能被400整除
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断是不是闰年
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



//整型有序数组的二分查找
//数组传参实际上传递的是数组首元素的地址
//而不是整个数组
//所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的

int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//			  0 1 2 3 4 5 6 7 8 9
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//找到了返回下标
	//找不到返回-1
	int ret = binary_search(arr,k,sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到啦，下标是:%d\n", ret);
	}
	return 0;
}
