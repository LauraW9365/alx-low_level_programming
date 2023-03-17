#include <stdio.h>
/**
 * main - prints alphabet except q & e
 * Return: 0 means success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
{
	if (c != 'q' && c != 'e')
		putchar(c);
}

	putchar('\n');
	return (0);
}
