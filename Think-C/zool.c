#include <stdio.h>
#include <stdlib.h>

void Zool (int num, char a, char b)
{
	printf("The following values were passesd: %i %c %c",num, a, b);

}

int main (void) 
{
	Zool (11,'a','z');

	return(EXIT_SUCCESS);
}

