/* FILE NAME: dot.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To implement functions from dot.h
*/
#include "dot.h"
#include <math.h>

/* Default dot constructor.
* ARGUMENTS:
*   - None
* RETURNS:
*   - None
*/
Dot::Dot()
{
	x = 0;
	y = 0;
}

/* Dot constructor.
* ARGUMENTS:
*   - coordinates of the dot:
*      double x, double y
* RETURNS:
*   - None
*/
Dot::Dot(double x, double y)
{
	this->x = x;
	this->y = y;
}

/* Evaluating distance function.
* ARGUMENTS:
*   - dot as dot object:
*      Dot point
* RETURNS:
*   - distance
*      double
*/
double Dot::distanceTo(Dot point)
{
	return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
}

/* Implementing minus operator for dot class.
* ARGUMENTS:
*   - dot as dot object:
*      Dot point
* RETURNS:
*   - Dot as a result of sum
*      Dot
*/
Dot Dot::operator-(Dot p2)
{
	return Dot(this->x - p2.x, this->y - p2.y);
}

/* Finding side of triangle.
* ARGUMENTS:
*   - two dot objects:
*      Dot p1, Dot p2
* RETURNS:
*   - length of the side
*      float
*/
double Dot::sidelenght(Dot p1, Dot p2)
{
	Dot sub = p1 - p2;
	return sqrt(pow(sub.x, 2) + pow(sub.y, 2));
}