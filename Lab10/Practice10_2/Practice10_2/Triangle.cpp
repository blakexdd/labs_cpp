/* FILE NAME: Triangle.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: to make tringle in another way
*/
#include "dot.h"
#include <iostream>
#include <string>

/* tringle class */
class Triangle : public Dot
{
public:
	/* Constructor for Triangle class.
	* ARGUMENTS:
	*   - 3 vertices of triangle:
	*      Dot a, Dot b, Dot c
	* RETURNS:
	*   - None
	*/
	Triangle(Dot a, Dot b, Dot c)
	{
		/* assigning values to triangle sides */
		d1 = a;
		d2 = b;
		d3 = c;
	}

	/* Ouputing lengths of first side.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	void Firstside_output()
	{
		std::cout << Dot::sidelenght(d1, d2) << std::endl;
	}

	/* Ouputing lengths of second side.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	void Secondside_output()
	{
		std::cout << Dot::sidelenght(d2, d3) << std::endl;
	}

	/* Ouputing lengths of thrird side.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	void Thirdside_output()
	{
		std::cout << Dot::sidelenght(d1, d3) << std::endl;
	}

	/* Finding perimeter of triangle function.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - square of triangle
	*/
	double Perimeter()
	{
		/* returning perimeter value */
		return Dot::sidelenght(d1, d2) + Dot::sidelenght(d1, d3) + Dot::sidelenght(d2, d3);
	}

	/* Finding square of triangle function.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - square of triangle
	*/
	double Square()
	{
		/* initializing sides of triangle and square */
		double s1 = Dot::sidelenght(d1, d2), s2 = Dot::sidelenght(d1, d3), s3 = Dot::sidelenght(d2, d3);
		double p = (s1 + s2 + s3) / 2.0;
		double S = sqrt(p * (p - s1) * (p - s2) * (p - s3));

		/* returning square value */
		return S;
	}
private:
	/* three dots of trianle verticies */
	Dot d1;
	Dot d2;
	Dot d3;
};

int main(void)
{
	/* initializing 3 dots */
	Dot d1(0, 0), d2(2, 3), d3(4, 0);

	/* initializing triangle with 3 dots */
	Triangle tr(d1, d2, d3);

	/* Output 3 sides of the triangle */
	std::cout << "First side of triangle: ";
	tr.Firstside_output();
	std::cout << "Second side of triangle: ";
	tr.Secondside_output();
	std::cout << "Third side of triangle: ";
	tr.Thirdside_output();

	/* evaluating and printing square and perimeter of triangle */
	std::cout << "Perimeter of triangle is: " << tr.Perimeter() << std::endl;
	std::cout << "Square of triangle is: " << tr.Square();

	/* to keep console awake */
	getchar();
	getchar();

	return 0;
}
