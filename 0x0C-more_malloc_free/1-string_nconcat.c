#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 * Return: NULL or a pointer to a newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int m = 0, p = 0, o = 0;
	char *k;

	while (s1 && s1[m])
		m++;
	while (s2 && s2[p])
		p++;

	o = m + n + 1;
	if (n >= p)
		o = m + p + 1;

	k = malloc(sizeof(char) * (o));

	if (!k)
		return (NULL);

	m = 0;
	if (s1)

		while (*s1)
			k[m++] = *s1++;
	p = 0;
	if (s2)

		while (s2[p] && p < n)
			k[m++] = s2[p++];

	k[m] = '\0';

	return (k);
}
