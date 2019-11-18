/* FILE NAME: Practice3_1.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To orgonize project using functions
*/
#include <iostream>
#include <string>
#include <Windows.h>

/* Say hello to user.
* ARGUMENTS:
*   - name of user:
*       std::string name;
* RETURNS:
*   -None.
*/
void privet(std::string name);

/* Say hello to user overloaded function.
* ARGUMENTS:
*   - name of user and number:
*       std::string name, int k;
* RETURNS:
*   -None.
*/
void privet(std::string name, int k);

int main(void)
{
	/* Setting console parametes to write in Russian */
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	/* Initializing string variable and scan it */
	int k;
	std::string name;
	std::cout << "Enter your name" << std::endl;
	std::cin >> name;
	std::cout << "Enter your favourite number" << std::endl;
	std::cin >> k;

	/* Executing functions */
	privet(name);
	privet(name, k);

	/* To keep console awake */
	getchar();
	getchar();
	return 0;
}

/* Say hello to user.
* ARGUMENTS:
*   - name of user:
*       std::string name;
* RETURNS:
*   -None.
*/
void privet(std::string name)
{
	/* Output string variable */
	std::cout << name << ", " << "hello!" << std::endl;
}

/* Say hello to user overloaded function.
* ARGUMENTS:
*   - name of user and number:
*       std::string name, int k;
* RETURNS:
*   -None.
*/
void privet(std::string name, int k)
{
	/* Output string variable and int variable */
	std::cout << name << ", " << "hello again\n" << "Your input is " << k << std::endl;
}
