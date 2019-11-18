/* FILE NAME: practice2_2.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: learn cycles 
*/
#include <iostream>
#include <math.h>

int main(void)
{
	double x, x1, x2, y;
	
	/* input values */
	std::cout << "x1 = "; 
	std::cin >> x1;
	std::cout << "x2 = "; 
	std::cin >> x2;
	std::cout << "\tx\tsin(x)\n";

	/* Printing table of values */
	x = x1;
	do
	{
		y = sin(x);
		std::cout << "\t" << x << "\t" << y << std::endl;
		x = x + 0.01;
	} while (x <= x2);

	/* To keep console awake */
	getchar();
	getchar();

	return 0;
}