#include <stdio.h>

/**
 * main - this is the main fuction
 *
 * Return: always 0
 *
 */

int main(void)
{
	printf("Size of a char :%lu byte(s)\n", Sizeof(char));
	printf("Size of an int :%lu byte(s)\n", Sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
