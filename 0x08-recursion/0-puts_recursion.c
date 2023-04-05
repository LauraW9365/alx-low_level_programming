#include <stdio.h>

/**
 * _puts_recursion - prints a string that is followed by a new line
 * @s: the string
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putcahr('\n\);
	}
}
