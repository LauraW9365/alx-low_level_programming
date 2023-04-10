#include "main.h"

/**
 * _memset - function will fill the n byte of the memory area
 * @n: number of bytes
 * @s: pointer to memory area
 * @b: byte for filling
 * Return: a pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int numy = 0;

	while (numy < n)
	{
		s[numy] = b;
		numy++;
	}
	return (s);
}
