/* FILE NAME: Practice14_2.cpp
* PROGRAMMER: VG6
* DATE: 05.12.2019
* PURPOSE: To learn template classes
*/
#include<iostream>

template<class T, class T1> 
class Array
{
public:
	/* Constructor of array class
	* ARGUMENTS:
	*   - size of array
	*      int size
	* RETURNS:
	*   - None
	*/
	Array(int size);

	/* Summing array variables method
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - sum of array elements
	*      T1
	*/
	T1 sum();
	
	/* Finding average value of arary method
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - average value of array
	*      T
	*/
	T average_value();

	/* Printing array method
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	void show_array();

	/* Adding value to array method
	* ARGUMENTS:
	*   - value user wants to add
	*      T
	* RETURNS:
	*   - if adding was succesfull,
	*     it returns 1, else 0
	*       int
	*/
	int add_value(T);

private:
	/* declarating private class variables */
	T * data;
	int size;
	int index;
};

/* Constructor of array class
* ARGUMENTS:
*   - size of array
*      int size
* RETURNS:
*   - None
*/
template<class T, class T1>
Array<T, T1>::Array(int size)
{
	/* allocating memory for new array */
	data = new T[size];

	/* checking if memory allocated */
	if (data == NULL)
	{
		std::cerr << "Error memory ---- exit program" << std::endl;
		exit(1);
	}

	/* assigning class variables */
	Array::size = size;
    Array::index = 0;
}

/* Summing array variables method
* ARGUMENTS:
*   - None
* RETURNS:
*   - sum of array elements
*      T1
*/
template<class T, class T1>
T1 Array<T, T1>::sum()
{
	/* initializing sum variable */
	T1 sum = 0;

	/* going through the loop and calculating sum */
	for (int i = 0; i < index; i++)
		sum += data[i];

	/* returning sum */
	return sum;
}

/* Finding average value of arary method
* ARGUMENTS:
*   - None
* RETURNS:
*   - average value of array
*      T
*/
template<class T, class T1>
T Array<T, T1>::average_value()
{
	/* initializing sum variable */
	T1 sum = 0;

	/* going through the loop and calculating sum */
	for (int i = 0; i < index; i++)
		sum += data[i];

	/* returning average */
	return sum / index;
}

/* Printing array method
* ARGUMENTS:
*   - None
* RETURNS:
*   - None
*/
template<class T, class T1>
void Array<T, T1>::show_array()
{
	/* going through the loop and printing array */
	for (int i = 0; i < index; i++)
		std::cout << data[i] << " ";
	std::cout << std::endl;
}

/* Adding value to array method
* ARGUMENTS:
*   - value user wants to add
*      T value 
* RETURNS:
*   - if adding was succesfull,
*     it returns 1, else 0
*       int
*/
template<class T, class T1>
int Array<T, T1>::add_value(T value)
{
	/* if we filled all array returning -1*/
	if (index == size)
		return (-1);
	else
	{
		data[index] = value;
		index++;
		return 0;
	}

}

int main(void)
{
	/* initializing class instances */
	Array<int, long> numbers(100);
	Array<float, float> values(200);

	/* adding values to array */
	for (int i = 0; i < 50; i++)
		numbers.add_value(i);

	/* printing out array*/
	numbers.show_array();

	/* printing out information about array */
	std::cout << "Sum = " << numbers.sum() << std::endl;
	std::cout << "Average = " << numbers.average_value() << std::endl;

	/* adding values to array */
	for (int i = 0; i < 100; i++)
		values.add_value(i * 100);

	/* printing out array*/
	values.show_array();

	/* printing information about array */
	std::cout << "Sum = " << values.sum() << std::endl;
	std::cout << "Average = " << values.average_value() << std::endl;

	/* to keep console awake */
	getchar();
	getchar();

	return 0;
}