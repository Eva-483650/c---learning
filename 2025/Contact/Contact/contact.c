#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void InitContact(Contact* pc)
{
	ASSERT_NOT_NULL(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));//����һ�����ڴ�
}

void newContact(Contact* pc)
{
	ASSERT_NOT_NULL(pc);
	//�ж�ͨѶ¼�Ƿ�����
	if (pc->count == MAX)
	{
		printf("ͨѶ¼�������޷���ӣ�\n");
		return;
	}
	printf("����������:>");
	scanf("%s", pc->data[pc->count].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("��������ϵ��ʽ:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("�ѳɹ��½�ͨѶ¼\n");
}

void showContact(const Contact* pc)
{
	ASSERT_NOT_NULL(pc);
	printf("%-15s\t%-5s\t%-10s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("ͨѶ¼Ϊ�գ�û����Ϣ�ɹ�ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//ɾ��
	//1.����
	int pos = searchByName(pc, name);
	if (pos == -1)
	{
		printf("�Ҳ�������ϵ��\n");
		return;
	}

	//2.ɾ��
	int i = 0;
	for (i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�\n");
}


void searchContact(Contact* pc)
{	
	ASSERT_NOT_NULL(pc);
	char name[NAME] = { 0 };
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ�û����Ϣ�ɹ�����\n");
		return;
	}
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	//1.����
	int pos = searchByName(pc, name);
	if (pos == -1)
	{
		printf("�Ҳ�������ϵ��\n");
		return;
	}
	printf("%-15s\t%-5s\t%-10s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("ͨѶ¼Ϊ�գ�û����Ϣ�����޸�\n");
		return;
	}
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	//1.����
	int pos = searchByName(pc, name);
	if (pos == -1)
	{
		printf("�Ҳ�������ϵ��\n");
		return;
	}
	printf("����������:>");
	scanf("%s", pc->data[pos].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pos].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("��������ϵ��ʽ:>");
	scanf("%s", pc->data[pos].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pos].addr);
	printf("�ѳɹ��޸���Ϣ\n");
}


int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
//��������������
void sortContact(Contact* pc)
{
	ASSERT_NOT_NULL(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
	printf("����ɹ�\n");
}
