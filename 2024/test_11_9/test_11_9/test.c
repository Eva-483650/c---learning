
#define _CRT_SECURE_NO_WARNINGS

//��������

//ѡ������
#include <stdio.h>
void selection_sort(int arr[], int n)
{
	int i = 0;
	int min_index = 0;
	int j = 0;
	int bijiao = 0;
	int yidong = 0;
	for (i = 0; i < n-1; i++)
	{
		min_index = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
			bijiao++;
		}
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
		yidong++;
	}
	printf("%d %d \n",bijiao,yidong);
}

//ð������
void bubble_sort(int arr[], int n)
{
	int i = 0;
	int flag = 1;
	int bijiao = 0;
	int yidong = 0;
	while (flag)
	{
		flag = 0;
		for (i = 0; i < n - 1; i++)
		{
			bijiao++;
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				flag = 1;
				yidong++;
			}
		}
	}
	printf("%d %d \n", bijiao, yidong);
}

//��������
void insertion_sort(int x[], int n)
{
	int i, j, r, k, flag = 0, flag0 = 0, flag1 = 0;
	//flag0Ϊ�Ƚϣ�flag1Ϊ����
	for (i = 1; i < 10; i++)
	{
		flag = 0;
		j = i - 1;
		while ((x[j] > x[i]) && (j >= 0)) 
		{
			j -= 1;
			flag = 1;//����в����������
			flag0++;//�����ж�Ϊtrue�ļ��
		}
		if (x[j] <= x[i])//x[j]<=x[i]�жϽ��Ϊfalse��Ҳ��һ���ж�
		{
			flag0++;
		}
		r = x[i];
		for (k = i - 1; k >= j + 1; k--)
		{
			x[k + 1] = x[k];
			flag1++;//���е���������һ�ν���
		}
		x[j + 1] = r;
		if (flag)
			flag1++;//���еĲ��������һ�ν���
	}
	printf("%d %d", flag0, flag1);
}


int main()
{
	int a[10] = { 0 };
	int i = 0;
	int b[10] = { 0 };
	int c[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		b[i] = a[i];
		c[i] = a[i];
	}
	selection_sort(a, 10);
	bubble_sort(b, 10);
	insertion_sort(c, 10);
	return 0;
}