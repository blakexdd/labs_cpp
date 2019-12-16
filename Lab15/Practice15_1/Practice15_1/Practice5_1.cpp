/* FILE NAME: Practice15_1.cpp
* PROGRAMMER: VG6
* DATE: 05.12.2019
* PURPOSE: To learn stl
*/
#include<iostream>
#include "student.h"
#include "Group.h"
#include "IdCard.h"
#include <Windows.h>

int main(void)
{
	/* setting Russian language */
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/* Creating Idc Class instances */
	IdCard *idc = new IdCard(1, "������");
	IdCard *idc2 = new IdCard(2, "������");

	/* creating Stundet class instances */
	//Student student03("����", "������", idc2);
	//Student student04("�����", "�������", idc);
	//Student student05("����", "����", idc2);
	//Student student06("�������", "�����", idc);
	Student* student03 = new Student("����", "������", idc2);
	Student* student04 = new Student("�����", "�������", idc);
	Student* student05 = new Student("����", "����", idc2);
	Student* student06 = new Student("�������", "�����", idc);

	/* Creating Group class instance */
	Group gr1957("1957");

	/* adding students to group */
	gr1957.addStudent(student03);
	gr1957.addStudent(student04);
	gr1957.addStudent(student05);
	gr1957.addStudent(student06);

	/* deleting stundets */
	//gr1957.delStudent(student04);
	gr1957.delStudent(gr1957.findStudent("�����", "�������"));

	/* initializing size of the group */
	int k = gr1957.getSize();

	/* sorting group array */
	//gr1957.GroupSort();

	/* output information about group */
	std::cout << "� ������ " << gr1957.getName() << " " << k << " ��." << std::endl;
	gr1957.GroupOut();

	/* deleting allocated memory */
	delete idc;
	delete idc2;

	/* to keep console awake */
	getchar();
	getchar();
}