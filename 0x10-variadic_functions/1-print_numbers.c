#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int j;

	va_list numbers;

	va_start(numbers, n);

	if (separator == NULL)
		separator = "";

	for (j = 0; j < n; j++)
	{

		printf("%d\n", va_arg(numbers, int));

		if (j < n - 1)
			printf("%s", separator);

	}

	printf("\n");

	va_end(numbers);

}
