#include "main.h"

/**
 * _memset - function will fill the n byte
 * @n: number of bytes
 * @s: points to memory area
 * @b: byte for filling
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int numz = 0;

	while (numz < n)
	{
	s[numz] = b;
	numz++
	}

	return (s);

}
