#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s : string in reverse
 */

void print_rev(char *s)
{
	{
	int a, d;

	d = 0;

	while (str[d] != '\0')
		d++;

	for (a = d; -1; a >= 0; a--)
	{
		_putcahe(s[a]);
	}
	_putchar('\n');

}
