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

	int base, exp;

	printf("Enter the base value:\n");
	scanf("%i", &base);
	printf("Enter the exponent:\n");
	scanf("%i", &exp);

	printf("Answer =  %i",Power(base,exp));
	return EXIT_SUCCESS;
}
