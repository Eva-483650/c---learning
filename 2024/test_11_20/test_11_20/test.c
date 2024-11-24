#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n, m, s; //n个犯人，从s开始数，每次数到m的杀掉
//	n = m = s = 0;
//	scanf("%d %d %d", &n, &s, &m);
//	int arr[1000] = { 0 };
//	int cnt = 0;//记录出圈人数
//	int k = 0;//数数
//	int i = 0;
//	for (i = s; cnt < n; i = i % n + 1)
//	{
//		if (arr[i] == 1)
//		{
//			continue;
//		}
//		k++;
//		if (k == m)
//		{
//			k = 0;
//			printf("%d ", i);
//			arr[i] = 1;
//			cnt++;
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    //存储 20 个单词，每个单词最多 10 个字符
//    char data_1[20][10] = { "zero", "one", "two",  "three", "four",  "five", "six",  "seven",  "eight", "nine", "ten"
//        , "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
//    char data_2[10][8] = { " ","ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
//    int n = 0;
//    scanf("%d", &n);
//    int n1 = 0;
//    n1 = n;
//    int a[3] = { 0 };
//    int i = 0;
//    while (n1 != 0)
//    {
//        a[i] = n1 % 10;
//        n1 = n1 / 10;
//        i++;
//    }
//    if (n < 0 || n >= 1000)
//    {
//        printf("ERR\n");
//    }
//    else
//    {
//        switch (i)
//        {
//        case 0:
//        case 1:
//            printf("%s\n", data_1[n]);
//            break;
//        case 2:
//            if (a[1] == 1) 
//            {
//                printf("%s\n", data_1[n]);
//                break;
//            }
//            else
//            {
//                if (a[0] == 0)
//                {
//                    printf("%s\n", data_2[1]);
//                    break;
//                }
//                else
//                {
//                    printf("%s-%s\n", data_2[a[1]], data_1[a[0]]);
//                    break;
//                }
//            }
//           
//        case 3:
//            printf("%s hundred", data_1[a[2]]);
//            if (a[0] != 0&&a[1]!=0)//123
//            {
//                printf(" and %s-%s\n", data_2[a[1]], data_1[a[0]]);
//                break;
//            }
//            if (a[1] != 0 && a[0] == 0)//120
//            {
//                printf(" and %s\n", data_2[a[1]]);
//                break;
//            }
//            if (a[1] == 0 && a[0] != 0)//103
//            {
//                printf(" and %s\n", data_1[a[0]]);
//                break;
//            }
//        }
//    }
//	return 0;
//}


//int main()
//{
//	int N, a[30][30], num = 1;
//	scanf_s("%d", &N);
//	for (int i = 0; i < N / 2; i++)
//	{
//		for (int x = i; x < N - 1 - i; x++)
//			a[i][x] = num++;
//		for (int y = i; y < N - 1 - i; y++)
//			a[y][N - 1 - i] = num++;
//		for (int z = N - 1 - i; z >= i + 1; z--)
//			a[N - 1 - i][z] = num++;
//		for (int p = N - 1 - i; p >= i + 1; p--)
//			a[p][i] = num++;
//	}
//	if (N % 2 != 0)
//	{
//		a[N / 2][N / 2] = num;
//		for (int k = 0; k < N; k++)
//		{
//			for (int j = 0; j < N; j++)
//				printf("%4d", a[k][j]);
//			if (k < N - 1)
//				printf("\n");
//		}
//	}
//	else
//		for (int k = 0; k < N; k++)
//		{
//			for (int j = 0; j < N; j++)
//				printf("%4d", a[k][j]);
//			if (k < N - 1)
//				printf("\n");
//		}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int n = 0;
	int a[30][30] = { 0 };
	int num = 1;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 0; i < n / 2; i++)
	{
		for (int x = i; x < n - 1 - i; x++)
		{
			a[i][x] = num++;
		}
		for (int y = i; y < n - 1 - i; y++)
		{
			a[y][n - 1 - i] = num++;
		}
		for (int z = n - 1 - i; z >= i + 1; z--)
		{
			a[n - 1 - i][z] = num++;
		}
		for (int p = n - 1 - i; p >= i + 1; p--)
		{
			a[p][i] = num++;
		}
	}
	if (n % 2 != 0)
	{
		a[n / 2][n / 2] = num;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%4d", a[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%4d", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
