#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = 0;
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &b);
//		if (b % a == 0)
//			sum = sum + b;
//	}
//	printf("%d", sum);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int sex = 0;
//	int age = 0;
//	int x = 0;
//	scanf("%d %d", &sex, &age);
//	if (sex == 1)
//	{
//		if (age > 65 && age <= 70)
//		{
//			x = 50;
//			printf("%d", x);
//		}
//		else if (age > 70)
//		{
//			x = 70;
//			printf("%d", x);
//		}
//		else
//			printf("NULL");
//	}
//	else
//	{
//		if (age > 60 && age <= 65)
//		{
//			x = 45;
//			printf("%d", x);
//		}
//		else if (age > 65)
//		{
//			x = 70;
//			printf("%d", x);
//		}
//		else
//			printf("NULL");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	double x = 0.0, f = 0.0;
//	int i = 0;
//	scanf("%lf", &x);
//	f = 1 + 1.0 / x;
//	for (i = 0; i < 4; i++)
//	{
//		f = 1 + 1 / f;
//	}
//	printf("%.3lf", f);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int data = 0;
//	int i = 0;
//	scanf("%d", &data);
//	printf("%d", i);
//	for (i = 1; i < data; i++)
//	{
//		if (i % 11 != 0)
//			continue;
//		else
//			printf(" %d", i);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int a = 0, b = 0, c = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//		a = 1;
//	if (num % 5 == 0)
//		b = 1;
//	if (num % 7 == 0)
//		c = 1;
//	if (a == 1 && b == 1 && c == 1)
//		printf("3,5,7");
//	if (a != 1 && b != 1 && c != 1)
//		printf("NULL");
//	if (a == 0 && b == 1 && c == 1)
//		printf("5,7");
//	if (a == 1 && b == 0 && c == 1)
//		printf("3,7");
//	if (a == 1 && b == 1 && c == 0)
//		printf("3,5");
//	if (a == 1 && b == 0 && c == 0)
//		printf("3");
//	if (a == 0 && b == 1 && c == 0)
//		printf("5");
//	if (a == 0 && b == 0 && c == 1)
//		printf("7");
//	return 0;
//}


