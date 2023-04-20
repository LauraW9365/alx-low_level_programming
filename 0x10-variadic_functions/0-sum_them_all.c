#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns teh sum of all its parameters
 * @n: unsigned int
 * Return: if n == 0, 0
*/

int sum_them_all(const unsigned int n, ...)
{

	int sum;
	unsigned int k;
	va_list numbers;

	va_start(numbers, n);

	if (n == 0)
		return (0);

	for (k = 0; k < n; k++)
	{

		sum += va_arg(numbers, int);

	}

	va_end(numbers);
	return (sum);
}
