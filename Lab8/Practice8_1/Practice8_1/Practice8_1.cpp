/* FILE NAME: Practice8_1.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To learn how to work with classes
*/
#include <iostream>
#include <string>

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
	void set_name(std::string student_name)
	{
		name = student_name;
	}

	/* Getting student's name function.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - student's name:
	*      std::string
	*/
	std::string get_name()
	{
		return name;
	}

	/* Setting student's last name function.
	* ARGUMENTS:
	*   - student's name:
	*      std::string student_last_name
	* RETURNS:
	*   - None
	*/
	void set_last_name(std::string student_last_name)
	{
		last_name = student_last_name;
	}

	/* Getting student's name function.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - student's name:
	*      std::string
	*/
	std::string get_last_name()
	{
		return last_name;
	}

	/* Setting intermediate scores.
	* ARGUMENTS:
	*   - students scores array
	*      int student_scores[]
	* RETURNS:
	*   - None
	*/
	void set_scores(int student_scores[])
	{
		for (int i = 0; i < 5; ++i)
			scores[i] = student_scores[i];
	}

	/* Setting average score.
	* ARGUMENTS:
	*   - students scores array
	*      int student_scores[]
	* RETURNS:
	*   - None
	*/
	void set_average_score(double ball)
	{
		average_score = ball;
	}

	/* Getting average score.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - student's average score
	*      double
	*/
	double get_average_score()
	{
		return average_score;
	}

private:
	int scores[5];
	double average_score;
	std::string name;
	std::string last_name;

};

int main(void)
{
	/* initializing student variables */
	Student student01;
	std::string name;
	std::string last_name;
	int scores[5];

	/* scaning student's name */
	std::cout << "Name: ";
	getline(std::cin, name);

	/* scanning student's last name */
	std::cout << "Last name: ";
	getline(std::cin, last_name);

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
	student01.set_name(name);
	student01.set_last_name(last_name);

	/* assigning intermediate scores to class Student */
	student01.set_scores(scores);

	/* initializing average score variable */
	double average_score = sum / 5.0;

	/* assigning average score to class Student */
	student01.set_average_score(average_score);

	/* printing information about student */
	std::cout << "Average ball for " << student01.get_name() << " "
		<< student01.get_last_name() << " is "
		<< student01.get_average_score() << std::endl;

	/* to keep console awake */
	getchar();
	getchar();

	return 0;
}