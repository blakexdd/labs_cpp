/* FILE NAME: year_detection.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To detect type of year
*/
#include "headers.h"

/* Detects year.
* ARGUMENTS:
*   - year number:
*       int year;
* RETURNS:
*   -None.
*/
void detect(int year)
{
	/* condition to detect type of the year */
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		std::cout << "YES";
	else
		std::cout << "NO";
}