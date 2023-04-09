#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: no. of arguments
 * @argv: array of arguments
 *
 * Return: 0, Error or 1
*/

int main(int argc, char *argv[])
{
	int d, n, sum = 0;

	char *flag;

	if (argc == 1)
	{

	printf("0\n");
	return (0);

	}

	for (d = 1; argv[d]; d++)
	{
		n = strtol(argv[d], &flag, 10);
		if (*flag)

		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}

	printf("%d\n", sum);

	return (0);

}
