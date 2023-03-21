#include "main.h"
/**
 * print_alphabet - print lowercase alphabet
 * Return: 0 means success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
{
		_putchar(c);
}
	_putchar('\n');
	return (0);
}
