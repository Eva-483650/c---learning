#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����

//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m =get_max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

////x,y����ʽ����
//void change(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
////��ʵ�δ��ݸ��βΣ��β���ʵ�ε�һ����ʱ����
////���βε��޸Ĳ���Ӱ��ʵ��
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ:a=%d b=%d", a, b);
//	//a��b��ʵ��
//	change(a, b);
//	printf("������:a=%d b=%d", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//&ȡ��ַ���÷�,*���ַ���÷�
//
//	a = 30;//ֱ�Ӹ�
//	*p = 30;//��Ӹ�
//	return 0;
//}


//void change(int* px, int* py)
//{
//	int z = *px;//a            z = a
//	*px = *py;//b��ֵ��a       a = b
//	*py = z;//z���a��ֵ��b    b = z
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ:a=%d b=%d", a, b);
//	//a��b��ʵ��
//	change(&a,&b);
//	printf("������:a=%d b=%d", a, b);
//	return 0;
//}


//��ֵ����
//��ַ����


//��ӡ100-200֮�������
//������ֻ�ܱ�1����������������

//#include <math.h>
////�������ͷ���1��������������0
//int is_prime(int x)
//{
//	int k = 0;
//	for (k = 2; k <= sqrt(x); k++)
//	{
//		if (x % k == 0)
//			return 0;
//	}
//	return 1;
//}
////returnһ���־�ֱ��������ǰ����
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


//��ӡ1000-2000֮�������
//������жϹ���
//1���ܱ�4���������Ҳ��ܱ�100����
//2���ܱ�400����
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж��ǲ�������
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



//������������Ķ��ֲ���
//���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ
//��������������
//�����ں����ڲ�����һ�������������ֵ������Ԫ�ظ����ǲ����׵�

int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//			  0 1 2 3 4 5 6 7 8 9
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�ҵ��˷����±�
	//�Ҳ�������-1
	int ret = binary_search(arr,k,sz);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ������±���:%d\n", ret);
	}
	return 0;
}
