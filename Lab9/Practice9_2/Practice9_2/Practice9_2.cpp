/* FILE NAME: Practice9_2.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: to learn exceptions
*/
#include <iostream>
#include <math.h>
#include <string>

/* tringle class */
class Triangle
{
public:
	/* Constructor for Triangle class.
	* ARGUMENTS:
	*   - 3 sides of triangle:
	*      int a, int b, int c
	* RETURNS:
	*   - None
	*/
	Triangle(int a, int b, int c)
	{
		if (a > b + c || b > a + c || c > a + b)
			throw Ex("In Triabgle initialization", a, b, c);
		/* assigning values to triangle sides */
		s1 = a;
		s2 = b;
		s3 = c;
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
		double p = s1 + s2 + s3 / 3.0;
		double S = sqrt(p * (p - s1) * (p - s2) * (p - s3));

		/* returning square value */
		return S;
	}

	/* exception class for incorrect sides values */
	class Ex
	{
	public:
		/* name of exceptional function */
		std::string origin;
		/* incorrect values */
		int s1, s2, s3;

		/* Constructor for Ex class.
		* ARGUMENTS:
		*   - 3 sides of triangle and name of ex function:
		*      int a, int b, int c
		* RETURNS:
		*   - None
		*/
		Ex(std::string or_, int a, int b, int c)
		{
			origin = or_;
			s1 = a;
			s2 = b;
			s3 = c;
		}
	};

private:
	/* three sides of a triangle */
	int s1;
	int s2;
	int s3;
};

int main(void)
{
	/* trying to create triangle and evaluate square of it */
	try
	{
		/* Initializing trianhle */
		Triangle first(4, 5, 10);

		/* evaluating and printing square */
		std::cout << "Square of triabgle is: " << first.Square();
	}
	catch (Triangle::Ex ex)
	{
		/* printing exeptional function and it's values */
		std::cout << "\nValue error " << ex.origin;
		std::cout << "\nInorrect values " << ex.s1 <<
			", " << ex.s2 << ", " << ex.s3;
	}

	/* to keep console awake */
	getchar();
	getchar();

	return 0;
}
