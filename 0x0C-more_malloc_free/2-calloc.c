#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: elements of the array
 * @size: size in bytes of each element
 * Return: NULL or a pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *j;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = malloc(nmemb * size);

	if (j == NULL)
		return (NULL);

	for (k = 0; k < (nmemb * size); k++)
		j[k] = 0;

	return (j);

}

