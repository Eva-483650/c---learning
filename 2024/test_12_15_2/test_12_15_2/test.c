#define _CRT_SECURE_NO_WARNINGS

//触碰第一颗含羞草后，间隔从1开始的递增的奇数颗后，再触摸一颗。
//每31颗进行一次循环，输入第一颗的编号，输出500次触碰的编号。要求每个数字占用三个字符。
//（每元素前一个空格，每次新循环两个空格）
//样例 （只给出前八个编号）
//输入12
//输出 12 14 18 24  1 11 23  6
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int i = 0;
//	int ret = x;
//	//500次触碰 0 2 4 6 10
//	for (i = 0; i <= 1000; i+=2)
//	{
//		ret = ret + i;
//		if (ret > 31)
//		{
//			ret = ret % 31;
//			printf(" ");
//		}
//		printf(" %d", ret);
//	}
//	return 0;
//}




//（进制转换）
//输入任意长度的字符串（其中含有0~9, ’A’~’F’）,
//将其中含有的十六进制数（按数字或字母出现顺序排列）转换成十进制数，
//输出十六进制数和十进制数，中间隔一个西文空格。
//（测试点保证输出非负，十进制数请用long long int型输出
//(已知long long int型的输出格式为% lld）
//输入: * w0cw)0#k1z# &
//输出：001 1
//输入：#!q7woA@dd~Ac ^ eEx4 % $
//输出：7AAE4 502500
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	char hex[50] = { '\0' };
//	char ch;
//	int length = 0;
//	ch = getchar();
//	while (ch != '\n')
//	{
//		if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'F'))
//		{
//			hex[length] = ch;
//			length++;
//		}
//		ch = getchar();
//	}
//	long long ret = 0;
//	for (int i = 0; i < length; i++)
//	{
//		if (hex[i] <= '9')
//		{
//			ret += (hex[i] - '0') * pow(16, length - 1 - i);
//		}
//		if (hex[i] >= 'A')
//		{
//			ret +=(hex[i]-'A'+10)* pow(16, length - 1 - i);
//		}
//	}
//	printf("%s %lld\n", hex, ret);
//	return 0;
//}



//（查找最小公倍数）从键盘输入整数n（n≤50），输入n个数字，
//找出这n个数字的最小公倍数并输出（不含空格、换行符等多余符号）
//输入：5 1 2 3 4 5
//输出：60
//输入：3 2 4 6
//输出：12
//#include <stdio.h>
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
//	int ret = 1;
//	while (1)
//	{
//		int flag = 0;
//		for (i = 0; i < n; i++)
//		{
//			if (ret % a[i] != 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//			break;
//		ret++;
//	}
//	printf("%d\n", ret);
//	return 0;
//}



//（查找子串）从键盘输入两个字符串a，b（字符串长度不超过100，可能含有空格）
//查找字符串b是否在字符串a中出现过，如果出现过，则输出a，b和b在a中第一次出现时
//第一个字符的位置，中间分别隔一个西文空格
//如果没有出现过，则输出null。
//输入：ababab
//	    ab
//输出：ababab ab 0
//输入：ababab
//	    ba
//输出：ababab ba 1
//输入：abcde
//	    def
//输出：null
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[1000] ={ '\0'};
//	char b[1000] = { '\0' };
//	gets(a);
//	gets(b);
//	char* p = strstr(a, b);
//	if (p == NULL)
//		printf("null");
//	else
//		printf("%s %s %d\n",a,b,p-a);
//	return 0;
//}



//自己实现strlen函数（填空题）
//输入：abc ab
//输出：6
//#include <stdio.h>
//int my_strlen(char str[1000])
//{
//	int n = 0;
//	while (*str != '\0')
//	{
//		n++;
//		str++;
//	}
//	return n;
//}
//int main()
//{
//	char str[1000] = { '\0' };
//	gets(str);
//	printf("%d\n", my_strlen(str));
//	return 0;
//}



//一等奖加15分
//二等奖加10分
//三等奖加5分
//四等奖不加分
//输入a, b两个数，a代表奖项，b代表分数，超过100分输出100，输出不合理的数后面加 “erro\n”
//输入：-2 100
//输出：-2erro
//输入：3 -80
//输出：-80erro
//输入：1  80
//输出：95
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//a代表奖项，b代表分数
//	if (a < 1 || a>4)
//		printf("%derro\n", a);
//	if (b > 100 || b < 0)
//		printf("%derro\n", b);
//	if (a >= 1 && a <= 4 && b <= 100 && b >= 0)
//	{
//		switch (a)
//		{
//		case 1:
//			printf("%d\n", b + 15);
//			break;
//		case 2:
//			printf("%d\n", b + 10);
//			break;
//		case 3:
//			printf("%d\n", b + 5);
//			break;
//		case 4:
//			printf("%d\n", b);
//			break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}


//（括号匹配）输入一串字符串，提取其中的括号，并且按照括号顺序提取括号并输出
// 如果括号匹配加上yes，不匹配加no
//输入：(a)[][(-= =])
//输出：()[][(])  no
#include <stdio.h>
int main()
{
	char str[1000] = { '\0'};
	char ch;
	int n = 0;
	ch = getchar();
	while (ch != '\n' && ch != '\0')
	{
		if (ch == '(' || ch == ')' || ch == '[' || ch == ']' || ch == '{' || ch == '}')
		{
			str[n] = ch;
			n++;
		}
		ch = getchar();
	}
	int a[100] = {0};
	int j = 0;
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		switch (str[i])
		{
		case '(':
			a[j] = 1;
			j++;
			break;
		case ')':
			j--;
			if (a[j] != 1)
				flag = 0;
			break;
		case '[':
			a[j] = 2;
			j++;
			break;
		case ']':
			j--;
			if (a[j] != 2)
				flag = 0;
			break;
		case '{':
			a[j] = 3;
			j++;
			break;
		case '}':
			j--;
			if (a[j] != 3)
				flag = 0;
			break;
		}
		if (flag == 0)
			break;
	}
	if(flag)
		printf("%s YES\n", str);
	else
		printf("%s NO\n", str);
	return 0;
}

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