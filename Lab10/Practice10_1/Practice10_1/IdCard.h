/* FILE NAME: IdCard.h
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: header file for practice 10
*/
#pragma once
#include <iostream>
#include <string>
#include <fstream>

/* Id card class to identify each student */
class IdCard
{
private:
	int number;
	std::string category;

public:
	/* Default constructor of IdCard calss.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None.
	*/
	IdCard();

	/* Constructor of IdCard calss.
	* ARGUMENTS:
	*   - number of student
	*      int
	* RETURNS:
	*   - None.
	*/
	IdCard(int);

	/* Constructor of IdCard calss.
	* ARGUMENTS:
	*   - number of student and student's category
	*      int, std::string
	* RETURNS:
	*   - None.
	*/
	IdCard(int, std::string);

	/* Setting number of student.
	* ARGUMENTS:
	*   - number of student
	*      int newNumber
	* RETURNS:
	*   - None.
	*/
	void setNumber(int newNumber);

	/* Getting number of student.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - number of student
	*      int.
	*/
	int getNumber();

	/* Setting category of student.
	* ARGUMENTS:
	*   - category of student
	*      std::string cat
	* RETURNS:
	*   - None.
	*/
	void setCategory(std::string cat);

	/* Getting category class.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - category of student
	*      std::string.
	*/
	std::string getCategory();
};
