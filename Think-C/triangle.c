#include <stdio.h>
#include <stdlib.h>

int isTriangle(int a, int b, int c)
{
	if (a > b + c)
	{
		return 0;
	}
	else if (b > a + c)
	{
		return 0;
	}
	else if (c > a + b)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}

void BoolOut(int result)
{
	if (result == 1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
	

int main (void)
{
	int tri_check = isTriangle(6,4,5);
	printf("Does 6, 4, & 5 length stick make a triangle?\n");
	BoolOut(tri_check);	
	return EXIT_SUCCESS;
}


