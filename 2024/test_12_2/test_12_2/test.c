#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int prime(int n) 
//{
//	int i;
//	if (n == 1)
//	{
//		return 0;
//	}
//	else
//	{
//		for (i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//}
//int main() {
//	int n;
//	int i, j, k;
//	int a[10];
//	scanf("%d\n", &n);		//��������Ԫ������
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d",&a[i]);		//�����鸳ֵ
//	}
//	int sz = n;
//	for (j = 0; j < n; j++)
//	{
//		if (prime(a[j]))//�ж�����
//		{
//			//ɾ�������е�����
//			int t = 0;
//			for (t = j + 1; t < n; t++3)
//			{
//				a[t-1] = a[t];
//				sz--;
//			}
//		}
//	}
//	n = sz;
//	for (k = 0; k < n; k++)
//	{
//		printf("%d ", a[k]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int j = 0;
//	scanf("%d %d", &n, &j);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int k = 0;
//	for (k = 0; k < j; k++)//����ѭ������
//	{
//		int temp = arr[n - 1];//�洢����һλ
//		for (i = n - 1; i >= 1; i--)
//		{
//			arr[i] = arr[i - 1];//�Ӻ���ǰ����߸����ұ�
//		}
//		arr[0] = temp;//����һλ������һλ
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//�Ƚ���������
//e1ָ��һ������
//e2ָ��һ������
#include <string.h>

int cmp_int(const void* e1, const void* e2)
{
	//if (*(int*)e1 > *(int*)e2)
	//	return 1;
	//else if (*(int*)e1 == *(int*)e2)
	//	return 0;
	//else
	//	return -1;
	return (*(int*)e1 - *(int*)e2);
}

void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//e1С ����С��0
	//��� ����0
	//e1�� ���ش���0

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

struct stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�ַ����Ƚϴ�С��strcmp
	//strcmp����  >0   ==0  <0
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	//�ַ����Ƚϴ�С��strcmp
	//strcmp����  >0   ==0  <0
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

void test2()
{
	//ʹ��qsort������ṹ����
	struct stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base,int sz,int width,int(*cmp)(const void* e1,const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//�����������ź���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//��ʼλ�ü�ƫ����
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width )> 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test4()
{
	struct stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}