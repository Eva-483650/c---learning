#include <stdio.h>
//int main()
//{
//	//char ch = 'w';
//	//char* pc = &ch;
//	//*pc = 'b';
//	//printf("%c\n", ch);
//
//	const char* p = "abcdef";
//	//char arr[] = "abcdef";
//	//把字符串首字符a的地址，赋值给了p
//	//abcdef\0
//	//打印到\0停止
//	//*p = 'w';
//	//右边是常量字符串
//	//改不了 加const 限制了*p不能改
//	printf("%c\n", p);
//
//	return 0;
//}



//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//	{
//		printf("p1==p2\n");
//	}
//	else
//	{
//		printf("p1!=p2\n");
//	}
//	//p1 p2指向了同一字符串（常量字符串）
//
//	if (arr1 == arr2)
//	{
//		printf("arr1==arr2\n");
//	}
//	else
//	{
//		printf("arr1!=arr2\n");
//	}
//	return 0;
//}




//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 };
//	int arr3[] = { 3,4,5,6 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(*p+i));
//		printf("%d ", (*p)[i]);
//		//*p == arr
//		//*p本质上是数组首元素的地址
//	}
//	return 0;
//}




void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int (*p)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			//p+i每一行的地址
			//*(p+i) -- i行的元素
			//(*(p+i)+j) -- i行j列的地址
			//*(*(p+i)+j) -- i行j列的元素
			//printf("%d ", *(*(p + i) + j));
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	//print1(arr,3,5);
	print2(arr, 3, 5);
	//二维数组的首元素是第一行
	//arr表示第一行的地址
	return 0;
}