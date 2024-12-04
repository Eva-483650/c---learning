#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    char str[] = "This is a sample string";
//    char* pch;
//    printf("Looking for the 's' character in \"%s\"...\n", str);
//    pch = strchr(str, 's');
//    while (pch != NULL)
//    {
//        printf("found at %d\n", pch - str + 1);
//        pch = strchr(pch + 1, 's');
//    }
//    return 0;
//}



////动态内存管理
#include <errno.h>
#include <string.h>
#include <stdlib.h>
//
////INT_MAX 整型最大
//int main()
//{
//	int* p = (int*)malloc(40);
//	//动态内存开辟
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//		//返回1表示异常
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//先释放再赋值 喝了忘情水就来不及了
//	free(p);
//	p = NULL;
//
//	//内存泄露（申请空间就要还）
//	
//	//没有free
//	//并不是说内存空间就不回收了
//	//当程序退出的时候，系统会自动回收内存空间
//
//	return 0;
//}


////开辟10个整型的空间
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打印
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}


int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//使用
	//1 2 3 4 5 6 7 8 9 10
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}
	//扩容
	int* ptr = (int*)realloc(p, 80);
	if (ptr!=NULL)
	{
		p = ptr;
	}
	//使用
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}
