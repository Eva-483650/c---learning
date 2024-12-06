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
//	//str存放的就是动态开辟的100字节的地址
//	strcpy(str, "hello world");
//	printf(str);
//	//释放
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}



////链表的结构体
//struct Node
//{
//	int data;//数据域
//	struct Node* next; //指针域
//};
////用指针表示链表
//struct Node* createList()
//{
//	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
//	//headnNode指向分配出的struct Node
//	//用指针代表表头
//	//headnNode成为结构体变量
//	//初始化
//	//headNode->data = 1;
//	headNode->next = NULL;
//	return headNode;
//}
////创建结点
//struct Node* createNode(int data)
//{
//	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//	newNode->data = data;
//	newNode->next = NULL;
//	return newNode;
//}
////插入结点 参数：插入哪个链表，插入结点的数据
//void insetNodeByhead(struct Node* headNode, int data)
//{
//	//创建插入的结点
//	struct Node* newNode = createNode(data);
//	newNode->next = headNode->next;
//	headNode->next = newNode;
//}
////打印结点
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
////删除结点
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



////静态链表
////结点类型定义
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
//	//如何遍历链表
//	//定义一个辅助指针变量
//	Node* cur = &node1;
//	while (cur != NULL)
//	{
//		printf("%d ", cur->data);
//		//指针后移
//		cur = cur->next;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}


//动态链表

//结点类型定义
typedef struct Node {
	int data;
	struct Node* next;
}Node;

//初始化链表
Node* list()
{
	//创建头节点
	Node* header = (Node*)malloc(sizeof(Node));
	header->next = NULL;

	//尾部指针
	Node* pRear = header;

	int val = -1;
	while (1)
	{
		printf("输入插入的数据：\n");
		scanf("%d", &val);
		if (val == -1)
			break;
		//先创建节点
		Node* newnode = (Node*)malloc(sizeof(Node));
		newnode->data = val;
		newnode->next = NULL;
		//插入新节点
		pRear->next = newnode;
		//更新尾部指针
		pRear = newnode;
	}
	return header;
}

//在值为oldval的位置插入一个的新的数据newcal
void insertByvalue(Node* header, int oldval,int newval)
{
	if (header == NULL)
		return;
	//两个辅助指针变量
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
	//链表中不存在值为oldaval的节点
	if (pcur == NULL)
		return;
#endif
	//存在oldval
	//先创建节点
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data = newval;
	newnode->next = NULL;
	//新节点插入到链表中
	newnode->next = pcur;
	ppre->next = newnode;
}

//删除值为val的节点
void removeByvalue(Node* header, int delval)
{
	if (header == NULL)
		return;
	//两个辅助指针变量
	Node* ppre = header;
	Node* pcur = ppre->next;
	while (pcur != NULL)
	{
		if (pcur->data == delval)
		{
			break;
		}
		//移动两个辅助指针
		ppre = pcur;
		pcur = pcur->next;
	}
	//没找到
	if (pcur == NULL)
	{
		return;
	}
	//找到 重新建立待删除节点的前驱和后继节点关系
	ppre->next = pcur->next;
	//释放删除节点
	free(pcur);
	pcur = NULL;
}

//遍历
void foreach(Node* header)
{
	if (header == NULL)
		return;
	//辅助指针变量
	Node* pcur = header->next;
	while (pcur != NULL)
	{
		printf("%d ", pcur->data);
		pcur = pcur->next;
	}

}

//销毁链表
void destroy(Node* header)
{
	if (header == NULL)
		return;
	//创建辅助指针
	Node* pcur = header;//从头开始删除

	while (pcur != NULL)
	{
		//保存当下节点的下一个节点地址
		Node* pnext = pcur->next;
		//释放当前节点内存
		printf("%d节点被销毁！\n", pcur->data);
		free(pcur);
		//指针向后移动
		pcur = pnext;
	}
}

//清空链表
void clear(Node* header)
{
	if (header == NULL)
		return;
	//创建辅助指针
	Node* pcur = header->next;
	while (pcur != NULL)
	{
		//先保存当前节点的下一个节点地址
		Node* pnext = pcur->next;
		//释放当前节点内存
		free(pcur);
		//pcur指向下一个节点
		pcur = pnext;
	}
	//头节点指针域清空
	header->next = NULL;
}

void test()
{
	//初始化链表 100 200 300 400 500
	Node* header = list();
	//打印链表
	foreach(header);
	//插入数据 100 200 666 300 400 500
	insertByvalue(header, 300, 666);
	printf("\n---------------------------\n");
	foreach(header);
	//清空链表
	clear(header);
	printf("\n---------------------------\n");
	foreach(header);
	//插入数据
	insertByvalue(header, 1000, 1);
	insertByvalue(header, 1000, 2);
	insertByvalue(header, 1000, 3);
	insertByvalue(header, 1000, 4);
	printf("\n---------------------------\n");
	foreach(header);
	//删除数据
	removeByvalue(header, 3);
	printf("\n---------------------------\n");
	foreach(header);
	removeByvalue(header, 2);
	printf("\n---------------------------\n");
	foreach(header);
	//销毁链表
	destroy(header);
}

int main()
{
	test();
	return 0;
}