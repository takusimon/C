#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int base = 2;
	int exp = 9;
	int result = 1;

	int i = 1;
	while (i <= exp)
	{
		result = result * base;
		i = i + 1;
	}

	printf("%i",result);

	return EXIT_SUCCESS;
}
