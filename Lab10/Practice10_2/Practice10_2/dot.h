/* FILE NAME: dot.h
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: Header file for practice 10
*/
#include <math.h>

/* initializing dot class */
class Dot
{
private:
	/* coordinates of dot */
	double x;
	double y;
public:
	Dot();

	/* Dot constructor.
	* ARGUMENTS:
	*   - coordinates of the dot:
	*      double x, double y
	* RETURNS:
	*   - None
	*/
	Dot(double x, double y);

	/* Evaluating distance function.
	* ARGUMENTS:
	*   - dot as dot object:
	*      Dot point
	* RETURNS:
	*   - distance
	*      double
	*/
	double distanceTo(Dot point);

	/* Implementing minus operator for dot class.
	* ARGUMENTS:
	*   - dot as dot object:
	*      Dot point
	* RETURNS:
	*   - Dot as a result of sum
	*      Dot
	*/
	Dot operator-(Dot p2);

	/* Finding side of triangle.
	* ARGUMENTS:
	*   - two dot objects:
	*      Dot p1, Dot p2
	* RETURNS:
	*   - length of the side 
	*      float
	*/
	double sidelenght(Dot p1, Dot p2);
};