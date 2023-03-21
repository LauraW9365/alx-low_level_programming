#include "main.h"
/**
 * print_alphabet_x10 - the program prints the aphalbet 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int n, c;

	c = 0;

	while (c < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		c++;
		_putchar('\n');
	}
}

