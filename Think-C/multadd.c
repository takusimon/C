#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double MultAdd(double a, double b, double c)
{
	return (a * b) + c;

}

double Yikes (double num)
{
	double exponent = exp (-num);
	double squareRoot = sqrt(1 - exponent);

	return MultAdd(num,exponent,squareRoot);
}

int main (void) 
{
	const double PI = acos(-1.0);
	
	printf("%f\n",MultAdd(1.0,2.0,3.0));
	printf("%f\n",MultAdd(0.5,cos(PI/4),sin(PI/4)));
	printf("%f\n",Yikes(5.0));

	return(EXIT_SUCCESS);
}
