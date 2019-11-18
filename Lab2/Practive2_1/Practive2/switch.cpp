/* FILE NAME: switch.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To test switch function
*/
#include "headers.h"

/* switch operator testing.
* ARGUMENTS:
*   - your choise:
*       char op;
* RETURNS:
*   -None.
*/
void switch_func(char op)
{
	/* using switch operator to choose sutable condition */
	switch (op)
	{
	case 'S':
		std::cout << "radio on\n";
		std::cout << "round wheels\n";
		std::cout << "good engine\n";
		break;
	case 'V':
		std::cout << "air conditioner\n";
		std::cout << "radio on\n";
		std::cout << "round wheels\n";
		std::cout << "good engine\n";
		break;
	default:
		std::cout << "round wheels\n";
		std::cout << "good engine\n";
	}
}

