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
	IdCard *idc = new IdCard(1, "Первая");
	IdCard *idc2 = new IdCard(2, "Вторая");

	/* creating Stundet class instances */
	//Student student03("Петр", "Петров", idc2);
	//Student student04("Семен", "Смирнов", idc);
	//Student student05("Саша", "Коен", idc2);
	//Student student06("Дмитрий", "Ионов", idc);
	Student* student03 = new Student("Петр", "Петров", idc2);
	Student* student04 = new Student("Семен", "Смирнов", idc);
	Student* student05 = new Student("Саша", "Коен", idc2);
	Student* student06 = new Student("Дмитрий", "Ионов", idc);

	/* Creating Group class instance */
	Group gr1957("1957");

	/* adding students to group */
	gr1957.addStudent(student03);
	gr1957.addStudent(student04);
	gr1957.addStudent(student05);
	gr1957.addStudent(student06);

	/* deleting stundets */
	//gr1957.delStudent(student04);
	gr1957.delStudent(gr1957.findStudent("Семен", "Смирнов"));

	/* initializing size of the group */
	int k = gr1957.getSize();

	/* sorting group array */
	//gr1957.GroupSort();

	/* output information about group */
	std::cout << "В группе " << gr1957.getName() << " " << k << " ст." << std::endl;
	gr1957.GroupOut();

	/* deleting allocated memory */
	delete idc;
	delete idc2;

	/* to keep console awake */
	getchar();
	getchar();
}