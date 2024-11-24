#define _CRT_SECURE_NO_WARNINGS
//分支语句
#include <stdio.h>

//if语句

//0表示假，非0表示真


////判断一个数是否为奇数
//int main()
//{
//	int num;
//	scanf("%d", &num);
//
//	//判断
//	if (num % 2 == 1)
//	{
//		printf("奇数\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}


//输出1-100的奇数
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

//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)//必须是整型
//	{
//	case 1://case后面必须是整型常量，可以是字符
//			printf("星期1\n");
//			break;
//	case 2:
//			printf("星期2\n");
//			break;
//	case 3:
//			printf("星期3\n");
//			break;
//	case 4:
//			printf("星期4\n");
//			break;
//	case 5:
//			printf("星期5\n");
//			break;
//	case 6:
//			printf("星期6\n");
//			break;
//	case 7:
//		    printf("星期7\n");
//			break;
//     //case决定入口
//	//break决定出口
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
//		printf("选择错误\n");
//
//	}
//
//	return 0;
//}


//循环语句

//while

//while中的break是用于永久的终止循环
//while中的continue 跳过本次循环后的代码，直接去判断部分，进行下一次循环的判断

////打印1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			//break;//跳出整个循环，终止整个循环
//			continue;//回头，跳过后面的代码，直接判断要不要进行下一次循环
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}


//书到用时方恨少
//钱到月底不够花


int main()
{
	//int ch = getchar();//获取键盘输入的字符
	////EOF, end of file, 是-1
	//printf("%c\n", ch);//打印字符 方法1
	//putchar(ch);//打印字符 方法2
	
	//int ch = 0;
	//while ((ch = getchar()) != EOF)//Ctrl Z相当于给getchar返回一个EOF
	//{
	//	putchar(ch);

	//}


	//举个例子
	//假设密码是个字符串
	//scanf getchar 都是从输入缓冲区获取
	//但是getchar会获取回车,scanf不会获取回车

	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);//数组名本身就是地址，所以不用取地址
	//1 若密码为483650回车 此时password是483650
	//3 若密码为123 321回车 此时password是123
	//( scanf获取的是%s 空格不是字符型)

	//getchar();
	//2 读取了\n, 清除缓冲区
	//3 只读取了空格 getchar一次只拿一个字

	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	//读一个缓冲区少一个
	//读到回车停止循环
	//作用：清理了所有缓冲区
	//通过while与getchar的组合起到清理缓冲区的作用

	
	printf("请确认密码(Y/N)：>");
	int ret = getchar();
	//1 此时ret里面是\n


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
