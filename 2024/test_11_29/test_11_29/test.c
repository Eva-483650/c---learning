#define _CRT_SECURE_NO_WARNINGS
//结构体传参

//#include <stdio.h>
//struct S
//{
//	int data[1000];
//	int num;
//};
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ss.data[i]);
//	}
//	printf("%d\n", ss.num);
//}
//void print2(const struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	struct S s = { {1,2,3},100 };
//	print1(s);//传值调用
//	print2(&s);//传址调用
//	return 0;
//}

//#include <stdio.h>
//int c(int m, int n)
//{
//	int ret = 0;
//	if (n < 0)
//	{
//		ret = 0;
//	}
//	else if (n == 0)
//	{
//		ret = 1;
//	}
//	else if (n == 1)
//	{
//		ret = m;
//	}
//	else if (m < 2 * n)
//	{
//		ret = c(m, m - n);
//	}
//	else
//	{
//		ret = c(m - 1, n - 1) + c(m - 1, n);
//	}
//	return ret;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = c(m, n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//double h(double n, double x)
//{
//	double ret = 0.0;
//	if (n == 0)
//	{
//		ret = 1;
//	}
//	if (n == 1)
//	{
//		ret = 2 * x;
//	}
//	if (n > 1)
//	{
//		ret = 2 * x * h(n-1, x) - 2 * (n - 1) * h(n - 2, x);
//	}
//	return ret;
//}
//int main()
//{
//	double n = 0.0;
//	double x = 0.0;
//	scanf("%lf %lf", &n, &x);
//	double ret = h(n, x);
//	printf("%.2lf\n", ret);
//	return 0;
//}




//#include <stdio.h>
//int ack(int m, int n)
//{
//	int ret = 0;
//	if (m == 0)
//	{
//		ret = n + 1;
//		return ret;
//	}
//	if (n == 0)
//	{
//		ret = ack(m - 1, 1);
//	}
//	if (m > 0 && n > 0)
//	{
//		ret = ack(m - 1, ack(m, n - 1));
//	}
//	return ret;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = ack(m, n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int c = 0;
//	scanf("%d %d", &m, &n);
//	while (c = m % n)
//	{
//		m = n;
//		n = c;
//	}
//	printf("%d\n", n);
//	return 0;
//}



#include <stdio.h>
int find(int a[101], int k, int n, int i)
{
	if (i > n-1)
	{
		return -1000;
	}
	if (a[i] != k)
	{
		return 1 + find(a, k, n, i + 1);
	}
	return 0;
}
int main()
{
	int n = 0;
	scanf("%d\n", &n);
	int a[101] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int k = 0;
	scanf("%d", &k);
	int ret = find(a, k, n,0);
	if (ret > 0)
	{
		printf("%d\n", ret);
	}
	else
	{
		printf("NULL\n");
	}
	return 0;
}
