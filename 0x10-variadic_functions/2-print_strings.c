#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of arguments
 * @...: rest of the arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{

	char *ptr;
	unsigned int j;
	va_list strings;

	va_start(strings, n);
	j = 0;

	while (j < n)

	{
		ptr = va_arg(strings, char *);

		if (ptr == NULL)

			printf("nil");

		else

			printf("%s", ptr);

		if (separator != NULL && j < n - 1)

			printf("%s", separator);

		j++;
	}

	printf("\n");
	va_end(strings);

}
