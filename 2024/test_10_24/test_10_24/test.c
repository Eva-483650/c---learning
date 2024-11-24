#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int is_prime(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = is_prime(num);
	if (ret == 1)
		printf("Y");
	else
		printf("N");
	return 0;
}