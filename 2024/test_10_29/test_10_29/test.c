#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//double dis(double a, double b)
//{
//	return sqrt(a * a + b * b);
//}
//int main()
//{
//	int n = 0;
//	double x1, x2, y1, y2, sum;
//	x1 = x2 = y1 = y2 = sum = 0.0;
//	scanf("%d", &n);
//	if (n == 1)
//	{
//		scanf("%lf %lf", &x1, &y1);
//		sum = 0.00;
//	}
//	else if (n == 2)
//	{
//		scanf("%lf %lf", &x1, &y1);
//		scanf("%lf %lf", &x2, &y2);
//		sum = dis(x2-x1, y2-y1);
//	}
//	else
//	{
//		scanf("%lf %lf", &x1, &y1);
//		int x3 = 0, y3 = 0;
//		x3 = x1;
//		y3 = y1;
//		int i = 0;
//		for (i = 1; i <= n - 1; i++)
//		{
//			scanf("%lf %lf", &x2, &y2);
//			sum = sum + dis(x2 - x1, y2 - y1);
//			x1 = x2;
//			y1 = y2;
//		}
//		sum = sum + dis(x1 - x3, y1 - y3);
//	}
//	printf("%.2lf", sum);
//	return 0;
//}


#include <stdio.h>
long long digit(long long a)
{
	long long ret = 10;
	while (1)
	{
		a = a / 10;
		if (a == 0)
			break;
		ret = ret * 10;
	}
	return ret;
}
int main()
{
	long long n = 0;
	long long i = 0;
	scanf("%lld", &n);
	for (i = 1; i <= n; i++)
	{
		if ((i * i) % digit(i) == i)
			printf("%lld ", i);
	}
	return 0;
}