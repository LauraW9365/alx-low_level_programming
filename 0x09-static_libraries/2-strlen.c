#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: check the length of a string
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
