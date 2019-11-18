/* FILE NAME: Practice3_2.cpp
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: find square of figure 
*/
#include "Header.h"


int main(void)
{
	/* Initializing variables */
	FLT x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, len_t;
	VEC2 a, b, c, d, e, f;
	VEC s1, s2, s3;
	FLT sum = 0, Sidel = 0;

	/* Scan points of figure */
	std::cout << "Input first point coordinates: ";
	std::cout << "x1 y1 = ";
	std::cin >> x1 >> y1;
	std::cout << "Input second point coordinates: ";
	std::cout << "x2 y2 = ";
	std::cin >> x2 >> y2;
	std::cout << "Input third point coordinates: ";
	std::cout << "x3 y3 = ";
	std::cin >> x3 >> y3;
	std::cout << "Input forth point coordinates: ";
	std::cout << "x4 y4 = ";
	std::cin >> x4 >> y4;
	std::cout << "Input fith point coordinates: ";
	std::cout << "x5 y5 = ";
	std::cin >> x5 >> y5;
	std::cout << "Input len of triangle size: ";
	std::cin >> len_t;

	/* Make vectors */
	a = MakeVec2(x1, y1, x2, y2);
	b = MakeVec2(x1, y1, x5, y5);
	c = MakeVec2(x5, y5, x2, y2);
	d = MakeVec2(x5, y5, x4, y4);
	e = MakeVec2(x3, y3, x2, y2);
	f = MakeVec2(x3, y3, x4, y4);

	/* Finding suares of triaògles */
	s1 = VecCrossVec(a, b);
	s2 = VecCrossVec(c, d);
	s3 = VecCrossVec(e, f);

	/* Finding square of figure */
	sum = Square(s1) + Square(s2) + Square(s3);


	/* Outout square of figure */
	std::cout << "Square = " << sum;
	std::cout << "Triangle square = " << Square(len_t);

	/* To keep console awake */
	getchar();
	getchar();
	return 0;
}

