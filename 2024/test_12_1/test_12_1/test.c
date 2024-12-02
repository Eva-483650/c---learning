#include <stdio.h>

int add(int x, int y)
{
	return x + y;
}
void calc(int(*pf)(int,int))
{
	int a = 3;
	int b = 5;
	int ret = pf(a, b);
	printf("%d\n", ret);
}
int main()
{
	calc(add);
	return 0;
}
 
int main()
{
	int a = 5;
	int* pa = &a;
	*pa = 20;
	printf("%d\n", *pa);

	int arr[5] = { 0 };
	int(*p)[5] = &arr;

	printf("%p\n", &add);
	printf("%p\n", &add);
	//对于函数，&函数名和函数名都是函数的地址

	int (*pf)(int, int) = &add;
	//int ret = (*pf)(2, 3);
	int ret = pf(2, 3);
	printf("%d\n", ret);

	return 0;
}
