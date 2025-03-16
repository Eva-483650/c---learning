#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void InitContact(Contact* pc)
{
	ASSERT_NOT_NULL(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));//设置一整块内存
}

void newContact(Contact* pc)
{
	ASSERT_NOT_NULL(pc);
	//判断通讯录是否已满
	if (pc->count == MAX)
	{
		printf("通讯录已满，无法添加！\n");
		return;
	}
	printf("请输入姓名:>");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入联系方式:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("已成功新建通讯录\n");
}

void showContact(const Contact* pc)
{
	ASSERT_NOT_NULL(pc);
	printf("%-15s\t%-5s\t%-10s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
	for(int i = 0; i < (pc->count); i++)
	{
		printf("%-15s\t%-5d\t%-10s\t%-12s\t%-20s\n", pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int searchByName(Contact* pc, char name[NAME])
{
	ASSERT_NOT_NULL(pc);
	int i = 0;
	for (i = 0; i < (pc->count); i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}


void delContact(Contact* pc) 
{
	ASSERT_NOT_NULL(pc);
	char name[NAME] = { 0 };
	if (pc->count == 0)
	{
		printf("通讯录为空，没有信息可供删除\n");
		return;
	}
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//删除
	//1.查找
	int pos = searchByName(pc, name);
	if (pos == -1)
	{
		printf("找不到该联系人\n");
		return;
	}

	//2.删除
	int i = 0;
	for (i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("删除成功\n");
}


void searchContact(Contact* pc)
{	
	ASSERT_NOT_NULL(pc);
	char name[NAME] = { 0 };
	if (pc->count == 0)
	{
		printf("通讯录为空，没有信息可供查找\n");
		return;
	}
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	//1.查找
	int pos = searchByName(pc, name);
	if (pos == -1)
	{
		printf("找不到该联系人\n");
		return;
	}
	printf("%-15s\t%-5s\t%-10s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%-15s\t%-5d\t%-10s\t%-12s\t%-20s\n", pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

void modifyContact(Contact* pc)
{
	ASSERT_NOT_NULL(pc);
	char name[NAME] = { 0 };
	if (pc->count == 0)
	{
		printf("通讯录为空，没有信息可以修改\n");
		return;
	}
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	//1.查找
	int pos = searchByName(pc, name);
	if (pos == -1)
	{
		printf("找不到该联系人\n");
		return;
	}
	printf("请输入姓名:>");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入联系方式:>");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pos].addr);
	printf("已成功修改信息\n");
}


int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
//按照名字来排序
void sortContact(Contact* pc)
{
	ASSERT_NOT_NULL(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
	printf("排序成功\n");
}
