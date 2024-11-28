//结构体的内存对齐

#include <stdio.h>
#include <stddef.h>
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//struct S2
//{
//	char c1;//1
//	char c2;//1
//	int i;//4
//};
//int main()
//{
//	//printf("%d\n", sizeof(struct S1));//12
//	//printf("%d\n", sizeof(struct S2));//8
//
//	//求偏移量
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//
//	printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S2, i));
//
//	return 0;
//}

//修改默认对齐数
#pragma pack(4)
struct S
{
	int i;//4 8 4;4 4 4
	double d;//8 8 8;8 4 4
};

#pragma pack(1)
struct S1
{
	char c1;//1
	int i;//4
	char c2;//1
};

int main()
{
	printf("%d\n", sizeof(struct S));//16;12
	printf("%d\n", sizeof(struct S1));//6
	return 0;
}