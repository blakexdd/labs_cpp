/* FILE NAME: Header.h
* PROGRAMMER: VG6
* DATE: 28.09.2019
* PURPOSE: header for Practice3_2.cpp 
*/
#include <iostream>
#include <math.h>

/* Ititialize float as FLT*/
typedef float FLT;

/* Ititialize int as INT*/
typedef int INT;

/* make 3d vector type */
typedef struct tagVEC
{
	FLT X, Y, Z;
} VEC;

/* make 2d vector type */
typedef struct tagVEC2
{
	FLT X, Y; /* Vector components */
} VEC2;

/* setting 2d vectors.
* ARGUMENTS:
*   - vector coordinates:
*       FLT X, FLT Y;
* RETURNS:
*   -vector
*       VEC2.
*/
VEC2 VecSet2(FLT X, FLT Y)
{
	VEC2 v = { X, Y };
	return v;
}

/* setting 3d vectors.
* ARGUMENTS:
*   - vector coordinates:
*       FLT X, FLT Y, FLT Z;
* RETURNS:
*   -vector
*       VEC.
*/
VEC VecSet3(FLT X, FLT Y, FLT Z)
{
	VEC v = { X, Y, Z };
	return v;
}

/* making vector from two points.
* ARGUMENTS:
*   - points:
*       FLT X1, FLT Y1, FLT X2, FLT Y2;
* RETURNS:
*   -vector
*       VEC2.
*/
VEC2 MakeVec2(FLT X1, FLT Y1, FLT X2, FLT Y2)
{
	VEC2 v = { X2 - X1, Y2 - Y1 };
	return v;
}

/* cross operation.
* ARGUMENTS:
*   - two vectors:
*       VEC2 V1, VEC2 V2;
* RETURNS:
*   -vector
*       VEC.
*/
VEC VecCrossVec(VEC2 V1, VEC2 V2)
{
	return VecSet3(0, 0, V1.X * V2.Y + V1.Y * V2.X);
}

/* finding square of figure.
* ARGUMENTS:
*   - vector:
*       VEC V;
* RETURNS:
*   -square
*       FLT.
*/
FLT Square(VEC V)
{
	return V.Z;
}

/* finding square of triangle.
* ARGUMENTS:
*   - lenght of one side:
*       FLT a;
* RETURNS:
*   -square
*       FLT.
*/
FLT Square(FLT a)
{
	return a * a * sqrt(3) / 4;
}

/* finding side length.
* ARGUMENTS:
*   - two triangle coordinates:
*       FLT X1, FLT Y1, FLT X2, FLT Y2;
* RETURNS:
*   -square
*       FLT.
*/
FLT SideLength(FLT X1, FLT Y1, FLT X2, FLT Y2)
{
	VEC2 a = MakeVec2(X1, Y1, X2, Y2);

	return sqrt(a.X * a.X + a.Y * a.Y);
}