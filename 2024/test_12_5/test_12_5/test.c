#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

//void getmemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void test()
//{
//	char* str = NULL;
//	getmemory(&str);
//	//str��ŵľ��Ƕ�̬���ٵ�100�ֽڵĵ�ַ
//	strcpy(str, "hello world");
//	printf(str);
//	//�ͷ�
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}



////����Ľṹ��
//struct Node
//{
//	int data;//������
//	struct Node* next; //ָ����
//};
////��ָ���ʾ����
//struct Node* createList()
//{
//	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
//	//headnNodeָ��������struct Node
//	//��ָ������ͷ
//	//headnNode��Ϊ�ṹ�����
//	//��ʼ��
//	//headNode->data = 1;
//	headNode->next = NULL;
//	return headNode;
//}
////�������
//struct Node* createNode(int data)
//{
//	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//	newNode->data = data;
//	newNode->next = NULL;
//	return newNode;
//}
////������ �����������ĸ����������������
//void insetNodeByhead(struct Node* headNode, int data)
//{
//	//��������Ľ��
//	struct Node* newNode = createNode(data);
//	newNode->next = headNode->next;
//	headNode->next = newNode;
//}
////��ӡ���
//void printList(struct Node* headNode)
//{
//	struct Node* pMove = headNode->next;
//	while (pMove)
//	{
//		printf("%d",pMove->data);
//		pMove = pMove->next;
//	}
//	printf("\n");
//}
////ɾ�����
//void deleteNodeByAppoin(struct Node* headNode, int posdelete)
//{
//	struct Node* posNode = headNode->next;
//}
//int main()
//{
//	struct Node* list = createList();
//	insetNodeByhead(list, 1);
//	insetNodeByhead(list, 2);
//	insetNodeByhead(list, 3);
//	printList(list);
//	return 0;
//}



////��̬����
////������Ͷ���
//typedef struct Node{
//	int data;
//	struct Node* next;
//}Node;
//void test()
//{
//	Node node1 = { 10,NULL };
//	Node node2 = { 10,NULL };
//	Node node3 = { 10,NULL };
//	Node node4 = { 10,NULL };
//	Node node5 = { 10,NULL };
//	Node node6 = { 10,NULL };
//
//	node1.next = &node2;
//	node2.next = &node3;
//	node3.next = &node4;
//	node4.next = &node5;
//	node5.next = &node6;
//
//	//��α�������
//	//����һ������ָ�����
//	Node* cur = &node1;
//	while (cur != NULL)
//	{
//		printf("%d ", cur->data);
//		//ָ�����
//		cur = cur->next;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}


//��̬����

//������Ͷ���
typedef struct Node {
	int data;
	struct Node* next;
}Node;

//��ʼ������
Node* list()
{
	//����ͷ�ڵ�
	Node* header = (Node*)malloc(sizeof(Node));
	header->next = NULL;

	//β��ָ��
	Node* pRear = header;

	int val = -1;
	while (1)
	{
		printf("�����������ݣ�\n");
		scanf("%d", &val);
		if (val == -1)
			break;
		//�ȴ����ڵ�
		Node* newnode = (Node*)malloc(sizeof(Node));
		newnode->data = val;
		newnode->next = NULL;
		//�����½ڵ�
		pRear->next = newnode;
		//����β��ָ��
		pRear = newnode;
	}
	return header;
}

//��ֵΪoldval��λ�ò���һ�����µ�����newcal
void insertByvalue(Node* header, int oldval,int newval)
{
	if (header == NULL)
		return;
	//��������ָ�����
	Node* ppre = header;
	Node* pcur = ppre->next;
	while (pcur!= NULL)
	{
		if (pcur->data == oldval)
			break;
		ppre = pcur;
		pcur = pcur->next;
	}
#if 0
	//�����в�����ֵΪoldaval�Ľڵ�
	if (pcur == NULL)
		return;
#endif
	//����oldval
	//�ȴ����ڵ�
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data = newval;
	newnode->next = NULL;
	//�½ڵ���뵽������
	newnode->next = pcur;
	ppre->next = newnode;
}

//ɾ��ֵΪval�Ľڵ�
void removeByvalue(Node* header, int delval)
{
	if (header == NULL)
		return;
	//��������ָ�����
	Node* ppre = header;
	Node* pcur = ppre->next;
	while (pcur != NULL)
	{
		if (pcur->data == delval)
		{
			break;
		}
		//�ƶ���������ָ��
		ppre = pcur;
		pcur = pcur->next;
	}
	//û�ҵ�
	if (pcur == NULL)
	{
		return;
	}
	//�ҵ� ���½�����ɾ���ڵ��ǰ���ͺ�̽ڵ��ϵ
	ppre->next = pcur->next;
	//�ͷ�ɾ���ڵ�
	free(pcur);
	pcur = NULL;
}

//����
void foreach(Node* header)
{
	if (header == NULL)
		return;
	//����ָ�����
	Node* pcur = header->next;
	while (pcur != NULL)
	{
		printf("%d ", pcur->data);
		pcur = pcur->next;
	}

}

//��������
void destroy(Node* header)
{
	if (header == NULL)
		return;
	//��������ָ��
	Node* pcur = header;//��ͷ��ʼɾ��

	while (pcur != NULL)
	{
		//���浱�½ڵ����һ���ڵ��ַ
		Node* pnext = pcur->next;
		//�ͷŵ�ǰ�ڵ��ڴ�
		printf("%d�ڵ㱻���٣�\n", pcur->data);
		free(pcur);
		//ָ������ƶ�
		pcur = pnext;
	}
}

//�������
void clear(Node* header)
{
	if (header == NULL)
		return;
	//��������ָ��
	Node* pcur = header->next;
	while (pcur != NULL)
	{
		//�ȱ��浱ǰ�ڵ����һ���ڵ��ַ
		Node* pnext = pcur->next;
		//�ͷŵ�ǰ�ڵ��ڴ�
		free(pcur);
		//pcurָ����һ���ڵ�
		pcur = pnext;
	}
	//ͷ�ڵ�ָ�������
	header->next = NULL;
}

void test()
{
	//��ʼ������ 100 200 300 400 500
	Node* header = list();
	//��ӡ����
	foreach(header);
	//�������� 100 200 666 300 400 500
	insertByvalue(header, 300, 666);
	printf("\n---------------------------\n");
	foreach(header);
	//�������
	clear(header);
	printf("\n---------------------------\n");
	foreach(header);
	//��������
	insertByvalue(header, 1000, 1);
	insertByvalue(header, 1000, 2);
	insertByvalue(header, 1000, 3);
	insertByvalue(header, 1000, 4);
	printf("\n---------------------------\n");
	foreach(header);
	//ɾ������
	removeByvalue(header, 3);
	printf("\n---------------------------\n");
	foreach(header);
	removeByvalue(header, 2);
	printf("\n---------------------------\n");
	foreach(header);
	//��������
	destroy(header);
}

int main()
{
	test();
	return 0;
}