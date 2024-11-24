#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int strlen(char* str)
//{
//	int n = 0;
//	while (1)
//	{
//		n++;
//		str++;
//		if (*str == '\n'|| *str == '\0')
//			break;
//	}
//	return n;
//}
//int main()
//{
//	char ch[257] = { 0 };
//	fgets(ch, sizeof(ch), stdin);
//	printf("%d\n", strlen(ch));
//	return 0;
//}


//int main()
//{
//	int y = 10;
//	do {
//		y--;
//	} while (--y);
//	printf("%d", --y);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//void count(char* str, int* upper, int* lower, int* space, int* num, int* other)

//void bubble(int arr[2500], int n)
//{
//	int i = 0;
//	int flag = 1;
//	while (flag)
//	{
//		flag = 0;
//		for (i = 0; i < n - 1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//				flag = 1;
//			}
//		}
//	}
//}
//int main()
//{
//	int n = 0;//行数
//	int m = 0;//列数
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int arr[50][50] = { 0 };
//	int a[2500] = { 0 };
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			a[k] = arr[i][j];
//			k++;
//		}
//	}
//	bubble(a,n*m);
//	k = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d", a[k]);
//			k++;
//			if (j < m - 1)
//			{
//				printf(" ");
//			}
//		}
//		if (i < n - 1)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	return 0;
//}

//my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != 0)
//	{
//		str++;
//	}
//	return (str-start);
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

