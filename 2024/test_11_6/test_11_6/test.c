#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for(i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p\n", &arr[i][j]);
//		}
//	}
//	return 0;
//}

//ð�����򣬰�����������ų�����
//���鴫��ʱ���β���2��д��
//1������
//2��ָ��

//1���β����������ʽ
void bubble_sort(int arr[],int sz)
{
	//����
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		//һ��ð������
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 3,4,5,0,1,7,2,6};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}