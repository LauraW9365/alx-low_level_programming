#include "main.h"

/**
 * flip_bits - number of bits needed to flip from one to another
 * @n: number one
 * @m: number two
 * Return: the number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int jj, kk;

	unsigned int o, r;

	o = 0;
	kk = 1;

	jj = n ^ m;

	for (r = 0; r < (sizeof(unsigned long int) * 8); r++)
	{
		if (kk == (jj & kk))
			o++;

		kk <<= 1;
	}

	return (o);
}
