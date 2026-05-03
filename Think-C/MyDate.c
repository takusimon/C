#include <stdio.h>
#include <stdlib.h>

void PrintDateAmerican(int day, int month, int year)
{
	char slash = '/';
	printf("American format:\n");
	printf("%i%c%i%c%i\n",month,slash,day,slash,year);
}

void PrintDateEuropean(int day, int month, int year)
{
	char dot = '.';
	printf("European format:\n");
	printf("%i%c%i%c%i\n",day,dot,month,dot,year);
}

int main (void) 
{
	PrintDateAmerican(3,5,2026);
	PrintDateEuropean(3,5,2026);	
	return (EXIT_SUCCESS);
}
