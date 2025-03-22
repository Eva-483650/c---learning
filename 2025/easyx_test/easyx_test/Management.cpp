#define _CRT_SECURE_NO_WARNINGS
#include "Management.h"
#include<stdio.h>
#include <iostream>
using namespace std;
void Management::run()
{
	int op = -1;
	while (1)
	{
		op = menu();
		switch (op)
		{
		case Management::DISPLAY:
			display();
			break;
		case Management::ADD:
			add();
			break;
		case Management::DEL:
			del();
			break;
		case Management::MODIFY:
			modify();
			break;
		case Management::SEARCH:
			search();
			break;
		default:
			break;
		}
	}
}

int Management::menu()
{
	printf("menu\n");
	int op = 0;
	scanf("%d\n", op);
    return op;
}

void Management::display()
{
	printf("display\n");
}

void Management::add()
{
	printf("add\n");
}

void Management::del()
{
	printf("del\n");
}

void Management::modify()
{
	printf("modify\n");
}

void Management::search()
{
	printf("search\n");
}
