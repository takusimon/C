#include <stdio.h>
#include <stdlib.h>

void Loop(int n)
{
	int i = n;
	while (i > 1)
	{
		printf("n:%i\t",n);
		if (i%2 == 0)
		{
			i = 1/2;
			printf("i:%i\n",i);
		}
		else
		{
			i = i + 1;
			printf("i:%i\n",i);
		}
	}
}

int main (void)
{
	Loop(17);
	return EXIT_SUCCESS;
}
