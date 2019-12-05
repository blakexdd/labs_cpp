/* FILE NAME: Teacher.h
* PROGRAMMER: VG6
* DATE: 04.12.2019
* PURPOSE: header file for Practice12
*/
#pragma once
#include "Human.h"
#include <string>

class Teacher : public Human
{
public:

	/* Constructor for Student class
	* ARGUMENTS:
	*   - last name, name, second name and work time of teacher
	*      std::string last_name, std::string name,
	*      std::string second_name, unsigned int work_time
	* RETURNS:
	*   - None
	*/
	Teacher(std::string last_name, std::string name,
		std::string second_name, unsigned int work_time) :
		Human(last_name, name, second_name)
	{
		this->work_time = work_time;
	}

	/* Getting work time method
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - work time of teacher
	*      unsigned int
	*/
	unsigned int get_work_time()
	{
		return this->work_time;
	}

private:
	/* declarating private class variables */
	unsigned int work_time;
};