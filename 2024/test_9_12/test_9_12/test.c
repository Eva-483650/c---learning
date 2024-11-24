#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//变量的作用域：
//局部变量作用于所在大括号内部
//全局变量作用域为整个工程
//声明来自外部的符号(全局变量）extern int a;

//变量的生命周期：
//局部变量，进入作用域开始，出作用域结束
//全局变量，整个程序的生命周期
int main(void)
{
	{
		int a = 100;
		printf("%d/n", a);
	}
	return 0;
}