#define _CRT_SECURE_NO_WARNINGS

//int main()
//{
//	printf(""printf(\"Hello world\\n\");\n");
//	printf("count<<\"Hello world\\n\"<<end;\n")
//
//	return 0;
//}




//int main()
//{
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	scanf("%d", &max);
//	//�����һ��Ԫ�ؾ������ֵ
//	
//	//�����
//	//����Ա�
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()
//{
//	//����洢
//	int arr[4] = { 0 };
//	//0 1 2 3
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//
//	//�����
//	//�����һ��Ԫ�ؾ������ֵ
//	int max = arr[0];
//	i = 1;//û��int�����ܶ�γ�ʼ��
//	//����Ա�
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}




//int main()
//{
//	//����
//	double V = 0.0;
// //0.0Ĭ����double����
//	double r = 0.0;
//	scanf("%lf", &r);
//
//	//����
//	V = 4 / 3.0 * 3.1415926 * r * r * r;
//	//����õ�С���������ͱ�����֮�������һ��ΪС��
//	//���
//	printf("%.3lf\n", V);
//
//	return 0;
//}



//int main()
//{
//	int weight = 0;
//	int height = 0;
//	double bmi = 0.0;
//	scanf("%d %d", &weight, &height);
//	bmi = weight / (height/100.0 * height/100.0);
//	printf("%.2lf", bmi);
//	return 0;
//}



//forѭ��
//for(���ʽ1-��ʼ��ѭ������;���ʽ2-�ж�ѭ����ֹʱ��;���ʽ3-����)
//ѭ�����;

//��ӡ1-10
//int main()
//{
//	int i = 0;
//	for(i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}



//��������
#include <stdio.h>
int main()
{
	float arr[3] = { 0 };
	int i = 0;
	while (i < 3)
	{
		scanf("%f", &arr[i]);
		i++;
	}
	float max = arr[0];
	i = 1;
	while (i < 3)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	float min = arr[0];
	i = 1;
	while (i < 3)
	{
		if (arr[i] < min)
			min = arr[i];
		i++;
	}
	i = 0;
	float a = arr[i];
	while (i <= 3)
	{
		if (max > arr[i] && min < arr[i])
		{
			a = arr[i];
		}
		i++;
	}
	printf("%.1f %.1f %.1f", min,a,max);
	return 0;
}