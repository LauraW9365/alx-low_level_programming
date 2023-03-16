#include <stdio.h>

/**
 * main - this is the main fuction
 *
 * Return: always 0
 *
 */

int main(void)
{
	printf("Size of a char :%zu byte(s)\n", Sizeof(char));
	printf("Size of an int :%zu byte(s)\n", Sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
