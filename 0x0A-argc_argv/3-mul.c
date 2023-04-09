#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count of command line arguments
 * @argv: array of arguments
 *
 * Return: 1 if error or 0
*/

int main(int argc, char *argv[])
{
	int j, k;

	if (argc < 3)
	{
		printf("Error\n");
	
		return (1);
	}

	j = atoi(argv[1]);

	k = atoi(argv[2]);

	printf("%d\n", j * k);

	return (0);
}
