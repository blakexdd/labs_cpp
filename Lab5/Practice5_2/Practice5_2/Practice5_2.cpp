/* FILE NAME: Practice5_2.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To learn function pointers
*/
#include <iostream>
#include <fstream>

/* Show array.
* ARGUMENTS:
*   - array, num of elements:
*       const int Arr[], const int N;
* RETURNS:
*   None.
*/
void show_array(const int Arr[], const int N);

/* Print array to file.
* ARGUMENTS:
*   - array, num of elements:
*       const int Arr[], const int N;
* RETURNS:
*   None.
*/
void array_to_file(const int Arr[], const int N);

/* Find direction.
* ARGUMENTS:
*   - two values:
*       const int a, const int b;
* RETURNS:
*   (BOOL)-1 if a > b and 0 else:
*       a > b;
*/
bool from_min(const int a, const int b);

/* Find direction.
* ARGUMENTS:
*   - two values:
*       const int a, const int b;
* RETURNS:
*   (BOOL)-1 if a > b and 0 else:
*       a < b;
*/
bool from_max(const int a, const int b);

/* Swap elements of array.
* ARGUMENTS:
*   - two elements of array:
*       int &a, int &b;
* RETURNS:
*   None.
*/
void swap(int &a, int &b);

/* Sort massive.
* ARGUMENTS:
*   - array, size of array, sort order func:
*       int Arr[], const int N, bool(*compare)(int a, int b);
* RETURNS:
*   None.
*/
void bubble_sort(int Arr[], const int N, bool(*compare)(int a, int b));

int main(void)
{
	/* initializing variables */
	//const int N = 10;
	int n;
	int my_choose = 0;
	//int A[N] = {9, 8, 7, 6, 1, 2, 3, 5, 4, 9};
	bool (*from_f[2])(int, int) = { from_min, from_max };

	/* scaning for size of an array */
	std::cout << "Input size of an array\n";
	std::cin >> n;

	/* allocate memory for the array */
	int *myArray = new int[n];

	/* fill an array with random values */
	for (int i = 0; i < n; i++)
		myArray[i] = int(rand()) % 10;

	/* printing array to file */
	array_to_file(myArray, n);

	/* scaning for choosing value */
	std::cout << "1. Sort by ascending\n";
	std::cout << "2. Sort by descending\n";
	std::cin >> my_choose;

	/* Printing array to the screen */
	show_array(myArray, n);

	/* choosing way of sorting */
	//switch (my_choose)
	//{
	//case 1: 
	//	bubble_sort(A, N, from_min);
	//	break;
	//case 2:
	//	bubble_sort(A, N, from_max);
	//	break;
	//default:
	//	std::cout << "\r Unknown operation";
	//}

	/* sorting an array */
	bubble_sort(myArray, n, from_f[my_choose - 1]);

	/* Printing array to the screen */
	show_array(myArray, n);

	/* printing sorted array to file */
	array_to_file(myArray, n);

	/* freed the block of allocated memory */
	delete[] myArray;

	/* to keep console awake */
	getchar();
	getchar();
	return 0;
}

/* Show array.
* ARGUMENTS:
*   - array, num of elements:
*       const int Arr[], const int N;
* RETURNS:
*   None.
*/
void show_array(const int Arr[], const int N)
{
	/* Printing array to screen */
	for (int i = 0; i < N; i++)
		std::cout << Arr[i] << " ";
	std::cout << "\n";
}

/* Print array to file.
* ARGUMENTS:
*   - array, num of elements:
*       const int Arr[], const int N;
* RETURNS:
*   None.
*/
void array_to_file(const int Arr[], const int N)
{
	/* open file for appending */
	std::ofstream file("out.txt", std::ios::app);

	/* Printing array to screen */
	for (int i = 0; i < N; i++)
		file << Arr[i] << " ";
	file << "\n";

	/* closing file */
	file.close();
}

/* Find direction.
* ARGUMENTS:
*   - two values:
*       const int a, const int b;
* RETURNS:
*   (BOOL)-1 if a > b and 0 else:
*       a > b;
*/
bool from_min(const int a, const int b)
{
	return a > b;
}

/* Find direction.
* ARGUMENTS:
*   - two values:
*       const int a, const int b;
* RETURNS:
*   (BOOL)-1 if a > b and 0 else:
*       a < b;
*/
bool from_max(const int a, const int b)
{
	return a < b;
}

/* Swap elements of array.
* ARGUMENTS:
*   - two elements of array:
*       int &a, int &b;
* RETURNS:
*   None.
*/
void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

/* Sort massive.
* ARGUMENTS:
*   - array, size of array, sort order func:
*       int Arr[], const int N, bool(*compare)(int a, int b);
* RETURNS:
*   None.
*/
void bubble_sort(int Arr[], const int N, bool(*compare)(int a, int b))
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
			if ((*compare)(Arr[j], Arr[j + 1]))
				swap(Arr[j], Arr[j + 1]);
	}
}