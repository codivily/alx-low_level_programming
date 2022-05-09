#include "main.h"
#include <sys/stat.h>


/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The filename
 * @text_content: The text content
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t n_wrote = 0;
	size_t text_len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
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

	return (1);
}
