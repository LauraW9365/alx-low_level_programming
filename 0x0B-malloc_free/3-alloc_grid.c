#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: NULL if width or height is 0
*/

int **alloc_grid(int width, int height)
{
	int m;
	int n;
	int **h;

	if (width <= 0 || height <= 0)
		return (NULL);

	h = malloc(sizeof(int) * height);

	if (h == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		h[m] = malloc(sizeof(int) * width);

		if (h[m] == NULL)
		{
			for (m--; m >= 0; m--)
				free(h[m]);
					free(h);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			h[m][n] = 0;
	}
		return (h);
}
