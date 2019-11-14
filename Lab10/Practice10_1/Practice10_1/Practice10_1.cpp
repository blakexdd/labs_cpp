/* FILE NAME: Practice10_1.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: to check if evetything is working together
*/
#include "student.h"

int main(void)
{
	/* initializing idcard with 2 values */
	//IdCard idc(123, "Base");

	/* initializing student variables */
	std::string name;
	std::string cat;
	std::string last_name;
	int scores[5];
	int id;


	/* scaning student's name */
	std::cout << "Name: ";
	getline(std::cin, name);

	/* scanning student's last name */
	std::cout << "Last name: ";
	getline(std::cin, last_name);

	/* scanning for student's id */
	std::cout << "Id: ";
	std::cin >> id;

	/* scanning for students category */
	std::cout << "Category: ";
	std::cin.ignore();
	getline(std::cin, cat);

	/* initializing icard object */
	IdCard idc(id, cat);
	IdCard newidc;

	/* setting id to newidc */
	newidc.setNumber(id);
	newidc.setCategory(cat);

	/* initializing Student */
	Student *student02 = new Student(name, last_name, idc);

	/* initializing sum of scores */
	int sum = 0;

	/* scanning student's scores */
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "Score: " << i + 1 << ": ";
		std::cin >> scores[i];

		/* summation */
		sum += scores[i];
	}


	try
	{
		/* setting scores for student */
		student02->set_scores(scores);

		/* initializing average score variable */
		double average_score = sum / 5.0;

		/* assigning average score to class Student */
		student02->set_average_score(average_score);

		/* printing information about student */
		std::cout << "Average ball for " << student02->get_name() << " "
			<< student02->get_last_name() << " is "
			<< student02->get_average_score() << std::endl;
		std::cout << "IdCard: " << student02->getIdCard().getNumber() << std::endl;
		std::cout << "Category: " << student02->getIdCard().getCategory() << std::endl;
	}
	catch (Student::ExScore ex)
	{
		std::cout << "\nInitialiation error " << ex.origin;
		std::cout << "\nEntered value " << ex.iValue <<
			" Is unavalable";
	}


	/* deleting crated object */
	delete student02;

	/* to keep console awake */
	getchar();
	getchar();

	return 0;


	return 0;
}