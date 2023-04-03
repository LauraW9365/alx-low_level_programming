#include "main.h"

/**
 * _memset - function will fill the n byte
 * @n: number of bytes
 * @s: points to memory area
 * @b: byte for filling
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num = 0;

	while (num < n)
	{
	s[num] = b;
	num++
	}

	return (s);
}
