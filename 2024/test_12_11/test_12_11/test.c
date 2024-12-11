#define _CRT_SECURE_NO_WARNINGS
//向键盘输入一个数n，作为数组长度
//输入n个数，作为数组元素。找出数组元素中的最小值并输出
//#include<stdio.h>
//int main()
//{
//	int min(int a[], int n);
//	int n;
//	int a[20];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	printf("%d",min(a,n));
//	return 0;
//}
//int min(int a[], int n)//传入数组和个数 4 2 1 3 ,4
//{
//	if (n == 1)
//		return a[0];//a[0]
//	else
//	{
//		if (a[0]>=a[1])//4>2 2>1 
//			return min(a+1,n-1);//2 3;1 2;
//		else//1<3
//			return min(a,n-1);//1 1
//	}
//}



//向键盘中输入一个数n，作为数对的个数，接着输入2n个数，每两个相邻元素组成一个数对(m,n)
//找出所有数对中第一个出现的符合要求的数对并输出
//满足m是n的最小质因数
//#include<stdio.h>
// 判断是否为质数的辅助函数
//int isprime(int x)
//{
//	if (x <= 0)
//		return -1;
//	if (x == 1)
//		return 1;
//	for (int i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//// 找到 n 的最小质因数
//int findmin(int n)
//{
//	if (isprime(n) == 1)//n本身是质数
//		return n;
//	for (int i = 2; i < n; i++)
//	{
//		if (isprime(i) == 1)//产生质数i
//		{
//			if (n % i == 0)
//				return i;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int a[100] = { 0 };
//	for (i = 0; i < 2*n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 2*n-1; i+=2)
//	{
//		if (a[i] == findmin(a[i + 1]))//m是n的最小质因数
//		{
//			printf("%d %d", a[i], a[i + 1]);
//			break;
//		}
//	}
//	return 0;
//}


//输入格式：输入若干个数（>0且<100）,直到输入的数大于等于100时为止（该数不计入链表）
//输出格式；输出两行：第一行为从小到大排列的链表.
//第二行为删除了重复元素后的链表，每个数间隔一个西文空格
//#include <stdio.h>
//#include <malloc.h>
//typedef struct cell
//{
//	int x;
//	struct cell* next;
//}Node;
////创建链表
//Node* create()
//{
//	int n;
//	Node* head = (Node*)malloc(sizeof(Node));
//	head->next = NULL;
//	scanf("%d", &n);
//	if (n >= 100)
//		return NULL;
//	head->x = n;
//	Node* tail = head;
//	while (1)
//	{
//		scanf("%d", &n);
//		if (n >= 100)
//			break;
//		Node* newnode = (Node*)malloc(sizeof(Node));
//		newnode->x = n;
//		newnode->next = NULL;
//		tail->next = newnode;
//		tail = newnode;
//	}
//	return head;
//}
//void print(Node* head)
//{
//	Node* pcur = head;
//	while (pcur != NULL)
//	{
//		printf("%d ", pcur->x);
//		pcur = pcur->next;
//	}
//}
////从小到大排序
////插入排序
//Node* sort(Node* head)//接受的是头指针的拷贝值，所以返回类型不能为void
//{
//	Node* p = head;
//	Node* p0,*r,*r0,*q;
//	p0 = r = r0 = q = NULL;
//	//用p遍历 p左边已排 p右边未排
//	while (p != NULL)
//	{
//		r = head;
//		//找到第一个大于等于 p->x 的节点 r
//		while (r->x < p->x&&r!=p)
//		{
//			r0 = r;
//			r = r->next;
//		}
//		//此时r大于等于p，p要插到r前面
//		if (r != p)
//		{
//			q = p;
//			//保存p 删除操作p 插入操作q
//			p0->next = p->next;
//			p = p0;
//			//原来在p之后的节点会向前连接,你最后还要右移p,所以删除了p后要回退到p0
//			//插到头
//			if (r == head)
//			{
//				q->next = head;
//				//q = head; 小姐姐你在干啥。。。
//				head = q;//更新头指针
//			}
//			else
//			{
//				q->next = r;
//				r0->next = q;
//			}
//		}
//		p0 = p;
//		p = p->next;
//	}
//	return head;
//}
//Node* mydelete(Node* head)
//{
//	Node* pkey = head;
//	while (pkey != NULL)
//	{
//		Node* pcur = pkey->next;
//		Node* ppre = pkey;
//		while (pcur != NULL)
//		{
//			if (pcur->x == pkey->x)
//			{
//				ppre->next = pcur->next;
//				free(pcur);
//				pcur = ppre->next;
//			}
//			else
//			{
//				ppre = pcur;
//				pcur = pcur->next;
//			}
//		}
//		pkey = pkey->next;
//	}
//	return head;
//}
//void release(Node* head)
//{
//	Node* pcur = head;
//	while (pcur != NULL)
//	{
//		Node* pnext = pcur->next;
//		free(pcur);
//		pcur = pnext;
//	}
//}
//int main()
//{
//	Node* head = create();
//	//排序
//	head=sort(head);
//	print(head);
//	printf("\n");
//	//删除重复元素
//	head= mydelete(head);
//	print(head);
//	printf("\n");
//	//释放
//	release(head);
//	return 0;
//}




#include <stdio.h>
//合法字符串
//以_或字母开始，并由_、数字、字母构成的连续字符串
int judge(char str[1000])
{
	if (str[0] == '_' || (str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))
	{
		int i = 1;
		while (str[i] != '\0' && str[i] != '\n')
		{
			if (str[i] == '_' || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
			{
				;
			}
			else
			{
				return 0;
			}
			i++;
		}
	}
	return 1;
}
int main()
{
	int n = 0;
	int count1 = 0;//合法数量
	int count2 = 0;//非法数量
	scanf("%d\n", &n);//记住这里要把换行符给读了
	for (int i = 0; i < n; i++)
	{
		char str[1000] = { 0 };
		gets(str);//!!!
		int flag = judge(str);
		if (flag == 1)
			count1++;
		if (flag == 0)
			count2++;
	}
	printf("Valid:%d\n", count1);
	printf("Invalid:%d\n", count2);
	return 0;
//}





