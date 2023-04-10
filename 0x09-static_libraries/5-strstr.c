#include "main.h"

/**
 * _strstr - locates the substring needle in the string haystack
 * @needle: substring to be found
 * @haystack: string to be searched
 * Return: pointer of located substring or null
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int v;

	if  (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		v = 0;

		if (haystack[v] == needle[v])
		{
			do {
				if (needle[v + 1] == '\0')
				return (haystack);

				v++;
			} while (haystack[v] == needle[v]);
		}

	haystack++;
	}
	return ('\0');
}
