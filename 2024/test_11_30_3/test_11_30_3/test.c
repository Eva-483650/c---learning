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
//	//���ַ������ַ�a�ĵ�ַ����ֵ����p
//	//abcdef\0
//	//��ӡ��\0ֹͣ
//	//*p = 'w';
//	//�ұ��ǳ����ַ���
//	//�Ĳ��� ��const ������*p���ܸ�
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
//	//p1 p2ָ����ͬһ�ַ����������ַ�����
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
//		//*p��������������Ԫ�صĵ�ַ
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
			//p+iÿһ�еĵ�ַ
			//*(p+i) -- i�е�Ԫ��
			//(*(p+i)+j) -- i��j�еĵ�ַ
			//*(*(p+i)+j) -- i��j�е�Ԫ��
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
	//��ά�������Ԫ���ǵ�һ��
	//arr��ʾ��һ�еĵ�ַ
	return 0;
}