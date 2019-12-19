/* FILE NAME: Practice14_1.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To learn how to use template functions
*/
#include <iostream>

/* Template sorting array function
* ARGUMENTS:
*   - array and size of array
*      T arr[], T size
* RETURNS:
*   - None
*/
template<class T>
void sorting(T arr[], int size)
{
	int j = 0; // initializing counter variable

	/* going throught array and sotring it */
	for (int i = 0; i < size; i++)
	{
		T x = arr[i];

		for (j = i - 1; j >= 0 && x < arr[j]; j--)
			arr[j + 1] = arr[j];

		arr[j + 1] = x;
	}
}

/* Printing array function
* ARGUMENTS:
*   - array and size of array
*      T arr[], T size
* RETURNS:
*   - None
*/
template<class T>
void printarr(T arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << "; ";
}


/* Template finding average function
* ARGUMENTS:
*   - array and size of array
*      T arr[], T size
* RETURNS:
*   - average
*      T
*/
template<class T>
T average(T arr[], int size)
{
	T sum = 0;

	for (int i = 0; i < size; i++)
		sum += arr[i];

	return sum / size;
}

int main()
{
	/* initializing arrays and size of arrays */
	int arr[] = { 9, 3, 17, 6, 5, 4, 31, 2, 12 };
	double arrd[] = { 2.1, 2.3, 1.7, 6.6, 5.3, 2.44, 3.1, 2.4, 1.2 };
	char arrc[] = "Hello, world";
	int k1 = sizeof(arr) / sizeof(arr[0]);
	int k2 = sizeof(arrd) / sizeof(arrd[0]);
	int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
	

	/* sorting array */
	sorting(arr, k1);

	/* printing out array */
	for (int i = 0; i < k1; i++)
		std::cout << arr[i] << "; ";

	/* printing empty line */
	std::cout << std::endl;

	/* printing out average score */
	std::cout << "Average score for int array: " << average(arr, k1)
		<< std::endl;

	/* sorting array */
	sorting(arrd, k2);

	/* printing out array */
	for (int i = 0; i < k1; i++)
		std::cout << arrd[i] << "; ";

	/* printing empty line */
	std::cout << std::endl;

	/* printing out average score */
	std::cout << "Average score for double array: " << average(arrd, k2)
		<< std::endl;

	/* sorting array */
	sorting(arrc, k3);

	/* printing out array */
	for (int i = 0; i < k1; i++)
		std::cout << arrc[i] << "; ";

	/* printing empty line */
	std::cout << std::endl;

	/* printing out average score */
	std::cout << "Average score for char array: " << average(arrc, k3)
		<< std::endl;

	/* to keep console awake */
	getchar();
	getchar();

	return 0;
}