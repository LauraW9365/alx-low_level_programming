#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer
 * Return: an integer
*/

int _atoi(char *s)
{
	int p = 0;
	unsigned int num = 0;
	int sign = 1;

	while (s[p] < '0' || s[p] > '9')
	{
		if (s[p] == '\0')
			return (0);

		if (s[p] == '-')
			sign *= -1;
		p++;

	}

	while (s[p] >= '0' && s[p] <= '9')
	{

		num = (num * 10) + (s[p] - '0');
		p++;

	}

	return (num * sign);
}
