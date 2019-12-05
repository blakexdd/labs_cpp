/* FILE NAME: Practice12_1.cpp
* PROGRAMMER: VG6
* DATE: 04.12.2019
* PURPOSE: To learn class inheritance
*/
#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Teatcher.h"

int main(void)
{

	/* declarating students scores */
	std::vector<int> scores;
	unsigned int teacher_work_time = 40;

	/* adding scores to vector */
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	/* initiazing class Student and Teacher instances */
	Student *stud = new Student("Petrov", "Ivan", "Alekseevich", scores);
	Teacher *tch = new Teacher("Sergeev", "Dmitry", "Sergeevich", teacher_work_time);

	/* printing out full name of student and teacher */
	std::cout << stud->get_full_name() << std::endl;
	std::cout << tch->get_full_name() << std::endl;

	/* printing average score of student and work time for teacher */
	std::cout << "Average score: " << stud->get_average_score() << std::endl;
	std::cout << "Total hours: " << tch->get_work_time() << std::endl;

	/* to keep console awake */
	getchar();
	getchar();

	return 0;
}