#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function taht creates an array of integers
 * @min: min element in the array
 * @max: max element in the array
 * Return: NULL or a pointer
*/

int *array_range(int min, int max)
{
	int *k;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	k = malloc(sizeof(int) * size);

	if (k == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)

		k[j] = min++;

	return (k);
}

