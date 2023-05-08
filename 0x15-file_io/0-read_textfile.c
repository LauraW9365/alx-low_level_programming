#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to standard output
 * @letters: number of letters to be written and read
 * @filename: a pointer of the file to be read
 * Return: 0 if the file cannot be opened or read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t o, r, w;

	if (filename == NULL)
		return (0);

	ptr = malloc(sizeof(char) * letters);

	if (ptr == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, ptr, letters);
	w = write(STDOUT_FILENO, ptr, r);

	if (o == -1 || r == -1 || w == -1 || r != w)
	{
		free(ptr);
		return (0);
	}

	free(ptr);
	close(o);

	return (w);

}
