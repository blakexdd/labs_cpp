/* FILE NAME: Practice7_1.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To learn how to work with structures 
*/
#include <iostream>

/* Distance in feets and inches struct */
struct Distance
{
	/* feets and inches variables */
	int feet;
	double inches;

	/* Function for printing distance.
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	void ShowDist()
	{
		/* printing distance variable */
		std::cout << feet << "\'-" << inches << "\"\n";
	}

};

/* Function for printing distance.
* ARGUMENTS:
*   - distance variable:
*      const Distance &d
* RETURNS:
*   - None
*/
void ShowDist(const Distance &d);

/* Addition of two distance variables.
* ARGUMENTS:
*   - two distance variables:
*      const Distance &d1, const Distance &d2;
* RETURNS:
*   - resulted distance varialbe.
*      Distance d;
*/
Distance AddDist(const Distance &d1, const Distance &d2);

/* Init funcion for distance variable.
* ARGUMENTS:
*   - None
* RETURNS:
*   - resulted distance varialbe.
*      Distance d;
*/
Distance InputDist();

int main(void)
{
	/* initializing distance variables */
	Distance d1 = InputDist();
	Distance d2 = { 1, 6.25 };

	/* initiallizing d3 variable as sum of d1 and d2 variables*/
	Distance d3 = AddDist(d1, d2);

	/* printing out variables */
	//ShowDist(d1);
	//ShowDist(d2);
	//ShowDist(d3);
	d1.ShowDist();
	d2.ShowDist();
	d3.ShowDist();

	/* initializing and reading from keyboard size of array */
	int n;
	std::cout << "Enter size of distance array: ";
	std::cin >> n;

	/* declarating dynamic array of distance variables */
	Distance * masDist = new Distance[n];

	/* reading values of Distances variables */
	for (int i = 0; i < n; i++)
	{
		masDist[i] = InputDist();
	}

	/* printing out array */
	for (int i = 0; i < n; i++)
	{
		ShowDist(masDist[i]);
	}

	/* initializing sum variables */
	Distance sum;

	/* sum of elements in array */
	for (int i = 0; i < n; i++)
	{
		sum = AddDist(sum, masDist[i]);
	}

	/* printing out sum of elements */
	ShowDist(sum);

	delete[] masDist;
	/* to keep console awake */
	getchar();
	getchar();

	return 0;
}

/* Addition of two distance variables.
* ARGUMENTS:
*   - two distance variables:
*      const Distance &d1, const Distance &d2;
* RETURNS:
*   - resulted distance varialbe.
*      Distance d;
*/
Distance AddDist(const Distance &d1, const Distance &d2)
{
	/* initializing distance variable*/
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;

	/* checking for overflow in inches */
	if (d.inches >= 12.0)
	{
		d.inches -= 12.0;
		d.feet++;
	}

	/* returning distance variable */
	return d;
}

/* Init funcion for distance variable.
* ARGUMENTS:
*   - None
* RETURNS:
*   - resulted distance varialbe.
*      Distance d;
*/
Distance InputDist()
{
	/* initializing distance variable */
	Distance d;

	/* assigning values to fildes of distance variable*/
	std::cout << "\nInput number of feets: ";
	std::cin >> d.feet;
	std::cout << "\nInput number of inches: ";
	std::cin >> d.inches;

	/* returning d variable */
	return d;
}

/* Function for printing distance.
* ARGUMENTS:
*   - distance variable:
*      const Distance &d
* RETURNS:
*   - None
*/
void ShowDist(const Distance &d)
{
	/* printing distance variable */
	std::cout << d.feet << "\'-" << d.inches << "\"\n";
}