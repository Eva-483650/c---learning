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
	//����������
	void run();

	int menu();

	//1.��ʾȫ��
	void display();
	//2.���
	void add();
	//3.ɾ��
	void del();
	//4.�޸�
	void modify();
	//5.����
	void search();

};

