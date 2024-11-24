#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		flag = 1;
//		for (j = 0; j < n; j++)
//		{
//			if (arr[i] == arr[j] && i > j)
//			{
//				flag = 0;//”–÷ÿ∏¥
//				break;
//			}
//		}
//		if (flag)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	for (i = n-2; i >= 0; i--)
//	{
//		if (arr[i] == 0)
//		{
//			int temp = arr[i];
//			for (j = i; j < n; j++)
//			{
//				arr[j] = arr[j+1];
//			}
//			arr[n-1] = temp;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int j = 0;
//	scanf("%d %d", &n, &j);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int k = 0;
//	for (k = 0; k < j; k++)
//	{
//		int temp = arr[n - 1];
//		for (i = n - 1; i >= 1; i--)
//		{
//			arr[i] = arr[i - 1];
//		}
//		arr[0] = temp;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n*n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	int flag = i;
//	for (i = 0; i < n * n; i++)
//	{
//		for (j = i + 1; j < n * n; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				flag = 0;
//			}
//		}
//	}
//	if (flag)
//	{
//		printf("NO");
//	}
//	else
//	{
//		printf("YES");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100][100] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n ; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d", arr[j][i]);
//			if (j != n - 1)
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (arr[i][j] != arr[j][i])
//			{
//				flag = 0;
//			}
//		}
//	}
//	if (flag)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char a[255] = { 0 };
	int i = 0;
	gets(a);
	int str = strlen(a);
	for (i = str - 1; i >= 0; i--)
	{
		printf("%c", a[i]);
	}
	return 0;
}