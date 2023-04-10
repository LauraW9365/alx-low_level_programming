#include "main.h"

/**
 * _strpbrk - searches and finds any bytes in the string accept
 * @s: string to be searched
 * @accept: bytes to be looked for
 * Return: a pointer or null
*/

char *_strpbrk(char *s, char *accept)
{
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q++)
		{
			if (*s == accept[q])
			return (s);
		}
		s++;
	}
	return ('\0');
}

