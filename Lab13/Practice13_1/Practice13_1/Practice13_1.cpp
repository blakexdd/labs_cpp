/* FILE NAME: Practice13_1.cpp
* PROGRAMMER: VG6
* DATE: 05.12.2019
* PURPOSE: To learn polimorphism
*/
#include <iostream>
#include <string>
#include <Windows.h>

class Item
{
private:
	/* declarating private class variables */
	std::string title;
	double price;
public:

	/* Getting data from keyboard
	*  and assigning it to class variables
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	virtual void getdata()
	{
		std::cout << "\nInput title: ";
		std::cin >> title;
		std::cout << "Input price: ";
		std::cin >> price;
	}

	/* Printing information of class
	*  object to console
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	virtual void putdata()
	{
		std::cout << "\nTitle: " << title;
		std::cout << "\nPrice: " << price;
	}
};

class Paperbook : public Item
{
private:
	/* declarating private class variables */
	int pages;
public:

	/* Getting data from keyboard
	*  and assigning it to class variables
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	void getdata()
	{
		Item::getdata();
		std::cout << "Input amount of pages: ";
		std::cin >> pages;
	}

	/* Printing information of class
	*  object to console
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	void putdata()
	{
		Item::putdata();
		std::cout << "\nPages: " << pages;
	}
};

class AudioBook : public Item
{
private:
	/* declarating private class variables */
	double time;
public:

	/* Getting data from keyboard
	*  and assigning it to class variables
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	void getdata()
	{
		Item::getdata();
		std::cout << "Input time of playing: ";
		std::cin >> time;
	}

	/* Printing information of class
	*  object to console
	* ARGUMENTS:
	*   - None
	* RETURNS:
	*   - None
	*/
	void putdata()
	{
		Item::putdata();
		std::cout << "\nTime of playing: " << time;
	}
};

int main(void)
{
	/* creatimg array of Item class instances */
	Item* pubarr[100];
	
	/* initializing array counter and selection variable */
	int n = 0;
	char choice;

	/* implement choosing cycle */
	do
	{
		std::cout << "\nInput date for book or for audio file (b/a)? ";
		std::cin >> choice;
		if (choice == 'b')
			pubarr[n] = new Paperbook;
		else
			pubarr[n] = new AudioBook;

		pubarr[n++]->getdata();
		std::cout << "Continue (y/n)?";
		std::cin >> choice;
	} while (choice == 'y');

	/* printing out elements of array */
	for (int j = 0; j < n; j++)
		pubarr[j]->putdata();
	std::cout << std::endl;

	/* to keep console awake */
	getchar();
	getchar();
	return 0;
}