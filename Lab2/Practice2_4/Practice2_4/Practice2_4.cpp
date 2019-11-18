/* FILE NAME: Practice2_4.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To compare types of cycles
*/

#include <iostream>

int main(void)
{
	/* declarating variables */
	double x, x1, x2, y;
	
	/* input values */
	std::cout << "x1 = ";
	std::cin >> x1;
	std::cout << "x2 = ";
	std::cin >> x2;

	std::cout << "\tx\tsin(x)\n";

	x = x1;

	/* printing table of values */
	while (x <= x2)
	{
		y = sin(x);
		std::cout << "\t" << x << "\t" << y << std::endl;
		x += 0.01;
	}

	/* To keep console awake */
	getchar();
	getchar();
	return 0;
}