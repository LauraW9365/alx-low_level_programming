#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Determines if a number is positive, negative or zero
 *description - creates a random number and prints a result
 *Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero,\n", n);
	}
	else if
	}
		printf("%d is negative\n", n);
	}
return (0);
}
