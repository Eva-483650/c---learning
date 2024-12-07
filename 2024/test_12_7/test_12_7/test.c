#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>
struct cell{//��������ṹ�嶨��
	int x;
	struct cell* next;
};
struct cell* build(void){//�½��������������õĵ������׽���ַ����
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
	return head;//���ص�����ͷ
}
struct cell* mid(struct cell* head) {//Ѱ�������м�λ�ý���ַ�����أ�head�ǵ������׽��ָ��
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
void print(struct cell* head) {//��ӡ����������,head�ǵ������׽��ָ��
	struct cell* pcur = head;
	while(pcur != NULL)
	{
		printf("%d ", pcur->x);
		pcur = pcur->next;
	}
}
void release(struct cell* head) {//�ͷŵ�����ռ�,head�ǵ������׽��ָ��
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
//struct cell{//��������ṹ�嶨��
//    int x;
//    struct cell* next;
//};
//struct cell* build(void){//�½��������������õĵ������׽���ַ����
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
//    return head;//���ص�����ͷ
//}
//struct cell* del2one(struct cell* head){//ɾ���ظ����ֻ����һ����head�ǵ������׽��ָ��
//    if (head == NULL)
//        return NULL;
//    struct cell* pkey = head;
//    struct cell* ppre = head;
//    struct cell* pcur = ppre->next;
//    while (pkey != NULL)
//    {
//        ppre = pkey;
//        pcur = ppre->next;
//        while (pcur!=NULL)//��pcur����
//        {
//            //�ж�pcur��pkey�Ƿ����
//            if (pkey->x == pcur->x)
//            {
//                ppre->next = pcur->next;
//                free(pcur);
//                //����pcur��ָ��
//                pcur = ppre->next;
//            }
//            //����ƶ�
//            else 
//            {
//                ppre = pcur;
//                pcur = pcur->next;
//            }
//        }
//        pkey = pkey->next;
//    }
//    return head;//����ɾ���ظ����ĵ�����ͷ
//}
//void print(struct cell* head){//��ӡ����������,head�ǵ������׽��ָ��
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
//void release(struct cell* head)//�ͷŵ�����ռ�,head�ǵ������׽��ָ��
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