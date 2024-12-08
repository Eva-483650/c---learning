#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <malloc.h>
//struct cell{//单链表结点结构体定义
// int x;
// struct cell* next;
//};
//struct cell* build(void) {//新建单链表，并将建好的单链表首结点地址返回
//	struct cell* head, * tmp, * p;
//	head = tmp = p = NULL;
//	int n;
//	head = (struct cell*)malloc(sizeof(struct cell));
//	head->next = NULL;
//	scanf("%d", &n);
//	if (n == 0)
//		return NULL;
//	head->x = n;
//	p = head;
//	while (1)
//	{
//		tmp = (struct cell*)malloc(sizeof(struct cell));
//		scanf("%d", &n);
//		if (n == 0)
//			break;
//		tmp->x = n;
//		tmp->next = NULL;
//		p->next = tmp;
//		p = tmp;
//	}
//	return head;//返回单链表头
//}
//struct cell* back(struct cell* head,int k){//求链表倒数第k个结点，head是单链表首结点指针
//	int n = 0;
//	struct cell* pcur = head;
//	while (pcur != NULL)
//	{
//		n++;
//		pcur = pcur->next;
//	}
//	int n0 = n - k;
//	if (n0 < 0)
//		return NULL;
//	int i = 0;
//	pcur = head;
//	for (i = 0; i < n0; i++)
//	{
//		pcur = pcur->next;
//	}
//	return pcur;
//}
//void release(struct cell* head){//释放单链表空间,head是单链表首结点指针
//	struct cell* pcur = head;
//	if (pcur != NULL)
//	{
//		struct cell* pnext = pcur->next;
//		free(pcur);
//		pcur = pnext;
//	}
//}
//int main()
//{
//	struct cell* head, * result;
//	int k;
//	head = build();
//	scanf("%d", &k);
//	result = back(head, k);
//	if(result != NULL)
//		printf("%d", result->x);
//	else
//		printf("NULL");
//	release(head);
//	return 0;
//}





#include <stdio.h>
#include <malloc.h>
struct cell{//单链表结点结构体定义
 int x;
 struct cell* next;
};
struct cell* build(void){//新建单链表，并将建好的单链表首结点地址返回
	struct cell* head, * tmp, * tail;
	head = tmp = tail= NULL;
	int n;
	head = (struct cell*)malloc(sizeof(struct cell));
	head->next = NULL;
	scanf("%d", &n);
	if (n == 0)
		return NULL;
	head->x = n;
	tail = head;
	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
			break;
		tmp = (struct cell*)malloc(sizeof(struct cell));
		tmp->x = n;
		tmp->next = NULL;
		tail->next = tmp;
		tail = tmp;
	}
	return head;//返回单链表头
}
struct cell* sort(struct cell* head){//递增排序链表，head是单链表首结点指针
	struct cell* p, * p0, * r, * r0, * q;
	p = p0 = r = r0 = q = NULL;
	p = head;
	p0 = head;
	while (p != NULL)
	{
		r0 = r = head;
		//找到r>=p
		while (r->x < p->x&& r != p && r != NULL)
		{
			//如果r为NULL，说明找不到比p大的数字，那就按兵不动
			r0 = r;
			r = r->next;
		}
		if (r != p)
		{
			//删除原位置的p，暂存p到q
			q = p;
			p0->next = p->next;
			p0;// 将 p 回退到前一个节点，便于继续遍历
			//插入到r的前面
			if (r == head)
			{
				q->next = head;
				head = q;
			}
			else
			{
				r0->next = q;
				q->next = r;
			}
		}
		p0 = p;
		p = p->next;
	}
	return head;
}

void print(struct cell* head){//打印整个单链表,head是单链表首结点指针
	struct cell* pcur = head;
	while (pcur != NULL)
	{
		printf("%d ", pcur->x);
		pcur = pcur->next;
	}
}
void release(struct cell* head){//释放单链表空间,head是单链表首结点指针
	struct cell* pcur = head;
	while (pcur != NULL)
	{
		struct cell* pnext = pcur->next;
		free(pcur);
		pcur = pnext;
	}
}
int main(void)
{
	struct cell* head;
	head = build();
	if(head != NULL)
	{
		head = sort(head);
		print(head);
	}
	else
		printf("NULL");
	release(head);
	return 0;
}