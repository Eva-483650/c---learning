#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, h, m, s;
	scanf("%d", &x);
	h = x / 3600;
	x %= 3600;
	m = x / 60;
	x %= 60;
	s = x;
	//��24h��Ϊ0
	while (h > 23)
	{
		h -= 24;
	}
	printf("%02d:%02d:%02d\n", h, m, s);
	return 0;
}







//int main()
//{
//	char a;
//	scanf("%c", &a);
//	printf("%c%c%c\n", a - 1, a, a + 1);
//
//	return 0;
//}













//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	if (x > 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//	printf("%d\n", y);
//
//	return 0;
//}


//������
//����������
//���ŵ����˶���������ʱ��ִ�е�����������������һ����������ִ�и������ĳ���
// float a = 7 / 2.0;
//ȡģ����������������ֻ��������
//��ֵ������
//=��ֵ
//a += 3 >> a = a + 3
//��Ŀ������
//!--�߼�������

//int main()
//{
//	/*int flag = 0;
//	if (!flag)
//	{
//		printf("hehe\n");
//	}*/
//
//	int a = -10;
//	int b = -a;
//	printf("%d", b);
//
//	return 0;
//}

//sizeof�ǵ�Ŀ������

//int main()
//{
//	//int a = 0;
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof a);//4���˴���ʡ������
//
//	//int arr[10] = { 0 };//ÿ������ռ4���ֽ�
//	//printf("%d\n", sizeof(arr));//40��������������Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(arr[0]));//4
//	//printf("%d\n", sizeof(arr) / sizeof[0]);//10--�����Ԫ�ظ���
//
//
//	return 0;
//}

