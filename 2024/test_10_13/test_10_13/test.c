#define _CRT_SECURE_NO_WARNINGS


//编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//毫秒
//		//清空屏幕
//		system("cls");
//		//system是一个库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}



//模拟用户登录，限三次，若三次错误退出程序
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设密码是字符串：abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);//数组名本身就是地址
//		//比较两个字符串是否相等不能使用==
//		//strcmp
//		//如果返回值为0，表示两个字符串相等
//		if (strcmp(password, "abcdef")==0)
//		{
//			printf("登录成功:>");
//			break;
//		}
//		else
//			printf("输入错误\n");
//	}
//	if (i == 3)
//	{
//		printf("三次输入错误，退出程序\n");
//	}
//
//
//	return 0;
//}



//int main()
//{
//	char x = 0;
//	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
//	do
//	{
//		x = getchar();
//		if (x == '@')
//			break;
//		if (x == '{')
//			a++;
//		if (x == '}')
//			b++;
//		if (x == '[')
//			c++;
//		if (x == ']')
//			d++;
//		if (x == '(')
//			e++;
//		if (x == ')')
//			f++;
//	} while (1);
//	if (a != b)
//		printf("{}");
//	if (c != d)
//		printf("[]");
//	if (e != f)
//		printf("()");
//	if (a == b && c == d && e == f)
//		printf("NULL");
//	return 0;
//}

