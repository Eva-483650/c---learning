#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int find(int a[101], int k, int n, int i)
//{
//
//	if (i > n - 1)
//	{
//		return -1000;
//	}
//	if (a[i] != k)
//	{
//		return 1 + find(a, k, n, i + 1);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d\n", &n);
//	int a[101] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int k = 0;
//	scanf("%d", &k);
//	int ret = find(a, k, n, 0);
//	if (ret >= 0)
//	{
//		printf("%d\n", ret);
//	}
//	else
//	{
//		printf("NULL\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//int f(int a[101], int n,int max,int i)
//{
//	if (i>n-1)
//	{
//		return max;
//	}
//	if (max < a[i])
//	{
//		return f(a, n, a[i], i + 1);
//	}
//	else
//	{
//		return f(a, n, max, i + 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d\n", &n);
//	int a[101] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	printf("%d\n", f(a, n, a[0], 1));
//	return 0;
//}


//void reverse(int a[101], int n, int left, int right)
//{
//	if (left < right)
//	{
//		int tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		reverse(a, n, left + 1, right - 1);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d\n", &n);
//	int a[101] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	reverse(a, n,0,n-1);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}



//#include <stdio.h>
//void cut(int n, int k, int* i)
//{
//	if (n > k)
//	{
//		cut((double)n * 2 / 5 + 0.5, k, i);
//		cut(n-(double)n * 2 / 5 + 0.5, k, i);
//		(*i)++;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int i = 1;
//	scanf("%d %d", &n, &k);
//	cut(n, k, &i);
//	printf("%d\n", i);
//	return 0;
//}





#include <stdio.h>
void f(long long n, int b,int a[1000], int* pi)
{
	if (n/b)
	{
		a[*pi] = n % b;
		(*pi)++;
		f(n / b, b,a,pi);
	}
	else
	{
		a[*pi] = n % b;
	}
}
int main()
{
	long long n = 0;
	int b = 0;
	int a[1000] = {0};
	int i = 0;
	scanf("%lld %d", &n, &b);
	f(n, b,a,&i);
	for (; i >= 0; i--)
	{
		if (a[i] < 10)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%c", a[i] + 55);
		}
	}
	return 0;
}