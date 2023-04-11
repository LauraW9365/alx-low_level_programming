#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string
 * Return: NULL or a pointer
*/

char *_strdup(char *str)
{
	char *zzz;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	while (str[r] != '\0')
		r++;

	zzz = (char *)malloc((sizeof(char) * r) + 1);

	if (zzz == NULL)
		return (NULL);

	for (i = 0; i < r; i++)
		zzz[i] = str[i];

	zzz[r] = '\0';

	return (zzz);
}

