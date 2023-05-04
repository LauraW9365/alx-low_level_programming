#include "main.h"

/**
 * _res - gets base and power
 * @b: base
 * @p: power
 * Return: value of power and base
*/

unsigned long int _res(unsigned int b, unsigned int p)
{

	unsigned long int k;
	unsigned int m;

	k = 1;

	for (m = 1; m <= p; m++)
		k *= b;

	return (k);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int qq, r;
	char f;

	f = 0;

	qq = _res(2, sizeof(unsigned long int) * 8 - 1);

	while (qq != 0)
	{
		r = n & qq;
		if (r == qq)
		{
			f = 1;
			_putchar('1');
		}

		else if (f == 1 || qq == 1)
		{
			_putchar('0');
		}

		qq >>= 1;
	}
}
