#include "stdarg.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *ptr;

	unsigned int j;

	va_list strings;

	va_start(strings, n);

	while (j < n)
	{

		ptr = va_arg(strings, char*);

		if (separator != NULL && j < n - 1)
			printf("%s", separator);

		if (ptr == NULL)
			printf("nil");
		else
			printf("%s", ptr);

		j++;
	}

	printf("\n");

	va_end(strings);

}
