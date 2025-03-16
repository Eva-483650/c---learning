#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#define MAX 100
#define NAME 15
#define SEX 10
#define TELE 12
#define ADDR 20

// �Զ�����Ժ꣬���ڼ��ָ���Ƿ�Ϊ��!!!���õ�!!
#define ASSERT_NOT_NULL(ptr) do {                                       \
    if ((ptr) == NULL) {                                                \
        fprintf(stderr, "ERROR: Pointer %s is NULL\n", #ptr);           \
        fprintf(stderr, "  Location: File %s, Function %s, Line %d\n",  \
                __FILE__, __func__, __LINE__);                          \
        fflush(stderr); /* ȷ��������Ϣ������� */                      \
        exit(EXIT_FAILURE); /* ��ʧ��״̬�˳����򣬱���abort��Ĭ�ϴ�����Ϣ */  \
    }                                                                   \
} while (0)


//�˵���Ϣ
typedef struct PeoInfo
{
	char name[NAME];
	int age;
	char sex[SEX];
	char tele[TELE];
	char addr[ADDR];
} PeoInfo;

//ͨѶ¼
typedef struct  Contact
{
	PeoInfo data[MAX];
	int count;
} Contact;

void InitContact(Contact* pc);
void newContact(Contact* pc);
void showContact(const Contact* pc);//��ʱ���ͨѶ¼���ܱ��޸� ��const����
void delContact(Contact* pc);
void searchContact(Contact* pc); 
void modifyContact(Contact* pc);
void sortContact(Contact* pc);


