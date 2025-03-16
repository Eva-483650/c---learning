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

// 自定义断言宏，用于检查指针是否为空!!!好用的!!
#define ASSERT_NOT_NULL(ptr) do {                                       \
    if ((ptr) == NULL) {                                                \
        fprintf(stderr, "ERROR: Pointer %s is NULL\n", #ptr);           \
        fprintf(stderr, "  Location: File %s, Function %s, Line %d\n",  \
                __FILE__, __func__, __LINE__);                          \
        fflush(stderr); /* 确保错误信息立即输出 */                      \
        exit(EXIT_FAILURE); /* 以失败状态退出程序，避免abort的默认错误信息 */  \
    }                                                                   \
} while (0)


//人的信息
typedef struct PeoInfo
{
	char name[NAME];
	int age;
	char sex[SEX];
	char tele[TELE];
	char addr[ADDR];
} PeoInfo;

//通讯录
typedef struct  Contact
{
	PeoInfo data[MAX];
	int count;
} Contact;

void InitContact(Contact* pc);
void newContact(Contact* pc);
void showContact(const Contact* pc);//此时这个通讯录不能被修改 用const保护
void delContact(Contact* pc);
void searchContact(Contact* pc); 
void modifyContact(Contact* pc);
void sortContact(Contact* pc);


