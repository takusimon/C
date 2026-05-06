#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp)
{
	int result = 1;
	int i = 1;
	while (i <= exp)
	{
		result = result * base;
		i = i + 1;
	}
	return result;
}

int main (void)
{

	printf("%i",Power(2,2));
	return EXIT_SUCCESS;
}
