#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double SumSquares (double sq1,double sq2);

double distance  (double x1,double y1,double x2, double y2)
{
	double dx = (x2 - x1);
	double dy = (y2 - y1);
	double dxdy_squared = SumSquares (dx,dy);

	return sqrt(dxdy_squared);
}
