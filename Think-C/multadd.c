#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void MultAdd(double a, double b, double c)
{
	double result = (a * b) + c;

	printf("%g\n",result);
}

void Yikes (double num)
{
	double exponent = exp (-num);
	double squareRoot = sqrt(1 - exponent);

	MultAdd(num,exponent,squareRoot);
}

int main (void) 
{
	const double PI = acos(-1.0);
	
	MultAdd(1.0,2.0,3.0);
	MultAdd(0.5,cos(PI/4),sin(PI/4));
	Yikes(5.0);

	return(EXIT_SUCCESS);
}
