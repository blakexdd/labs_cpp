/* FILE NAME: Practice11_1.cpp
* PROGRAMMER: VG6
* DATE: 04.12.2019
* PURPOSE: To learn how to overload operations
*/
#include <iostream>

class Distance
{
private:
	/* declarating private variables */
	int feet;
	float inches;
	const float MTF;
public:

	/* Default distance countructor
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	Distance() : feet(0), inches(0.0), MTF(3.280833F)
	{

	}

	/* Distance countructor
	* ARGUMENTS:
	*   - feets and inches of object
	* RETURNS:
	*   - None
	*/
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F)
	{

	}
	
	/* Distance countructor
	* ARGUMENTS:
	*   - distance in meters
	*      float meters
	* RETURNS:
	*   - None
	*/
	Distance(float meters) : MTF(3.280833F)
	{
		/* Converting meters to feets and inches */
		float fltfeet = MTF * meters;
		feet = int(fltfeet);
		inches = 12 * (fltfeet - feet);
	}

	/* Getting distance method
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	void getdist()
	{
		std::cout << "\nInput feet amount: ";
		std::cin >> feet;
		std::cout << "\nInput inches amount: ";
		std::cin >> inches;
	}

	/* Printing distance method
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	void showdist()
	{
		std::cout << feet << "\'-" << inches << "\"\n";
	}

	/* Overloaded plus operator for distance class
	* ARGUMENTS:
	*   - distance object to pluss
	*      Distance
	* RETURNS:
	*   - resulted distance object
	*      Distance
	*/
	Distance operator+ (Distance) const;

	/* Overloaded minus operator for distance class
	* ARGUMENTS:
	*   - distance object to minus
	*      Distance
	* RETURNS:
	*   - resulted distance object
	*      Distance
	*/
	Distance operator-(Distance) const;

	/* Overloaded float operator for distance class
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - floating point number of distance
	*/
	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}

};

/* Overloaded plus operator for distance class
* ARGUMENTS:
*   - distance object to pluss
*      Distance d2
* RETURNS:
*   - resulted distance object
*      Distance
*/
Distance Distance::operator+(Distance d2) const
{
	/* initializing resulted feets and inches values */
	int f = feet + d2.feet;
	float i = inches + d2.inches;

	/* Checking if we are getting overflow in inches
	* and if we have, add 1 to feets variable */
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}

	/* returning resulted distance */
	return Distance(f, i);
}

/* Overloaded minus operator for distance class
* ARGUMENTS:
*   - distance object to minus
*      Distance
* RETURNS:
*   - resulted distance object
*      Distance
*/
Distance Distance::operator-(Distance d1) const
{
	/* initializing resulted feets and inches values */
	int f = feet - d1.feet;
	float i = inches - d1.inches;

	/* checking if we get less then 0 inches value and
	 * if so subtract one from feets variable */
	if (i < 0)
	{
		i += 12;
		f--;
	}

	/* returning resulted distance */
	return Distance(f, i);
}

int main(void)
{
	/* initializing distance instances */
	//Distance dist1, dist2, dist3, dist4, dist5, dist6;
	//int counter = 1;
    Distance dist1 = 2.35F;
	float mtrs;
	//
	///* assigning value using static cast operator */
	mtrs = static_cast<float>(dist1);
	std::cout << "Meters: " << mtrs;
	
	mtrs = dist1;
	std::cout << "New meters: " << mtrs;

	//Distance dist1, dist2, dist3, dist4, dist5, dist6;

	/* assigning values using method getdist */
	//dist1.getdist();
	//dist2.getdist();


	/* adding and subtracting distances using overloaded operator */
	//dist3 = dist1 + dist2;
	//dist4 = dist1 + dist2 + dist3;
	//dist5 = dist4 - dist1;
	//dist6 = dist3 - dist1 + dist2;
	//
	//Distance d[6] = { dist1, dist2, dist3, dist4, dist5, dist6 };
	//
	///* printing out values */
	//for (auto i : d)
	//{
	//	std::cout << "\ndist" << counter << " = ";
	//	i.showdist();
	//	counter++;
	//}

	/* to keep console awake */
	getchar();
	getchar();

	return 0;
}