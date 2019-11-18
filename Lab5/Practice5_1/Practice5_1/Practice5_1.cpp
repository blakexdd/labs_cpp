/* FILE NAME: Practice5_1.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To work with arrays
*/
#include<iostream>
#include <algorithm>

int main( void )
{
	/* initializing variables ad arrays */
	//const int n = 10;
	//int mas[n];
	int n;
	int s = 0, sumn = 0, sump = 0;
	int sumue = 0, sume = 0, mul = 0;
	int max_i = 1, min_i = 1, max_e = 0, min_e = 0;

	/* scanning size of array */
	std::cout << "Input size of array:\n";
	std::cin >> n;

	/* allocating memory for array */
	int * myArray = new int[n];

	/* scaning array valuses */
	for (int i = 0; i < n; i++)
	{
		std::cout << "mas[" << i << "]=";
		std::cin >> myArray[i];
	}

	/* finding sum of all mas variables*/
	for (int i = 0; i < n; i++)
		s += myArray[i];

	/* printing sum and average */
	std::cout << "sum = " << s << std::endl;
	std::cout << "average = " << s / n << std::endl;

	/* finding sum of negative vatiables */
	for (int i = 0; i < n; i++)
		if (myArray[i] < 0)
			sumn += myArray[i];

	/* printing sum of negative variables */
	std::cout << "sum neg = " << sumn << std::endl;

	/* finding sum of positive vatiables */
	for (int i = 0; i < n; i++)
		if (myArray[i] > 0)
			sump += myArray[i];

	/* printing sum of npositive variables */
	std::cout << "sum pos = " << sump << std::endl;

	/* printing sum of uneven elements */
	for (int i = 1; i < n; i += 2)
		sumue += myArray[i];
	std::cout << "sum of uneven elements: " << sumue << std::endl;

	/* printing sum of even elements */
	for (int i = 0; i < n; i += 2)
		sume += myArray[i];
	std::cout << "sum of even elements: " << sume << std::endl;

	/* finding max and min element index */
	max_e = myArray[0];
	min_e = myArray[0];
	for (int i = 1; i < n; i++)
	{
		if (max_e < myArray[i])
			max_e = myArray[i], max_i = i;
		if (min_e > myArray[i])
			min_e = myArray[i], min_i = i;
	}

	/* printing max and min elems and their indixes */
	std::cout << "max_e: " << max_e << " " << "max_i: " << max_i << std::endl;
	std::cout << "min_e: " << min_e << " " << "min_i: " << min_i << std::endl;

	/* finding mul of elems between num and max elem */
	for (int i = std::min(min_i, max_i)  + 1; i < std::max(min_i, max_i) - 1; i++)
		mul *= myArray[i];

	/* printing mul of variables */
	std::cout << "mul: " << mul << std::endl;

	/* freed the block of allocated memory */
	delete[] myArray;

	/* to keep console awake */
	getchar();
	getchar();
	return 0;
}