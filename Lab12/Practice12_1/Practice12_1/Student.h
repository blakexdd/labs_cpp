/* FILE NAME: Student.h
* PROGRAMMER: VG6
* DATE: 04.12.2019
* PURPOSE: header file for Practice12
*/
#pragma once
#include "Human.h"
#include <string>
#include <vector>

class Student : public Human
{
public:

	/* Constructor for Student class
	* ARGUMENTS:
	*   - last name, name, second name and scores of student
	*      std::string last_name, std::string name,
	*      std::string second_name, std::vector<int> scores
	* RETURNS:
	*   - None
	*/
	Student(std::string last_name, std::string name, std::string
		second_name, std::vector<int> scores) : Human(last_name,
			name, second_name)
	{
		this->scores = scores;
	}

	/* Getting average score function
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - average score as a float value
	*      float
	*/
	float get_average_score()
	{
		/* counting amount of scores */
		unsigned int count_scores = this->scores.size();

		/* initializing sum of all scores */
		unsigned int sum_scores = 0;

		/* declarating average score */
		float average_score;

		/* counting sum scores */
		for (unsigned int i = 0; i < count_scores; i++)
		{
			sum_scores += this->scores[i];
		}

		/* calculating average score */
		average_score = (float)sum_scores / count_scores;

		/* returning average score*/
		return average_score;
	}

private:
	/* declarating private class variables */
	std::vector<int> scores;
};