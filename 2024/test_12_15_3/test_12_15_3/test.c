#define _CRT_SECURE_NO_WARNINGS

//������������һ��n��ȷ������ĳ��ȣ�Ȼ������n�����������
//�ж�����������������������а�˳����������������С����
//���û������������Ԫ��֮�ͣ�������� ��none��
//���룺6
//	  6 2 3 4 2 3
//�����3 2
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




//����һ���ַ����ڿ��ܺ������ֺͷ������ַ�
//������������������Ϊһ��ʵ�������long���ͣ�ʮ���ƣ�
//��ȫ�����������ԭ�ַ�����
//���룺aaa123cdf78 && d0
//�����123 78 0
//���룺abd&#
//�����abd&#
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
//	//str���ڴ��������ַ����飬a���ڴ���������飬kΪ���ָ���
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




//��ɾ���ظ�Ԫ�أ��������n��������n������ɾ��n���������ظ�Ԫ��
//ֻ������һ�γ��ֵ�Ԫ�أ�ÿ��Ԫ��ռ5��Ӣ���ַ�λ
//���룺6 2 2 6 2 4 6
//�����    2    6    4
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
//				//ɾ��a[i] ����
//				for (j = r; j < n-1; j++)
//				{
//					a[j] = a[j + 1];
//				}
//				//i��λ
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


//���ж������β�����ܳ�����������X, Y������Ϊ����������
//�ж��Ƿ��������Σ���������YES���ܳ����������NO
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
//float triangle(Cpoint p[])//������γ������Σ������ܳ���������ܷ���0
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



//(����)����������ݣ�����������֮������꣨�����������ÿ�����ռ���Ӣ���ַ�λ�ã������
//���룺2000 2009
//����� 2000 2004 2008
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




//��������һ������n����Ŀǰ�����ڼ���1~6��������һ~��������0���������죩
//��������һ������m������˼��졣����m��������ڼ������n��m��m��������ڼ���
//�����ǹ����ջ�����Ϣ�գ�1~5Ϊ�����գ�6��0Ϊ��Ϣ�գ���
//��������������֣�����������֮��ֻ��һ�����Ŀո�ĩβû�л��з���
//���룺6 2
//�����6 2 1 ������
//���룺5 3
//�����5 3 1 ������
//���룺4 3
//�����4 3 0 ��Ϣ��
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
//		printf("%d %d %d ��Ϣ��", n, m, t);
//	else
//		printf("%d %d %d ������", n, m, t);
//	return 0;
//}



//����������A��B��C���ڵ�0��ʱͬʱ������һ�ڣ�
//Aÿ��5�뷢��һ�ڣ�Bÿ��6�뷢��һ�ڣ�Cÿ��7�뷢��һ��
//����һ��������n��ÿ���ڸ�����nö����
//���һ��������m����ʾ����������������������
//���룺2
//�����4
//���룺100
//�����256
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	int s[1000] = { 0 };//ÿ������������
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


//����ƥ�䡣�Ӽ�������һ����@��β���ַ��������Ȳ�����1000��
//���п��ܺ������ţ��ո����֣���ĸ�������ַ���
//��Ҫ��������У���һ��Ϊ�ַ��������е����ţ���˳����������ڶ���Ϊƥ����
//��ƥ��ɹ������YES���������NO���ڶ��к���û�л��з���
//���룺w2{ (#s)j }u [[x$(o)*]im % j@
//�����{ () } [[()]
//NO
//���룺{ {de$[s(r)0] & 6[a]#}e }@
//�����{ { [()] [] } }
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


