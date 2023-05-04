#include "main.h"

/**
 * set_bit - sets a value of a bit to 1 at a given index
 * @n: pointer
 * @index: index of the bit to be set
 * Return: 1 if succesful or -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	m = 1 << index;

	*n = *n | m;

	return (1);
}
