#define _CRT_SECURE_NO_WARNINGS
//最小公倍数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a*i%b)
//	{
//		i++;
//	}
//	printf("%d\n", a*i);
//	return 0;
//}

//逆置字符串
//单词倒置，标点不倒置
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[300];
//	gets(str);
//	int n = strlen(str);
//	//逆置整个字符串
//	reverse(str, str + n - 1);
//	//逆置每个单词
//	char* start = str;
//	while (*start!='\0')//进入条件 2.I
//	{
//		char* end = start;//2.I
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;// 2.\0
//		}
//		//end此时处于空格
//		reverse(start, end - 1);//2.I I
//		if (*end != '\0')
//		{
//			end++;//1.I
//		}
//		start = end;//1.I 2.\0
//	}
//	printf("%s\n",str);
//	return 0;
//}

//一个节点
//数据域 指针域
//struct Node
//{
//	int data;
//	struct Node* next;
//};


//struct Point
//{
//	int x;
//	int y;
//}p1={2,3};
//
//struct score
//{
//	int s;
//	char ch;
//};
//
//struct Stu
//{
//	char name[20];
//	int age;
//	struct score s;
//};
//
//int main()
//{
//	struct Point p2 = { 3,4 };
//	struct Stu s1 = { "张三",14,{100,'q'}};
//
//	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.s, s1.s.ch);
//
//	return 0;
//}


//复数运算
//#include <stdio.h>
//struct complex
//{
//	double a;
//	double b;
//};
//struct complex add(struct complex c1, struct complex c2)
//{
//	struct complex c3;
//	c3.a = c1.a + c2.a;
//	c3.b = c1.b + c2.b;
//	return c3;
//}
//struct complex sub(struct complex c1, struct complex c2)
//{
//	struct complex c3;
//	c3.a = c1.a - c2.a;
//	c3.b = c1.b - c2.b;
//	return c3;
//}
////z1=a+bi，z2?=c+di
////z1?z2=(ac?bd)+(ad+bc)i
//struct complex multi(struct complex c1, struct complex c2)
//{
//	struct complex c3;
//	c3.a = c1.a * c2.a-c1.b*c2.b;
//	c3.b = c1.a*c2.b + c1.b*c2.a;
//	return c3;
//}
//void print_complex(struct complex c3)
//{
//	if (c3.b < 0)
//	{
//		printf("%.2lf%.2lfi", c3.a, c3.b);
//	}
//	else if(c3.b == 0)
//	{
//		printf("%.2lf", c3.a);
//	}
//	else
//	{
//		printf("%.2lf+%.2lfi", c3.a, c3.b);
//	}
//}
//int main()
//{
//	double a1, b1, a2, b2;
//	scanf("%lf%lf%lf%lf", &a1, &b1, &a2, &b2);
//	struct complex c1 = { a1,b1 };
//	struct complex c2 = { a2,b2 };
//	print_complex((add(c1, c2)));
//	printf("    ");
//	print_complex((sub(c1, c2)));
//	printf("    ");
//	print_complex((multi(c1, c2)));
//
//	return 0;
//}


//教师信息
#include <stdio.h>
struct teacher
{
	char name[25];
	int sex;
	int age;
};
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	struct teacher t[11];
	for (i = 0; i < n; i++)
	{
		scanf("%s %d %d", &t[i].name, &t[i].sex, &t[i].age);
	}
	printf("%s ", t[n / 2].name);
	if (t[n / 2].sex == 0)
	{
		printf("Female ");
	}
	else
	{
		printf("Male ");
	}
	printf("%d", t[n / 2].age);
}