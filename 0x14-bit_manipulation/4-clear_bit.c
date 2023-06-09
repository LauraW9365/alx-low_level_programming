#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer
 * @index: index of the bit to be set
 * Return: 0 or -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	m = ~(1 << index);
	*n = *n & m;

	return (1);
}
