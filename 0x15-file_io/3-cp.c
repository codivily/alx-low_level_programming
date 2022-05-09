#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

void _close(int fd);

/**
 * main - Entry point of the cp program
 * @ac: Arugment account
 * @av: ARgument vars
 *
 * Return: 0 on success, else approriate errno will bet appropriatly
 */
int main(int ac, const char **av)
{
	int fd_from = 0, fd_to = 0;
	struct stat stat_buf;
	ssize_t n_read = 0, n_wrote = 0;
	char buffer[BUF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (stat(av[2], &stat_buf) != 0)
	{
		fd_to = open(av[2], O_WRONLY | O_CREAT);
		if (fd_to < 0)
		{
			_close(fd_from);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		chmod(av[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	}
	else
		fd_to = open(av[2], O_WRONLY | O_TRUNC);

	if (fd_to < 0)
	{
		_close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while (1)
	{
		n_read = read(fd_from, buffer, BUF_SIZE);
		if (n_read < 0)
		{
			_close(fd_from);
			_close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		if (n_read == 0)
			break;

		n_wrote = write(fd_to, buffer, n_read);
		if (n_wrote < 0)
		{
			_close(fd_from);
			_close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	_close(fd_from);
	_close(fd_to);

	return (0);
}

/**
 * _close - close file descriptor, print an error if failed
 * @fd: file description
 *
 * Return: void
 */
void _close(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

