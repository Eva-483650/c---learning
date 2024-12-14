#define _CRT_SECURE_NO_WARNINGS
//输入一组坐标（x>=1且y>=1）作为终点，以在第一象限中的(1,1)为起始点，计算从起始点到终点的路有多少种
//从1,1到x,y共有x-1,y-1步
//x+y-2步中选x-1步向右
// C(n,k) = n! / ( (n-k)!*k! )

//递归公式如下：
//当到达边界时（即𝑚=1或n = 1）,路径数为 1，因为只能沿着边界直走；
//对于其他情况，路径数等于从(𝑚−1 ,𝑛)（往上走）到终点的路径数，加上从(m, n−1)（往右走）到终点的路径数。
//#include <stdio.h>
//int main()
//{
//    int m, n;
//    scanf("%d %d", &m, &n);
//    printf("%d", findStep(m, n));
//    return 0;
//}
//int findStep(int m, int n)
//{
//    if (m == 1 || n == 1)//递归出口
//        return 1;
//    else
//        return findStep(m - 1, n) + findStep(m, n-1);
//}


//判断数列是否满足 a[i] = a[i - 1] / 3 * 2
////36 6 1
//#include<stdio.h>
//int main()
//{
//	int flag = 0;
//	int n;
//	scanf("%d", &n);
//	int a[1000] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i]!=a[i-1]/(3*2))
//			flag = 1;
//	}
//	if (flag==0)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}


//找到数组中的指定数字， 输入数组中数的个数，输入数组，最后输入要找的指定数字。
//输出：the position of the number is b[j]   j为指定数字出现的最后位置
//如果数组中没有该数字，则b = -1。
//样例1：输入：6 1 2 3 3 4 5 3
//输出：the position of the number is b[2]
//#include<stdio.h>
//int f(int m, int a[], int key);
//int main()
//{
//	int n, k;
//	int b[100];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		scanf("%d", &x);
//		b[i] = x;
//	}
//	scanf("%d", &k);
//	printf("the position of the number is b[%d]", f(n, b, k));
//	return 0;
//}
//int f(int m, int a[], int key)
//{
//	int j;
//	for (int i = 0; i < m; i++)
//	{
//		if (key == a[i])
//		{
//			return i;
//		}
//	}
//	j = -1;
//	return j;
//}


//向一个长度为7的数组中输入七天的气温（范围为 - 50到 + 50）
//找到每天以后更热（温度大于此天）的一天，输出其间隔的天数 如果没有更高温度  则输出0
//输入：1 1 -1 2 3 1 4
//输出：3 2 1 1 2 1 0
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int temperature[7], i, j;
//    for (i = 0; i < 7; i++)
//        scanf("%d", &temperature[i]);
//    int days[7] = { 0 };
//    for (i = 0; i < 7; i++)
//    {
//        days[i] = 0;
//        for (j = i + 1; j < 7; j++)
//        {
//            if (temperature[j] > temperature[i])
//            {
//                days[i] = j - i;//0 1 2 
//                break;
//            }
//        }
//    }
//    for (i = 0; i < 7; i++)
//    {
//        printf("%d ", days[i]);
//    }
//    return 0;
//}



//判断素数并删除 输出保证元素相对位置不变
#include<stdio.h>
int prime(int n);
int main()
{
	int n;
	int i, j, k;
	int a[10];
	scanf("%d", &n);//输入数组元素数量
	for (int i = 0; i < n; i++)//给数组赋值
	{
		scanf("%d", &a[i]);
	}
	for (j = 0; j < n; j++)
	{
		if (prime(a[j]))//判断素数
		{
			//删除数组中的素数
			//元素左移
			for (k = j; k < n - 1; k++)
			{
				a[k] = a[k + 1];
			}
			j--;//删除一个元素 外层j计数要-1
			n--;
		}
	}
	for (k = 0; k < n; k++)
	{
		printf("%d ", a[k]);
	}
	return 0;
}
int prime(int n)
{
	int i;
	if (n == 1)
		return 0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}