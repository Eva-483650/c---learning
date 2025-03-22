#pragma once
class Management
{
	enum Operator
	{
		DISPLAY,
		ADD,
		DEL,
		MODIFY,
		SEARCH,
	};
public:
	//启动管理类
	void run();

	int menu();

	//1.显示全部
	void display();
	//2.添加
	void add();
	//3.删除
	void del();
	//4.修改
	void modify();
	//5.查找
	void search();

};

