#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: a pointer to a newly allocated space in memory or NULL
*/

char *str_concat(char *s1, char *s2)
{
	int m;
	int n;
	char *k;

	m = 0;
	n = 0;
	while (s1 != NULL && s1[m])
		m++;
	while (s2 != NULL && s2[n])
		n++;

	k = malloc(sizeof(char) * (m + n) + 1);
	if (!k)
		return (NULL);
	m = 0;

	if (s1 != NULL)
		while (*s1)
			*(k + m++) = *s1++;
	if (s2 != NULL)
		while (*s2)
			*(k + m++) = *s2++;
	*(k + m) = '\0';

	return (k);
}
