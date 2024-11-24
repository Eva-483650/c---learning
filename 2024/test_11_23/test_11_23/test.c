#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//一级指针
//	int** ppa = &pa;//二级指针
//	**ppa = 20;
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	/*int arr[10];
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//
//	//存放指针的数组
//	int* parr[10] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", * (parr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	//int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6};
//	////1 2 3 4
//	////2 3 4 5
//	////3 4 5 6
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void print(int* parr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(parr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	//逆序
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	scanf("%d %d", &a, &n);
//	//2
//	//2*10+2
//	//22*10+2
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//打印水仙花数
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//判断i是否为水仙花数
//		//1.判断i是几位数
//		int tmp = i;
//		int n = 1;
//		while (tmp/10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2.得到i每一位，计算他的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10,n);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//                      大写字母     小写字母     空格    数字字符   其它字符
//void count(char* str, int* upper, int* lower, int* space, int* num, int* other)
//{
//	while (*str != '\0')
//	{
//		if (*str >= 65 && *str <= 90)
//		{
//			(*upper)++;
//		}
//		else if (*str >= 97 && *str <= 122)
//		{
//			(*lower)++;
//		}
//		else if (*str == 32)
//		{
//			(*space)++;
//		}
//		else if (*str >= 48 && *str <= 57)
//		{
//			(*num)++;
//		}
//		else
//		{
//			(*other)++;
//		}
//		str++;
//	}
//}
//
//int main()
//{
//	char arr[257] = { 0 };
//	gets(arr);
//	int up, low, spa, n, o;
//	up = low = spa = n = o = 0;
//	count(arr, &up, &low, &spa, &n, &o);
//	printf("%d %d %d %d %d", up, low, spa, n, o);
//	return 0;
//}


//char* str_delete(char* s, int v, int w)
//{
//	int i = 0;
//	int n = strlen(s);
//	while (v+w-1+i<=n)
//	{
//		//*(str+v-1)-- *(str+w)
//		//*(str+v-1+0) = *(str+w+1+0)
//		//*(str+v-1+1) = *(str+w+1+1)
//		//*(str+v-1+2) = *(str+w+1+2)
//		*(s + v - 1 + i) = *(s + w + 1 + i);
//		i++;
//	}
//	return s;
//}
//
//int main()
//{
//	char arr[300] = { 0 };
//	int v = 0;
//	int w = 0;
//	scanf("%d %d\n", &v, &w);
//	gets(arr);
//	int n = strlen(str);
//	int* s = str_delete(str, v, w);
//	printf("%s", str_delete(arr, v, w));  
//	int i = 0;
//	while (i < n - w)
//		printf("%c", s[i++]);	
//	return 0;
//}



//#include<string.h>
//char* str_delete(char* s, int v, int w)
//{
//    int n;
//    n = strlen(s);
//    while (v + w <= n)
//    {
//        s[v - 1] = s[v + w - 1];
//        v++;
//    }
//    return s;
//}
//int main()
//{
//    int v, w, n;
//    scanf("%d%d\n", &v, &w);
//    char* s;
//    char str[300];
//    gets(str);
//    n = strlen(str);
//    s = str_delete(str, v, w);
//    int i = 0;
//    while (i < n - w)
//        printf("%c", s[i++]);
//    return 0;
//}


//以_或字母开始，并由_、数字、字母构成的连续字符串
//第一行以Valid:X 合法个数 X
//第二行以Invalid:Y 非法标识符个数 Y
//int judge(char* str)
//{
//	int flag = 0;//0非法，假设非法
//	int i = 0;
//	//首字符
//	if (str[0] == 95 || (str[0] >= 65 && str[0] <= 90) || (str[0] >= 97 && str[0] <= 122))
//	{
//		while (str[i] != '\0')
//		{
//			if (str[i] == 95 || (str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57))
//			{
//				flag = 1;//一次合法就是1
//			}
//			else
//			{
//				flag = 0;
//				break;//一次非法就跳出
//			}
//			i++;
//		}
//	}
//	return flag;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d\n", &n);
//	int i = 0;
//	int count1 = 0;//合法
//	int count2 = 0;//非法
//	for (i = 0; i < n; i++)
//	{
//		char str[300] = { 0 };
//		gets(str);
//		int flag = judge(str);//0合法,1非法
//		if (flag == 1)
//		{
//			count1++;
//		}
//		if (flag == 0)
//		{
//			count2++;
//		}
//	}
//	printf("Valid:%d\n", count1);
//	printf("Invalid:%d\n", count2);
//	return 0;
//}



//struct peo
//{
//	//member-list
//	//成员变量
//	char name[20];
//	char tele[12];
//	char sex[5];//女 男 未知（最多4个字符）
//	int high;
//}p1,p2;
////p1,p2是使用struct peo结构体类型创建的2个变量
////p1,p2是2个全局的结构体变量
////variable-list 变量列表

//声明的结构体类型struct peo
struct peo
{
	//member-list
	//成员变量
	char name[20];
	char tele[12];
	char sex[5];//女 男 未知（最多4个字符）
	int high;
};
struct st
{
	struct peo p;
	int num;
	float f;
};

void print1(struct peo p)
{
	printf("%s %s %s %d\n",
		p.name, p.tele, p.sex, p.high);
	//结构体变量.成员变量
}
void print2(struct peo* sp)
{
	printf("%s %s %s %d\n",
		sp->name,sp->tele,sp->sex,sp->high);
	//结构体指针->成员变量
}
int main()
{
	struct peo p1 = {"张三","14749331877","男",181};
	struct st s = { {"李四","14749331877","男",181},100,3.14};
	
	printf("%s %s %s %d\n",
		p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %d %f\n",
		s.p.name, s.p.tele, s.p.sex, s.p.high,s.num,s.f);
	print1(p1);
	print2(&p1);
	return 0;
}