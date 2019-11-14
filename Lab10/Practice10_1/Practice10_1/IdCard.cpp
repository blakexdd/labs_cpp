/* FILE NAME: IdCard.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: implementing functions of class IdCard
*/
#include "IdCard.h"

/* Default constructor of IdCard calss.
* ARGUMENTS:
*   - None
* RETURNS:
*   - None.
*/
IdCard::IdCard()
{
	number = 0;
	category = "Not settend";
}

/* Constructor of IdCard calss.
* ARGUMENTS:
*   - number of student
*      int n
* RETURNS:
*   - None.
*/
IdCard::IdCard(int n)
{
	number = n;
	category = "Not setted";
}

/* Constructor of IdCard calss.
* ARGUMENTS:
*   - number of student and student's category
*      int n, std::string cat
* RETURNS:
*   - None.
*/
IdCard::IdCard(int n, std::string cat)
{
	number = n;
	category = cat;
}

/* Setting number of student.
* ARGUMENTS:
*   - number of student
*      int newNumber
* RETURNS:
*   - None.
*/
void IdCard::setNumber(int newNumber)
{
	number = newNumber;
}

/* Getting number of student.
* ARGUMENTS:
*   - None
* RETURNS:
*   - number of student
*      int.
*/
int IdCard::getNumber()
{
	return number;
}

/* Setting category of student.
* ARGUMENTS:
*   - category of student
*      std::string cat
* RETURNS:
*   - None.
*/
void IdCard::setCategory(std::string cat)
{
	category = cat;
}

/* Getting category class.
* ARGUMENTS:
*   - None
* RETURNS:
*   - category of student
*      std::string.
*/
std::string IdCard::getCategory()
{
	return category;
}