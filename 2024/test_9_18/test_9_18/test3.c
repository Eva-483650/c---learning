#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���������������ĺ�

//����
//int Add(int x, int y)
//{
//	return(x + y);
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//
//	//����
//	scanf("%d %d", &n1, &n2);
//
//	//���
//	//int sum = n1 + n2;
//	int sum = Add(n1, n2);
//
//	//��ӡ
//	printf("%d\n", sum);
//
//	return 0;
//}


//����,�����ͬ����Ԫ�صļ���
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//10��Ԫ��
	//������±꣬�±��0��ʼ
	/*printf("%d\n", arr[8]);*/
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}

	return 0;
}