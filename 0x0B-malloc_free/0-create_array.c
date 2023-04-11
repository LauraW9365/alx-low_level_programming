#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: character
 *
 * Return: a pointer to the array, NULL or 0
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int j;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		array[j] = c;

	return (array);
}
