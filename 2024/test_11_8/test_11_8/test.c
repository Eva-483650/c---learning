#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str +len -1);
//	*(str + len - 1) = '\0';
//	if (strlen(str+1) >= 2)
//	{
//		reverse(str+1);
//	}
//	*(str + len-1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	//a b c d e f g /0
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if (left < right)
//	{
//		reverse(arr, left + 1, right - 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	//a b c d e f g /0
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	reverse(arr,left,right);
//	printf("%s\n", arr);
//	return 0;
//}



//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//DigitSum(1234)
//DigitSum(123)+4
//DigitSum(12)+3+4
//DigitSum(1)+2+3+4
//DigitSum(1)+2+3+4

//int main()
//{
//	unsigned int n =  0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}


//编写一个函数实现n的k次方，使用递归实现
//double pow(int n, int k)
//{
//	if (k > 1)
//	{
//		return n * pow(n,k - 1);
//	}
//	else if(k==0)
//	{
//		return 1;
//	}
//	else if (k < 0)
//	{
//		return 1.0 / pow(n, -k);
//	}
//}
//k=0
//1
//k>0
//n*power(n,k-1)
//n*n*power(n,k-2)
//......
//n*...*power(n,1)
//k<0
//1/power(n,-k)
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//#include <stdio.h>
//int judge(int s, int t, int n)
//{
//	int f = 0;
//	if (s / t == n && s % t == 0 || t / s == n && t % s == 0)
//		f = 1;
//	return f;
//}
//int is_mult(int arr[], int n)
//{
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	while (arr[i])
//	{
//		j = i + 1;
//		while (arr[j])
//		{
//			if (judge(arr[i], arr[j], n))
//				count++;
//			j++;
//		}
//		i++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	int flag = 1;
//	int arr[101] = { 0 };
//	scanf("%d", &n);
//	while (1)
//	{
//		int i = 0;
//		do {
//			scanf("%d", &arr[i]);
//			if (i == 0 && arr[i] == -1)
//			{
//				break;
//			}
//			i++;
//		} while (arr[i - 1] != 0);
//		if (arr[0] == -1)
//		{
//			break;
//		}
//		
//		if (flag)//flag只是在第一次为1，则只有第一次不输出\n
//		{ 
//			flag = 0; 
//		}
//		else 
//		{
//			printf("\n"); 
//		}
//		printf("%d\n", is_mult(arr, n));
//	}
//}



//#include<stdio.h>
//int judge(int s, int t, int n)
//{
//	int f = 0;
//	if (s / t == n && s % t == 0 || t / s == n && t % s == 0)
//		f = 1;
//	return f;
//}
//int out(int a[], int n)
//{
//	int count = 0;
//	int i = 0, j;
//	while (a[i])
//	{
//		j = i + 1;
//		while (a[j])
//		{
//			if (judge(a[i], a[j], n))
//				count++;
//			j++;
//		}
//		i++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	int flag = 1;
//	int i = 0;
//	scanf("%d", &n);
//	int a[101];
//	while (1)
//	{
//		//存储
//		i = 0;
//		do {
//			scanf("%d", &a[i]);
//			if (i == 0 && a[0] == -1)
//			{
//				break;
//			}
//			i++;
//		} while (a[i - 1] != 0);
//		if (a[0] == -1)
//		{
//			break;
//		}
//		
//		//判断打印
//		if (flag)//flag只是在第一次为1，则只有第一次不输出\n
//		{ 
//			flag = 0; 
//		}
//		else 
//		{
//			printf("\n"); 
//		}
//		printf("%d", out(a, n));
//	}
//	return 0;
//}




