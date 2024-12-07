#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>
struct cell{//单链表结点结构体定义
	int x;
	struct cell* next;
};
struct cell* build(void){//新建单链表，并将建好的单链表首结点地址返回
	struct cell* head, * tmp, * p;
	head = tmp = p = NULL;
	int n;
	head = (struct cell*)malloc(sizeof(struct cell));
	scanf("%d", &n);
	if (n == 0)
		return NULL;
	head->x = n;
	head->next = NULL;
	p = head;
	while (1)
	{
		scanf("%d",&n);
		if (n == 0)
			break;
		tmp = (struct cell*)malloc(sizeof(struct cell));
		tmp->x = n;
		tmp->next = NULL;
		p->next = tmp;
		p = tmp;
	}
	return head;//返回单链表头
}
struct cell* mid(struct cell* head) {//寻找链表中间位置结点地址并返回，head是单链表首结点指针
	struct cell* p = head;
	struct cell* pcur = head;
	int n = 0;
	while (p != NULL)
	{
		n++;
		p = p->next;
	}
	int i = 0;
	for (i = 0; i < (n - 1) / 2; i++)
	{
		pcur = pcur->next;
	}
	return pcur;
}
void print(struct cell* head) {//打印整个单链表,head是单链表首结点指针
	struct cell* pcur = head;
	while(pcur != NULL)
	{
		printf("%d ", pcur->x);
		pcur = pcur->next;
	}
}
void release(struct cell* head) {//释放单链表空间,head是单链表首结点指针
	struct cell* pcur = head;
	while (pcur != NULL)
	{
		struct cell* pnext = pcur->next;
		free(pcur);
		pcur = pnext;
	}
}
int main(void){
	struct cell* head, * half;
	head = build();
	half = mid(head);
	if (half != NULL)
		print(half);
	else
		printf("NULL");
	release(head);
}




//#include <malloc.h>
//struct cell{//单链表结点结构体定义
//    int x;
//    struct cell* next;
//};
//struct cell* build(void){//新建单链表，并将建好的单链表首结点地址返回
//    struct cell* head, * tmp, * p;
//    head = tmp = p = NULL;
//    int n;
//    head = (struct cell*)malloc(sizeof(struct cell));
//    head->next = NULL;
//    scanf("%d", &n);
//    if (n == 0)
//        return NULL;
//    head->x = n;
//    p = head;
//    while (1)
//    {
//        scanf("%d", &n);
//        if (n == 0)
//            break;
//        tmp = (struct cell*)malloc(sizeof(struct cell));
//        tmp->x = n;
//        tmp->next = NULL;
//        p->next = tmp;
//        p = tmp;
//    }
//    return head;//返回单链表头
//}
//struct cell* del2one(struct cell* head){//删除重复结点只保留一个，head是单链表首结点指针
//    if (head == NULL)
//        return NULL;
//    struct cell* pkey = head;
//    struct cell* ppre = head;
//    struct cell* pcur = ppre->next;
//    while (pkey != NULL)
//    {
//        ppre = pkey;
//        pcur = ppre->next;
//        while (pcur!=NULL)//用pcur遍历
//        {
//            //判断pcur与pkey是否相等
//            if (pkey->x == pcur->x)
//            {
//                ppre->next = pcur->next;
//                free(pcur);
//                //更新pcur的指向
//                pcur = ppre->next;
//            }
//            //向后移动
//            else 
//            {
//                ppre = pcur;
//                pcur = pcur->next;
//            }
//        }
//        pkey = pkey->next;
//    }
//    return head;//返回删除重复结点的单链表头
//}
//void print(struct cell* head){//打印整个单链表,head是单链表首结点指针
//    if (head == NULL)
//        return;
//    struct cell* pcur = head;
//    while (pcur != NULL)
//    {
//        if (pcur->next == NULL)
//        {
//            printf("%d", pcur->x);
//            return;
//        }
//        printf("%d ", pcur->x);
//        pcur = pcur->next;
//    }
//}
//void release(struct cell* head)//释放单链表空间,head是单链表首结点指针
//{
//    if (head == NULL)
//        return;
//    struct cell* pcur = head;
//    while (pcur != NULL)
//    {
//        struct cell* pnext = pcur->next;
//        free(pcur);
//        pcur = pnext;
//    }
//}
//int main(void)
//{
//    struct cell* head;
//    head = build();
//    head = del2one(head);
//    if (head != NULL)
//        print(head);
//    else
//        printf("NULL");
//    release(head);
//    return 0;
//}