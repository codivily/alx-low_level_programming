#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: the string to search
 *
 * Return: A pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = NULL;

	while (*s)
	{
		p = accept;

		while (*p && *s != *p)
			p++;
		if (*p == *s)
			return (s);
		s++;
	}

	return (NULL);
}
