#define _CRT_SECURE_NO_WARNINGS


//��д���룬��ʾ����ַ��������ƶ������м���
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
//		Sleep(1000);//����
//		//�����Ļ
//		system("cls");
//		//system��һ���⺯��������ִ��ϵͳ����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}



//ģ���û���¼�������Σ������δ����˳�����
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//�����������ַ�����abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);//������������ǵ�ַ
//		//�Ƚ������ַ����Ƿ���Ȳ���ʹ��==
//		//strcmp
//		//�������ֵΪ0����ʾ�����ַ������
//		if (strcmp(password, "abcdef")==0)
//		{
//			printf("��¼�ɹ�:>");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
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

