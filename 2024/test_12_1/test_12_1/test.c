#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//void calc(int(*pf)(int,int))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//int main()
//{
//	calc(add);
//	return 0;
//}
// 
//int main()
//{
//	int a = 5;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", *pa);
//
//	int arr[5] = { 0 };
//	int(*p)[5] = &arr;
//
//	printf("%p\n", &add);
//	printf("%p\n", &add);
//	//对于函数，&函数名和函数名都是函数的地址
//
//	int (*pf)(int, int) = &add;
//	//int ret = (*pf)(2, 3);
//	int ret = pf(2, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#define N 101
//void Number(char str[], long a[],int* p)
//{
//	int i = 0;
//	int j = 0;
//	while (str[i] != '\0')
//	{
//		if(str[i] >= '0' && str[i] <= '9')
//		{
//			int ans = 0;
//			while (str[i] >= '0' && str[i] <= '9')
//			{
//				ans = (str[i]-'0') + ans * 10;
//				i++;
//			}
//			a[j] = ans;
//			j++;
//		}
//		i++;
//	}
//	(*p) = j;
//} 
//int main()
//{
//	//str用于存放输入的字符数组，a用于存放数字数组，k为数字个数
//	char str[N];
//	long a[N];
//	int k, i;
//	fgets(str, sizeof(str), stdin);
//	Number(str,a,&k);
//	if (k < 0)
//	{
//		puts(str);
//	}
//	else
//	{
//		for (i = 0; i < k; i++)
//		{
//			printf("%5d", a[i]);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//typedef struct
//{
//	float x;
//	float y;
//}Cpoint;
//void length(Cpoint p[], float* pa, float *pb, float* pc)
//{
//	*pa = sqrt(pow((p[0].x - p[1].x), 2) + pow((p[0].y - p[1].y), 2));//0 1
//	*pb = sqrt(pow((p[0].x - p[2].x), 2) + pow((p[0].y - p[2].y), 2));//0 2
//	*pc = sqrt(pow((p[1].x - p[2].x), 2) + pow((p[1].y - p[2].y), 2));//1 2
//}
//float triangle(Cpoint p[])
//{
//	float a, b, c;
//	length(p,&a, &b, &c);
//	//三⻆形必须满⾜任意两边⼤于第三条边
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		return a + b + c;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	Cpoint p[3];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%f %f", &p[i].x, &p[i].y);
//	}
//	float k = triangle(p);
//	if (k)
//	{
//		printf("YES!%.2f\n", k);
//	}
//	else
//	{
//		printf("NO!\n");
//	}
//
//	return 0;
//}


#include <stdio.h>
#include <string.h>
#define N 101
// 1 1 1 3 1
// 1 1 3 1
// 1 3 1
// 1 3
void Number(int a[], int n, int* pn)
{
	int i, j = 0;
	int k = 1;
	for (i = 1; i < n; i++)
	{
		////站在a[i]往前看
		//for (j = 0; j < i; j++)
		//{
		//	//发现相等的a[j]
		//	if (a[j] == a[i])
		//	{
		//		int m = 0;
		//		//删除a[i]
		//		for (m = i; m < n - 1; m++)
		//		{
		//			a[m] = a[m + 1];
		//		}
		//		i--;
		//		n--;
		//	}
		//}
		//k = n;

		int b[10] = { 0 };
		int j = 0;
		for (i = 0; i < n; i++)
		{
			b[a[i]]++;
			if (b[a[i]] == 1)
			{
				a[j] = a[i];
				j++;
			}
		}   
		k = j;
		break;
	}
	*pn = k;
}
int main()
{
	int a[N];
	int k, i;
	int n = 0;
	char c[10] = { 0 };
	fgets(c, sizeof(c), stdin);
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	Number(a,n,&k);
	for (i = 0; i < k; i++)
	{
		printf("%5d", a[i]);
	}
	return 0;
}

//#include < stdio. h>
//int main()
//{
//    const char* s = "iios/12DDWDFF@122";
//    char buf[20];
//    //int sscanf(const char* str, const char* format, ........);
//    sscanf(s, "%*[^/]/%[^@]", buf);
//    //iios / 12DDWDFF @
//    //丢弃 停 储存   停
//    printf("%s\n", buf);
//    return 0;
//}


