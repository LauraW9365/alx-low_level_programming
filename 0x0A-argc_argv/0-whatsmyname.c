#include <stdio.h>

/**
 * main - prints it's own program name folowed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 always
*/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
