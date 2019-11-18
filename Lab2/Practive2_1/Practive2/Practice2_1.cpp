/* FILE NAME: Practice2.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: Handling operators
*/
#include "headers.h"

int main(void)
{
	/* initializing variables */
	int x, y, year;
	char op;

	/* scaning input data */
	std::cout << "Input dot coordinates:\n";
	std::cin >> x >> y;
	std::cout << "Input year:\n";
	std::cin >> year;
	std::cout << "Chose car of your dream :\n" << "S: ecnom\n" << "V: luxury\n";
	std::cin >> op;

	/* executing functions */
	is_in(x, y);
	std::cout << "\n\n";
	detect(year);
	std::cout << "\n\n";
	switch_func(op);

	/* For console window to stay awake */
	getchar();
	getchar();
	return 0;
}