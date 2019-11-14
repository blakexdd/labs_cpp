/* FILE NAME: student.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: funcions of class Student file for Practice8_2.cpp
*/
#include "student.h"

/* Setting student's name function.
* ARGUMENTS:
*   - student's name:
*      std::string student_name
* RETURNS:
*   - None
*/
void Student::set_name(std::string student_name)
{
	Student::name = student_name;
}

/* Getting student's name function.
* ARGUMENTS:
*   - None
* RETURNS:
*   - student's name:
*      std::string
*/
std::string Student::get_name()
{
	return Student::name;
}

/* Setting student's last name function.
* ARGUMENTS:
*   - student's name:
*      std::string student_last_name
* RETURNS:
*   - None
*/
void Student::set_last_name(std::string student_last_name)
{
	Student::last_name = student_last_name;
}

/* Getting student's name function.
* ARGUMENTS:
*   - None
* RETURNS:
*   - student's name:
*      std::string
*/
std::string Student::get_last_name()
{
	return Student::last_name;
}

/* Setting intermediate scores.
* ARGUMENTS:
*   - students scores array
*      int student_scores[]
* RETURNS:
*   - None
*/
void Student::set_scores(int student_scores[])
{
	for (int i = 0; i < 5; ++i)
	{
		if (student_scores[i] > 5)
			throw Student::ExScore("In function set_scores()", student_scores[i]);
		Student::scores[i] = student_scores[i];
	}
}

/* Setting average score.
* ARGUMENTS:
*   - students scores array
*      int student_scores[]
* RETURNS:
*   - None
*/
void Student::set_average_score(double ball)
{
	Student::average_score = ball;
}

/* Getting average score.
* ARGUMENTS:
*   - None
* RETURNS:
*   - student's average score
*      double
*/
double Student::get_average_score()
{
	return Student::average_score;
}

/* Constructor method for class Student
* ARGUMENTS:
*   - student's name and last name:
*      std::string name, std::string last_name
* RETURNS:
*   - None
*/
Student::Student(std::string name, std::string last_name)
{
	Student::set_name(name);
	Student::set_last_name(last_name);
}

/* Destructior method for class Student
* ARGUMENTS:
*   - None
* RETURNS:
*   - None
*/
Student::~Student()
{
	/* saving student's info to file */
	Student::save();
}

/* Constructor for ExScore class.
* ARGUMENTS:
*   - string with name of exceptional reason and value
*      std::string or , int sc
* RETURNS:
*   - None
*/
Student::ExScore::ExScore(std::string or_, int sc)
{
	/* string with name of exceptional reason */
	Student::ExScore::origin = or_;
	/* value of exeption */
	Student::ExScore::iValue = sc;
}


/* Saving object to file function.
* ARGUMENTS:
*   - None
* RETURNS:
*   - None
*/
void Student::save()
{
	/* opening file for appending information */
	std::ofstream fout("students.txt", std::ios::app);

	/* printing name and last name to file*/
	fout << Student::get_name() << " "
		<< Student::get_last_name() << " ";

	/* printing scores of sudents to file */
	for (int i = 0; i < 5; i++)
		fout << Student::scores[i] << " ";

	/* printing empty line and closing file */
	fout << std::endl;
	fout.close();

}