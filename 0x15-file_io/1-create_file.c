#include "main.h"
#include <sys/stat.h>


/**
 * create_file - function that creates a file
 * @filename: The filename
 * @text_content: The text content
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t n_wrote = 0;
	size_t text_len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[text_len])
			text_len += 1;

		n_wrote = write(fd, text_content, text_len);
	}
	close(fd);
	if (n_wrote < 0)
		return (-1);

	chmod(filename, S_IRUSR | S_IWUSR);

	return (1);
}
