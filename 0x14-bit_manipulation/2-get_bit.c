#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: the index
 * @n: check bits
 * Return: value of a bit or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mm, jj;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mm = 1 << index;
	jj = n & mm;

	if (jj == mm)
		return (1);

	return (0);
}
