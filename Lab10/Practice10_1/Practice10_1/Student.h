/* FILE NAME: student.h
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: Header file for practice 10 
*/

#include "IdCard.h"

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
	*   - student's name, last name and if:
	*      std::string name, std::string last_name, IdCard *id
	* RETURNS:
	*   - None
	*/
	Student(std::string name, std::string last_name, IdCard id);

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

	/* Setting student's id function.
	* ARGUMENTS:
	*   - student's id:
	*      IdCard *c
	* RETURNS:
	*   - None
	*/
	void setIdCard(IdCard c);

	/* Getting student's id function.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - student's id:
	*      IdCard
	*/
	IdCard getIdCard();

	/* exceptions class */
	class ExScore
	{
	public:
		/* name of the function */
		std::string origin;
		/* value of exeption */
		int iValue;

		/* Constructor for ExScore class.
		* ARGUMENTS:
		*   - string with name of exceptional reason and value
		*      std::string or , int sc
		* RETURNS:
		*   - None
		*/
		ExScore(std::string or_, int sc);
	};

private:
	int scores[5];
	double average_score;
	std::string name;
	std::string last_name;
	IdCard iCard;
};
