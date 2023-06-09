#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a string to write the file
 * Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
	int m, n, j = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (j = 0; text_content[j];)
			j++;
	}

	m = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	n = write(m, text_content, j);

	if (m == -1 || n == -1)
		return (-1);

	close(m);

	return (1);

}
