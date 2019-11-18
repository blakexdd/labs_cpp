/* FILE NAME: Practice4_1.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: To learn how to use pointers
*/
#include <iostream>

/* trying to change variables.
* ARGUMENTS:
*   - coeff and point coordinates :
*       double k, double x, double y;
* RETURNS:
*   -None.
*/
void fum_value(double k, double x, double y);

/* changing variables using pointers.
* ARGUMENTS:
*   - coeff and pointers to point coordinates:
*       double k, double *x, double *y;
* RETURNS:
*   -None.
*/
void fum_ptr(double k, double *x, double *y);

/* changing variables using refs.
* ARGUMENTS:
*   - coeff and refs to point coordinates:
*       double k, double &x, double &y;
* RETURNS:
*   -None.
*/
void fum_ref(double k, double &x, double &y);

/* printing point coordinates.
* ARGUMENTS:
*   - ref to point coordinates:
*       double &x, double &y;
* RETURNS:
*   -None.
*/
void print(double &x, double &y);

/* finding equasion roots.
* ARGUMENTS:
*   - equasion coeffs and values:
*       double a, double b, double c, double &x1, double &x2;
* RETURNS:
*   -1 if there are two roots, 0 if there is one root, -1 if there if no roots.
*/
int Myroot(double a, double b, double c, double &x1, double &x2);

int main(void)
{
	/* Initializing variables */
	double k = 2.5, xv = 10, yv = 10;
	double a, b, c, x1, x2;

	/* Scan equasion variables */
	std::cout << "Input equasion coeffs: a b c = ";
	std::cin >> a >> b >> c;
	std::cout << "Input values: x1 x2\n";
	std::cin >> x1 >> x2;

	/* Printing point coordinates */
	print(xv, yv);
	
	/* Trying to change point coords and output it */
	fum_value(k, xv, yv);
	print(xv, yv);
	
	/* Trying to change point coords and output it */
	fum_ptr(k, &xv, &yv);
	print(xv, yv);
	
	/* Trying to change point coords and output it */
	fum_ref(k, xv, yv);
	print(xv, yv);

	/* Output result */
	std::cout << "\n" << Myroot(a, b, c, x1, x2);

	/* To keep console awake */
	getchar();
	getchar();
	return 0;
}

/* trying to change variables.
* ARGUMENTS:
*   - coeff and point coordinates :
*       double k, double x, double y;
* RETURNS:
*   -None.
*/
void fum_value(double k, double x, double y)
{
	x += k;
	y += k;
}

/* changing variables using pointers.
* ARGUMENTS:
*   - coeff and pointers to point coordinates:
*       double k, double *x, double *y;
* RETURNS:
*   -None.
*/
void fum_ptr(double k, double *x, double *y)
{
	*x += k;
	*y += k;
}

/* changing variables using refs.
* ARGUMENTS:
*   - coeff and refs to point coordinates:
*       double k, double &x, double &y;
* RETURNS:
*   -None.
*/
void fum_ref(double k, double &x, double &y)
{
	x += k;
	y += k;
}

/* printing point coordinates.
* ARGUMENTS:
*   - ref to point coordinates:
*       double &x, double &y;
* RETURNS:
*   -None.
*/
void print(double &x, double &y)
{
	std::cout << "x = " << x << " " << "y = " << y << std::endl;
}

/* finding equasion roots.
* ARGUMENTS:
*   - equasion coeffs and values:
*       double a, double b, double c, double &x1, double &x2;
* RETURNS:
*   -1 if there are two roots, 0 if there is one root, -1 if there if no roots.
*/
int Myroot(double a, double b, double c, double &x1, double &x2)
{
	if (a == 0 && b == 0)
		return -1;
	else if (a == 0)
		return 0;
	else if (b * b - 4 * a * c == 0)
		return 0;
	else if (b * b - 4 * a * c > 0)
		return 1;
	else if (b * b - 4 * a * c < 0)
		return -1;
}