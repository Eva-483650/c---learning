#define _CRT_SECURE_NO_WARNINGS
//1.字面常量
//2.const修饰的常变量
//3.#define定义的标识符常量
//4.枚举常量


//30；
//'w';//字符
//"abc"；//字符串
//const int a = 10;//在C语言中。const修饰的a，本质是变量，但不能修改，有常量的属性
//a = 20;
//printf("%d\n", a);
	
//const int n = 10;
//int arr[n] = { 0 };//本质还是变量
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
	//枚举常量,不开辟空间
	RED,
	GREEN,
	BLUE,

};

enum Sex
{
	//枚举常量,不开辟空间
	MALE,
	FEMALE,
	 

};

int main()
{
	//三原色
	//RGB
	int num = 10;
	enum Color c = RED;//申请空间

	return 0;
}