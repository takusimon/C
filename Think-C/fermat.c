#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void CheckFermat(int a, int b, int c, int n)
{
	if (pow(a,n) + pow(b,n) == pow(c,n))
		{
			printf("Holy smokes Fermat was wrong!");
		}
		

	else
		{
			printf("No, that doesn't work!");
		}
}

int main (void)
{
	CheckFermat(4,5,6,3);

	return EXIT_SUCCESS;
}
