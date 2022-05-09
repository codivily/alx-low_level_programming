#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard ouput
 * @filename: the file name
 * @letters: number of letters it should read
 *
 * Return: The actual number of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = -1;
	ssize_t n_read = 0, n_wrote = 0;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(*buffer) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	n_read = read(fd, buffer, letters);
	if (n_read < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n_wrote = write(STDOUT_FILENO, buffer, n_read);
	free(buffer);
	close(fd);
	if (n_wrote < 0)
		return (0);

	return (n_read);
}
