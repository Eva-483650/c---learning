#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>
struct farlei_item
{
	int numerator,denominator;// 分子、分母
	struct farlei_item* next;// 连接部分
};
typedef struct farlei_item* farleipointer;
int gcd(int x, int y)/*  求最大公约数 */
{
	if (y == 0)
		return x;
	int r;
	r = x % y;
	return gcd(y, r);
}
/*构造法雷序列,并返回序列头指针*/
farleipointer farlei(int n)
{
	int i, j;
	farleipointer fn, r, r0, p;
	fn = r = r0 = p = NULL;
	if (n < 1)
		return NULL;//如果n<=0,则没有法雷序列
	fn = (farleipointer)malloc(sizeof(struct farlei_item));//构造0/1
	fn->numerator = 0;
	fn->denominator = 1;
	p = (farleipointer)malloc(sizeof(struct farlei_item));//构造1/1
	p->numerator = 1;
	p->denominator = 1;
	fn->next = p;
	p->next = NULL;
	for (i = 2; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			if (gcd(i, j) == 1)//找到既约分数
			{
				//寻找该插入的位置
				r = fn;
				while ((1.0 * j) / i > (1.0 * r->numerator) / r->denominator)
				{
					r0 = r;
					r = r->next;
				}
				//插到r0后面
				//创建新node
				farleipointer newnode = (farleipointer)malloc(sizeof(struct farlei_item));
				newnode->numerator = j;
				newnode->denominator = i;
				//改变前驱后继
				newnode->next=r0->next;
				r0->next = newnode;
			}
		}
	}
	return fn;
}
void print(farleipointer fn){//输出fn引导的法雷序列
	farleipointer pcur = fn;
	while (pcur != NULL)
	{
		printf("%d/%d ", pcur->numerator, pcur->denominator);
		pcur = pcur->next;
	}
}
void release(farleipointer head)//释放单链表空间,head是单链表首结点指针
{
	farleipointer pcur = head;
	while (pcur != NULL)
	{
		farleipointer pnext = pcur->next;
		free(pcur);
		pcur = pnext;
	}
}
int main(void)
{
	int n;
	farleipointer fn;
	scanf("%d", &n);
	fn = farlei(n);//生成n级法雷序列
	if (fn != NULL)
		print(fn);
	else
		printf("NULL");
	release(fn);
	return 0;
}