#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
	int day,month,year;
	char slash,dot;

	day = 2;
	month = 5;
	year = 2026;
	slash = '/';
	dot = '.';

	printf("American format:\n");
	printf("%i%c%i%c%i\n",month,slash,day,slash,year);
	printf("European format:\n");
	printf("%i%c%i%c%i\n",day,dot,month,dot,year);
	return (EXIT_SUCCESS);
}
