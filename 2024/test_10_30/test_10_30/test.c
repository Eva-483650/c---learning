#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main() 
//{
//    char arr[1000] = { 0 };
//    int i = 0, n = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        arr[i] = getchar();
//        if (arr[i] == '@')
//        {
//            break;
//        }
//    }
//    n = strlen(arr);
//    int j = 0, k = 0, m = 0;
//    int a[1000] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] == '(')
//        {
//            a[j] = 1;
//            j++;
//        }
//        else if (arr[i] == '[')
//        {
//            a[j] = 2;
//            j++;
//        }
//        else if (arr[i] == '{')
//        {
//            a[j] = 3;
//            j++;
//        }
//        else if (arr[i] == ')')
//
//        {
//            j--;
//            if (a[j] != 1)
//            {
//                printf("NO");
//                m = 1;
//                break;
//            }
//        }
//        else if (arr[i] == ']')
//        {
//            j--;
//            if (a[j] != 2)
//            {
//                printf("NO");
//                m = 1;
//                break;
//            }
//        }
//        else if (arr[i] == '}')
//        {
//            j--;
//            if (a[j] != 3)
//            {
//                printf("NO");
//                m = 1;
//                break;
//            }
//        }
//    }
//    if (m == 0)
//    {
//        printf("YES");
//    }
//    return 0;
//}


#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int count = 0;
	while (1)
	{
		int arr[101] = { 0 };
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
		{
			break;
		}
		i++;
	}
	return 0;
}