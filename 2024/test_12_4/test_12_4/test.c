#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    char str[] = "This is a sample string";
//    char* pch;
//    printf("Looking for the 's' character in \"%s\"...\n", str);
//    pch = strchr(str, 's');
//    while (pch != NULL)
//    {
//        printf("found at %d\n", pch - str + 1);
//        pch = strchr(pch + 1, 's');
//    }
//    return 0;
//}



////��̬�ڴ����
#include <errno.h>
#include <string.h>
#include <stdlib.h>
//
////INT_MAX �������
//int main()
//{
//	int* p = (int*)malloc(40);
//	//��̬�ڴ濪��
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//		//����1��ʾ�쳣
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//���ͷ��ٸ�ֵ ��������ˮ����������
//	free(p);
//	p = NULL;
//
//	//�ڴ�й¶������ռ��Ҫ����
//	
//	//û��free
//	//������˵�ڴ�ռ�Ͳ�������
//	//�������˳���ʱ��ϵͳ���Զ������ڴ�ռ�
//
//	return 0;
//}


////����10�����͵Ŀռ�
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ӡ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}


int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//ʹ��
	//1 2 3 4 5 6 7 8 9 10
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}
	//����
	int* ptr = (int*)realloc(p, 80);
	if (ptr!=NULL)
	{
		p = ptr;
	}
	//ʹ��
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}
