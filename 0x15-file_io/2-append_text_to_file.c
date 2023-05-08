#include "main.h"

/**
 * _str - finds the length of a given string
 * @s: pointer to a string
 * Return: length of the string
*/

size_t _str(char *s)
{
	size_t m;

	for (; s[m]; m++)
		;
	return (m);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @text_content: string
 * @filename: name of the file
 * Return: 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int g;
	ssize_t m;

	if (filename == NULL)
		return (-1);

	g = open(filename, O_WRONLY | O_APPEND);

	if (g == -1)
		return (-1);
	if (text_content != NULL)
		m = write(g, text_content, _str(text_content));

	close(g);

	if (m == -1)
		return (-1);

	return (-1);

}
