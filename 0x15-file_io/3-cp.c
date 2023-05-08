#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _file - determines if a file can be opened
 * @file_to: file
 * @file_from: file
 * @argv: argument vector
 * Return:void
*/

void _file(int file_from, int file_to, char  *argv[])
{
	if (file_to == -1)
	{

		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
	}

	if (file_from == -1)
	{

		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
}

/**
 * main - function
 * @argc: count
 * @argv: argument vector
 * Return: 0 upon success
*/

int main(int argc, char *argv[])
{
	int c_fd, g_fd, close_e;
	ssize_t b_r, b_w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	c_fd = open(argv[1], O_RDONLY);
	g_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	_file(c_fd, g_fd, argv);

	b_r = 1024;
	while (b_r == 1024)
	{
		b_r = read(c_fd, buffer, 1024);
		if (b_r == -1)
			_file(-1, 0, argv);
		b_w = write(g_fd, buffer, b_r);
		if (b_w == -1)
			_file(0, -1, argv);
	}
	close_e = close(c_fd);
	if (close_e == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c_fd);
			exit(100);
	}
	close_e = close(g_fd);
	if (close_e == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", g_fd);
			exit(100);

	}

	return (0);
}

