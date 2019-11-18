/* FILE NAME: dot_in.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To find out in dot is in sector
*/
#include "headers.h"

/* Finds dot position. 
* ARGUMENTS:
*   - dot coordinates:
*       int x, int y;
* RETURNS:
*   -None.
*/
void is_in(int x, int y)
{
	/* cheking if dot is in */
	if (x * x + y * y < 9 && y > 0)
		std::cout << "Dot is in sector";
	else if (x * x + y * y > 9 || y < 0)
		std::cout << "Dot is out of sectoor";
	else
		std::cout << "Dot is on border";
}

