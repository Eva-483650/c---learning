#define _CRT_SECURE_NO_WARNINGS
//���������һ����n����Ϊ���鳤��
//����n��������Ϊ����Ԫ�ء��ҳ�����Ԫ���е���Сֵ�����
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
//int min(int a[], int n)//��������͸��� 4 2 1 3 ,4
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



//�����������һ����n����Ϊ���Եĸ�������������2n������ÿ��������Ԫ�����һ������(m,n)
//�ҳ����������е�һ�����ֵķ���Ҫ������Բ����
//����m��n����С������
//#include<stdio.h>
// �ж��Ƿ�Ϊ�����ĸ�������
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
//// �ҵ� n ����С������
//int findmin(int n)
//{
//	if (isprime(n) == 1)//n����������
//		return n;
//	for (int i = 2; i < n; i++)
//	{
//		if (isprime(i) == 1)//��������i
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
//		if (a[i] == findmin(a[i + 1]))//m��n����С������
//		{
//			printf("%d %d", a[i], a[i + 1]);
//			break;
//		}
//	}
//	return 0;
//}


//�����ʽ���������ɸ�����>0��<100��,ֱ������������ڵ���100ʱΪֹ����������������
//�����ʽ��������У���һ��Ϊ��С�������е�����.
//�ڶ���Ϊɾ�����ظ�Ԫ�غ������ÿ�������һ�����Ŀո�
//#include <stdio.h>
//#include <malloc.h>
//typedef struct cell
//{
//	int x;
//	struct cell* next;
//}Node;
////��������
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
////��С��������
////��������
//Node* sort(Node* head)//���ܵ���ͷָ��Ŀ���ֵ�����Է������Ͳ���Ϊvoid
//{
//	Node* p = head;
//	Node* p0,*r,*r0,*q;
//	p0 = r = r0 = q = NULL;
//	//��p���� p������� p�ұ�δ��
//	while (p != NULL)
//	{
//		r = head;
//		//�ҵ���һ�����ڵ��� p->x �Ľڵ� r
//		while (r->x < p->x&&r!=p)
//		{
//			r0 = r;
//			r = r->next;
//		}
//		//��ʱr���ڵ���p��pҪ�嵽rǰ��
//		if (r != p)
//		{
//			q = p;
//			//����p ɾ������p �������q
//			p0->next = p->next;
//			p = p0;
//			//ԭ����p֮��Ľڵ����ǰ����,�����Ҫ����p,����ɾ����p��Ҫ���˵�p0
//			//�嵽ͷ
//			if (r == head)
//			{
//				q->next = head;
//				//q = head; С������ڸ�ɶ������
//				head = q;//����ͷָ��
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
//	//����
//	head=sort(head);
//	print(head);
//	printf("\n");
//	//ɾ���ظ�Ԫ��
//	head= mydelete(head);
//	print(head);
//	printf("\n");
//	//�ͷ�
//	release(head);
//	return 0;
//}




#include <stdio.h>
//�Ϸ��ַ���
//��_����ĸ��ʼ������_�����֡���ĸ���ɵ������ַ���
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
	int count1 = 0;//�Ϸ�����
	int count2 = 0;//�Ƿ�����
	scanf("%d\n", &n);//��ס����Ҫ�ѻ��з�������
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





