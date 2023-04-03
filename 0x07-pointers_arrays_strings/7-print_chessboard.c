#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer
 * Return: void
*/

void print_chessboard(char (*a)[8])
{
	int r, f;

	for (r = 0; r < 8; r++)
	{
		for (f = 0; f < 8; f++)
		{
			_putchar(a[r][f]);
		}
		_putchar('\n');
	}
}
