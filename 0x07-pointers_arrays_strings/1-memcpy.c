#include "main.h"

/**
 * _memcpy - function copies n bytes
 * @n: number of bytes
 * @dest: memory area
 * @src: memory area
 * Return: return is dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
