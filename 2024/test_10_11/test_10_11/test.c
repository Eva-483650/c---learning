#define _CRT_SECURE_NO_WARNINGS

//forѭ��
//for(���ʽ1-��ʼ��ѭ������;���ʽ2-�ж�ѭ����ֹʱ��;���ʽ3-����)
//ѭ�����;
//forѭ�����жϲ���ʡ����ζ���жϻ���������ѭ��

//int i = 5;
//int j = ++i;  // i �����ӵ� 6��Ȼ�� j ��ֵΪ 6
//int i = 5;
//int j = i++;  // j �ȸ�ֵΪ 5��Ȼ�� i ���ӵ� 6



//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	 
//	return 0;
//}


//do...whileѭ��
//�������ж�

//int main()
//{
//	int i = 1;
//
//	do
//	{
//		if (i == 5)
//			break;
//		//�� if ����У�����ֱ��ʹ�� break��
//		// break ���ͨ������ѭ���ṹ
//		// ���� for��while �� do-while ѭ����
//		// �Լ� switch ����У�������ǰ�˳�ѭ���� switch ����顣
//		//���ǣ��������ѭ����ʹ�� if ���������
//		// ��ʱʹ�� break��
//		printf("%d", i);
//		i++;
//	} 
//	while (i <= 10);
//
//	return 0;
//}

//����n�Ľ׳�
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//
//	return 0;
//}

////����׳�֮��
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = ret + sum;
//	}
//	printf("%d %d", ret,sum);
//
//	return 0;
//}

//��һ�����������в�����n
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±���%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("û�ҵ�");
//
//	return 0;
//}


//���ֲ���
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 17;
	
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
//		int mid = (left + right) / 2;
			int mid = left + (left - right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] = k)
		{
			printf("�ҵ��ˣ��±���%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}

	return 0;
}


