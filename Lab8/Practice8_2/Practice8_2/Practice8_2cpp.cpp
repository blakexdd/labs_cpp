/* FILE NAME: Practice8_2.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To learn how to work with classes
*/
#include "student.h"

int main(void)
{
	/* initializing student variables */
	//Student student01;
	//Student *student02 = new Student;
	std::string name;
	std::string last_name;
	int scores[5];

	/* scaning student's name */
	std::cout << "Name: ";
	getline(std::cin, name);

	/* scanning student's last name */
	std::cout << "Last name: ";
	getline(std::cin, last_name);

	/* Creating student using default constructor */
	Student *student02 = new Student(name, last_name);

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

	/* assigning name and last name to class Student */
	//student01.set_name(name);
	//student01.set_last_name(last_name);
	//student02->set_name(name);
	//student02->set_last_name(last_name);

	/* assigning intermediate scores to class Student */
	//student01.set_scores(scores);
	student02->set_scores(scores);

	/* initializing average score variable */
	double average_score = sum / 5.0;

	/* assigning average score to class Student */
	//student01.set_average_score(average_score);
	student02->set_average_score(average_score);

	/* printing information about student */
	//std::cout << "Average ball for " << student01.get_name() << " "
	//	<< student01.get_last_name() << " is "
	//	<< student01.get_average_score() << std::endl;
	std::cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << std::endl;
		
	/* deleting crated object */
	delete student02;

	/* to keep console awake */
	getchar();
	getchar();

	return 0;
}