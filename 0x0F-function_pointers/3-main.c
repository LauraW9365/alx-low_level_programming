#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of some operations
 * @argc: count of arguments
 * @argv: argument vector
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Errorr\n");
		exit(98);

	}

	ptr = get_op_func(argv[2]);

	if (!ptr)
	{

		printf("Error\n");
		exit(99);

	}

	printf("%d\n", ptr(atoi(argv[1]), atoi(argv[3])));
			return(0);


}
