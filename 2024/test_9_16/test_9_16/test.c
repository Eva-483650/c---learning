#define _CRT_SECURE_NO_WARNINGS
//1.���泣��
//2.const���εĳ�����
//3.#define����ı�ʶ������
//4.ö�ٳ���


//30��
//'w';//�ַ�
//"abc"��//�ַ���
//const int a = 10;//��C�����С�const���ε�a�������Ǳ������������޸ģ��г���������
//a = 20;
//printf("%d\n", a);
	
//const int n = 10;
//int arr[n] = { 0 };//���ʻ��Ǳ���
//
//#define MAX 100
//#define STR "abcd"
//
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//
//	return 0;
//}

#include <stdio.h>
enum Color
{
	//ö�ٳ���,�����ٿռ�
	RED,
	GREEN,
	BLUE,

};

enum Sex
{
	//ö�ٳ���,�����ٿռ�
	MALE,
	FEMALE,
	 

};

int main()
{
	//��ԭɫ
	//RGB
	int num = 10;
	enum Color c = RED;//����ռ�

	return 0;
}