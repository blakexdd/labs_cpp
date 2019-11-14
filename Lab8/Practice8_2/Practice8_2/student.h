/* FILE NAME: student.h
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: Header file for Practice8_2.cpp
*/
#include <iostream>
#include <string>
#include <fstream>


class Student
{
public:
	/* Setting student's name function.
	* ARGUMENTS:
	*   - student's name:
	*      std::string student_name
	* RETURNS:
	*   - None
	*/
	void set_name(std::string student_name);

	/* Getting student's name function.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - student's name:
	*      std::string
	*/
	std::string get_name();

	/* Setting student's last name function.
	* ARGUMENTS:
	*   - student's name:
	*      std::string student_last_name
	* RETURNS:
	*   - None
	*/
	void set_last_name(std::string student_last_name);

	/* Getting student's name function.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - student's name:
	*      std::string
	*/
	std::string get_last_name();

	/* Setting intermediate scores.
	* ARGUMENTS:
	*   - students scores array
	*      int student_scores[]
	* RETURNS:
	*   - None
	*/
	void set_scores(int student_scores[]);

	/* Setting average score.
	* ARGUMENTS:
	*   - students scores array
	*      int student_scores[]
	* RETURNS:
	*   - None
	*/
	void set_average_score(double ball);

	/* Getting average score.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - student's average score
	*      double
	*/
	double get_average_score();

	/* Constructor method for class Student
	* ARGUMENTS:
	*   - student's name and last name:
	*      std::string name, std::string last_name
	* RETURNS:
	*   - None
	*/
	Student(std::string name, std::string last_name);

	/* Destructior method for class Student
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	~Student();

	/* Saving object to file function.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	void save();

private:
	int scores[5];
	double average_score;
	std::string name;
	std::string last_name;

};

