#define _CRT_SECURE_NO_WARNINGS

//（素数）输入一个n，确定数组的长度，然后输如n个数组成数组
//判断这个数组里面的素数，如果有按顺序输出最大素数和最小素数
//如果没有输出数组各个元素之和，后面加上 “none”
//输入：6
//	  6 2 3 4 2 3
//输出：3 2
//#include <stdio.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//int is_prime(int n)
//{
//	if (n == 1)
//		return 0;
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
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
//	int b[1000] = { 0 };
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (is_prime(a[i]))
//		{
//			b[j] = a[i];
//			j++;
//		}
//	}
//	if (j == 0)
//	{
//		int sum = 0;
//		for (i = 0; i < n; i++)
//		{
//			sum += a[i];
//		}
//		printf("%dnone\n", sum);
//
//	}
//	else
//	{
//		qsort(b, j, sizeof(b[0]), cmp_int);
//		printf("%d %d", b[j-1],b[0]);
//	}
//	return 0;
//}




//输入一串字符，内可能含有数字和非数字字符
//将其中连续的数字作为一个实数输出（long类型，十进制）
//如全无数字则输出原字符串。
//输入：aaa123cdf78 && d0
//输出：123 78 0
//输入：abd&#
//输出：abd&#
//#include <stdio.h>
//#include <string.h>
//#define N 101
//void Number(char str[], long a[], int* pn)
//{
//	int i = 0;
//	while (*str != '\0' && *str != '\n')
//	{
//		//123
//		int ans = 0;
//		if (*str >= '0' && *str <= '9')
//		{
//			while (*str >= '0' && *str <= '9')
//			{
//				//0*10+1 1*10+2 12*10+3
//				ans = ans * 10 + (*str - '0');
//				str++;
//			}
//			a[i] = ans;
//			i++;
//		}
//		str++;
//	}
//	*pn = i;
//}
//int main()
//{
//	//str用于存放输入的字符数组，a用于存放数字数组，k为数字个数
//	char str[N];
//	long a[N];
//	int k, i;
//	gets(str);
//	Number(str,a,&k);
//	if (k <= 0)
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




//（删除重复元素）输入个数n，再输入n个数，删除n个数字中重复元素
//只保留第一次出现的元素，每个元素占5个英文字符位
//输入：6 2 2 6 2 4 6
//输出：    2    6    4
//#include <stdio.h>
//#include <string.h>
//#define N 101
//void number(int a[], int n, int* pn)
//{
//	int i, j = 1;
//	int k = 1;
//	for (int i = 1; i < n; i++)
//	{
//		int num[100] = { 0 };
//		int m = 0;
//		int r = 0;
//		for (int i = 0; i < n; i++)
//		{
//			num[a[r]]++;
//			if (num[a[r]] > 1)
//			{
//				//删除a[i] 左移
//				for (j = r; j < n-1; j++)
//				{
//					a[j] = a[j + 1];
//				}
//				//i复位
//				r--;
//				m++;
//			}
//			r++;
//		}
//		k = n - m;
//		break;
//	}
//	*pn = k;
//}
//
//int main()
//{
//	int a[N];
//	int k, i;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	number(a,n,&k);
//	for (i = 0; i < k; i++)
//	{
//		printf("%5d", a[i]);
//	}
//	return 0;
//}


//（判断三角形并输出周长）输入三组X, Y坐标作为三角形三点
//判断是否是三角形，如果是输出YES和周长，否则输出NO
//#include <stdio.h>
//#include <math.h>
//typedef struct
//{
//	float x;
//	float y;
//}Cpoint;
//void length(Cpoint p[], float* pa, float* pb, float* pc)
//{
//	*pa = sqrt(pow(p[0].x - p[1].x, 2) + pow(p[0].y - p[1].y, 2));
//	*pb = sqrt(pow(p[0].x - p[2].x, 2) + pow(p[0].y - p[2].y, 2));
//	*pc = sqrt(pow(p[2].x - p[1].x, 2) + pow(p[2].y - p[1].y, 2));
//}
//float triangle(Cpoint p[])//如果能形成三角形，返回周长，如果不能返回0
//{
//	float a, b, c;
//	length(p, &a, &b, &c);
//	if (a + b > c || a + c > b || b + c > a)
//	{
//		return a + b + c;
//	}
//	return 0;
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
//		printf("YES %.2f\n", k);
//	}
//	else
//		printf("NO %.2f %.2f %.2f %.2f %.2f %.2f", p[0].x, p[0].y, p[1].x, p[1].y, p[2].x, p[2].y);
//	return 0;
//}



//(闰年)输入两个年份，输出两个年份之间的闰年（含这两个年份每个年份占五个英文字符位置，左对齐
//输入：2000 2009
//输出： 2000 2004 2008
//#include <stdio.h>
//int judge(int n)
//{
//	if (n % 400 == 0)
//		return 1;
//	if (n % 4 == 0 && n % 100 != 0)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		if (judge(i))
//			printf("%-5d", i);
//	}
//	return 0;
//}




//向键盘输出一个整数n代表目前是星期几（1~6代表星期一~星期六，0代表星期天）
//接着输入一个整数m代表过了几天。计算m天后是星期几，输出n，m，m天后是星期几，
//当天是工作日还是休息日（1~5为工作日，6和0为休息日）。
//输出的数字与数字，数字与文字之间只隔一个西文空格，末尾没有换行符。
//输入：6 2
//输出：6 2 1 工作日
//输入：5 3
//输出：5 3 1 工作日
//输入：4 3
//输出：4 3 0 休息日
#include<stdio.h>
//#include<math.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int t;
//	if (m + n >= 7)
//		t = (m + n) % 7;
//	else
//		t = m + n;
//	if (t == 6 || t == 0)
//		printf("%d %d %d 休息日", n, m, t);
//	else
//		printf("%d %d %d 工作日", n, m, t);
//	return 0;
//}



//有三门礼炮A，B，C，在第0秒时同时发出第一炮，
//A每隔5秒发出一炮，B每隔6秒发出一炮，C每隔7秒发出一炮
//输入一个正整数n，每门炮各发出n枚礼炮
//输出一个正整数m，表示观众听到礼炮声的数量。
//输入：2
//输出：4
//输入：100
//输出：256
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	int s[1000] = { 0 };//每秒听到的礼炮
//	s[0] = 1;
//	for (int i = 1; i <= n - 1; i++)
//	{
//		s[i * 5] = 1;
//		s[i * 6] = 1;
//		s[i * 7] = 1;
//	}
//	for (int i = 0; i <= (n - 1)*7; i++)
//	{
//		if (s[i] == 1)
//			m++;
//	}
//	printf("%d\n", m);
//	return 0;
//}


//括号匹配。从键盘输入一串以@结尾的字符串（长度不超过1000）
//其中可能含有括号，空格，数字，字母或其它字符。
//现要求输出两行：第一行为字符串中所有的括号（按顺序输出），第二行为匹配结果
//若匹配成功，输出YES，否则输出NO。第二行后面没有换行符。
//输入：w2{ (#s)j }u [[x$(o)*]im % j@
//输出：{ () } [[()]
//NO
//输入：{ {de$[s(r)0] & 6[a]#}e }@
//输出：{ { [()] [] } }
//YES

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 1000
char stack[size];
int top = 0;
char str[1000] = { '\0' };
bool push(char x)
{
	if (top > size - 1)
		return false;
	stack[top] = x;
	top++;
	return true;
}
char pop(void)
{
	if (top == 0)
		return '\0';
	top--;
	return stack[top];
}
void check(char x, char y)
{
	if (x == '\0' || x == '#')
	{
		printf("%s\nNO\n", str);
		exit(0);
	}
	else
	{
		if (x != y)
		{
			printf("%s\nNO\n", str);
			exit(0);
		}
	}
}
int main()
{
	char ch;
	ch = getchar();
	int i = 0;
	while (ch != '@')
	{
		if (ch == '(' || ch == ')' || ch == '[' || ch == ']' || ch == '{' || ch == '}')
		{
			str[i] = ch;
			i++;
		}
		ch = getchar();
	}
	int out;
	push('#');
	for (int k = 0; k < i; k++)
	{
		switch (str[k])
		{
		case '(':
		case '[':
		case '{':
			push(str[k]);
			break;
		case ')':
			out = pop();
			check(out, '(');
			break;
		case ']':
			out = pop();
			check(out, '[');
			break;
		case '}':
			out = pop();
			check(out, '{');
			break;
		}
	}
	out = pop();
	if (out=='#')
	{
		printf("%s\nYES\n", str);
	}
	else
	{
		printf("%s\nNO\n", str);
	}
	return 0;
}


