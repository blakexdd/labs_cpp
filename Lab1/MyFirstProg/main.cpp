/* FILE NAME: main.cpp
 * PROGRAMMER: VG6
 * DATE: 28.09.2019
 * PURPOSE: c++ observation
 */
#include <iostream>
#include <math.h>

/* Triangle square finding function.
 * ARGUMENTS:
 *   - Perimiter of triangle:
 *       double P;
 * RETURNS:
 *   (double) square of a triangle.
 */
double TriangleSquare(double P)
{
    /* initializing sides of triangle and square */
    double a = P / 3, b= P / 3, c = P / 3, p = P / 2;
    double S = sqrt(p*(p-a)*(p-b)*(p-c));

    /* returning square */
    return S;
}

int main()
{
    /* initialize variables for division */
    double x;
    double a, b;

    /* initialize and read perimeter of a triangle */
    double p;
    std::cout << "Enter perimeter of a triangle:\n";
    std::cin >> p;

    /* scan input values */
    std::cout << "\nInput a and b:\n";
    std::cin >> a;
    std::cin >> b;

    /* dividing variables */
    x = a / b;

    /* print x variable */
    std::cout << "\nx = " << x << std::endl;

    /* print triabgle square using TriangleSquare function declareted above */
    std::cout << "Square of triangle is:\n" << TriangleSquare(p) << std::endl;
    return 0;
}
