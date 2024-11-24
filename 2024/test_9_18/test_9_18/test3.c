#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//求两个任意整数的和

//函数
//int Add(int x, int y)
//{
//	return(x + y);
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//
//	//输入
//	scanf("%d %d", &n1, &n2);
//
//	//求和
//	//int sum = n1 + n2;
//	int sum = Add(n1, n2);
//
//	//打印
//	printf("%d\n", sum);
//
//	return 0;
//}


//数组,存放相同类型元素的集合
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//10个元素
	//数组的下标，下标从0开始
	/*printf("%d\n", arr[8]);*/
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}

	return 0;
}