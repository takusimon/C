#include <stdio.h>
#include <stdlib.h>

int Power (int base, int exp)
{
	if (exp == 0)
	{
		return 1;
	}
	else
	{
		return base * Power(base,exp-1);
	}
}

int main (void)
{
	int twoSquared = Power(2,2);
	printf("Two squared is %i\n",twoSquared);

	return EXIT_SUCCESS;
}
