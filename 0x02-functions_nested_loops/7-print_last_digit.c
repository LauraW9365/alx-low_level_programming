#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n : integer
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{

	int k;

	k = n % 10;

		if (n < 0)

		k = -k;

	return (k);

}
