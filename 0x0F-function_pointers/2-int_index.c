#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * @array: the array
 * Return: if no element and size <= 0, -1
 * or returns the index of the first element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (array == NULL || cmp == NULL || size <= 0)

		return (-1);

	while (j < size)
	{

		if (cmp(array[j]) != 0)

			return (j);

		j++;
	}

	return (-1);

}
