/* FILE NAME: Human.h
* PROGRAMMER: VG6
* DATE: 04.12.2019
* PURPOSE: header file for Practice12
*/
#pragma once
#include <string>
#include <sstream>

class Human
{
public:

	/* Constructor for Human class
	* ARGUMENTS:
	*   - last name, name and second name of person 
	*      std::string last_name, std::string name, std::string second_name
	* RETURNS:
	*   - None
	*/
	Human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}

	/* Getting full name method 
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - concatenetad full name as a string
	*      std::string
	*/
	std::string get_full_name()
	{
		/* creating ostringstream variable */
		std::ostringstream full_name;
		
		/* concatinating fields in one variable */
		full_name << this->last_name << " "
			<< this->second_name << " "
			<< this->second_name;

		/* returning string with full name */
		return full_name.str();
	}

private:
	/* declarating private class variables */
	std::string name;
	std::string last_name;
	std::string second_name;
};