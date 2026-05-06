#include <stdio.h>
#include <stdlib.h>

int SumRange (int m, int n)
{
	// Returns the sum of all integers from m to n (inclusive)
	if (m == n)
	{
		printf("returning %i\n",n);
		return n;
	}
	else
	{
		printf("Returning %i, + Calling funcone(%i and %i)\n",m,m+1,n);
		return m + SumRange(m + 1, n);
	}
}

int ProductRanage (int m, int n)
{
	// Returns the product of all integers from m to n (inclusive)
	if (m == n)
	{
		printf("Returning %i\n",n);
		return n;
	}
	else
	{
		printf("Returning %i * Functwo(%i and %i)\n",n,m,n-1);
		return n * ProductRanage (m, n-1);

	}
}

int main (void)
{
	int testOne = SumRange(7,9);
	int testTwo = ProductRanage(7,9);
	printf("%i\n",testOne);
	printf("%i\n",testTwo);
	return EXIT_SUCCESS;
}
