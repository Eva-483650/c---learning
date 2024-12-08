#define _CRT_SECURE_NO_WARNINGS

//递归
#include <stdio.h>
//int C(int m, int n)
//{
//	if (n < 0)
//		return 0;
//	if (n == 0)
//		return 1;
//	if (n == 1)
//		return m;
//	if (m < 2 * n)
//		return C(m,m-n);
//	if (m >= 2 * n)
//		return C(m-1,n) + C(m-1,n-1);
//}
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int ret = C(m, n);
//	printf("%d", ret);
//	return 0;
//}

//double H(int n, double x)
//{
//	if (n == 0)
//		return 1;
//	if (n == 1)
//		return 2 * x;
//	if (n > 1)
//		return 2 * x * H(n - 1, x) - 2 * (n - 1) * H(n - 2, x);
//}
//int main()
//{
//	int n = 0;
//	double x = 0.0;
//	scanf("%d %lf", &n, &x);
//	double ret = H(n, x);
//	printf("%.2lf", ret);
//	return 0;
//}


//int ack(int m, int n)
//{
//	if (m == 0)
//		return n + 1;
//	if (n == 0)
//		return ack(m - 1, 1);
//	if (m > 0 && n > 0)
//		return ack(m - 1, ack(m, n - 1));
//}
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int ret = ack(m, n);
//	printf("%d\n", ret);
//	return 0;
//}


//最大公因数
//int gcd(int m, int n)
//{
//	if (n == 0)
//		return m;
//	int r = m % n;
//	return gcd(n, r);
//}
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int ret = gcd(m, n);
//	printf("%d\n", ret);
//	return 0;
//}


//顺序检索
//int find(int a[1000], int n, int k,int i)
//{
//	if (i > n - 1)
//		return -1;
//	if (a[i] == k)
//		return i;
//	return find(a, n, k, i + 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int k = 0;
//	scanf("%d", &k);
//	int ret = find(a, n, k,0);
//	if (ret == -1)
//		printf("NULL\n");
//	else
//	{
//		printf("%d\n", ret);
//	}
//	return 0;
//}


//最大元素
//int findmax(int a[200],int n,int max,int i)
//{
//	if (i > n - 1)
//		return max;
//	if (max < a[i])
//		return findmax(a, n, a[i], i + 1);
//	return findmax(a, n, max, i + 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a[200] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int max = findmax(a, n,a[0],0);
//	printf("%d", max);
//	return 0;
//}



//数组反序
//void reverse(int a[1000],int left, int right)
//{
//	if (left < right)
//	{
//		//交换首尾
//		int tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		reverse(a, left + 1, right - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	reverse(a,0,n-1);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}



//截木条
//int cut(int n, int k,int* i)
//{
//	if (n > k)
//	{
//		//短木条四舍五入
//		cut((double)n * 2 / 5 + 0.5, k, i);
//		//长木条为总长减去短木条
//		cut(n - (double)n * 2 / 5 + 0.5, k, i);
//		//指针i
//		(*i)++;
//	}
//}
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int i = 1;
//	cut(n, k,&i);
//	printf("%d", i);
//	return 0;
//}



//十进制转换任意进制
//void trans(int n, int b)
//{
//	if (n == 0)
//		return;
//	//先处理高位
//	trans(n / b, b);
//	//输出当前位
//	int r = n % b;
//	if (r < 10)
//		printf("%d", r);
//	else
//		printf("%c", 'A' + (r - 10));
//}
//int main()
//{
//	int n, b;
//	scanf("%d %d",&n,&b);
//	trans(n, b);
//	return 0;
//}


//FJ的字符串
//void fj(int n)
//{
//	if (n == 1)
//	{
//		printf("A");
//		return;
//	}
//	else
//	{
//		fj(n - 1);
//		printf("%c", 'A' + n - 1);
//		fj(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fj(n);
//	return 0;
//}


//输入一组坐标（x>=1且y>=1）作为终点，以在第一象限中的(1,1)为起始点，计算从起始点到终点需要走的步数。
int flag = 0;
void findway(int x, int y)
{
	if (x == 1 && y == 1)
		return;
	flag++;
	if (x > 1)
		return findway(x - 1, y);
	if (y > 1)
		return findway(x, y - 1);
}
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	findway(x, y);
	printf("%d", flag);
	return 0;
}

