#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of arguments
*/

void print_all(const char * const format, ...)
{
	int k = 0;
	char *str;
        char *p = "";

	va_list the_list;

	va_start(the_list, format);

	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", p, va_arg(the_list, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(the_list, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(the_list, double));
					break;
				case 's':

					str = va_arg(the_list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", p, str);
					break;

				default:
					k++;
					continue;

			}
			p = ", ";
			k++;

		}
	}

	printf("\n");
	va_end(the_list);
}

