/* FILE NAME: practice2_3.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: learn cycles
*/
#include <iostream>
#include <math.h>

int main(void)
{
	/* initializing variables */
	int a, b, temp;
	
	/* scaning start variables */
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;

	/* finding NOD of two numbers */
	temp = a;
	while (temp != b)
	{
		a = temp;
		if (a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		temp = a - b;
		a = b;
	}

	/* print NOD of two variables */
	std::cout << "NOD = " << b << std::endl;

	/* To keep cosole awake */
	getchar();
	getchar();
	return 0;
}