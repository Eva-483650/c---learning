#define _CRT_SECURE_NO_WARNINGS
//��֧���
#include <stdio.h>

//if���

//0��ʾ�٣���0��ʾ��


////�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num;
//	scanf("%d", &num);
//
//	//�ж�
//	if (num % 2 == 1)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}


//���1-100������
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		
//		i++;
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//
//	return 0;
//}

//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)//����������
//	{
//	case 1://case������������ͳ������������ַ�
//			printf("����1\n");
//			break;
//	case 2:
//			printf("����2\n");
//			break;
//	case 3:
//			printf("����3\n");
//			break;
//	case 4:
//			printf("����4\n");
//			break;
//	case 5:
//			printf("����5\n");
//			break;
//	case 6:
//			printf("����6\n");
//			break;
//	case 7:
//		    printf("����7\n");
//			break;
//     //case�������
//	//break��������
//	}
//
//	return 0;
//}


////1-5weeekday,6-7weekend
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//
//	}
//
//	return 0;
//}


//ѭ�����

//while

//while�е�break���������õ���ֹѭ��
//while�е�continue ��������ѭ����Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�

////��ӡ1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			//break;//��������ѭ������ֹ����ѭ��
//			continue;//��ͷ����������Ĵ��룬ֱ���ж�Ҫ��Ҫ������һ��ѭ��
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}


//�鵽��ʱ������
//Ǯ���µײ�����


int main()
{
	//int ch = getchar();//��ȡ����������ַ�
	////EOF, end of file, ��-1
	//printf("%c\n", ch);//��ӡ�ַ� ����1
	//putchar(ch);//��ӡ�ַ� ����2
	
	//int ch = 0;
	//while ((ch = getchar()) != EOF)//Ctrl Z�൱�ڸ�getchar����һ��EOF
	//{
	//	putchar(ch);

	//}


	//�ٸ�����
	//���������Ǹ��ַ���
	//scanf getchar ���Ǵ����뻺������ȡ
	//����getchar���ȡ�س�,scanf�����ȡ�س�

	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);//������������ǵ�ַ�����Բ���ȡ��ַ
	//1 ������Ϊ483650�س� ��ʱpassword��483650
	//3 ������Ϊ123 321�س� ��ʱpassword��123
	//( scanf��ȡ����%s �ո����ַ���)

	//getchar();
	//2 ��ȡ��\n, ���������
	//3 ֻ��ȡ�˿ո� getcharһ��ֻ��һ����

	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	//��һ����������һ��
	//�����س�ֹͣѭ��
	//���ã����������л�����
	//ͨ��while��getchar���������������������

	
	printf("��ȷ������(Y/N)��>");
	int ret = getchar();
	//1 ��ʱret������\n


	if ('Y' == ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}























//for
//do while
