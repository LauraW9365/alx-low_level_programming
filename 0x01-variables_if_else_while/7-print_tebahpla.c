#include <stdio.h>
/**
 * main - print lowcase alphabet
 * Return: 0 means success
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
{
		putchar(c);
}
	putchar('\n');
	return (0);
}
