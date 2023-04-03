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
	unsigned int num1 = 0;

	while (num1 < n)
	{
	s[num1] = b;
	num1++
	}

	return (s);
}
