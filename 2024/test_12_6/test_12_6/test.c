#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>
//不带头单链表
struct cell{//单链表结点结构体定义
	int x;
	struct cell* next;
};
struct cell* build(void){//新建单链表，并将建好的单链表首结点地址返回
	struct cell* head, * tmp, * p;
	head = tmp = p = NULL;
	int n;
	n = 0;
	head = (struct cell*)malloc(sizeof(struct cell));
	head->next = NULL;
	scanf("%d", &n);
	if (n == 0)
		return NULL;
	head->x = n;
	p = head;
	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
			break;
		struct cell* newcode = (struct cell*)malloc(sizeof(struct cell));
		newcode->x = n;
		newcode->next = NULL;
		p->next = newcode;
		p = newcode;
	}
	if (head->next == NULL)
	{
		head = NULL;
	}
	return head;//返回单链表头
}
void print(struct cell* head){//打印整个单链表,head是指向单链表首结点的指针
	if (head == NULL)
		return;
	struct cell* pcur = head;
	while (pcur != NULL)
	{
		printf("%d ", pcur->x);
		pcur = pcur->next;
	}
}
void release(struct cell* head){//释放单链表空间,head是指向单链表首结点的指针
	if (head == NULL)
		return;
	struct cell* pcur = head;
	while (pcur != NULL)
	{
		struct cell* pnext = pcur->next;
		free(pcur);
		pcur = pnext;
	}
}
int main()
{
	struct cell* head;
	head = build();
	if (head != NULL)
		print(head);
	else
		printf("NULL");
	release(head);
	return 0;
}
