#include "main.h"

/**
 * _strchr - locates c in the string
 * @c: character to be found
 * @s: string to be searched
 * Return: If found c
*/

char *_strchr(char *s, char c)
{
	int p;

	for (p = 0; s[p] >= '\0'; p++)
	{
		if (s[p] == c)
			return (s + p);
	}

	return ('\0');
}
