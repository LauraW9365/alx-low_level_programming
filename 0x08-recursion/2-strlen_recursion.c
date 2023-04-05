#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: Always 0
*/

int _strlen_recursion(char *s)
{
	int z = 0;

	if (*s)
	{

		z++;
		z += _strlen_recursion(s + 1);

	}

	return (z);
}
