#include <stdio.h>
/**
 * main - print all numbers of base 16 in lowercase
 *  Return: 0 means success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{

	putchar(i);
	if (i != 57)
	{
		putchar(44);
		putchar(32);

		}
	}
	putchar('\n');
	return (0);
}
