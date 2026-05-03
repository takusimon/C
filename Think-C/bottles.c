#include <stdio.h>
#include <stdlib.h>
void NoBottles();
void Bottles(int count) 
{
	if (count > 0)
	{
	if (count == 1)
	{
	printf("%i bottle of beer on the wall, ",count);
	printf("ya' take one down, ya' pass it around, ");
	NoBottles();
	}
	else 
	{
	printf("%i bottles of beer on the wall, ",count);
	printf("ya' take one down, ya' pass it around, ");
	printf("%i bottles of beer on the wall.\n",count - 1);
	Bottles(count - 1);
	}
	}
}
void NoBottles()
{
	printf("No bottles of beer on the wall,\n");
	printf("No bottles of beer, ya can't take one down, ");
	printf("ya' can't pass it around, ");
	printf("'cause there are no more bottles of beer on the wall!\n");
}

int main (void)
{
	Bottles(99);
	return EXIT_SUCCESS;

}
