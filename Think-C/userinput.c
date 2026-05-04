#include <stdlib.h>
#include <stdio.h>

int main (void)
{
	printf("Enter a nunber between 0 - 9\n");
	int userInput = getchar();
	char number = (char) userInput;
	if (userInput >= 48 && userInput <= 57)
	{
		printf("Your number is %c",number);
	}
	else 
	{
		printf("That is not a valid number");
	}
	return EXIT_SUCCESS;
}
