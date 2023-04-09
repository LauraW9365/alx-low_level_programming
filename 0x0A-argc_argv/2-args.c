#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: no. of arguments
 * @argv: array of arguments
 *
 * Return: 0 always
*/

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)

	{
		printf("%s\n", argv[m]);
	}

	return (0);
}
