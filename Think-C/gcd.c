#include <stdlib.h>
#include <stdio.h>

int GCD(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return GCD(b,a%b);
	}
}

int main (void)
{
	int num = GCD(36,20);
	printf("%i",num);

	return EXIT_SUCCESS;
}
