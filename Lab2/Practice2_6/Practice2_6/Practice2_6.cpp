/* FILE NAME: Practice2_6.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To find sum on interval
*/
#include <iostream>

int main(void)
{
	/* initialize start variables */
	int s = 0, m, k;

	/* input values */
	std::cout << "k = ";
	std::cin >> k;
	std::cout << "m = ";
	std::cin >> m;

	/* calculate sum */
	for (int i = 1; i <= 100; i++)
	{
		if ((i > k) && (i < m))
			continue;
		s += i;
	}

	/* Output sum of interal */
	std::cout << "Sum = " << s;

	/* To keep console awake */
	getchar();
	getchar();
	return 0;
}